#!/bin/bash

export SCRIPT_LOCATION=$(readlink -f $(dirname $0))
cd ${SCRIPT_LOCATION}

set -e
set -x

mkdir -p logs
mkdir -p implementations/timing/json

run ()
{
    \time -f %e ./bin/optuner benchmarks/$1.fpcore --verbosity medium >& logs/log_$1.txt
    TIME=$(tail ./logs/log_$1.txt -n1)
    echo "\"$1\": $TIME" >> ./logs/tool_time.txt
}
export -f run

time_func ()
{
    ./bin/time_$1 > json/time_$1.json
}
export -f time_func


run povray_photons

cd implementations/timing
make > /dev/null

time_func povray_photons
