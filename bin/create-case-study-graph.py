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


def graph(items, outname):
    # plot
    fig, ax = plt.subplots()
    ax.axhline(1, color="grey")
    ax.axvline(1, color="grey")

    selected_names = {"optuner_74", "povray_photons_74", "all_char_povray",
                      "all_povray", "povray_photons_povray"}

    if outname == "case_study_end_to_end":
        errors_x = [i["error"] for i in items if i["name"] not in selected_names]
        speedups_y = [i["speedup"] for i in items if i["name"] not in selected_names]
    else:
        errors_x = [i["error"] for i in items if i["name"] not in selected_names]
        speedups_y = [i["speedup"] for i in items if i["name"] not in selected_names]
    ax.plot(errors_x, speedups_y, marker=".", color="blue", linewidth=0, markersize=11)

    if outname == "case_study_end_to_end":
        unmodified = [i for i in items if i["name"] == "all_char_povray"][0]
        unmodified_x = [unmodified["error"]]
        unmodified_y = [unmodified["speedup"]]
    else:
        unmodified = 0
        unmodified_x = []
        unmodified_y = []
    ax.plot(unmodified_x, unmodified_y, marker="o", mfc="white", color="orange", markersize=8)

    if outname == "case_study_end_to_end":
        povray = [i for i in items if i["name"] == "all_povray"][0]
        povray_x = [povray["error"]]
        povray_y = [povray["speedup"]]
    else:
        povray = [i for i in items if i["name"] == "povray_photons_povray"][0]
        povray_x = [povray["error"]]
        povray_y = [povray["speedup"]]
    ax.plot(povray_x, povray_y, marker="*", color="green", markersize=11)

    if outname == "case_study_end_to_end":
        selected_1 = [i for i in items if i["name"] == "optuner_74"][0]
        selected_1_x = [selected_1["error"]]
        selected_1_y = [selected_1["speedup"]]
    else:
        selected_1 = [i for i in items if i["name"] == "povray_photons_74"][0]
        selected_1_x = [selected_1["error"]]
        selected_1_y = [selected_1["speedup"]]
    ax.plot(selected_1_x, selected_1_y, marker="*", color="red", markersize=11)


    if outname == "case_study_end_to_end":
        ax.set_xlabel("SSIM (see footnote 7)")
        ax.invert_xaxis()
    else:
        ax.set_xlabel("Error vs GLibC")
        ax.set_xscale('log')

    ax.set_ylabel("Speedup vs GLibC")

    fig.savefig("{}.png".format(outname),
                bbox_inches="tight",
                pad_inches=0.0625)

    plt.close()


def read_all_json(filename):
    with open(filename, 'r') as f:
        raw = f.read()
    raw_funcs = raw.split("}\n{")
    if len(raw_funcs) > 1:
        raw_funcs = [raw_funcs[0]+"}"] + ["{"+rf+"}" for rf in raw_funcs[1:-1]] + ["{"+raw_funcs[-1]]
    funcs = list()
    for s in raw_funcs:
        try:
            funcs.append(json.loads(s))
        except Exception as e:
            print(s)
            raise e

    return funcs

def read_case_study(filename):
    min_comp = list()
    speedups = list()

    funcs = read_all_json(filename)

    glibc = [f for f in funcs if f["name"] == "all_glibc"][0]
    glibc_time = float(glibc["time"])

    for f in funcs:
        f["speedup"] = glibc_time/float(f["time"])
        f["error"] = f["worst_compare"]

    return [f for f in funcs if not f["name"].startswith("fchar")]


def read_benchmark(filename):
    with open(filename) as f:
        data = json.loads(f.read())
    glibc_error = None
    glibc_time = None
    for run in data["runs"]:
        total_time = sum(r["time"] for r in run["runs"])
        total_count = sum(r["count"] for r in run["runs"])
        run["time"] = total_time / total_count
        if run["function"].endswith("_glibc"):
            glibc_error = run["error"]
            glibc_time = total_time / total_count

    for run in data["runs"]:
        run["name"] = run["function"]
        run["error"] = run["error"] / glibc_error
        run["speedup"] = glibc_time / run["time"]

    runs = list()
    data["runs"].sort(key=lambda r: r["error"])
    current = data["runs"][0]["time"]
    for run in data["runs"]:
        name = run["function"]
        if name == "povray_photons_povray":
            runs.append(run)
            continue
        if current >= run["time"]:
            current = run["time"]
            runs.append(run)
    return runs



if __name__ == "__main__":
    #end_to_end = [f for f in sys.argv[1:] if path.basename(f) == "case_study.json"][0]
    #graph(read_case_study(end_to_end), "case_study_end_to_end")

    bench = [f for f in sys.argv[1:] if path.basename(f) == "time_povray_photons.json"][0]
    graph(read_benchmark(bench), "case_study_expression")
