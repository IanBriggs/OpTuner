#!/bin/bash


set -e

SCRIPT_LOCATION="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

LOG="${SCRIPT_LOCATION}/log.txt"
rm -f "${LOG}"
echo "START" >> "${LOG}"

SUCCESS=0
function finish {
    if [ "$SUCCESS" == 0 ]
    then
	echo "RLibm failed to build."
	echo "See ${LOG} for details."
        echo ""
        tail "${LOG}"
    else
	echo "Success"
    fi
}
trap finish EXIT


# RLibm
echo "Installing RLibm"
if [ -f "${SCRIPT_LOCATION}/rlibm/lib/floatMathLib.a" ]; then
    echo "  RLibm already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf rlibm rlibm_src

    echo "  Cloning"
    git clone https://github.com/rutgers-apl/rlibm.git rlibm_src &>> "${LOG}"

    echo "  Building"
    cd "${SCRIPT_LOCATION}/rlibm_src"
    sed -i "s|#include <cstdint>|//#include <cstdint>|g" "${SCRIPT_LOCATION}/rlibm_src/include/float_math.h"
    sed -i "s|#pragma once|#pragma once\n#ifdef __cplusplus\nextern \"C\" {\n#endif|g" "${SCRIPT_LOCATION}/rlibm_src/include/float_math.h"
    echo -e "#ifdef __cplusplus\n}\n#endif" >> "${SCRIPT_LOCATION}/rlibm_src/include/float_math.h"
    make floatmlib &>> "${LOG}"

    echo "  Installing"
    cd "${SCRIPT_LOCATION}/rlibm_src"
    mkdir "${SCRIPT_LOCATION}/rlibm"
    cp -r lib "${SCRIPT_LOCATION}/rlibm/"
    mkdir "${SCRIPT_LOCATION}/rlibm/include"
    cp include/float_math.h "${SCRIPT_LOCATION}/rlibm/include"


    echo "  Done"
fi


# Done
SUCCESS=1
