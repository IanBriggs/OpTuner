#!/usr/bin/env python3

import os.path as path
import matplotlib.pyplot as plt
import numpy as np
import os
import subprocess
import sys
import shlex
import json
import math

from os import path

def aggregate_graph(filenames):
    start = os.getcwd()
    os.chdir(COST_DIR)
    pointss = read_all(filenames)
    os.chdir(start)
    graph(pointss, "aggragate")

def graph(errorss, speedupss, outname, dump_file=None):
    assert(len(errorss) == len(speedupss))
    x_errors = sum(errorss, [])
    y_speedups = sum(speedupss, [])

    # dump data
    # if dump_file is None:
    #     dump_file = path.join(COST_DIR, "{}.data".format(outname))
    # with open(dump_file, 'w') as f:
    #     f.write("x_errors = {}\n".format(x_errors))
    #     f.write("y_speedups = {}\n".format(y_speedups))

    # plot
    fig, ax = plt.subplots()
    for i in range(len(errorss)):
        ax.plot(errorss[i], speedupss[i], marker="o", mfc="#ff007f", color="black")
    #ax.scatter(x_errors, y_speedups, alpha=0.60, s=60, color="#ff007f")
    ax.set_xscale('log')
    ax.set_xlabel("Accuracy vs GLibC")
    xmin, xmax = ax.set_xlim()
    ax.set_xlim(xmax, xmin)
    ax.set_ylabel("Speedup vs GLibC")
    #ax.tick_params(labelsize=1)
    #ax.set_title("Aggregate", fontsize=20)

    ax.axhline(1, color="grey")

    # if len(errorss) > 2:
    #     x = [math.log(t) for t in x_errors]
    #     y = y_speedups
    #     m, b = np.poly1d(np.polyfit(x, y, 1))
    #     ax.plot(np.unique(x_errors), m*(np.unique(x)) + b, color="blue", linewidth=2)

    fig.savefig("{}.png".format(outname))
    plt.close()


def read_all(filenames):
    errorss = list()
    speedupss = list()

    data = list()
    for fname in filenames:
        print(fname)
        with open(fname) as f:
            data = json.loads(f.read())
            errors = list()
            averages = list()
            if len(data["runs"]) == 0:
                print("  no data")
                continue
            for run in data["runs"]:
                errors.append(run["error"])
                total_time = sum(r["time"] for r in run["runs"])
                total_count = sum(r["count"] for r in run["runs"])
                averages.append(total_time / total_count)
            errors, speedups = normalize(errors, averages)
            errorss.append(errors)
            speedupss.append(speedups)
            graph([errors], [speedups], path.basename(fname).replace(".json",""))

    return errorss, speedupss


def normalize(errors, averages):
    errors.sort()
    averages.sort()
    last_e = errors[-1]
    last_a = averages[-1]
    return [e/last_e for e in errors], [last_a/a for a in averages]

if __name__ == "__main__":
    errorss, speedupss = read_all(sys.argv[1:])
    graph(errorss, speedupss, "aggregate")
