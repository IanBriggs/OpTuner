

from ast_modifications.modifier import add_method
from fpcore.ast import (ASTNode, Atom, FPCore, Operation)
from utils import Logger


logger = Logger(level=Logger.EXTRA)


@add_method(ASTNode)
def name_val(self):
    # Make sure calling name_val leads to an error if not overridden
    class_name = type(self).__name__
    msg = "name_val not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def name_val(self):
    return str(self)


@add_method(Operation)
def name_val(self):
    arg_names = [a.name for a in self.args]
    return "({} {})".format(self.op, " ".join(arg_names))


@add_method(FPCore)
def name_val(self):
    return self.expression.name_val()

