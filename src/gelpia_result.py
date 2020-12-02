

from exceptions import GelpiaInfError
from fpcore_logging import Logger
from fractions import Fraction
from math import isinf
from multiprocessing import Process, Value

import gelpia
import gelpia_logging


logger = Logger(level=Logger.HIGH, color=Logger.green)


GELPIA_CACHE = dict()


class GelpiaResult:

    # Setup logging to avoid runtime error
    gelpia_logging.set_log_filename(None)

    # Silence gelpia
    gelpia_logging.set_log_level(-10)

    # Setup gelpia's env
    gelpia.setup_requirements(git_dir=gelpia.GIT_DIR)

    # Setup rust's env
    RUST_EXECUTABLE = gelpia.setup_rust_env(git_dir=gelpia.GIT_DIR,
                                            debug=False)

    # Tell gelpia how hard to try
    CONFIG = {
        "epsilons": (0, 0, 0.1/100),
        "timeout": 60,
        "grace": 0,
        "update": 0,
        "iters": 0,
        "seed": 42,
        "debug": False,
        "src_dir": gelpia.SRC_DIR,
        "executable": RUST_EXECUTABLE,
    }

    def __init__(self, inputs, expr, raw_query=None):
        if raw_query is None:
            # Format inputs, target expression, and set as member
            # todo: this float cast can loose information
            lines = ["{} = [{}, {}];".format(name,
                                             float(Fraction(domain[0].source)),
                                             float(Fraction(domain[1].source)))
                     for name, domain in inputs.items()]
            lines.append(expr.infix_str())
            self.query = "\n".join(lines)

        else:
            self.query = raw_query

        if self.query in GELPIA_CACHE:
            cached = GELPIA_CACHE[self.query]
            self.max_lower = cached.max_lower
            self.max_upper = cached.max_upper
            self.min_lower = cached.min_lower
            self.min_upper = cached.min_upper
            self.abs_max = cached.abs_max
            return

        logger("query:\n{}", self.query)

        # Run and set results as member
        max_lower = Value("d", float("nan"))
        max_upper = Value("d", float("nan"))
        max_args = {"function": self.query,
                    "max_lower": max_lower,
                    "max_upper": max_upper}
        max_args.update(GelpiaResult.CONFIG)
        p = Process(target=gelpia.find_max, kwargs=max_args)

        p.start()

        self.min_lower, self.min_upper = gelpia.find_min(function=self.query,
                                                         **GelpiaResult.CONFIG)

        p.join()

        self.max_lower = max_lower.value
        self.max_upper = max_upper.value
        self.abs_max = max(self.max_upper, -self.min_lower)

        if isinf(self.abs_max):
            raise GelpiaInfError(self.query)

        GELPIA_CACHE[self.query] = self

        logger.llog(Logger.HIGH, "min = [{}, {}]",
                    self.min_lower, self.min_upper)
        logger.llog(Logger.HIGH, "max = [{}, {}]",
                    self.max_lower, self.max_upper)
        logger.llog(Logger.HIGH, "abs_max = {}\n",
                    self.abs_max)

