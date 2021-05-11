

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, FPCore, Operation, Variable
from utils import Logger
import fractions


logger = Logger(level=Logger.EXTRA)




def number_to_z3(n):
    frac = fractions.Fraction(n)
    if frac.denominator == 1:
        return "{}".format(frac.numerator)
    return "(/ {} {})".format(frac.numerator, frac.denominator)


def z3_comment_banner(message, lines):
    max_len = 80 - 4 - 2
    space_len = max_len - len(message)
    lines.append("; +" + "-"*76 + "+")
    lines.append("; + " + message + " "*space_len + " +")
    lines.append("; +" + "-"*76 + "+")


def generate_z3_impl_bools(e, lines):
    if not hasattr(e, "possible_ids"):
        return
    lines.append("; implementations for {} = {}".format(e.name, e))
    if e.duplicate:
        lines.append("; same as {}".format(e.original.name))
        lines.append("")
        return
    bool_names = list()
    for id in e.possible_ids:
        bool_name = "{}_is_{}".format(e.name, id)
        bool_names.append(bool_name)
        line = "(declare-const {} Bool)".format(bool_name)
        lines.append(line)
    converted = ["(btoi {})".format(n) for n in bool_names]
    sum_parts = "\n  ".join(converted)
    assertion = "(assert (= 1 (+\n  {})))".format(sum_parts)
    lines.append(assertion)
    lines.append("")


def generate_z3_epsilons(e, lines, id_mapped_implementations):
    if not hasattr(e, "possible_ids"):
        epsilons = list()
        for wrt, d in e.forms.items():
            if "epsilon" in d:
                epsilons.append(d["epsilon"][0])
        if len(epsilons) == 0:
            return
        assert(len(set(epsilons)) == 1)
        eps = epsilons[0]
        e.epsilon = number_to_z3(2**int(eps))
        return
    epsilon_name = "epsilon_for_{}".format(e.name)
    lines.append("; epsilon for {} = {}".format(e.name, e))
    if e.duplicate:
        lines.append("; same as {}".format(e.original.name))
        e.epsilon = "epsilon_for_{}".format(e.original.name)
        lines.append("")
        return
    parts = list()
    for id in e.possible_ids:
        bool_name = "{}_is_{}".format(e.name, id)
        eps_val = id_mapped_implementations[id].epsilon
        parts.append("(* (btor {}) {})".format(bool_name, number_to_z3(eps_val)))
    sum_parts = "\n  ".join(parts)
    assignment = "(define-fun {} () Real (+\n  {}))".format(epsilon_name, sum_parts)
    lines.append(assignment)
    lines.append("")
    e.epsilon = epsilon_name


def generate_z3_deltas(e, lines, id_mapped_implementations):
    if not hasattr(e, "possible_ids"):
        deltas = list()
        for wrt, d in e.forms.items():
            if "delta" in d:
                deltas.append(d["delta"][0])
        if len(deltas) == 0:
            return
        assert(len(set(deltas)) == 1)
        delt = deltas[0]
        e.delta = number_to_z3(2**int(delt))
        return
    delta_name = "delta_for_{}".format(e.name)
    lines.append("; delta for {} = {}".format(e.name, e))
    if e.duplicate:
        lines.append("; same as {}".format(e.original.name))
        e.delta = "delta_for_{}".format(e.original.name)
        lines.append("")
        return
    parts = list()
    for id in e.possible_ids:
        bool_name = "{}_is_{}".format(e.name, id)
        delt_val = id_mapped_implementations[id].delta
        parts.append("(* (btor {}) {})".format(bool_name, number_to_z3(delt_val)))
    sum_parts = "\n  ".join(parts)
    assignment = "(define-fun {} () Real (+\n  {}))".format(delta_name, sum_parts)
    lines.append(assignment)
    lines.append("")
    e.delta = delta_name


def generate_z3_domain_error(fpc, e, lines):
    if not hasattr(e, "possible_ids"):
        return
    arg = e.args[0]
    e.domain_error = generate_z3_error(fpc, arg, lines)


def generate_z3_domain_bounding(fpc, e, lines, id_mapped_implementations):
    if not hasattr(e, "possible_ids"):
        return
    arg = e.args[0]
    real_domain = fpc.dynamic_range(arg)
    for id in e.possible_ids:
        impl = id_mapped_implementations[id]
        lower_gap = real_domain[0] - impl.domain[0]
        upper_gap = impl.domain[1] - real_domain[1]
        min_gap = min(lower_gap, upper_gap)
        if e.duplicate:
            boolean = "{}_is_{}".format(e.original.name, id)
        else:
            boolean = "{}_is_{}".format(e.name, id)
        assertion = "(assert (=> {} (<= {} {})))".format(boolean, e.domain_error, number_to_z3(min_gap))
        lines.append(assertion)
    lines.append("")


