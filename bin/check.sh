#!/bin/bash

set -x
set -e

export SCRIPT_LOCATION=$(readlink -f $(dirname $0))

pushd () {
    command pushd "$@" > /dev/null
}

popd () {
    command popd > /dev/null
}

rm -rf ${SCRIPT_LOCATION}/../implementations/timing/bin
rm -rf ${SCRIPT_LOCATION}/../implementations/timing/json
rm -rf ${SCRIPT_LOCATION}/../implementations/timing/kern
rm -rf ${SCRIPT_LOCATION}/../implementations/timing/kern_main

mkdir ${SCRIPT_LOCATION}/../implementations/timing/bin
mkdir ${SCRIPT_LOCATION}/../implementations/timing/json
mkdir ${SCRIPT_LOCATION}/../implementations/timing/kern
mkdir ${SCRIPT_LOCATION}/../implementations/timing/kern_main

export check_date=$(date +%s)


mkdir ${SCRIPT_LOCATION}/${check_date}
cp ${SCRIPT_LOCATION}/style.css ${SCRIPT_LOCATION}/${check_date}/style.css
cat <<EOF > ${SCRIPT_LOCATION}/${check_date}/index.html
<!doctype html>
<meta charset="utf-8" />
<title>Optuner Results for $(date +%Y-%m-%d)</title>
<link rel="stylesheet" href="style.css" />

<h1>Function Graphs</h1>
<ul id="functions">
  <img src="Table_2_log.png" />
  <img src="Table_2_exp.png" />
  <img src="Table_2_sin.png" />
  <img src="Table_2_cos.png" />
  <img src="Table_2_tan.png" />
</ul>

<h1>Aggregate Graph</h1>
<img src="aggregate.png" />

<h1>Zoomed Aggregate Graph</h1>
<img src="zoomed_aggregate.png" />

<ul id="detail">
  <h1>Detailed Graphs</h1>
EOF

run ()
{
    \time -f %e timeout $1m ${SCRIPT_LOCATION}/optuner ${SCRIPT_LOCATION}/../benchmarks/$2.fpcore --verbosity medium >& ${SCRIPT_LOCATION}/${check_date}/log_$2.txt
    TIME=$(tail ${SCRIPT_LOCATION}/${check_date}/log_$2.txt -n1)
    pushd ${SCRIPT_LOCATION}/../implementations/timing/
    make > /dev/null
    if [ -f ./bin/time_$2 ] ; then
        ./bin/time_$2 > json/time_$2.json
    fi
    popd
    cat <<EOF >> ${SCRIPT_LOCATION}/${check_date}/index.html
  <li>
    <h1>$2</h1>
    <img src="time_$2.png" />
    <time>$TIME seconds runtime</time>
  </li>
EOF
}
export -f run

# Case study
run 120 povray_photons

# Normal
run 10 Data_HyperLogLog_Type_size_from_hyperloglog_0_3_4_A
run 10 Data_Number_Erf_dmerfcx_from_erf_2_0_0_0
run 10 Data_Random_Distribution_Normal_normalF_from_random_fu_0_2_6_2
run 10 Diagrams_ThreeD_Transform_aboutX_from_diagrams_lib_1_3_0_3_A
run 10 Diagrams_ThreeD_Transform_aboutX_from_diagrams_lib_1_3_0_3_B
run 10 Diagrams_ThreeD_Transform_aboutY_from_diagrams_lib_1_3_0_3
run 10 Linear_Quaternion_cexp_from_linear_1_19_1_3
run 10 Numeric_SpecFunctions_invIncompleteBetaWorker_from_math_functions_0_1_5_2_B
run 10 Numeric_SpecFunctions_logBeta_from_math_functions_0_1_5_2_A
run 10 Numeric_SpecFunctions_logBeta_from_math_functions_0_1_5_2_B
run 10 Numeric_SpecFunctions_slogFactorial_from_math_functions_0_1_5_2_B
run 10 Numeric_SpecFunctions_stirlingError_from_math_functions_0_1_5_2
run 10 Statistics_Distribution_Beta_cdensity_from_math_functions_0_1_5_2
run 10 Statistics_Distribution_Binomial_directEntropy_from_math_functions_0_1_5_2
run 10 Statistics_Distribution_Poisson_Internal_probability_from_math_functions_0_1_5_2
run 10 Statistics_Distribution_Poisson_clogProbability_from_math_functions_0_1_5_2
run 10 exp1x
run 10 exp1x_log
run 10 i6
run 10 logexp
run 10 logexp2
run 10 nmse_example_3_10
run 10 nmse_example_3_3
run 10 nmse_example_3_4
run 10 nmse_example_3_7
run 10 nmse_example_3_8
run 10 nmse_problem_3_3_2
run 10 nmse_problem_3_3_6
run 10 nmse_problem_3_3_7
run 10 nmse_problem_3_4_4
run 10 nmse_section_3_11
run 10 nmse_section_3_5
run 10 sphere

# long running
run 60 Numeric_SpecFunctions_logGammaL_from_math_functions_0_1_5_2
run 240 complex_sine_and_cosine
run 120 Diagrams_TwoD_Path_Metafont_Internal_hobbyF_from_diagrams_contrib_1_3_0_5

# time out
# run 260 azimuth
# run 260 nmse_problem_3_4_2

# no configurations
# run 10 hartman3
# run 10 hartman6










pushd ${SCRIPT_LOCATION}/../implementations/timing/
./scripts/pink_graph.py json/*
./scripts/function_graphs.py ../all_specifications.json ../all_costs.json
mv *.png ${SCRIPT_LOCATION}/${check_date}/
mkdir ${SCRIPT_LOCATION}/${check_date}/json
mv json/*.json ${SCRIPT_LOCATION}/${check_date}/json
cp ${SCRIPT_LOCATION}/../implementations/*.json ${SCRIPT_LOCATION}/${check_date}/json

cat <<EOF >> ${SCRIPT_LOCATION}/${check_date}/index.html
</ul>
EOF

if [ "$(hostname)" = "warfa" ]; then
    scp -r ${SCRIPT_LOCATION}/${check_date} uwplse.org:/var/www/optuner/
    rm -r ${SCRIPT_LOCATION}/${check_date}
fi

if command -v nightly-results &>/dev/null; then
    nightly-results url https://optuner.uwplse.org/${check_date}/
    nightly-results img https://optuner.uwplse.org/${check_date}/aggregate.png
    nightly-results img https://optuner.uwplse.org/${check_date}/zoomed_aggregate.png
fi
