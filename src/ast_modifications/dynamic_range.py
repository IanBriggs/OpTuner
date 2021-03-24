

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, FPCore
from utils import Logger

import ast_modifications.to_gelpia
import gelpia_interface

logger = Logger(level=Logger.EXTRA)


@add_method(ASTNode)
def dynamic_range(self):
    # Make sure calling dynamic_range leads to an error if not overridden
    class_name = type(self).__name__
    msg = "dynamic_range not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(FPCore)
def dynamic_range(self, expression=None):
    expression = expression or self.expression
    query = self.to_gelpia(expression)
    result = gelpia_interface.Result(query)
    return [result.min_lower, result.max_upper]




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
    parsed.set_name()
    parsed.extract_input_domains()

    logger("expression range: {}", parsed.dynamic_range())


if __name__ == "__main__":
    from fpcore.parser import parse
    import ast_modifications.remove_let
    import ast_modifications.set_name
    import ast_modifications.extract_input_domains
    import sys

    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)

