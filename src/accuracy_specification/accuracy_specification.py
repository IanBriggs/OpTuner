

from utils import Logger

import json


logger = Logger(level=Logger.EXTRA)




def read_file(filename):
    with open(filename, 'r') as f:
        raw = f.read()
    raw_specs = raw.split("}\n{")
    if len(raw_specs) > 1:
        raw_specs = ([raw_specs[0]+"}"]
                     + ["{"+rf+"}" for rf in raw_specs[1:-1]]
                     + ["{"+raw_specs[-1]])
    return [AccuracySpecification.from_json(r) for r in raw_specs]


class AccuracySpecification():

    def __init__(self, operation, cname, domain, epsilon, delta, cost=None):
        self.operation = operation
        self.cname = cname
        self.domain = domain
        self.epsilon = epsilon
        self.delta = delta
        self.cost = cost

    @staticmethod
    def from_json(text):
        d = json.loads(text)
        return AccuracySpecification(d["operation"],
                                     d["cname"],
                                     d["domain"],
                                     d["epsilon"],
                                     d["delta"])


    def set_cost(self, cost):
        assert(self.cost is None)
        self.cost = cost
