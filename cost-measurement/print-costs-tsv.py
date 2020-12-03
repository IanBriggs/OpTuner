#!/usr/bin/env python3

import json
import sys

if __name__ == "__main__":
    with open(sys.argv[1], 'r') as f:
        raw = f.read()
    raw_errors = raw.split("}\n{")
    if len(raw_errors) > 1:
        raw_errors = [raw_errors[0]+"}"] + ["{"+rf+"}" for rf in raw_errors[1:-1]] + ["{"+raw_errors[-1]]
    errors = [json.loads(rf) for rf in raw_errors]

    secs_per_call = dict()
    for e in errors:
        secs = e["secs"]
        for f in e["functions_data"]:
            counts = f["counts"]
            avg_counts = sum(counts) / len(counts)
            avg_secs_per_call = secs / avg_counts
            secs_per_call[f["name"]] = avg_secs_per_call

    mintime = min(secs_per_call.values())

    costs = {k:v/mintime for k,v in secs_per_call.items()}

    scale = 1
    intcosts = {k:int(scale*v) for k,v in costs.items()}
    while True:
        intcosts = {k:int(scale*v) for k,v in costs.items()}
        unique_costs = set(intcosts.values())
        if len(unique_costs) == len(costs):
            break
        scale *= 10

    for name,cost in intcosts.items():
        print("{}\t{}".format(name, cost))
