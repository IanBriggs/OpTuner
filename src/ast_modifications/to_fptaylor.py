

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, FPCore, Operation
from utils import Logger
from math import frexp

logger = Logger(level=Logger.EXTRA)




UNARY_PREFIX = {"+", "-"}
INFIX = {"+", "-", "*", "/"}


def eps_and_delta_to_fpt(epsilon, delta):
    m, e = frexp(epsilon)
    n, d = frexp(delta)
    return max(m,n), e, d


@add_method(ASTNode)
def to_fptaylor(self, assignment, lines):
    # Make sure calling to_fptaylor leads to an error if not overridden
    class_name = type(self).__name__
    msg = "to_fptaylor not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def to_fptaylor(self, assignment, lines):
    rounding = "rnd64({})"
    if self.name in assignment:
        assig = assignment[self.name]
        fpt_triple = eps_and_delta_to_fpt(assig.epsilon, assig.delta)
        rounding = "rnd[64,ne,{},{},{}]({{}})".format(*fpt_triple)
    rounded = rounding.format(self.source)
    lines.append("  {} = {};".format(self.name, rounded))


@add_method(Operation)
def to_fptaylor(self, assignment, lines):
    for a in self.args:
        a.to_fptaylor(assignment, lines)

    arg_names = [a.name for a in self.args]

    rounding = "rnd64({})"
    if self.name in assignment:
        assig = assignment[self.name]
        fpt_triple = eps_and_delta_to_fpt(assig.epsilon, assig.delta)
        rounding = "rnd[64,ne,{},{},{}]({{}})".format(*fpt_triple)

    body = None
    if len(self.args) == 1 and self.op in UNARY_PREFIX:
        body = "{}{}".format(self.op, arg_names[0])

    elif len(self.args) == 2 and self.op in INFIX:
        body = "{} {} {}".format(arg_names[0], self.op, arg_names[1])

    else:
        body = "{}({})".format(self.op, ", ".join(arg_names))

    rounded = rounding.format(body)
    lines.append("  {} = {};".format(self.name, rounded))


@add_method(FPCore)
def to_fptaylor(self, expression=None, assignment=None):
    expression = expression or self.expression
    assignment = assignment or dict()
    lines = ["Variables"]

    for name, domain in self.domains.items():
        lines.append("  real {} in [{}, {}];".format(name, *domain))
    lines.append("")

    lines.append("Definitions")
    expression.to_fptaylor(assignment, lines)
    lines.append("")

    lines.append("Expressions")
    lines.append("  {};".format(expression.name))

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

    logger.blog("FPTaylor_query", parsed.to_fptaylor())


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
