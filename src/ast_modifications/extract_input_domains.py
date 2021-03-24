

from ast_modifications.modifier import add_method
from fpcore.ast import ASTNode, FPCore, Operation, Variable, Number
from utils import Logger


logger = Logger(level=Logger.EXTRA)




class NoPreError(Exception):
    pass

class BadPreError(Exception):
    def __init__(self, pre):
        self.pre = pre

class DomainError(Exception):
    def __init__(self, low, high, name):
        self.low = low
        self.high = high
        self.name = name


@add_method(ASTNode)
def extract_input_domains(self):
    # Make sure calling extract_input_domains leads to an error if not overridden
    class_name = type(self).__name__
    msg = "extract_input_domains not implemented for class {}".format(class_name)
    raise NotImplementedError(msg)


def normalize_comparison(comp):
    # Given an n-arry comparison return a list of comparisons which all use
    # "<=" and only have two arguments

    # Only simple domains are supported
    # todo: add support for constant mathematical domains (eg (- 1 1/256))
    if any([type(a) not in {Variable, Number} for a in comp.args]):
        logger.warning("Dropping precondition: {}", comp)
        return list()

    # Make exclusive comparisons inclusive
    if comp.op in {"<", ">"}:
        logger.warning("Turning exclusive bound to inclusive: {}", comp)
        comp.op += "="

    # Normalize => to >=
    if comp.op == "=>":
        comp.op = ">="

    # Reverse if comparison was >=
    if comp.op == ">=":
        comp.op = "<="
        comp.args = list(reversed(comp.args))

    # Break comparison into overlaping pairs
    ret_list = list()
    for i in range(len(comp.args)-1):
        ret_list.append(Operation("<=", comp.args[i], comp.args[i+1]))

    return ret_list


def get_domains(precondition_list, arguments):
    # Search preconditions for variable domains
    string_arguments = {a.source for a in arguments}
    lower_domains = {s: None for s in string_arguments}
    upper_domains = {s: None for s in string_arguments}

    def is_input(x):
        return type(x) == Variable and x.source in string_arguments

    for pre in precondition_list:

        # We only get domains from comparisons
        if pre.op not in {"<", ">", "<=", ">=", "=>"}:
            logger.warning("Dropping precondition: {}", pre)
            continue

        # Get list of pairs
        normal = normalize_comparison(pre)
        for comp in normal:

            # If the comparison is (<= <Variable> <Number>) it is an upper
            # bound
            if is_input(comp.args[0]) and type(comp.args[1]) == Number:
                upper_domains[str(comp.args[0])] = comp.args[1]
                continue

            # If the comparison is (<= <Number> <Variable>) it is a lower
            # bound
            if type(comp.args[0]) == Number and is_input(comp.args[1]):
                lower_domains[str(comp.args[1])] = comp.args[0]
                continue

            # Only simple domains are supported
            logger.warning("Dropping precondition: {}", comp)

    # Bring upper and lower bounds together
    domains = dict()
    for name in lower_domains:
        domains[name] = (lower_domains[name], upper_domains[name])

    return domains


def properties_to_argument_domains(arguments, properties):
    # Take an FPCore and return and argument->domain mapping
    # An incomplete mapping is an error

    # Search the FPCore's properties for the :pre property
    # todo: add support for multiple ':pre' properties
    pre = None
    for prop in properties:
        if str(prop.name) == "pre":
            pre = prop
            continue

    # If we couldn't find ':pre' there is no domain
    if pre is None:
        raise NoPreError()

    # If pre is not an Operation we can't handle it
    if type(pre.value) != Operation:
        raise BadPreError(pre)

    # The pre can be a single bound description, or multiple joined with an 'and'
    if pre.value.op == "and":
        property_list = list(pre.value.args)
    else:
        property_list = [pre.value]

    # Get domains and check that all are there
    domains = get_domains(property_list, arguments)
    for var, val in domains.items():
        if val[0] is None or val[1] is None:
            raise DomainError(val[0], val[1], var)

    return domains


@add_method(FPCore)
def extract_input_domains(self):
    self.domains = properties_to_argument_domains(self.arguments,
                                                  self.properties)

