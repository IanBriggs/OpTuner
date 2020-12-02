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

PYTHON_DIR = path.abspath(path.dirname(__file__))
GIT_DIR = path.split(PYTHON_DIR)[0]
COST_DIR = path.join(GIT_DIR, "cost-measurement")
sys.path.append(path.join(GIT_DIR, "src"))
sys.path.append(path.join(GIT_DIR, "src", "fptaylor"))
sys.path.append(path.join(GIT_DIR, "src", "fpcore_parser", "src"))


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
    ax.scatter(x_errors, y_speedups, alpha=0.5, s=100)
    ax.set_xscale('log')
    ax.set_xlabel("Error", fontsize=20)
    xmin, xmax = ax.set_xlim()
    ax.set_xlim(xmax, xmin)
    ax.set_ylabel("Speedup", fontsize=20)
    ax.tick_params(labelsize=15)
    #ax.set_title("Aggregate", fontsize=20)

    ax.axhline(1, color="r", linewidth=2)

    x = [math.log(t) for t in x_errors]
    y = y_speedups
    m, b = np.poly1d(np.polyfit(x, y, 1))
    ax.plot(np.unique(x_errors), m*(np.unique(x)) + b, color="green", linewidth=3)

    fig.savefig("{}.png".format(outname))


def read_all(filenames):
    errorss = list()
    speedupss = list()

    data = list()
    for fname in filenames:
        with open(fname) as f:
            errors, speedups = normalize(*read(f))
            errorss.append(errors)
            speedupss.append(speedups)

    return errorss, speedupss



def read(fd):
    l = fd.readline()
    errors = [float(x) for x in l[l.find("[") + 1:l.find("]")].split(", ")]
    l = fd.readline()
    averages = [float(x) for x in l[l.find("[") + 1:l.find("]")].split(", ")]
    return errors, averages

def normalize(errors, averages):
    last_e = errors[-1]
    last_a = averages[-1]
    return [e/last_e for e in errors], [last_a/a for a in averages]

if __name__ == "__main__":
    errorss, speedupss = read_all(sys.argv[1:])
    graph(errorss, speedupss, "aggregate")
