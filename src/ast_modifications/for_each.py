

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Expr, FPCore, Operation
from utils import Logger


logger = Logger(level=Logger.EXTRA)




@add_method(ASTNode)
def for_each(self, func):
    # Make sure calling for_each leads to an error if not overridden
    class_name = type(self).__name__
    msg = "for_each not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Expr)
def for_each(self, func):
    func(self)


@add_method(Operation)
def for_each(self, func):
    for a in self.args:
        a.for_each(func)
    func(self)


@add_method(FPCore)
def for_each(self, func):
    self.expression.for_each(func)

