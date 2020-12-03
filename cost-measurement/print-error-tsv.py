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

    for e in errors:
        print("points\t{}".format(e["points"]))
        print("lows\t{}".format("\t".join([str(l) for l in e["lows"]])))
        print("highs\t{}".format("\t".join([str(h) for h in e["highs"]])))
        print("\t".join(["name",
                         "worst_abs_input", "worst_abs_expected", "worst_abs_actual", "worst_abs_diff",
                         "worst_rel_input", "worst_rel_expected", "worst_rel_actual", "worst_rel_diff",]))
        for f in sorted(e["function_data"], key=lambda f:f["name"]):
            items = [f["name"],
                     f["worst_abs_inputs"][0], f["worst_abs_expected"], f["worst_abs_actual"], f["worst_abs_diff"],
                     f["worst_rel_inputs"][0], f["worst_rel_expected"], f["worst_rel_actual"], f["worst_rel_diff"]]
            print("\t".join([str(i) for i in items]))
