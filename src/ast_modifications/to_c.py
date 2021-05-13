

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, FPCore, Operation
from utils import Logger


logger = Logger(level=Logger.EXTRA)




UNARY_PREFIX = {"+", "-"}
INFIX = {"+", "-", "*", "/"}




@add_method(ASTNode)
def to_c(self, assignment, lines, main_args):
    # Make sure calling to_c leads to an error if not overridden
    class_name = type(self).__name__
    msg = "to_c not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def to_c(self, assignment, lines, main_args):
    if str(self) in main_args:
        return str(self)
    if self.duplicate:
        return self.original.name
    lines.append("  double {} = {};".format(self.name, self.source))
    return self.name


@add_method(Operation)
def to_c(self, assignment, lines, main_args):
    if self.duplicate:
        return self.original.name

    arg_names = list()
    for a in self.args:
        a_name = a.to_c(assignment, lines, main_args)
        arg_names.append(a_name)

    op = self.op
    if self.name in assignment:
        op = assignment[self.name].cname

    body = None
    if len(self.args) == 1 and self.op == "inv":
        body = "1/{}".format(arg_names[0])

    elif len(self.args) == 1 and self.op in UNARY_PREFIX:
        body = "{}{}".format(op, arg_names[0])

    elif len(self.args) == 2 and self.op in INFIX:
        body = "{} {} {}".format(arg_names[0], op, arg_names[1])

    else:
        body = "{}({})".format(op, ", ".join(arg_names))

    lines.append("  double {} = {};".format(self.name, body))

    return self.name

@add_method(FPCore)
def to_c(self, function_name, expression=None, assignment=None):
    expression = expression or self.expression
    assignment = assignment or dict()
    main_args = set(self.domains)

    parts = list()
    for name in self.domains:
        parts.append("double {}".format(name))
    signature = "double {}({})".format(function_name, ",".join(parts))

    lines = [signature, "{"]
    expression.to_c(assignment, lines, main_args)
    lines.append("  return {};".format(expression.name))
    lines.append("}")

    return "\n".join(lines)


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

    logger.blog("C code", parsed.to_c("test"))


if __name__ == "__main__":
    from fpcore.parser import parse
    import ast_modifications.remove_let
    import ast_modifications.set_name
    import ast_modifications.extract_input_domains
    import ast_modifications.mark_duplicates
    import sys

    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
