#!/usr/bin/env python3

import os.path as path
import matplotlib.pyplot as plt
import os
import subprocess
import sys
import shlex
import json

PYTHON_DIR = path.abspath(path.dirname(__file__))
GIT_DIR = path.split(PYTHON_DIR)[0]
COST_DIR = path.join(GIT_DIR, "cost-measurement")
sys.path.append(path.join(GIT_DIR, "src"))
sys.path.append(path.join(GIT_DIR, "src", "fptaylor"))
sys.path.append(path.join(GIT_DIR, "src", "fpcore_parser", "src"))

def graph(main_file):
    # > cd cost-measurement
    start = os.getcwd()
    os.chdir(COST_DIR)

    # > make
    with subprocess.Popen("make", stdout=subprocess.PIPE, stderr=subprocess.PIPE) as p:
        raw_out, raw_error = p.communicate()
        assert p.returncode == 0, raw_error.decode("utf8")

    # > ./bin/<main_file>
    command = "taskset -c 0 ./bin/{}".format(main_file.rstrip(".c")),
    with subprocess.Popen(command,
                          shell=True,
                          stdout=subprocess.PIPE,
                          stderr=subprocess.PIPE) as p:
        raw_out, raw_error = p.communicate()
        out = raw_out.decode("utf8")
        assert p.returncode == 0, raw_error.decode("utf8")

    # parse output
    data = json.loads(out)
    averages = list()
    errors = list()
    secs = data["secs"]
    for f in data["functions_data"]:
        name = f["name"]
        error = f["error_bound"]
        counts = f["counts"][1:]
        avg_time_s = (len(counts) * secs) / sum(counts)
        avg_time_ns = avg_time_s * 1e9
        averages.append(avg_time_ns)
        errors.append(float(error))

    # dump data
    dump_file = "{}.data".format(main_file.rstrip(".c"))
    with open(dump_file, 'w') as f:
        f.write("errors = {}\n".format(errors))
        f.write("averages = {}\n".format(averages))

    # plot
    fig, ax = plt.subplots()
    ax.scatter(errors, averages)
    ax.set_xscale('log')
    ax.set_xlabel("Error")
    xmin, xmax = ax.set_xlim()
    ax.set_xlim(xmax, xmin)
    ax.set_ylabel("Time (ns)")
    ax.set_title(main_file.rstrip(".c"))

    fig.savefig("{}.png".format(main_file.rstrip(".c")))

    os.chdir(start)

    return dump_file, averages

if __name__ == "__main__":
    graph(sys.argv[1])
