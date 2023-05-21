#!/bin/bash

export SCRIPT_LOCATION=$(readlink -f $(dirname $0))
cd ${SCRIPT_LOCATION}

set -e
set -x


./bin/optuner benchmarks/exp1x.fpcore
cd implementations/timing
make
mkdir -p json
./bin/time_exp1x > json/time_exp1x.json
./scripts/pink_graph.py json/time_exp1x.json
eog aggregate.png zoomed_aggregate.png