def generate_z3_error(fpc, wrt, lines):
    def sum_error_components(e, wrt, lines, parts):
        if wrt.name not in e.maximums:
            return

        my_error_name = "error_from_{}_wrt_{}".format(e.name, wrt.name)

        if ("epsilon" in e.maximums[wrt.name]
            and "delta" in e.maximums[wrt.name]):
            my_epsilon = e.epsilon
            my_delta = e.delta
            my_eps_mul = number_to_z3(e.maximums[wrt.name]["epsilon"])
            my_del_mul = number_to_z3(e.maximums[wrt.name]["delta"])
            line = "(define-fun {} () Real\n  (+ (* {} {}) (* {} {})))".format(my_error_name,
                                                                                 my_epsilon,
                                                                                 my_eps_mul,
                                                                                 my_delta,
                                                                                 my_del_mul)
        elif ("epsilon" in e.maximums[wrt.name]
              and "delta" not in e.maximums[wrt.name]):
            my_epsilon = e.epsilon
            my_eps_mul = number_to_z3(e.maximums[wrt.name]["epsilon"])
            line = "(define-fun {} () Real\n  (* {} {}))".format(my_error_name,
                                                                 my_epsilon,
                                                                 my_eps_mul)
        elif ("epsilon" not in e.maximums[wrt.name]
              and "delta" in e.maximums[wrt.name]):
            my_delta = e.delta
            my_del_mul = number_to_z3(e.maximums[wrt.name]["delta"])
            line = "(define-fun {} () Real\n  (* {} {}))".format(my_error_name,
                                                                 my_delta,
                                                                 my_del_mul)
        else:
            return

        lines.append(line)
        parts.append(my_error_name)

    error_name = "total_error_for_{}".format(wrt.name)
    lines.append("; total error for {} = {}".format(wrt.name, wrt))
    parts = list()
    fpc.for_each(lambda e: sum_error_components(e, wrt, lines, parts))
    sum_parts = "\n  ".join(parts)
    assignment = "(define-fun {} () Real (+\n  {}))".format(error_name, sum_parts)
    lines.append(assignment)
    lines.append("")
    return error_name


def generate_z3_costs(e, lines, costs, id_mapped_implementations):
    if not hasattr(e, "possible_ids"):
        return
    cost_name = "cost_for_{}".format(e.name)
    lines.append("; cost for {} = {}".format(e.name, e))
    if e.duplicate:
        lines.append("; zero since it is already computed as {}".format(e.original.name))
        lines.append("")
        return
    parts = list()
    for id in e.possible_ids:
        bool_name = "{}_is_{}".format(e.name, id)
        cost = id_mapped_implementations[id].cost
        parts.append("(* (btor {}) {})".format(bool_name, cost))
    sum_parts = "\n  ".join(parts)
    assignment = "(define-fun {} () Real (+\n  {}))".format(cost_name, sum_parts)
    lines.append(assignment)
    lines.append("")
    costs.append(cost_name)







@add_method(FPCore)
def to_z3(self, id_mapped_implementations):
    lines = list()
    z3_comment_banner("Utility functions", lines)
    lines.extend([
        "(define-fun btoi ((b Bool)) Int",
        "  (ite b 1 0))",
        "",
        "(define-fun btor ((b Bool)) Real",
        "  (ite b 1.0 0.0))",
        "",
    ])

    z3_comment_banner("Implementation choices", lines)
    self.for_each(lambda e: generate_z3_impl_bools(e, lines))

    z3_comment_banner("Epsilons", lines)
    self.for_each(lambda e: generate_z3_epsilons(e, lines, id_mapped_implementations))

    z3_comment_banner("Deltas", lines)
    self.for_each(lambda e: generate_z3_deltas(e, lines, id_mapped_implementations))

    z3_comment_banner("Domain errors", lines)
    self.for_each(lambda e: generate_z3_domain_error(self, e, lines))

    z3_comment_banner("Domain bounding", lines)
    self.for_each(lambda e: generate_z3_domain_bounding(self, e, lines, id_mapped_implementations))

    z3_comment_banner("Top level error", lines)
    top_level_error = generate_z3_error(self, self.expression, lines)
    lines.append("(declare-const total_error Real)")
    lines.append("(assert (= total_error {}))".format(top_level_error))

    costs = list()
    z3_comment_banner("Costs", lines)
    self.for_each(lambda e: generate_z3_costs(e, lines, costs, id_mapped_implementations))
    sum_parts = "\n  ".join(costs)
    lines.append("(declare-const total_cost Real)")
    lines.append("(assert (= total_cost (+\n  {})))".format(sum_parts))

    lines.append("(minimize total_error)")
    lines.append("(minimize total_cost)")
    lines.append("(set-option :opt.priority pareto)")
    lines.append("(check_sat)")

    return "\n".join(lines)
