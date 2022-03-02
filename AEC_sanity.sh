#!/bin/bash

set -e
set -x


./bin/optuner benchmarks/exp1x.fpcore
cd implementations/timing
make
./bin/time_exp1x > json/time_exp1x.json
./scripts/pink_graph.py json/time_exp1x.json
eog time_exp1x.png
