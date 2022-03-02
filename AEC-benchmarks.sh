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
    cd implementations/timing
    make > /dev/null
    ./bin/time_$1 > json/time_$1.json
    cd ${SCRIPT_LOCATION}
    echo "\"$1\": $TIME" >> ./logs/tool_time.txt
}
export -f run

run Data_HyperLogLog_Type_size_from_hyperloglog_0_3_4_A
run Data_Number_Erf_dmerfcx_from_erf_2_0_0_0
run Data_Random_Distribution_Normal_normalF_from_random_fu_0_2_6_2
run Diagrams_ThreeD_Transform_aboutX_from_diagrams_lib_1_3_0_3_A
run Diagrams_ThreeD_Transform_aboutX_from_diagrams_lib_1_3_0_3_B
run Diagrams_ThreeD_Transform_aboutY_from_diagrams_lib_1_3_0_3
run Linear_Quaternion_cexp_from_linear_1_19_1_3
run Numeric_SpecFunctions_invIncompleteBetaWorker_from_math_functions_0_1_5_2_B
run Numeric_SpecFunctions_logBeta_from_math_functions_0_1_5_2_A
run Numeric_SpecFunctions_logBeta_from_math_functions_0_1_5_2_B
run Numeric_SpecFunctions_slogFactorial_from_math_functions_0_1_5_2_B
run Numeric_SpecFunctions_stirlingError_from_math_functions_0_1_5_2
run Statistics_Distribution_Beta_cdensity_from_math_functions_0_1_5_2
run Statistics_Distribution_Binomial_directEntropy_from_math_functions_0_1_5_2
run Statistics_Distribution_Poisson_Internal_probability_from_math_functions_0_1_5_2
run Statistics_Distribution_Poisson_clogProbability_from_math_functions_0_1_5_2
run exp1x
run exp1x_log
run i6
run logexp
run logexp2
run nmse_example_3_10
run nmse_example_3_3
run nmse_example_3_4
run nmse_example_3_7
run nmse_example_3_8
run nmse_problem_3_3_2
run nmse_problem_3_3_6
run nmse_problem_3_3_7
run nmse_problem_3_4_4
run nmse_section_3_11
run nmse_section_3_5
run sphere

run povray_photons

run Numeric_SpecFunctions_logGammaL_from_math_functions_0_1_5_2
