#!/usr/bin/env python3


import sys
import json


def read_all_json(filename):
    with open(filename, 'r') as f:
        raw = f.read()
    raw_funcs = raw.split("}\n{")
    if len(raw_funcs) > 1:
        raw_funcs = [raw_funcs[0]+"}"] + ["{"+rf+"}" for rf in raw_funcs[1:-1]] + ["{"+raw_funcs[-1]]
    funcs = list()
    for s in raw_funcs:
        try:
            funcs.append(json.loads(s))
        except Exception as e:
            print(s)
            raise e

    return funcs

def transform_exp(funcs):
    expm1s = list()
    for f in funcs:
        if f["operation"] != "exp":
            continue
        d1 = 5e-300
        e1 = 1e-16
        d2 = f["delta"]
        e2 = f["epsilon"]
        new_f = {
            "cname": f["cname"].replace("exp", "expm1"),
            "delta": e1*e2 + e2 + d2*e1 + d1 + d2,
            "domain": f["domain"],
            "epsilon": e1 + e2 + e1*e2,
            "operation": "expm1"
        }
        expm1s.append(new_f)
    return expm1s

def transform_log(funcs):
    log1ps = list()
    for f in funcs:
        if f["operation"] != "log":
            continue
        d1 = 5e-300
        e1 = 1e-16
        d2 = f["delta"]
        e2 = f["epsilon"]
        xlo = f["domain"][0]
        xhi = f["domain"][1]
        new_f = {
            "cname": f["cname"].replace("log", "log1p"),
            "delta": (d1*(1+e2)) / (1+xlo) + e1*(1+e2) + d2,
            "domain": [xlo - 1, xhi - 1],
            "epsilon": e2,
            "operation": "log1p"
        }
        log1ps.append(new_f)
    return log1ps

if __name__ == "__main__":
    raw_funcs = read_all_json(sys.argv[1])
    expm1s = transform_exp(raw_funcs)
    log1ps = transform_log(raw_funcs)

    for f in raw_funcs + expm1s + log1ps:
        print(json.dumps(f, sort_keys=True, indent=4))
