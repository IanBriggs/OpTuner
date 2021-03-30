

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, FPCore, Operation
from utils import Logger


logger = Logger(level=Logger.EXTRA)




UNARY_PREFIX = {"+", "-"}
INFIX = {"+", "-", "*", "/"}




@add_method(ASTNode)
def to_c(self, assignment, lines):
    # Make sure calling to_c leads to an error if not overridden
    class_name = type(self).__name__
    msg = "to_c not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def to_c(self, assignment, lines):
    lines.append("  double {} = {};".format(self.name, self.source))


@add_method(Operation)
def to_c(self, assignment, lines):
    for a in self.args:
        a.to_c(assignment, lines)

    arg_names = [a.name for a in self.args]

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


@add_method(FPCore)
def to_c(self, function_name, expression=None, assignment=None):
    expression = expression or self.expression
    assignment = assignment or dict()

    parts = list()
    for name in self.domains:
        parts.append("double {}".format(name))
    signature = "double {}({})".format(function_name, ",".join(parts))

    lines = [signature, "{"]
    expression.to_c(assignment, lines)
    lines.append("  return {};".format(expression.name))
    lines.append("}")

    return "\n".join(lines)


