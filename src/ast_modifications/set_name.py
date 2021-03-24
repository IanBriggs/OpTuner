

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Number, FPCore, Variable, Operation
from utils import Logger


logger = Logger(level=Logger.EXTRA)




def gensym(taken, func):
    i = 0
    while True:
        name = func(i)
        if name in taken:
            i += 1
            continue
        taken.add(name)
        return name


@add_method(ASTNode)
def set_name(self, taken):
    # Make sure calling set_name leads to an error if not overridden
    class_name = type(self).__name__
    msg = "set_name not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Number)
def set_name(self, taken):
    if hasattr(self, "name"):
        return
    self.name = gensym(taken, lambda i : "num_{:02}".format(i))


@add_method(Variable)
def set_name(self, taken):
    if hasattr(self, "name"):
        return
    self.name = gensym(taken, lambda i : "var_{}_{:02}".format(self.source, i))


@add_method(Operation)
def set_name(self, taken):
    if hasattr(self, "name"):
        return
    for a in self.args:
        a.set_name(taken)
    op_name = {"+":"add", "-":"sub", "*":"mul", "/":"div"}.get(self.op, self.op)
    self.name = gensym(taken, lambda i : "{}_{:02}".format(op_name, i))


@add_method(FPCore)
def set_name(self):
    taken = set()
    self.expression.set_name(taken)




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
    print_name_assignment = lambda e: logger.log("{} = {}", e.name, e.name_val())
    parsed.expression.for_each(print_name_assignment)


if __name__ == "__main__":
    from fpcore.parser import parse
    import ast_modifications.for_each
    import ast_modifications.name_val
    import ast_modifications.remove_let
    import sys

    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
