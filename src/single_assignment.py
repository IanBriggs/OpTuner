

from collections import OrderedDict
from exceptions import (FPTaylorMatchError, FPTaylorMatchOneError,
                        NameClashError, SingleOperationError,
                        UnreachableError)
from fpcore_ast import Operation, Number, Variable
from fpcore_logging import Logger
from fptaylor_result import FPTaylorResult

import ast_modifications.all_modifications_ast as all_modifications_ast
import copy

logger = Logger(level=Logger.HIGH)


class SingleAssignment:
    FPTAYLOR_ROUNDS = {
        "fp32": "rnd32",
        "fp64": "rnd64",
        "fp128": "rnd128",
    }

    def __init__(self, search_space):
        self.search_space = search_space
        self.name = None
        self.properties = None
        self.inputs = OrderedDict()
        self.definitions = OrderedDict()
        self.fptaylor_forms = dict()
        self.operations = set()
        self.gensymmed_names = set()

    def _string_lines(self):
        lines = list()
        bits = " ".join(self.search_space["bit_widths"])
        ops = self.search_space["operations"]
        lines.append("SingleAssignment:")
        lines.append("  search_space:")
        lines.append("    bit_widths = {}".format(bits))
        lines.append("    operations:")

        for op, impls in ops.items():
            lines.append("      {} = {}".format(op, " ".join(impls)))

        lines.append("  inputs:")
        for name, domain in self.inputs.items():
            lines.append("    {} = [{}, {}]".format(name, *domain))

        lines.append("  definitions:")
        for name, value in self.definitions.items():
            lines.append("    {} = {}".format(name, value))

        lines.append("  fptaylor_forms:")
        for name in self.definitions:
            if name not in self.fptaylor_forms:
                continue
            forms = self.fptaylor_forms[name]
            if len(forms) == 0:
                lines.append("    {} = not_computed".format(name))
                continue
            lines.append("    {}:".format(name))
            for key, form in forms.items():
                if key == "default":
                    lines.append("        {} => {}".format(key, form))
                    continue
                lines.append("        {} => {}".format(key, form))

        return lines

    def __str__(self):
        return "\n".join(self._string_lines())

    def is_unique_name(self, name):
        return name not in self.inputs and name not in self.definitions

    def assert_unique_name(self, name):
        if not self.is_unique_name(name):
            raise NameClashError(name)

    def gensym(self, pre="gensym"):
        i = 0
        while True:
            name = "{}_{}".format(pre, i)
            if name not in self.gensymmed_names and self.is_unique_name(name):
                break
            i += 1
        self.gensymmed_names.add(name)
        return name

    def add_input(self, name, domain):
        self.assert_unique_name(name)
        self.inputs[name] = domain
        new_inputs = OrderedDict()
        for n in sorted(self.inputs):
            new_inputs[n] = self.inputs[n]
        self.inputs = new_inputs
        return name

    def add_subexpression(self, value):
        if type(value) == Variable and value.source in self.inputs:
            name = self.gensym("rounded_{}".format(value))
        elif type(value) == Number:
            name = self.gensym("literal")
        elif type(value) == Operation:
            name = self.gensym("subexpr")
            if any([type(a) != Variable for a in value.args]):
                raise SingleOperationError(value)
            if value.op in self.search_space["operations"]:
                self.operations.add(name)
        else:
            raise UnreachableError()
        self.assert_unique_name(name)
        self.definitions[name] = value
        if value.can_have_fptaylor_form(self):
            self.fptaylor_forms[name] = dict()
        return name

    def default_bit_selection(self):
        selection = dict()
        for name in self.definitions:
            selection[name] = "fp64"
        return selection

    def default_oper_selection(self):
        return dict()

    def to_fptaylor(self, bit_selection=None, oper_selection=None):
        bit_selection = bit_selection or self.default_bit_selection()
        oper_selection = oper_selection or self.default_oper_selection()

        lines = ["{"]

        lines.append("Variables")
        for name, domain in self.inputs.items():
            lines.append("  real {} in [{}, {}];".format(name, *domain))
        lines.append("")

        lines.append("Definitions")
        for name, value in self.definitions.items():
            rnd = SingleAssignment.FPTAYLOR_ROUNDS[bit_selection[name]]
            vstr = value.infix_str()
            if name in oper_selection:
                op = oper_selection[name]
                value = Operation(op, *value.args)
                vstr = value.infix_str()
                fptop = all_modifications_ast.OperationToFPTaylor[op]
                if op != fptop:
                    vstr = vstr.replace(op, fptop)
                    while vstr.count("(") != vstr.count(")"):
                        vstr += ")"
            lines.append("  {} {}= {};".format(name, rnd, vstr))
        lines.append("")

        lines.append("Expressions")
        def_keys = list(self.definitions.keys())
        lines.append("  {};".format(def_keys[-1]))
        lines.append("}")

        query = "\n".join(lines)
        return query

    def get_possible(self, environment=None):
        environment = environment or dict()
        possible = list()
        for name, value in self.definitions.items():
            if name not in self.fptaylor_forms:
                continue
            if name in environment:
                value = environment[name]
            possible.append((name, value.expand(self, [environment])))
        return possible

    def match_fptaylor_forms(self, fptaylor_forms, possible):
        match = dict()
        unused = list(reversed(possible))
        unmatched = list()

        for orig, form in fptaylor_forms:
            form.change_exp(-53, "eps")
            form.expand_forms(self)
            found = False
            for name, expanded in unused:
                if expanded == orig:
                    match[name] = form
                    found = True
                    unused.remove((name, expanded))
                    break
            if not found:
                unmatched.append((orig, form))

        if len(unused) != 0:
            logger.warning("Unused SingleAssignment definitions:")
            for name, expanded in unused:
                logger.warning("  {} = {}", name, expanded)

        if len(unmatched) > 1:
            logger.warning("Unmatched FPTaylor forms:")
            for name, expanded in unmatched:
                logger.warning("  {} = {}", name, expanded)

        return match, unmatched

    def get_fptaylor_forms(self):
        logger("Getting default FPTaylor forms")
        query = self.to_fptaylor()
        res = FPTaylorResult(query)
        fptaylor_forms = res.fptaylor_forms
        possible = self.get_possible()
        match, unmatched = self.match_fptaylor_forms(fptaylor_forms, possible)
        if len(unmatched) != 0:
            raise FPTaylorMatchError(unmatched)

        for name, form in match.items():
            self.fptaylor_forms[name]["default"] = form

        self.get_secondary_fptaylor_forms()

    def get_secondary_fptaylor_forms(self):
        operatable = [name for name
                      in self.definitions
                      if name in self.operations]

        if len(operatable) == 0:
            return

        for target_name in operatable:
            default_value = self.definitions[target_name]
            this_operations = self.search_space["operations"][default_value.op]
            for oper in this_operations:
                if oper == default_value.op:
                    continue
                logger("Getting FPTaylor forms when {} is {}", target_name, oper)
                oper_selection = self.default_oper_selection()
                oper_selection[target_name] = oper
                query = self.to_fptaylor(oper_selection=oper_selection)
                res = FPTaylorResult(query)
                fptaylor_forms = res.fptaylor_forms
                new_value = Operation(oper, *default_value.args)
                possible = self.get_possible({target_name: new_value})
                match, unmatched = self.match_fptaylor_forms(fptaylor_forms,
                                                             possible)


                for name, form in match.items():
                    default = self.fptaylor_forms[name]["default"]
                    if default != form:
                        self.fptaylor_forms[name][(target_name, oper)] = form

                forms = self.fptaylor_forms[target_name]
                if (target_name, oper) in forms:
                    existing = forms[(target_name, oper)]
                else:
                    existing = copy.copy(forms["default"])

                if len(unmatched) == 1:
                    new = existing + unmatched[0][1]
                elif len(unmatched) == 0:
                    new = existing
                else:
                    raise FPTaylorMatchOneError(unmatched)
                forms[(target_name, oper)] = new

    def get_fptaylor_maximums(self):
        for name, forms in self.fptaylor_forms.items():
            for key, form in forms.items():
                form.abs_maximize(self.inputs)

