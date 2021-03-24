

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, Operation
from utils import Logger


logger = Logger(level=Logger.EXTRA)


@add_method(ASTNode)
def __eq__(self, obj):
    # Make sure calling __eq__ leads to an error if not overridden
    class_name = type(self).__name__
    msg = "__eq__ not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def __eq__(self, obj):
    return (type(obj) == type(self)
            and self.source == obj.source)


@add_method(Operation)
def __eq__(self, obj):
    if type(obj) != type(self):
        return False
    for a,b in zip(self.args, obj.args):
        if a != b:
            return False
    return self.op == obj.op
