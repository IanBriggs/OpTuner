

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, FPCore, Operation
from fptaylor.parser import Round
from utils import Logger

import copy


logger = Logger(level=Logger.EXTRA)




@add_method(ASTNode)
def strip_rounding(self, assignment, lines):
    # Make sure calling strip_rounding leads to an error if not overridden
    class_name = type(self).__name__
    msg = "strip_rounding not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Atom)
def strip_rounding(self):
    return copy.copy(self)


@add_method(Round)
def strip_rounding(self):
    return self.body.strip_rounding()


@add_method(Operation)
def strip_rounding(self):
    new_args = [a.strip_rounding() for a in self.args]
    retval = copy.copy(self)
    retval.args = new_args
    return retval
