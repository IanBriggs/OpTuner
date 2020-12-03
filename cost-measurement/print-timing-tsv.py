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

    for e in sorted(errors, key=lambda e:e["functions_data"][0]["name"]):
        print("values\t{}".format(e["values"]))
        print("secs\t{}".format(e["secs"]))
        print("lows\t{}".format("\t".join([str(l) for l in e["lows"]])))
        print("highs\t{}".format("\t".join([str(h) for h in e["highs"]])))
        print("\t".join(["name", "error_bound", "counts"]))
        for f in sorted(e["functions_data"], key=lambda f:f["name"]):
            items = [f["name"], f["error_bound"], *f["counts"]]
            print("\t".join([str(i) for i in items]))
