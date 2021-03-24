

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, Atom, FPCore, Operation
from utils import Logger


logger = Logger(level=Logger.EXTRA)




def generic_pretty_internals(obj, special_formatters):
    class_name = type(obj).__name__
    lines = [
        "+"+"-"*78+"+",
        "|"+" "*78+"|",
        "class: {}".format(class_name),
        "id: {}".format(id(obj)),
    ]
    if hasattr(obj, "name"):
        lines.append("name: {}".format(obj.name))
    for attr_name in dir(obj):
        if attr_name == "name":
            continue
        if attr_name.startswith("__") and attr_name.endswith("__"):
            continue
        attr = getattr(obj, attr_name)
        if callable(attr):
            continue
        body = attr
        if attr_name in special_formatters:
            body = special_formatters[attr_name](attr)
        elif type(attr) == dict:
            parts = list()
            for k,v in attr.items():
                if type(v) == dict:
                    part = "  {}:\n    {}".format(k, "\n    ".join("  {}: {}".format(k2, v2) for k2,v2 in v.items()))
                else:
                    part = "  {}: {}".format(k, v)
                parts.append(part)
            body = "\n"+"\n".join(parts)
        line = "{}: {}".format(attr_name, body)
        lines.append(line)

    lines.append("|"+" "*78+"|")
    lines.append("+"+"-"*78+"+")

    return "\n".join(lines)


@add_method(ASTNode)
def pretty_internals(self):
    return generic_pretty_internals(self, dict())


@add_method(Operation)
def pretty_internals(self):
    arg_internals = [a.pretty_internals() for a in self.args]
    fmt = {"args": lambda x :"[{}]".format(", ".join([a.name for a in x]))}
    return "\n".join([generic_pretty_internals(self, fmt)] + arg_internals)


@add_method(FPCore)
def pretty_internals(self):
    exp_internals = self.expression.pretty_internals()
    return generic_pretty_internals(self, dict()) + "\n" + exp_internals


