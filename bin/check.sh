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

<h1>Aggregate Graph</h1>
<img src="aggregate.png" />

<ul id="detail">
  <h1>Detailed Graphs</h1>
EOF

run ()
{
    \time -f %e timeout 10m ${SCRIPT_LOCATION}/optuner ${SCRIPT_LOCATION}/../benchmarks/$1.fpcore --verbosity medium >& ${SCRIPT_LOCATION}/${check_date}/log_$1.txt
    TIME=$(tail ${SCRIPT_LOCATION}/${check_date}/log_$1.txt -n1)
    pushd ${SCRIPT_LOCATION}/../implementations/timing/
    make
    if [ -f ./bin/time_$1 ] ; then
        ./bin/time_$1 > json/time_$1.json
    fi
    popd
    cat <<EOF >> ${SCRIPT_LOCATION}/${check_date}/index.html
  <li>
    <h1>$1</h1>
    <img src="time_$1.png" />
    <time>$TIME seconds runtime</time>
  </li>
EOF
}
export -f run

#run povray_photons

run Data_HyperLogLog_Type_size_from_hyperloglog_0_3_4_A
run Data_Number_Erf_dmerfcx_from_erf_2_0_0_0
run Data_Random_Distribution_Normal_normalF_from_random_fu_0_2_6_2
run Diagrams_ThreeD_Transform_aboutX_from_diagrams_lib_1_3_0_3_A
run Diagrams_ThreeD_Transform_aboutX_from_diagrams_lib_1_3_0_3_B
run Diagrams_ThreeD_Transform_aboutY_from_diagrams_lib_1_3_0_3
run exp1x
run hartman3
run hartman6
run i6
run Linear_Quaternion_cexp_from_linear_1_19_1_3
run logexp2
run logexp
run nmse_example_3_10
run nmse_example_3_3
run nmse_example_3_4
run nmse_example_3_7
run nmse_example_3_8
run nmse_problem_3_3_2
run nmse_problem_3_3_6
run nmse_problem_3_3_7
run nmse_problem_3_4_4
run nmse_section_3_5
run Numeric_SpecFunctions_invIncompleteBetaWorker_from_math_functions_0_1_5_2_B
run Numeric_SpecFunctions_logBeta_from_math_functions_0_1_5_2_A
run Numeric_SpecFunctions_logBeta_from_math_functions_0_1_5_2_B
run Numeric_SpecFunctions_slogFactorial_from_math_functions_0_1_5_2_B
run Numeric_SpecFunctions_stirlingError_from_math_functions_0_1_5_2
run sphere
run Statistics_Distribution_Beta_cdensity_from_math_functions_0_1_5_2
run Statistics_Distribution_Binomial_directEntropy_from_math_functions_0_1_5_2
run Statistics_Distribution_Poisson_clogProbability_from_math_functions_0_1_5_2
run Statistics_Distribution_Poisson_Internal_probability_from_math_functions_0_1_5_2

# long running
run Numeric_SpecFunctions_logGammaL_from_math_functions_0_1_5_2

# time out
# run azimuth
# run complex_sine_and_cosine
# run Diagrams_TwoD_Path_Metafont_Internal_hobbyF_from_diagrams_contrib_1_3_0_5
# run nmse_problem_3_4_2

# no configurations
# run exp1x_log
# run nmse_section_3_11

pushd ${SCRIPT_LOCATION}/../implementations/timing/
./scripts/pink_graph.py json/*
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
fi
