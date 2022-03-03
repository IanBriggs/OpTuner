#!/usr/bin/env python3


import sys
import json

import matplotlib.pyplot as plt

from mpl_toolkits.axes_grid1.inset_locator import (inset_axes, InsetPosition,
                                                  mark_inset)


def generate_cactus_plot(raw_runtimes):
    runtimes = list(raw_runtimes.items())
    runtimes.sort(key=lambda t:t[1])

    print(sum(t[1] for t in runtimes) / len(runtimes))

    old_xs = [r[1] for r in runtimes]
    old_ys = list(range(len(old_xs)))
    xs = [old_xs[0]]
    ys = [old_ys[0], old_ys[0]]
    for i in range(1, len(old_xs)):
        xs.append(old_xs[i])
        xs.append(old_xs[i])
        ys.append(old_ys[i])
        ys.append(old_ys[i])
    ys.pop()

    fig, ax1 = plt.subplots()

    ax1.plot(xs, ys)
    ax1.set_xlabel("Time Elapsed (sec)")
    ax1.set_ylabel("Number completed")

    # from: https://scipython.com/blog/inset-plots-in-matplotlib/
    ax2 = plt.axes([0,0,1,1])
    ip = InsetPosition(ax1, [0.4,0.2,0.5,0.5])
    ax2.set_axes_locator(ip)
    mark_inset(ax1, ax2, loc1=2, loc2=4, fc="none", ec='0.5')

    zoom = int(len(xs)*0.9)
    zoom_xs = xs[:zoom]
    zoom_ys = ys[:zoom]
    ax2.plot(zoom_xs, zoom_ys)

    fig.savefig("cactus.png")
    plt.close()


if __name__ == "__main__":
    with open(sys.argv[1], 'r') as f:
        raw = f.read()

    raw_runtimes = json.loads(raw)
    generate_cactus_plot(raw_runtimes)
