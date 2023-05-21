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
	echo "AmdLibm failed to build."
	echo "See ${LOG} for details."
        echo ""
        tail "${LOG}"
    else
	echo "Success"
    fi
}
trap finish EXIT




# AmdLibm
echo "Installing AmdLibm"
if [ -f "${SCRIPT_LOCATION}/amdlibm/lib/libaml.a" ]; then
    echo "  AmdLibm already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf amdlibm amdlibm_src

    echo "  Cloning"
    git clone git@github.com:amd/aocl-libm-ose.git amdlibm_src &>> "${LOG}"
    cd "${SCRIPT_LOCATION}/amdlibm_src"
    git checkout aocl-3.0 &>> "${LOG}"

    echo "  Fixing build"
    cd "${SCRIPT_LOCATION}/amdlibm_src"
    grep znver2 * -r | grep -o '^[^:]*' | xargs sed "s|znver2|native|g" -i
    grep znver3 * -r | grep -o '^[^:]*' | xargs sed "s|znver3|native|g" -i

    echo "  Building"
    cd "${SCRIPT_LOCATION}/amdlibm_src"
    mkdir "${SCRIPT_LOCATION}/amdlibm"
    scons --prefix "${SCRIPT_LOCATION}/amdlibm" &>> "${LOG}"

    echo "  Done"
fi


# Done
SUCCESS=1
