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

def to_step(xs, ys):
    new_xs = [xs[0]]
    new_ys = [ys[0], ys[0]]
    for i in range(1, len(xs)):
        new_xs.append(xs[i])
        new_xs.append(xs[i])
        new_ys.append(ys[i])
        new_ys.append(ys[i])
    new_ys.pop()
    return new_xs, new_ys

def graph(errorss, speedupss, outname, zoomed=False):
    assert(len(errorss) == len(speedupss))
    x_errors = sum(errorss, [])
    y_speedups = sum(speedupss, [])

    # plot
    fig, ax = plt.subplots()
    for i in range(len(errorss)):
        #line
        xs, ys = to_step(errorss[i], speedupss[i])
        ax.plot(xs, ys, marker=" ", mfc="#ff007f", color="pink", alpha=0.7)

        # points
        ax.plot(errorss[i], speedupss[i], marker="o", linestyle="None", mfc="#ff007f", color="pink", alpha=0.7)

    #ax.scatter(x_errors, y_speedups, alpha=0.60, s=60, color="#ff007f")
    ax.set_xscale('log')
    ax.set_xlabel("Accuracy vs GLibC")
    # xmin, xmax = ax.set_xlim()
    # ax.set_xlim(xmax, xmin)
    ax.set_ylabel("Speedup vs GLibC")
    #ax.tick_params(labelsize=1)
    #ax.set_title("Aggregate", fontsize=20)

    ax.axhline(1, color="grey")
    ax.axvline(1, color="grey")

    if zoomed:
        xmin = min(x_errors)
        xmax = 10.0
        assert(xmin < xmax)
        xextra = (xmax - xmin) / 20
        zoomed_y = [y for x,y in zip(x_errors, y_speedups) if x <= xmax]
        ymin = min(zoomed_y)
        ymax = max(zoomed_y)
        yextra = (ymax - ymin) / 20
        xmin -= xextra * 2**-2
        xmax += xextra
        ymin -= yextra
        ymax += yextra
        ax.set_xlim(xmin, xmax)
        ax.set_ylim(ymin, ymax)

    fig.savefig("{}.png".format(outname))
    plt.close()


def read_all(filenames):
    errorss = list()
    speedupss = list()

    data = list()
    total_points = 0
    total_skipped = 0
    for fname in filenames:
        #print(fname)
        with open(fname) as f:
            data = json.loads(f.read())
            errors = list()
            averages = list()
            if len(data["runs"]) == 0:
                #print("  no data")
                continue
            glibc_e = None
            glibc_a = None
            for run in data["runs"]:
                errors.append(run["error"])
                total_time = sum(r["time"] for r in run["runs"])
                total_count = sum(r["count"] for r in run["runs"])
                averages.append(total_time / total_count)
                if run["function"].endswith("_glibc"):
                    glibc_e = run["error"]
                    glibc_a = total_time / total_count
            errors, speedups = normalize(errors, averages, glibc_e, glibc_a)
            tot = len(errors)
            total_points += tot - 2 # we force 2 configurations
            #print("  points: {}".format(tot))
            old_es = list(zip(errors, speedups))
            errors = list()
            speedups = list()
            current = old_es[0][1] - 1
            skipped = -2 # we force 2 configurations
            for e,s in old_es:
                if s < current:
                    skipped += 1
                else:
                    errors.append(e)
                    speedups.append(s)
                    current = s
            total_skipped += max(skipped, 0)
            #print("  non pareto points: {}".format(skipped))
            errorss.append(errors)
            speedupss.append(speedups)
            #graph([errors], [speedups], path.basename(fname).replace(".json",""))

    return errorss, speedupss, total_points, total_skipped


def normalize(errors, averages, pinned_e, pinned_a):
    tups = [(e,a) for e,a in zip(errors, averages)]
    tups.sort(key=lambda t:t[0])
    errors = [t[0] for t in tups]
    averages = [t[1] for t in tups]
    return [e/pinned_e for e in errors], [pinned_a/a for a in averages]

def zoom(errors, speedups, max_zoomed_err):
    tups = [(e,s) for e,s in zip(errors, speedups) if e <= max_zoomed_err]
    tups.sort(key=lambda t:t[0])
    errors = [t[0] for t in tups]
    speedups = [t[1] for t in tups]
    return errors, speedups

if __name__ == "__main__":
    errorss, speedupss, total_points, total_skipped = read_all(sys.argv[1:])
    print("Total points: {}".format(total_points))
    print("Total skipped: {}".format(total_skipped))
    print("Percentage: {}".format((total_skipped/total_points)*100))
    graph(errorss, speedupss, "aggregate")
    graph(errorss, speedupss, "zoomed_aggregate", zoomed=True)
