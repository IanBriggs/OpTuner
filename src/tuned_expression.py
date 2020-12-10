

from optuner_logging import Logger
from timing import Timer
from fpcore_ast import Operation, Variable
from fptaylor_result import FPTaylorResult

import ast_modifications.all_modifications_ast as all_modifications_ast


import sys

logger = Logger(level=Logger.MEDIUM)
timer = Timer()


class TunedExpression():
    TYPES = ["fp32", "fp64", "fp128"]
    DECLS = ["float", "double", "__float128"]
    ROUNDS = ["rnd32", "rnd64", "rnd128"]
    TYPES_TO_DECLS = dict(zip(TYPES, DECLS))
    TYPES_TO_ROUNDS = dict(zip(TYPES, ROUNDS))

    def __init__(self, ssa, zr):
        self.name = ssa.name
        self.properties = ssa.properties
        self.inputs = ssa.inputs
        self.definitions = ssa.definitions.copy()
        self.search_operations = ssa.search_space["operations"]
        self.error_bound = zr.raw_max_error
        self.types = None
        self.operators = None
        self.info = None
        self.init_types(zr)
        self.init_operators(zr)
        self.get_error(zr)
        self.inplace_operators()
        self.inline_untyped()

    def check_domains(self):
        lines = ["{"]

        lines.append("Variables")
        for name, domain in self.inputs.items():
            lines.append("  real {} in [{}, {}];".format(name, *domain))
        lines.append("")

        lines.append("Definitions")
        for name, value in self.definitions.items():
            typ = self.types[name]
            rnd = TunedExpression.TYPES_TO_ROUNDS[typ]
            vstr = value.infix_str()
            if (type(value) == Operation
                and value.op in all_modifications_ast.OperationToFPTaylor):
                fptop = all_modifications_ast.OperationToFPTaylor[value.op]
                if value.op != fptop:
                    vstr = vstr.replace(value.op, fptop)
                    while vstr.count("(") != vstr.count(")"):
                        vstr += ")"
            lines.append("  {} {}= {};".format(name, rnd, vstr))
        lines.append("")

        lines.append("Expressions")

        preamble = "\n".join(lines)

        for name, value in self.definitions.items():
            if type(value) is Operation and value.op in all_modifications_ast.Implementations:
                logger("Checking domain for {}", value)
                valid_domain = all_modifications_ast.ImplToDomain[value.op]
                query = "{}\n  {};\n}}".format(preamble, value.args[0])
                fpt = FPTaylorResult(query, FPTaylorResult.BOUNDS_CONFIG)
                assert(fpt.bounds is not None)
                actual_domain = fpt.bounds
                logger("  valid domain: {}", valid_domain)
                logger("  floating point domain: {}", actual_domain)
                if actual_domain[0] < valid_domain[0] or actual_domain[1] > valid_domain[1]:
                    logger("  bound violated")
                    op_base = value.op.rstrip("0123456789_").lstrip("r")
                    for row in all_modifications_ast.OperationTable:
                        if row[0] not in op_base:
                            continue
                        nv = row[4]
                        if op_base not in row[1]:
                            continue
                        if actual_domain[0] >= nv[0] and actual_domain[1] <= nv[1]:
                            value.op = row[1]
                            self.operators[name] = value.op
                            return None
                    return False

        return True

    def __str__(self):
        lines = [
            "   operations\t{}".format(self.info["operations"]),
            "         fp32\t{}".format(self.info["fp32_operations"]),
            "         fp64\t{}".format(self.info["fp64_operations"]),
            "        fp128\t{}".format(self.info["fp128_operations"]),
            "        casts\t{}".format(self.info["casts"]),
            "     up_casts\t{}".format(self.info["up_casts"]),
            " fp32 -> fp64\t{}".format(self.info["fp32_to_fp64_casts"]),
            "fp32 -> fp128\t{}".format(self.info["fp32_to_fp128_casts"]),
            "fp64 -> fp128\t{}".format(self.info["fp64_to_fp128_casts"]),
            "   down_casts\t{}".format(self.info["up_casts"]),
            " fp64 -> fp32\t{}".format(self.info["fp64_to_fp32_casts"]),
            "fp128 -> fp32\t{}".format(self.info["fp128_to_fp32_casts"]),
            "fp128 -> fp64\t{}".format(self.info["fp128_to_fp64_casts"]),
        ]
        for op_kind in self.search_operations:
            for op in self.search_operations[op_kind]:
                lines.append("{:>13}\t{}".format(op, self.info[op]))

        return "\n".join(lines)

    def tsv(self):
        header = list()
        parts = list()
        idx = 0
        for name in self.definitions:
            if name in self.operators:
                op = self.operators[name]
                header.append("{}-op".format(idx))
                parts.append(op)
            idx += 1
        return header, parts

    def _get_input_type(self, name):
        counts = {"fp32": 0, "fp64": 0, "fp128": 0}
        for n, v in self.definitions.items():
            if type(v) == Variable and v.source == name:
                t = self.types[n]
                counts[t] += 1
        for t in ["fp128", "fp64", "fp32"]:
            if counts[t] >= 1:
                return t
        assert(0)

    def to_c_function(self):
        ret_name = list(self.definitions)[-1]
        ret_type = self.types[ret_name]
        ret_decl = TunedExpression.TYPES_TO_DECLS[ret_type]

        input_types = [self._get_input_type(i) for i in self.inputs]
        input_decls = [TunedExpression.TYPES_TO_DECLS[t] for t in input_types]
        input_strs = ["{} {}".format(d, i) for d, i in zip(input_decls, self.inputs)]
        arg_string = ", ".join(input_strs)

        self.signature = "{}({})".format(self.name.strip('"'), arg_string)

        lines = list()

        lines.append(ret_decl)
        lines.append(self.signature)
        lines.append("{")

        for name, domain in self.inputs.items():
            raw = "    assert({0} <= {1} && {1} <= {2});"
            line = raw.format(domain[0], name, domain[1])
            lines.append(line)

        for name, value in self.definitions.items():
            my_type = self.types[name]
            my_decl = TunedExpression.TYPES_TO_DECLS[my_type]
            try:
                i = value.op.rfind("_")
                if i > 0:
                    r = value.op[i+1:]
                    if r.isnumeric():
                        value.op = value.op[:i]
            except AttributeError:
                pass
            my_body = value.infix_str("({}) ".format(my_decl))
            line = "    {} {} = {};".format(my_decl, name, my_body)
            lines.append(line)

        lines.append("    return {};".format(ret_name))
        lines.append("}")

        return "\n".join(lines)

    def to_fptaylor(self):
        lines = list()

        lines.append("{")

        lines.append("Variables")
        for name, domain in self.inputs.items():
            lines.append("  real {} in [{}, {}];".format(name, *domain))
        lines.append("")

        lines.append("Definitions")
        for name, value in self.definitions.items():
            typ = self.types[name]
            rnd = TunedExpression.TYPES_TO_ROUNDS[typ]
            vstr = value.infix_str()
            if (type(value) == Operation
                and value.op in all_modifications_ast.OperationToFPTaylor):
                fptop = all_modifications_ast.OperationToFPTaylor[value.op]
                if value.op != fptop:
                    vstr = vstr.replace(value.op, fptop)
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

    def init_types(self, zr):
        types = dict()
        for name, bools in zr.bit_width_choices.items():
            found = False
            for bw_name, bool_name in bools.items():
                if zr.model[bool_name] == True:
                    types[name] = bw_name
                    found = True
                    break
            if found != True:
                logger.error("canot find type for {} = {}", name, self.definitions[name])
                logger.error(bools)
                sys.exit(1)
            assert(found == True)
        self.types = types

    def init_operators(self, zr):
        operators = dict()
        for name, bools in zr.operation_choices.items():
            found = False
            for op_name, bool_name in bools.items():
                if zr.model[bool_name] == True:
                    operators[name] = op_name
                    found = True
                    break
            assert(found == True)
        self.operators = operators

    def get_error(self, zr):
        self.error = zr.model["total_error"]

    def inplace_operators(self):
        for name, op in self.operators.items():
            old = self.definitions[name]
            new = Operation(op, *old.args)
            self.definitions[name] = new

    def inline_untyped(self):
        to_remove = set()
        for name, value in self.definitions.items():
            if name in self.types:
                continue
            to_remove.add(name)
            for n, v in self.definitions.items():
                if type(v) == Operation and name in [a.source for a in v.args if type(a) == Variable]:
                    new_args = list()
                    for a in v.args:
                        if type(a) == Variable and name == a.source:
                            new_args.append(value)
                        else:
                            new_args.append(a)
                    v.args = new_args
        for name in to_remove:
            del self.definitions[name]

    def get_info(self):
        info = {"operations": 0,
                "fp32_operations": 0,
                "fp64_operations": 0,
                "fp128_operations": 0,
                "casts": 0,
                "up_casts": 0,
                "fp32_to_fp64_casts": 0,
                "fp32_to_fp128_casts": 0,
                "fp64_to_fp128_casts": 0,
                "down_casts": 0,
                "fp64_to_fp32_casts": 0,
                "fp128_to_fp32_casts": 0,
                "fp128_to_fp64_casts": 0,}
        for op_kind in self.search_operations:
            for op in self.search_operations[op_kind]:
                info[op] = 0
        def update_info(name, value, my_type=None):
            if type(value) != Operation:
                return
            my_type = my_type or self.types[name]
            info["operations"] += 1
            if my_type == "fp32":
                info["fp32_operations"] += 1
            if my_type == "fp64":
                info["fp64_operations"] += 1
            if my_type == "fp128":
                info["fp128_operations"] += 1

            for op_kind in self.search_operations:
                if value.op in self.search_operations[op_kind]:
                    info[value.op] += 1
                    break

            for a in value.args:
                if type(a) == Operation:
                    update_info(None, a, my_type=my_type)
                    continue
                if type(a) != Variable:
                    continue
                inner_type = self.types[a.source]
                if my_type == inner_type:
                    continue
                info["casts"] += 1
                if my_type == "fp32" and inner_type == "fp64":
                    info["up_casts"] += 1
                    info["fp32_to_fp64_casts"] += 1
                if my_type == "fp32" and inner_type == "fp128":
                    info["up_casts"] += 1
                    info["fp32_to_fp128_casts"] += 1
                if my_type == "fp64" and inner_type == "fp128":
                    info["up_casts"] += 1
                    info["fp64_to_fp128_casts"] += 1
                if my_type == "fp64" and inner_type == "fp32":
                    info["down_casts"] += 1
                    info["fp64_to_fp32_casts"] += 1
                if my_type == "fp128" and inner_type == "fp32":
                    info["down_casts"] += 1
                    info["fp128_to_fp32_casts"] += 1
                if my_type == "fp128" and inner_type == "fp64":
                    info["down_casts"] += 1
                    info["fp128_to_fp64_casts"] += 1

        for name, value in self.definitions.items():
            update_info(name, value)

        self.info = info
