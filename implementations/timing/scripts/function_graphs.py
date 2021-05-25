#!/usr/bin/env python3


import sys
import json

import matplotlib.pyplot as plt



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

def read_costs(fname):
    with open(fname, 'r') as f:
        raw = f.read()
    data = json.loads(raw)
    return data

def strip_paren(string):
    return string[0:string.index("(")]


def generate_epsilon_vs_cost(funcs, name):

    x_epsilons_raw = list()
    y_costs_raw = list()
    x_epsilons_ml2 = list()
    y_costs_ml2 = list()
    x_epsilons_ml = list()
    y_costs_ml = list()
    x_epsilons_lib = list()
    y_costs_lib = list()

    for f in funcs:
        if "raw" in f["cname"]:
            x_epsilons_raw.append(f["epsilon"])
            y_costs_raw.append(f["cost"])
        elif "ml2" in f["cname"]:
            x_epsilons_ml2.append(f["epsilon"])
            y_costs_ml2.append(f["cost"])
        elif "ml" in f["cname"]:
            x_epsilons_ml.append(f["epsilon"])
            y_costs_ml.append(f["cost"])
        else:
            x_epsilons_lib.append(f["epsilon"])
            y_costs_lib.append(f["cost"])

    fig, ax = plt.subplots()
    ax.scatter(x_epsilons_raw, y_costs_raw, color="blue",   alpha=0.7, s=100)
    ax.scatter(x_epsilons_ml2, y_costs_ml2, color="orange", alpha=0.7, s=100)
    ax.scatter(x_epsilons_ml,  y_costs_ml,  color="purple", alpha=0.7, s=100)
    ax.scatter(x_epsilons_lib, y_costs_lib, color="green",  alpha=0.7, s=100)

    ax.set_xscale('log')
    xmin, xmax = ax.set_xlim()
    ax.set_xlim(xmax, xmin)

    ymin, ymax = ax.set_ylim()
    ax.set_ylim(0, ymax)

    if False:
        ax.axis("off")
        ax.get_xaxis().set_ticks([])
        ax.get_yaxis().set_ticks([])

    fig.savefig("{}.png".format(name.replace(" ", "_")),
                bbox_inches="tight",
                pad_inches=0)

def keep_widest(funcs):
    found_funcs = dict()
    for f in funcs:
        cname = f["cname"]
        if cname not in found_funcs:
            found_funcs[cname] = f
            continue
        old = found_funcs[cname]
        if old["domain"][1] < f["domain"][1]:
            found_funcs[cname] = f
    return list(found_funcs.values())

if __name__ == "__main__":
    raw_funcs = read_all_json(sys.argv[1])
    raw_funcs = keep_widest(raw_funcs)

    costs = read_costs(sys.argv[2])
    funcs = list()
    for f in raw_funcs:
        if f["cname"] in costs:
            f["cost"] = costs[f["cname"]]
            funcs.append(f)
        else:
            print("No cost for '{}'".format(f["cname"]))

    for c in costs:
        found = False
        for f in funcs:
            if c == f["cname"]:
                found = True
        if not found:
            print("No error for '{}'".format(c))

    coss = [f for f in funcs if f["operation"] == "cos"]
    generate_epsilon_vs_cost(coss, "Table 2 cos")

    exps = [f for f in funcs if f["operation"] == "exp"]
    generate_epsilon_vs_cost(exps, "Table 2 exp")

    logs = [f for f in funcs if f["operation"] == "log"]
    generate_epsilon_vs_cost(logs, "Table 2 log")

    sins = [f for f in funcs if f["operation"] == "sin"]
    generate_epsilon_vs_cost(sins, "Table 2 sin")

    tans = [f for f in funcs if f["operation"] == "tan"]
    generate_epsilon_vs_cost(tans, "Table 2 tan")
