#!/usr/bin/env python3


import json
import math
import sys

from os import path




def read_json(filename):
    print("Reading: {}".format(filename))
    with open(filename, "r") as f:
        contents = f.read()
    print("  Parsing", flush=True)
    data = json.loads(contents)
    print("  Done", flush=True)
    return data

def tsv_ize(data, func):
    lines = [[""],
             ["average"],
             ["maximum"],
             ["minimum"],
             ["stddev"],]
    for k in sorted(data):
        if func not in k:
            continue
        v = data[k]
        lines[0].append(k)
        lines[1].append(str(v["average"]))
        lines[2].append(str(v["maximum"]))
        lines[3].append(str(v["minimum"]))
        lines[4].append(str(v["stddev"]))

    text = "\n".join("\t".join(row) for row in lines)

    return text


def main(argv):
    fname = argv[1]
    in_dir, in_fname = path.split(fname)
    out_fname = "{}_{}".format("tsv", in_fname)
    outfile = path.join(in_dir, out_fname)

    data = read_json(fname)

    text = tsv_ize(data, "exp")
    text += "\n\n"
    text += tsv_ize(data, "log")
    text += "\n\n"
    text += tsv_ize(data, "sin")
    text += "\n\n"
    text += tsv_ize(data, "tan")
    text += "\n"

    with open(outfile, "w") as f:
        f.write(text)
    print("Output saved to: {}".format(outfile))



if __name__ == "__main__":
    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
