# Modified version of fpcore.lexer.py to allow infix parsing and additional
#   FPTaylor functions
# Note: aliases for tancendentals are not used
#   (e.g. asinh is valid, but arsinh, arcsinh, and argsinh are not lexed)


from fpcore.lexer import FPCoreLexer
from utils import Logger, Timer

from sly import Lexer

import sys


logger = Logger(level=Logger.EXTRA, color=Logger.yellow)
timer = Timer()




FPCoreLexer.UNARY_OPERATIONS.add("floor_power2")
FPCoreLexer.UNARY_OPERATIONS.add("inv")
FPCoreLexer.BINARY_OPERATIONS.add("interval")


class FPTaylorLexError(Exception):
    def __init__(self, lineno, tok):
        self.lineno = lineno
        self.tok = tok

class FPTaylorLexer(Lexer):
    tokens = {
        # Literals
        RATIONAL,
        DECNUM,

        # Symbols
        SYMBOL,

        # Operations
        PLUS,
        MINUS,
        TIMES,
        DIVIDE,
        OPERATION,
        ROUND,

        # Delimitors
        LP,  # left paren
        RP,  # right paren
        LB,  # left square bracket
        RB,  # right square bracket
        C,   # comma
    }

    # Ignored input
    @_(r"\n+")
    def ignore_newline(self, t):
        self.lineno += t.value.count('\n')
    ignore_space = r"\s"

    # From https://fpbench.org/spec/fpcore-1.2.html
    RATIONAL = r"[+-]?[0-9]+/[0-9]*[1-9][0-9]*"

    # From https://fpbench.org/spec/fpcore-1.2.html
    DECNUM = r"[-+]?([0-9]+(\.[0-9]+)?|\.[0-9]+)(e[-+]?[0-9]+)?"

    # From https://fpbench.org/spec/fpcore-1.2.html
    # modification            | reason
    # ------------------------+--------------
    # first char can't be ':' | disambiguate property
    # first char can't be '!' | disambiguate property
    SYMBOL = r"[a-zA-Z~@$%^&*_\+=<>.?/][a-zA-Z0-9~!@$%^&*_\-+=<>.?/:]*"
    SYMBOL[r"+"] = PLUS
    SYMBOL[r"-"]  = MINUS
    SYMBOL[r"*"] = TIMES
    SYMBOL[r"/"]  = DIVIDE

    PLUS = r"\+"
    MINUS = r"-"
    TIMES = r"\*"
    DIVIDE = r"/"

    UNARY_OPERATIONS = {
        "acos",
        "acosh",
        "asin",
        "asinh",
        "atan",
        "atanh",
        "cos",
        "cosh",
        "exp",
        "log",
        "sin",
        "sinh",
        "sqrt",
        "tan",
        "tanh",
        "floor_power2",
        "interval",
        "inv",
    }
    BINARY_OPERATIONS = {
        "interval",
    }
    OPERATIONS = sorted(list(UNARY_OPERATIONS
                             | BINARY_OPERATIONS),
                        key=len)
    for i in range(len(OPERATIONS)):
        SYMBOL[OPERATIONS[i]] = OPERATION
    OPERATION = "({})".format(")|(".join(OPERATIONS))

    PREDEFINED_ROUNDS = {
        "rnd16":       ( 16,   "ne", 1.0,  -11,    -14),
        "rnd16_up":    ( 16,   "up", 1.0,  -11,    -14),
        "rnd16_down":  ( 16, "down", 1.0,  -11,    -14),
        "rnd16_0":     ( 16, "zero", 1.0,  -11,    -14),
        "rnd32":       ( 32,   "ne", 1.0,  -24,   -126),
        "rnd32_up":    ( 32,   "up", 1.0,  -24,   -126),
        "rnd32_down":  ( 32, "down", 1.0,  -24,   -126),
        "rnd32_0":     ( 32, "zero", 1.0,  -24,   -126),
        "rnd64":       ( 64,   "ne", 1.0,  -53,  -1022),
        "rnd64_up":    ( 64,   "up", 1.0,  -53,  -1022),
        "rnd64_down":  ( 64, "down", 1.0,  -53,  -1022),
        "rnd64_0":     ( 64, "zero", 1.0,  -53,  -1022),
        "rnd128":      (128,   "ne", 1.0, -113, -16382),
        "rnd128_up":   (128,   "up", 1.0, -113, -16382),
        "rnd128_down": (128, "down", 1.0, -113, -16382),
        "rnd128_0":    (128, "zero", 1.0, -113, -16382),
    }
    ROUNDS = sorted(list(PREDEFINED_ROUNDS.keys()) + ["rnd"],
                    key=len)
    for i in range(len(ROUNDS)):
        SYMBOL[ROUNDS[i]] = ROUND
    ROUND = "({})".format(")|(".join(ROUNDS))

    LP = r"\("
    RP = r"\)"
    LB = r"\["
    RB = r"\]"
    C = r","

    def error(self, t):
        logger.error("Line {}: Bad character '{}'", self.lineno, t.value[0])
        raise FPTaylorLexError(self.lineno, t)


_lexer = FPTaylorLexer()
def lex(text):
    timer.start()
    lexed = _lexer.tokenize(text)
    timer.stop()
    return lexed




def main(argv):
    logger.set_log_level(Logger.EXTRA)

    if len(argv) == 1:
        text = sys.stdin.read()
    elif len(argv) == 2:
        with open(argv[1], "r") as f:
            text = f.read()
    if text.strip() == "":
        text = "(exp(x) - 1) / x"

    logger.blog("Input text", text)

    for token in lex(text):
        logger(token)

    logger("Lexing time: {:.6f} msec", timer.elapsed() * 1000)


if __name__ == "__main__":
    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
