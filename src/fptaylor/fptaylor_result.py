

from exceptions import FPTaylorFormError, FPTaylorRuntimeError
from fpcore_logging import Logger
from fptaylor_form import FPTaylorForm
from fptaylor_lexer import FPTaylorLexer
from fptaylor_parser import FPTaylorParser

import os
import shlex
import subprocess
import tempfile


logger = Logger(level=Logger.EXTRA, color=Logger.blue)


# query, command -> FPTaylorResult
FPTAYLOR_CACHE = dict()

class FPTaylorResult:
    # Default configuration for FPTaylor when being used for finding FPTaylor
    # forms
    ERROR_FORM_CONFIG = {
        "--abs-error": "false",
        "--find-bounds": "false",
        "--fp-power2-model": "false",
        "--fail-on-exception": "false",
        "--unique-indices": "true",
    }

    BOUNDS_CONFIG = {
        "--abs-error": "false",
        "--rel-error": "false",
        "--find-bounds": "true",
        "--fp-power2-model": "true",
        "--opt": "gelpia",
        "--opt-exact": "true",
        "--opt-f-rel-tol": "0.001",
        "--opt-f-abs-tol": "0",
        "--opt-x-rel-tol": "0",
        "--opt-x-abs-tol": "0",
        "--opt-max-iters": "4000000000",
        "--opt-timeout": "10",
        "--intermediate-opt": "true",
    }

    # Default configuration for FPTaylor when being used to check answers given
    # by OpTuner. Try for the best answer possible.
    CHECK_CONFIG = {
        "--abs-error": "true",
        "--fp-power2-model": "true",
        "--opt": "gelpia",
        #"--opt-exact": "true",
        "--opt-f-rel-tol": "0.001",
        "--opt-f-abs-tol": "0",
        "--opt-x-rel-tol": "0",
        "--opt-x-abs-tol": "0",
        "--opt-max-iters": "4000000000",
        "--opt-timeout": "10",
        "--intermediate-opt": "true",
    }

    BACKUP_CONFIG = {
        "--abs-error": "true",
        "--fp-power2-model": "true",
        "--opt": "bb",
        "--opt-exact": "true",
        "--opt-f-rel-tol": "1e-100",
        "--opt-f-abs-tol": "1e-100",
        "--opt-x-rel-tol": "1e-100",
        "--opt-x-abs-tol": "1e-100",
        "--opt-max-iters": "4000000000",
        "--opt-timeout": "10",
        "--intermediate-opt": "true",
    }

    def __init__(self, query, config=None):
        self.query = query
        self.config = config or FPTaylorResult.ERROR_FORM_CONFIG
        self.command = self.get_command()
        key = (self.query, self.command)
        if key in FPTAYLOR_CACHE:
            self.set_from(FPTAYLOR_CACHE[key])
            return
        logger("Query:\n{}", query)
        self.file_log = ["Query:\n{}".format(query)]
        self.second_order = 0.0
        self.abs_error = None
        self.rel_error = None
        self.high_second_order = None
        self.div_by_zero = None
        self.log_of_non_positive = None
        self.inf_val = None
        self.bounds = None
        self._run()
        self._extract_fptaylor_forms()
        FPTAYLOR_CACHE[key] = self
        # if self.abs_error is None and self.config == FPTaylorResult.CHECK_CONFIG:
        #     logger.llog(Logger.MEDIUM, "FPTaylor output:\n{}", self.out)
        #     logger.llog(Logger.MEDIUM, "FPTaylor error:\n{}", self.err)
        #     logger.llog(Logger.MEDIUM, "Using backup FPTaylor config")
        #     self.config = config or FPTaylorResult.BACKUP_CONFIG
        #     self._run()
        #     self._extract_fptaylor_forms()

    def get_command(self):
        flags = " ".join(["{} {}".format(k, self.config[k])
                          for k in sorted(self.config.keys())])
        return "fptaylor {}".format(flags)

    def set_from(self, fpt_res):
        self.file_log = fpt_res.file_log
        self.second_order = fpt_res.second_order
        self.abs_error = fpt_res.abs_error
        self.rel_error = fpt_res.rel_error
        self.high_second_order = fpt_res.high_second_order
        self.div_by_zero = fpt_res.div_by_zero
        self.log_of_non_positive = fpt_res.log_of_non_positive
        self.inf_val = fpt_res.inf_val
        self.bounds = fpt_res.bounds
        self.out = fpt_res.out
        self.err = fpt_res.err
        self.retcode = fpt_res.retcode
        self.fptaylor_forms = fpt_res.fptaylor_forms

    def write_file(self, filename):
        contents = "\n".join(self.file_log)
        with open(filename, 'w') as f:
            f.write(contents)

    def _run(self):
        # Open a tempfile we can hand to FPTaylor.
        # The file will be removed upon exiting the with block
        query_name = "query.fptaylor"
        start = os.getcwd()
        with tempfile.TemporaryDirectory("w") as mydir:
            os.chdir(mydir)

            # Write out the query and make sure it is filled
            with open(query_name, "w") as f:
                f.write(self.query)
                f.flush()

            # Put together the FPTaylor command
            run_command = "{} {}".format(self.command, query_name)
            logger("Command: {}", run_command)
            self.file_log.append("// Command: {}".format(run_command))

            # Call FPTaylor
            with subprocess.Popen(shlex.split(run_command),
                                  stdout=subprocess.PIPE,
                                  stderr=subprocess.PIPE) as p:

                # Make sure that the run is complete and grab output
                # todo: should there be a timeout?
                raw_out, raw_err = p.communicate()
                self.out = raw_out.decode("utf8")
                self.err = raw_err.decode("utf8")
                self.retcode = p.returncode

        os.chdir(start)

        # If anything went wrong in the call unceremoniusly exit
        if self.retcode != 0:
            raise FPTaylorRuntimeError(self.query,
                                       run_command,
                                       self.out,
                                       self.err,
                                       self.retcode)

        logger("stdout:\n{}", self.out.strip())
        self.file_log.append("\\ stdout:\n\\ {}".format(self.out.strip()))
        self.file_log.append("\\ stderr:\n\\ {}".format(self.err.strip()))

        # Grab when FPTaylor warns about second order error
        err_lines = self.err.splitlines()
        err_lines = [line for line in err_lines if line.strip() != ""]

        high_msg = "**WARNING**: Large second-order error:"
        self.high_second_order = any([high_msg in line for line in err_lines])

        help_msg = "**WARNING**: Try intermediate-opt"
        err_lines = [line for line in err_lines if high_msg not in line]
        err_lines = [line for line in err_lines if help_msg not in line]

        div_msg = "Potential exception detected: Division by zero at:"
        self.div_by_zero = any([div_msg in line for line in err_lines])

        log_msg = "Potential exception detected: Log of non-positive number at:"
        self.log_of_non_positive = any([log_msg in line for line in err_lines])

        inf_msg = "**ERROR**: num_of_float: inf"
        self.inf_val = any([inf_msg in line for line in err_lines])


    def _extract_fptaylor_forms(self):
        # Since FPTaylor forms are listed seperate from their corresponding
        # original expressions we will capture both and realign them after
        fptaylor_forms = dict()
        original_exprs = dict()

        # Get the expression parser ready
        lexer = FPTaylorLexer()
        parser = FPTaylorParser()

        # todo: fix hacky state parser
        state = "find fptaylor forms"
        for line in self.out.splitlines():
            line = line.strip()
            items = line.split()

            if state == "find fptaylor forms":
                # Look for the start of the fptaylor forms
                if len(items) > 0 and line.split()[0] == "v0":
                    state = "capture fptaylor forms"
                continue

            if state == "capture fptaylor forms":
                # Grab fptaylor forms and look for the end of fptaylor forms
                if line == "":
                    state = "find original expr"
                    continue
                # Match on:
                #   0       1        2   3 4      5...
                #   |       |        |   | |      |
                #   <index> (<int>): exp = <exp>: <expr>
                index = int(items[0])
                exp = items[4].replace(":", "")
                expr = " ".join(items[5:])
                form = FPTaylorForm(exp, expr)
                fptaylor_forms[index] = form
                continue

            if state == "find original expr":
                # Look for the start of original subexpressions
                if line == "Corresponding original subexpressions:":
                    state = "capture original exprs"
                continue

            if state == "capture original exprs":
                # Grab original subexpressions and look for their end
                if line == "":
                    state = "capture error"
                    continue
                # Match on:
                #   0        1...
                #   |        |
                #   <index>: <expr>
                index = int(items[0].replace(":", ""))
                expr = " ".join(items[1:])
                tokens = lexer.tokenize(expr)
                parsed = parser.parse(tokens)
                original_exprs[index] = parsed
                continue

            if state == "capture error":
                zeroth = "total2:"
                if line.startswith(zeroth):
                    self.second_order = float(line[len(zeroth):].split()[0])
                    continue
                first = "Bounds (floating-point):"
                if line.startswith(first):
                    raw_bounds = line[len(first):]
                    raw_lower, raw_upper = tuple(raw_bounds.split(", "))
                    lower = float(raw_lower[2:])
                    upper = float(raw_upper[:-1])
                    self.bounds = lower, upper
                    continue
                second = "bounds:"
                if line.startswith(second):
                    if self.bounds is not None:
                        continue
                    raw_bounds = line[len(second):]
                    raw_lower, raw_upper = tuple(raw_bounds.split(", "))
                    lower = float(raw_lower[2:])
                    upper = float(raw_upper[:-1])
                    self.bounds = lower, upper
                    continue
                third = "Absolute error (exact):"
                if line.startswith(third):
                    self.abs_error = float(line[len(third):])
                    continue
                fourth = "Relative error (exact):"
                if line.startswith(fourth):
                    self.rel_error = float(line[len(fourth):])
                    continue
                continue

        # Combine both dicts in order
        logger("Original -> FPtaylor Form")
        forms = list()
        for index in sorted(original_exprs):
            o = original_exprs[index]
            f = fptaylor_forms[index]
            logger("{} -> {}", o, f)
            forms.append((o, f))

        if self.abs_error is not None:
            logger("abs_error: {}", self.abs_error)

        self.fptaylor_forms = forms
