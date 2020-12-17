

from ast_modifications.ast_modifier import add_method
from fpcore.fpcore_ast import ASTNode, Expr, Atom, Number, Constant, Variable, Operation



def add(x, y):
    return Operation("+", x, y)

def neg(x):
    return Operation("-", x)

def sub(x, y):
    return Operation("-", x, y)

def mul(x, y):
    return Operation("*", x, y)

def div(x, y):
    return Operation("/", x, y)

def sin(x):
    return Operation("sin", x)

def cos(x):
    return Operation("cos", x)

def tan(x):
    return Operation("tan", x)


def is_positive_power_of_two(n):
    # Either a Number or int are expected
    if type(n) == Number:
        frac = Fraction(n.source)
        # If frac is not an integer it can't be a power of two
        if frac.denominator != 1:
            return False
        n = frac.numerator
    elif type(n) == int:
        pass
    else:
        return False

    # Negative values cannot be a power of two
    if n <= 0:
        return False

    # Check if there is only a single bit set to 1
    return n & (n - 1) == 0


def is_power_of_two(n):
    # A Number is expected
    if type(n) == Number:
        frac = Fraction(n.source)
    else:
        return False

    # Negative values cannot be a power of two
    if frac <= 0:
        return False

    # If we have n/1 check if n is a positive power of two
    if frac.denominator == 1:
        return is_positive_power_of_two(frac.numerator)

    # If we have 1/n check if n is a positive power of two
    if frac.numerator == 1:
        return is_positive_power_of_two(frac.denominator)

    # No other fractions are a power of two
    return False


@add_method(ASTNode)
def taylor_form(self, forms):
    # Make sure calling taylor_form leads to an error if not overridden
    class_name = type(self).__name__
    msg = "taylor_form not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


@add_method(Number)
def taylor_form(self, forms):
    assert(self.name not in forms)
    self.eps_var = Variable("{}_eps".format(self.name))

    frac = Fraction(self.source)


    if ((frac.denominator == 1 and frac.numerator < 2**26)
        or (frac.denominator != 1
            and is_positive_power_of_two(frac.denominator))):
        forms[self.name] = Number("0")
    else:
        forms[self.name] = self


@add_method(Variable)
def taylor_form(self, forms):
    assert(self.name not in forms)
    self.eps_var = Variable("{}_eps".format(self.name))
    forms[self.name] = self


@add_method(Operation)
def taylor_form(self, forms):
    assert(self.name not in forms)
    self.eps_var = Variable("{}_eps".format(self.name))

    for a in self.args:
        a.taylor_form(forms)

    forms[self.name] = self

    if self.op == "+":
        return

    elif self.op == "-":
        if len(self.args) == 1:
            return
        old = forms[self.args[1].name]
        forms[self.args[1].name] = neg(old)
        return

    elif self.op == "*":
        x_old = forms[self.args[0].name]
        forms[self.args[0].name] = mul(self.args[1], x_old)
        y_old = forms[self.args[0].name]
        forms[self.args[0].name] = mul(self.args[0], y_old)
        return

    elif self.op == "/":
        x_old = forms[self.args[0].name]
        forms[self.args[0].name] = div(x_old, self.args[1])
        y_old = forms[self.args[0].name]
        forms[self.args[0].name] = mul(self.args[0], neg(div(Number(1), y_old)))
        return

    elif self.op == "sqrt":
        x_old = forms[self.args[0].name]
        forms[self.args[0].name] = div(x_old, mul(Number("2"), self))
        return

    elif self.op == "sin":
        x_old = forms[self.args[0].name]
        forms[self.args[0].name] = mul(cos(x_old), x_old)
        return

    elif self.op == "cos":
        x_old = forms[self.args[0].name]
        forms[self.args[0].name] = neg(mul(sin(x_old), x_old))
        return

    elif self.op == "tan":
        x_old = forms[self.args[0].name]
        forms[self.args[0].name] = div(x_old, mul(cos(x_old), sin(x_old)))
        return

    elif self.op == "exp":
        x_old = forms[self.args[0].name]
        forms[self.args[0].name] = mul(self, x_old)
        return

    elif self.op == "log":
        x_old = forms[self.args[0].name]
        forms[self.args[0].name] = Number("1")
        return

    else:
        assert False, "Operation not yet supported {}".format(self.op)


if __name__ == "__main__":
    from fpcore.fpcore_parser import parse
    from pprint import pprint
    import ast_modifications.name_ast

    expr = parse("(FPCore (x y) (+ (+ x y ) (sin y)))")[0].expression
    taken = set()
    expr.name(taken)
    forms = dict()
    expr.taylor_form(forms)
    pprint(forms)
