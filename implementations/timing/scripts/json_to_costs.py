#!/usr/bin/env python3


import json
import math
import sys

from os import path




def transform_to_costs(data):
    costs = dict()

    for run_data in data["runs"]:
        fname = run_data["function"]
        times_per = list()
        for r in run_data["runs"]:
            time_per = r["time"] / r["count"]
            times_per.append(time_per)
        avg_time = sum(times_per) / len(times_per)
        min_time = min(times_per)
        max_time = max(times_per)

        diffs = [t-avg_time for t in times_per]
        squares = [d**2 for d in diffs]
        avg_squares = sum(squares) / len(squares)
        stddev_time = math.sqrt(avg_squares)

        costs[fname] = {"average": avg_time,
                        "minimum": min_time,
                        "maximum": max_time,
                        "stddev": stddev_time}
    return costs


def read_json(filename):
    print("Reading: {}".format(filename))
    with open(filename, "r") as f:
        contents = f.read()
    print("  Parsing", flush=True)
    data = json.loads(contents)
    print("  Done", flush=True)
    return data


def main(argv):
    fname = argv[1]
    in_dir, in_fname = path.split(fname)
    out_fname = "{}_{}".format("costs", in_fname)
    outfile = path.join(in_dir, out_fname)

    data = read_json(fname)
    costs = transform_to_costs(data)
    out_json = json.dumps(costs, sort_keys=True, indent=4)

    with open(outfile, "w") as f:
        f.write(out_json)
    print("Output saved to: {}".format(outfile))



if __name__ == "__main__":
    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
