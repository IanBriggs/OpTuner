

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, FPCore, Operation, Variable
from utils import Logger


logger = Logger(level=Logger.EXTRA)


def mark(node, seen):
    string = str(node)
    if string in seen:
        node.duplicate = True
        node.original = seen[string]
    else:
        node.duplicate = False
        seen[string] = node


@add_method(ASTNode)
def mark_duplicates(self, seen):
    # Make sure calling mark_duplicates leads to an error if not overridden
    class_name = type(self).__name__
    msg = "mark_duplicates not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def mark_duplicates(self, seen):
    mark(self, seen)


@add_method(Operation)
def mark_duplicates(self, seen):
    for a in self.args:
        a.mark_duplicates(seen)

    mark(self, seen)


@add_method(FPCore)
def mark_duplicates(self):
    seen = dict()

    self.expression.mark_duplicates(seen)




def main(argv):
    logger.set_log_level(Logger.EXTRA)

    if len(argv) == 1:
        text = sys.stdin.read()
    elif len(argv) == 2:
        with open(argv[1], "r") as f:
            text = f.read()
    if text.strip() == "":
        text = "(FPCore (x) :pre (<= 1/100 x 1/2) (let ([y (sin x)]) (+ y y)))"

    logger.blog("Input text", text)

    parsed = parse(text)[0]
    parsed.remove_let()
    parsed.set_name()
    parsed.extract_input_domains()
    parsed.mark_duplicates()

    logger.blog("AST nodes", parsed.pretty_internals())


if __name__ == "__main__":
    from fpcore.parser import parse
    import ast_modifications.remove_let
    import ast_modifications.set_name
    import ast_modifications.extract_input_domains
    import ast_modifications.pretty_internals
    import sys

    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
