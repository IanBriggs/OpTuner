

from exceptions import OpTunerError
from fpcore.fpcore_ast import Variable, Number, Operation
from gelpia_result import GelpiaResult
from optuner_logging import Logger
from timing import Timer

import ast_modifications.all_modifications_ast as all_modifications_ast

import fractions
import math
import z3

logger = Logger(level=Logger.EXTRA, color=Logger.magenta)
timer = Timer()

class Z3Result:

    BIT_WIDTH_ORDER = ["fp32", "fp64", "fp128"]
    BIT_WIDTH_COST = [1, 20, 40]
    DENOM_ORDER = [2**24, 2**53, 2**113]
    BIT_WIDTH_TO_DENOM = dict(zip(BIT_WIDTH_ORDER, DENOM_ORDER))

    def __init__(self, ssa, raw_max_error):
        self.raw_max_error = raw_max_error
        self.query_string_list = list()
        self.ssa = ssa

        self.setup_query()
        self.bit_width_choices = self.get_bit_width_choices()
        self.epsilons = self.get_epsilons()
        self.operation_choices = self.get_operation_choices()
        self.expression_domains = self.get_expression_domains()

        self.expression_errors = self.get_expression_errors()
        self.error = self.add_error()
        self.bit_width_costs = self.get_bit_width_costs()
        self.operation_costs = self.get_operation_costs()
        self.cost = self.add_cost()

        max_error = self.get_number(self.raw_max_error)
        self.query_string_list.append("(assert (<= {} {}))".format(self.error,
                                                                   max_error))
        self.query_string_list.append("(minimize {})".format(self.cost))
        self.query_string_list.append("(check-sat)")

        self.query = "\n".join(self.query_string_list)

        max_lineno = len(self.query_string_list)+1
        formatter = "{{:{}}}: {{}}".format(len(str(max_lineno)))
        linenos = range(1, max_lineno)
        numbered_lines = [formatter.format(i,l)
                          for i,l in zip(linenos, self.query_string_list)]
        logger.log("z3 query:\n{}\n", self.query)

        ctx = z3.Context("model_validate", "true")
        self.optimizer = z3.Optimize(ctx=ctx)
        self.optimizer.from_string(self.query)
        state = self.optimizer.check()
        if str(state) != "sat":
            logger.error("Z3 returned: {} ({})", state, type(state))
            logger.error("Unable to satisfy error bound of {}", self.raw_max_error)
            raise OpTunerError()

        z3_model = self.optimizer.model()
        self.model = {d.name(): z3_model[d] for d in z3_model}
        model_lines = ["{} = {}".format(name, value)
                       for name, value in sorted(self.model.items())]
        model_string = "\n"+"\n".join(model_lines)
        logger(model_string)

    def get_number(self, n):
        frac = fractions.Fraction(n)
        if frac.denominator == 1:
            return "{}".format(frac.numerator)
        return "(/ {} {})".format(frac.numerator, frac.denominator)

    def setup_query(self):
        # add btoi and btor
        self.query_string_list.extend(
            ["; +"+"-"*76+"+",
             "; + Utility functions"+" "*58+"+",
             "; +"+"-"*76+"+",
             "(define-fun btoi ((b Bool)) Int",
             "  (ite b 1 0))",
             "",
             "(define-fun btor ((b Bool)) Real",
             "  (ite b 1.0 0.0))",
             "",
            ])

    def get_bit_width_choices(self):
        # name -> {bit_width -> z3_name}
        bit_width_choices = dict()

        self.query_string_list.append("; +"+"-"*76+"+")
        self.query_string_list.append("; + Bit width choices (UNUSED) "+" "*48+"+")
        self.query_string_list.append("; +"+"-"*76+"+")

        # Go through every expression
        for name in self.ssa.fptaylor_forms:

            # Note what we are working on
            val = self.ssa.definitions[name]
            comment = "; type for {} = {}".format(name, val)
            self.query_string_list.append(comment)

            # Setup the list of variable names
            bit_options = self.ssa.search_space["bit_widths"]
            bool_names = ["{}_is_{}".format(name, bw) for bw in bit_options]
            query_decls = ["(declare-const {} Bool)".format(n) for n
                           in bool_names]
            self.query_string_list.extend(query_decls)

            # Assert that the sum of the booleans is 1 (i.e. only one is "true")
            converted = ["(btoi {})".format(n) for n in bool_names]
            sum_parts = "\n  ".join(converted)
            assertion = "(assert (= 1 (+\n  {})))".format(sum_parts)
            self.query_string_list.append(assertion)
            self.query_string_list.append("")

            # Update our dictonary
            bit_width_choices[name] = {bw:n for bw,n
                                       in zip(bit_options, bool_names)}

        return bit_width_choices

    def get_expression_domains(self):

        self.query_string_list.append("; +"+"-"*76+"+")
        self.query_string_list.append("; + Function Domains "+" "*57+"+")
        self.query_string_list.append("; +"+"-"*76+"+")

        inputs = self.ssa.inputs

        for name in self.ssa.operations:

            # todo: assuming unary
            value = self.ssa.definitions[name]
            arg = value.args[0]
            assert(len(value.args) == 1)

            arg_expr = arg.expand(self.ssa)
            gr = GelpiaResult(inputs, arg_expr)
            real_domain = (gr.min_lower, gr.max_upper)

            self.query_string_list.append("; Domain check for {} = {}".format(name, value))
            for impl,z3_name in self.operation_choices[name].items():
                acceptable_domain = all_modifications_ast.ImplToDomain[value.op]
                lower_clearance = real_domain[0] - acceptable_domain[0]
                upper_clearance = acceptable_domain[1] - real_domain[1]
                min_clearance = min(lower_clearance, upper_clearance)
                # using zero now, need to be error(arg)
                arg_error = 0
                if min_clearance < 0.0:
                    assertion = "(assert (== {} false))".format(z3_name)
                    self.query_string_list.append(assertion)
                elif math.isfinite(min_clearance):
                    assertion = "(assert (=> {} (<= {} {})))".format(z3_name, arg_error, min_clearance)
                    self.query_string_list.append(assertion)
                else:
                    assertion = "; (assert (=> {} (<= {} {})))".format(z3_name, arg_error, min_clearance)
                    self.query_string_list.append(assertion)

            self.query_string_list.append("")

    def get_epsilons(self):
        # name -> z3_name
        epsilons = dict()

        self.query_string_list.append("; +"+"-"*76+"+")
        self.query_string_list.append("; + Epsilons (UNUSED) "+" "*57+"+")
        self.query_string_list.append("; +"+"-"*76+"+")

        # Go through every expression
        for name, choices in self.bit_width_choices.items():

            # Note what we are working on
            val = self.ssa.definitions[name]
            comment = "; epsilon for {} = {}".format(name, val)
            self.query_string_list.append(comment)

            # Get the associated denominator for each bit width
            bit_options = self.ssa.search_space["bit_widths"]
            denoms = [Z3Result.BIT_WIDTH_TO_DENOM[bw] for bw in bit_options]

            # Use those to create a list so that when one boolean is 1, the
            # sum is the epsilon for the given bit width
            bool_names = [choices[bw] for bw in bit_options]
            epsilon_parts = ["(/ (btor {}) {})".format(b, d)
                             for b, d in zip(bool_names, denoms)]

            # Sum these and get the result
            epsilon_name = "{}_eps".format(name)
            sum_parts = "\n  ".join(epsilon_parts)
            epsilon = "(define-fun {} () Real (+\n  {}))".format(epsilon_name,
                                                              sum_parts)
            self.query_string_list.append(epsilon)
            self.query_string_list.append("")

            # Update our dictionary
            epsilons[name] = epsilon_name

        return epsilons

    def get_operation_choices(self):
        # name -> {impl -> z3_name}
        operation_choices = dict()

        self.query_string_list.append("; +"+"-"*76+"+")
        self.query_string_list.append("; + Operation choices "+" "*57+"+")
        self.query_string_list.append("; +"+"-"*76+"+")

        # Go through expressions whose operation we can select
        for name in self.ssa.operations:

            # Note what we are working on
            val = self.ssa.definitions[name]
            comment = "; operation for {} = {}".format(name, val)
            self.query_string_list.append(comment)

            # # get the bounds on the argument
            # arg = val.args[0] # TODO: assuming unary
            # gr = GelpiaResult(self.ssa.inputs, arg.expand(self.ssa))
            # domain = [gr.min_lower, gr.max_upper]
            # op = self.ssa.definitions[name].op
            # all_ops = set(self.ssa.search_space["operations"][op])
            # mapped_ops = [(row[1], row[4]) for row
            #               in all_modifications_ast.OperationTable
            #               if row[0] in all_ops]
            # impls = [tup[0] for tup in mapped_ops
            #          if (tup[1][0] <= domain[0] and
            #              tup[1][1] >= domain[1])]

            # get all impls
            op = self.ssa.definitions[name].op
            all_ops = set(self.ssa.search_space["operations"][op])
            impls = [row[1] for row
                     in all_modifications_ast.OperationTable
                     if row[0] in all_ops]

            # Setup the list of variable names, and make the z3 booleans
            name_bools = ["{}_is_{}".format(name, impl) for impl in impls]
            query_decls = ["(declare-const {} Bool)".format(n) for n
                           in name_bools]
            self.query_string_list.extend(query_decls)

            # Assert that the sum of the booleans is 1 (i.e. only one is "true")
            converted = ["(btoi {})".format(n) for n in name_bools]
            sum_parts = "\n  ".join(converted)
            assertion = "(assert (= 1 (+\n  {})))".format(sum_parts)
            self.query_string_list.append(assertion)
            self.query_string_list.append("")

            # Update our dictonary
            operation_choices[name] = {impl:n for impl, n
                                       in zip(impls, name_bools)}

        return operation_choices

    def get_expression_errors(self):
        expression_errors = dict()

        self.query_string_list.append("; +"+"-"*76+"+")
        self.query_string_list.append("; + Expressions errors "+" "*56+"+")
        self.query_string_list.append("; +"+"-"*76+"+")

        # Go through all expressions
        for name, forms in self.ssa.fptaylor_forms.items():

            # Note what we are working on
            val = self.ssa.definitions[name]
            comment = "; error for {} = {}".format(name, val)
            self.query_string_list.append(comment)

            # get out epsilon variable and make the error variable
            this_eps = self.epsilons[name]
            error_name = "{}_error".format(name)
            expression_errors[name] = error_name

            # Check if this expression has only one impl
            if name not in self.ssa.operations:

                # Error can be computed as eps*max(fptaylor_form)
                form = forms["default"]
                error = form.to_z3(this_eps)
                z3_error = "(define-fun {} () Real {})".format(error_name, error)
                self.query_string_list.append(z3_error)
                self.query_string_list.append("")

                # Go onto the next expression
                continue

            # The expression has multiple impls
            options_str = list()
            for tup, form in forms.items():
                if type(tup) == str and tup == "default":
                    oper = self.ssa.definitions[name].op
                    bool_name = self.operation_choices[name][oper]
                    error = forms["default"].to_z3(this_eps)
                    z3_error = "(* (btor {}) {})".format(bool_name,
                                                                      error)
                    options_str.append(z3_error)
                    continue

                target_name, oper = tup
                if oper not in self.operation_choices[target_name]:
                    continue

                bool_name = self.operation_choices[target_name][oper]
                error = form.to_z3(this_eps)
                z3_error = "(* (btor {}) {})".format(bool_name, error)
                options_str.append(z3_error)

            error_parts = "\n  ".join(options_str)
            expr_error = "(define-fun {} () Real (+\n  {}))".format(error_name,
                                                                     error_parts)
            self.query_string_list.append(expr_error)
            self.query_string_list.append("")

        return expression_errors

    def add_error(self):
        # Note what we are working on
        self.query_string_list.append("; total error for expression")

        error_name = "total_error"
        errors = "\n  ".join([v for v
                              in sorted(self.expression_errors.values())])
        decl = "(declare-const {} Real)".format(error_name)
        z3_error = "(assert (= {} (+\n {})))".format(error_name, errors)
        self.query_string_list.append(decl)
        self.query_string_list.append(z3_error)
        self.query_string_list.append("")
        return error_name

    def get_bit_width_costs(self):
        # name -> z3_name
        costs = dict()

        self.query_string_list.append("; +"+"-"*76+"+")
        self.query_string_list.append("; + Bit width cost (UNUSED) "+" "*51+"+")
        self.query_string_list.append("; +"+"-"*76+"+")

        # Go through all bit width choices
        for name, bools in self.bit_width_choices.items():

            # Note what we are working on
            val = self.ssa.definitions[name]
            comment = "; cost for bit width of {} = {}".format(name, val)
            self.query_string_list.append(comment)

            cost_name = "{}_bit_width_cost".format(name)
            bit_options = self.ssa.search_space["bit_widths"]
            bit_width_costs = [all_modifications_ast.BitWidthCost[bw] for bw
                               in bit_options]
            bool_names = [bools[bw] for bw in bit_options]
            cost_parts = ["(* (btoi {}) {})".format(b, c) for b, c
                          in zip(bool_names, bit_width_costs)]
            sum_parts = "\n  ".join(cost_parts)
            z3_cost = "(define-fun {} () Int (+\n  {}))".format(cost_name,
                                                             sum_parts)
            self.query_string_list.append(z3_cost)
            self.query_string_list.append("")

            costs[name] = cost_name

        return costs

    def get_operation_costs(self):
        costs = dict()

        self.query_string_list.append("; +"+"-"*76+"+")
        self.query_string_list.append("; + Operation cost "+" "*60+"+")
        self.query_string_list.append("; +"+"-"*76+"+")

        for name, bools in self.operation_choices.items():

            # Note what we are working on
            val = self.ssa.definitions[name]
            comment = "; cost for implementation of {} = {}".format(name, val)
            self.query_string_list.append(comment)

            cost_name = "{}_operation_cost".format(name)
            op = self.ssa.definitions[name].op
            impls = self.operation_choices[name]
            op_costs = [all_modifications_ast.OperationToCost[oper]
                        for oper in impls]
            bool_names = [bools[oper] for oper in impls]
            cost_parts = ["(* (btoi {}) {})".format(b, c)
                          for b, c in zip(bool_names, op_costs)]
            sum_parts = "\n  ".join(cost_parts)
            z3_cost = "(define-fun {} () Int (+\n  {}))".format(cost_name,
                                                             sum_parts)
            self.query_string_list.append(z3_cost)
            self.query_string_list.append("")

            costs[name] = cost_name


        return costs

    def add_cost(self):
        self.query_string_list.append("; total cost for expression")

        cost_name = "total_cost"
        costs = "\n  ".join([v for v in sorted(self.operation_costs.values())]
                            + [v for v in sorted(self.bit_width_costs.values())])
        z3_costs = "(define-fun {} () Int (+\n  {}))".format(cost_name, costs)
        self.query_string_list.append(z3_costs)
        self.query_string_list.append("")

        return cost_name

