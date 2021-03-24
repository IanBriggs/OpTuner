

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, FPCore, Operation
from utils import Logger


logger = Logger(level=Logger.EXTRA)




UNARY_PREFIX = {"+", "-"}
INFIX = {"+", "-", "*", "/"}


def eps_and_delta_to_fpt(epsilon, delta):
    m, e = frexp(epsilon)
    n, d = frexp(delta)
    return max(m,n), e, d


@add_method(ASTNode)
def to_gelpia(self):
    # Make sure calling to_gelpia leads to an error if not overridden
    class_name = type(self).__name__
    msg = "to_gelpia not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def to_gelpia(self):
    return self.source


@add_method(Operation)
def to_gelpia(self):
    formatted_args = [a.to_gelpia() for a in self.args]

    body = None
    if len(self.args) == 1 and self.op in UNARY_PREFIX:
        body = "{}{}".format(self.op, formatted_args[0])

    elif len(self.args) == 2 and self.op in INFIX:
        if (self.op == "*"
            and type(self.args[1]) == Operation
            and self.args[1].op == "inv"):
            formatted_args[1] = self.args[1].args[0].to_gelpia()
            body = "{} / {}".format(*formatted_args)
        else:
            body = "{} {} {}".format(formatted_args[0],
                                     self.op,
                                     formatted_args[1])

    else:
        body = "{}({})".format(self.op, ", ".join(formatted_args))

    return body


@add_method(FPCore)
def to_gelpia(self, expression=None):
    expression = expression or self.expression
    lines = list()

    for name, domain in self.domains.items():
        lines.append("{} = [{}, {}];".format(name, *domain))

    body = expression.to_gelpia()
    lines.append(body)

    return "\n".join(lines)




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

    logger.blog("Gelpia_query", parsed.to_gelpia())


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
