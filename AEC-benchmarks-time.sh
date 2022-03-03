#!/bin/bash

export SCRIPT_LOCATION=$(readlink -f $(dirname $0))
cd ${SCRIPT_LOCATION}

set -e
set -x

mkdir -p logs
mkdir -p implementations/timing/json

time_func ()
{
    ./bin/time_$1 > json/time_$1.json
}
export -f time_func

cd implementations/timing
make > /dev/null

time_func Data_HyperLogLog_Type_size_from_hyperloglog_0_3_4_A
time_func Data_Number_Erf_dmerfcx_from_erf_2_0_0_0
time_func Data_Random_Distribution_Normal_normalF_from_random_fu_0_2_6_2
time_func Diagrams_ThreeD_Transform_aboutX_from_diagrams_lib_1_3_0_3_A
time_func Diagrams_ThreeD_Transform_aboutX_from_diagrams_lib_1_3_0_3_B
time_func Diagrams_ThreeD_Transform_aboutY_from_diagrams_lib_1_3_0_3
time_func Linear_Quaternion_cexp_from_linear_1_19_1_3
time_func Numeric_SpecFunctions_invIncompleteBetaWorker_from_math_functions_0_1_5_2_B
time_func Numeric_SpecFunctions_logBeta_from_math_functions_0_1_5_2_A
time_func Numeric_SpecFunctions_logBeta_from_math_functions_0_1_5_2_B
time_func Numeric_SpecFunctions_slogFactorial_from_math_functions_0_1_5_2_B
time_func Numeric_SpecFunctions_stirlingError_from_math_functions_0_1_5_2
time_func Statistics_Distribution_Beta_cdensity_from_math_functions_0_1_5_2
time_func Statistics_Distribution_Binomial_directEntropy_from_math_functions_0_1_5_2
time_func Statistics_Distribution_Poisson_Internal_probability_from_math_functions_0_1_5_2
time_func Statistics_Distribution_Poisson_clogProbability_from_math_functions_0_1_5_2
time_func exp1x
time_func exp1x_log
time_func i6
time_func logexp
time_func logexp2
time_func nmse_example_3_10
time_func nmse_example_3_3
time_func nmse_example_3_4
time_func nmse_example_3_7
time_func nmse_example_3_8
time_func nmse_problem_3_3_2
time_func nmse_problem_3_3_6
time_func nmse_problem_3_3_7
time_func nmse_problem_3_4_4
time_func nmse_section_3_11
time_func nmse_section_3_5
time_func sphere

time_func povray_photons

time_func Numeric_SpecFunctions_logGammaL_from_math_functions_0_1_5_2
