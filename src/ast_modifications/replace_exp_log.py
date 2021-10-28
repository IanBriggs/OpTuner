

from ast_modifications.modifier import add_method
from fpcore.ast import (ASTNode, Atom, FPCore, Number, Operation)
from utils import Logger

import copy

logger = Logger(level=Logger.EXTRA)




@add_method(ASTNode)
def replace_exp_log(self):
    # Make sure calling replace_exp_log leads to an error if not overridden
    class_name = type(self).__name__
    msg = "replace_exp_log not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def replace_exp_log(self):
    return self


@add_method(Operation)
def replace_exp_log(self):
    self.args = [a.replace_exp_log() for a in self.args]
    if (self.op == "-"
        and type(self.args[0]) == Operation
        and self.args[0].op == "exp"
        and type(self.args[0].args[1]) == Number
        and self.args[1].source in {"1", "1.", "1.0"}):
        return Operation("expm1", self.args[0].args[0])
    if (self.op == "log"
        and type(self.args[0]) == Operation
        and self.args[0].op == "+"
        and type(self.args[0].args[0]) == Number
        and self.args[0].args[0].source in {"1", "1.", "1.0"}):
        return Operation("log1p", self.args[0].args[1])
    return self


@add_method(FPCore)
def replace_exp_log(self):
    new_expression = self.expression.replace_exp_log()
    self.expression = new_expression




def main(argv):
    logger.set_log_level(Logger.EXTRA)

    if len(argv) == 1:
        text = sys.stdin.read()
    elif len(argv) == 2:
        with open(argv[1], "r") as f:
            text = f.read()
    if text.strip() == "":
        text = ("(FPCore (x) :pre (<= 101/100 x 3/2)"
                " (+ (- (exp x) 1) (log (+ 1 x))))")

    logger.blog("Input text", text)

    parsed = parse(text)[0]
    parsed.replace_exp_log()

    logger.blog("Replaced log/exp", parsed)


if __name__ == "__main__":
    from fpcore.parser import parse
    import sys

    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
