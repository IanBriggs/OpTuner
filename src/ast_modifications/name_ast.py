

from ast_modifications.ast_modifier import add_method
from fpcore.fpcore_ast import ASTNode, Expr, Atom, Number, Constant, Variable, Operation


@add_method(ASTNode)
def name(self, taken):
    # Make sure calling name leads to an error if not overridden
    class_name = type(self).__name__
    msg = "name not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Number)
def name(self, taken):
    for i in range(100):
        self.name = "num_{:02}".format(i)
        if name not in taken:
            taken.add(self.name)
            return
    assert(False)

@add_method(Variable)
def name(self, taken):
    for i in range(100):
        self.name = "var_{}_{:02}".format(self.source, i)
        if name not in taken:
            taken.add(self.name)
            return
    assert(False)


@add_method(Operation)
def name(self, taken):
    for a in self.args:
        a.name(taken)
    op_name = {"+":"add", "-":"sub", "*":"mul", "/":"div"}.get(self.op, self.op)
    for i in range(100):
        self.name = "{}_{:02}".format(op_name, i)
        if name not in taken:
            taken.add(self.name)
            return
    assert(False)
