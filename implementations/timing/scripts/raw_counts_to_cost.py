#!/usr/bin/env python3


import sys
import json

import matplotlib.pyplot as plt




def read_raw_counts(fname):
    with open(fname, 'r') as f:
        raw = f.read()
    data = json.loads(raw)

    secs_per_call = dict()
    for run in data["runs"]:
        cname = run["function"]
        total_time = sum(r["time"] for r in run["runs"])
        total_count = sum(r["count"] for r in run["runs"])
        secs_per_call[cname] = total_time / total_count

    return {k:v*1e9 for k,v in secs_per_call.items()}


if __name__ == "__main__":
    funcs = read_raw_counts(sys.argv[1])
    print(json.dumps(funcs, sort_keys=True, indent=4))
