#!/bin/bash

set -e
set -x

cd implementations/timing
make
./bin/time_all > raw_counts.json
./scripts/raw_counts_to_cost.py raw_counts.json > ../all_costs.json
