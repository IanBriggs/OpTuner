

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, FPCore, Operation
from utils import Logger

import ast_modifications.strip_rounding
import ast_modifications.equals
import ast_modifications.for_each


logger = Logger(level=Logger.EXTRA)




def add_forms(e, wrt):
    try:
        e.forms
    except AttributeError:
        e.forms = dict()

    if e.forms.get(wrt) == None:
        e.forms[wrt] = dict()


@add_method(ASTNode)
def match_fptaylor_forms(self, result):
    # Make sure calling match_fptaylor_forms leads to an error if not overridden
    class_name = type(self).__name__
    msg = "match_fptaylor_forms not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def match_fptaylor_forms(self, wrt, matching_dict):
    keys = reversed(list(matching_dict.keys()))
    for key in keys:
        if self == key[1]:
            val = matching_dict[key]
            if int(key[0]) < 0:
                if val[0].bits == 0 and val[0].type == "ne":
                    self.forms[wrt]["delta"] = val[1:]
                elif val[0].bits == 0 and val[0].type == "up":
                    self.forms[wrt]["higher_order"] = val[1:]
                else:
                    assert(False)
            else:
                self.forms[wrt]["epsilon"] = val[1:]
            del matching_dict[key]
            break


@add_method(Operation)
def match_fptaylor_forms(self, wrt, matching_dict):
    keys = reversed(list(matching_dict.keys()))
    for key in keys:
        if self == key[1]:
            val = matching_dict[key]
            if int(key[0]) < 0:
                if val[0].bits == 0 and val[0].type == "ne":
                    self.forms[wrt]["delta"] = val[1:]
                elif val[0].bits == 0 and val[0].type == "up":
                    self.forms[wrt]["higher_order"] = val[1:]
                else:
                    assert(False)
            else:
                self.forms[wrt]["epsilon"] = val[1:]
            del matching_dict[key]
            break

    for a in self.args:
        a.match_fptaylor_forms(wrt, matching_dict)


@add_method(FPCore)
def match_fptaylor_forms(self, result):
    expressions = result.result["expressions"]

    matching_dict = {(i, r["source_expression"].strip_rounding()) :
                     (r["source_expression"], r["exp"], r["taylor_expression"])
                     for i,r in expressions.items()}

    wrt = result.query.splitlines()[-1].rstrip(";").strip()

    self.expression.for_each(lambda e: add_forms(e, wrt))

    self.expression.match_fptaylor_forms(wrt, matching_dict) # epsilon
    self.expression.match_fptaylor_forms(wrt, matching_dict) # delta
    self.expression.match_fptaylor_forms(wrt, matching_dict) # higher order





def main(argv):
    if len(argv) == 1:
        text = sys.stdin.read()
    elif len(argv) == 2:
        with open(argv[1], "r") as f:
            text = f.read()
    if text.strip() == "":
        text = "(FPCore (x) :pre (<= 1/100 x 1/2) (/ (- (exp x) 1) x))"

    parsed = parse(text)[0]
    parsed.remove_let()
    parsed.set_name()
    parsed.extract_input_domains()
    query = parsed.to_fptaylor()
    result = FPTaylorResult(query, ERROR_FORM_CONFIG)

    logger.set_log_level(Logger.EXTRA)
    logger.blog("Input text", text)

    parsed.match_fptaylor_forms(result)

    def print_forms(e):
        logger.log("{} = {}", e.name, e.name_val())
        for wrt, form in e.forms.items():
            for k,v in form.items():
                logger.log("  form wrt {} {}: {}", wrt, k, v)

    parsed.expression.for_each(print_forms)


if __name__ == "__main__":
    from fpcore.parser import parse
    from fptaylor.result import FPTaylorResult, ERROR_FORM_CONFIG
    import ast_modifications.extract_input_domains
    import ast_modifications.for_each
    import ast_modifications.name_val
    import ast_modifications.remove_let
    import ast_modifications.set_name
    import ast_modifications.to_fptaylor
    import sys

    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
