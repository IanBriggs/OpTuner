

from ast_modifications.modifier import add_method
from fpcore.ast import (ASTNode, Atom, FPCore, Let, LetStar, Operation,
                               Variable, If, While, WhileStar, Cast)
from utils import Logger


logger = Logger(level=Logger.EXTRA)




class UnsupportedFPCoreError(Exception):
    def __init__(self, feature):
        self.feature = feature


@add_method(ASTNode)
def reject_unsupported(self):
    # Make sure calling reject_unsupported leads to an error if not overridden
    class_name = type(self).__name__
    msg = "reject_unsupported not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def reject_unsupported(self):
    pass


@add_method(Operation)
def reject_unsupported(self):
    for a in self.args:
        a.reject_unsupported()

@add_method(If)
def reject_unsupported(self):
    raise UnsupportedFPCoreError("if statement")


@add_method(Let)
def reject_unsupported(self):
    raise UnsupportedFPCoreError("let statement")


@add_method(LetStar)
def reject_unsupported(self):
    raise UnsupportedFPCoreError("let* statement")


@add_method(While)
def reject_unsupported(self):
    raise UnsupportedFPCoreError("while statement")


@add_method(WhileStar)
def reject_unsupported(self):
    raise UnsupportedFPCoreError("while* statement")


@add_method(Cast)
def reject_unsupported(self):
    raise UnsupportedFPCoreError("cast statement")


@add_method(FPCore)
def reject_unsupported(self):
    self.expression.reject_unsupported()




def main(argv):
    logger.set_log_level(Logger.EXTRA)

    if len(argv) == 1:
        text = sys.stdin.read()
    elif len(argv) == 2:
        with open(argv[1], "r") as f:
            text = f.read()
    if text.strip() == "":
        text = "(FPCore (x) :pre (<= 1/100 x 1/2) (/ (- (exp x) 1) x))"

    logger.blog("Input text", text)

    parsed = parse(text)[0]
    parsed.remove_let()

    try:
        parsed.reject_unsupported()
        logger("FPCore accepted")
    except UnsupportedFPCoreError as e:
        logger("Caught unsupported FPCore feature: {}", e.feature)


if __name__ == "__main__":
    from fpcore.parser import parse
    import ast_modifications.remove_let
    import sys

    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
