

from fpcore_ast import Operation
from fpcore_logging import Logger
from fptaylor_lexer import FPTaylorLexer
from fptaylor_parser import FPTaylorParser
from gelpia_result import GelpiaResult

import fractions

logger = Logger(level=Logger.EXTRA)


class FPTaylorForm:
    # Get the expression parser ready
    LEXER = FPTaylorLexer()
    PARSER = FPTaylorParser()

    def __init__(self, exp, form):
        if exp is None and form is None:
            return
        exp = int(exp)
        if type(form) == str:
            tokens = FPTaylorForm.LEXER.tokenize(form)
            expr = FPTaylorForm.PARSER.parse(tokens)
            form = expr
        self.forms = {exp: form}
        self.maximums = {exp: None}

    def __str__(self):
        parts = list()
        for exp, form in self.forms.items():
            maximum = self.maximums[exp] or "not_calculated"
            part = "(exp={} form={} max={})".format(exp, form, maximum)
            parts.append(part)
        return " + ".join(parts)

    def __eq__(self, other):
        if len(self.forms) != len(other.forms):
            return False
        for exp in self.forms:
            if exp not in other.forms or self.forms[exp] != other.forms[exp]:
                return False
        return True

    def __ne__(self, other):
        return not self.__eq__(other)

    def __add__(self, other):
        retval = FPTaylorForm(None, None)
        retval.forms = dict()
        for exp, form in self.forms.items():
            retval.forms[exp] = form
        for exp, form in other.forms.items():
            if exp in retval.forms:
                old = retval.forms[exp]
                retval.forms[exp] = Operation("+", old, form)
            else:
                retval.forms[exp] = form
        retval.maximums = {exp: None for exp in retval.forms}
        return retval

    def change_exp(self, old_exp, new_exp):
        if old_exp not in self.forms:
            return
        old_form = self.forms[old_exp]
        if new_exp in self.forms:
            existing = self.forms[new_exp]
            self.forms[new_exp] = Operation("+", existing, old_form)
        else:
            self.forms[new_exp] = old_form
        self.maximums[new_exp] = None

        del self.forms[old_exp]
        del self.maximums[old_exp]

    def expand_forms(self, ssa):
        new_forms = dict()
        for exp, form in self.forms.items():
            new_forms[exp] = form.expand(ssa)
        self.forms = new_forms

    def abs_maximize(self, inputs):
        for exp, form in self.forms.items():
            self.maximums[exp] = GelpiaResult(inputs, form).abs_max

    def to_gurobi(self, bit_choices, denoms):
        parts = list()
        parts_str = list()
        for exp, maximum in self.maximums.items():
            if exp == "eps":
                for grb_bool, d in zip(bit_choices, denoms):
                    err = maximum/d
                    parts.append(grb_bool*err)
                    parts_str.append("{}*{}".format(grb_bool.VarName, err))
            else:
                err = (2**exp)*maximum
                parts.append(err)
                parts_str.append("{}".format(err))
        return sum(parts), " + ".join(parts_str)

    def get_number(self, n):
        frac = fractions.Fraction(n)
        if frac.denominator == 1:
            return "{}".format(frac.numerator)
        return "(/ {} {})".format(frac.numerator, frac.denominator)

    def to_z3(self, eps):
        parts_str = list()
        for exp, maximum in self.maximums.items():
            maximum_string = self.get_number(maximum)
            if exp == "eps":
                err = "(* {} {})".format(eps, maximum_string)
            else:
                num = self.get_number(2**exp)
                err = "(* {} {})".format(num, maximum_string)

            parts_str.append(err)

        if len(parts_str) == 1:
            return parts_str[0]
        return "(+ {})".format(" ".join(parts_str))

        # def to_gurobi(self, eps):
        # parts = list()
        # parts_str = list()
        # for exp, maximum in self.maximums.items():
        #     if exp == "eps":
        #         parts.append(eps*maximum)
        #         parts_str.append("{}*{}".format(eps.VarName, maximum))
        #     else:
        #         parts.append((2**exp)*maximum)
        #         parts_str.append("{}*{}".format(2**exp, maximum))
        # return sum(parts), " + ".join(parts_str)
