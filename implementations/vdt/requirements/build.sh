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
	echo "VDT failed to build."
	echo "See ${LOG} for details."
        echo ""
        tail "${LOG}"
    else
	echo "Success"
    fi
}
trap finish EXIT




# VDT
echo "Installing VDT"
if [ -f "${SCRIPT_LOCATION}/vdt/done_vdt" ]; then
    echo "  VDT already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf vdt vdt_src

    echo "  Cloning"
    git clone git@github.com:dpiparo/vdt.git vdt_src &>> "${LOG}"

    echo "  Configuring"
    cd "${SCRIPT_LOCATION}/vdt_src"
    cmake -D BUILD_SHARED_LIBS=0 -DCMAKE_INSTALL_PREFIX="${SCRIPT_LOCATION}/vdt" . &>> "${LOG}"

    echo "  Building"
    make &>> "${LOG}"
    make install &>> "${LOG}"

    echo "  Done"
    cd "${SCRIPT_LOCATION}/vdt"
    touch done_vdt
fi


# Debug enviroment source file
cd "${SCRIPT_LOCATION}"
rm -f debug_enironment.sh
echo "export LIBRARY_PATH=${SCRIPT_LOCATION}/vdt/lib:\${LIBRARY_PATH}" >> debug_enironment.sh
echo "export C_INCLUDE_PATH=${SCRIPT_LOCATION}/vdt/include:\${C_INCLUDE_PATH}" >> debug_enironment.sh
echo "export CPLUS_INCLUDE_PATH=${SCRIPT_LOCATION}/vdt/include:\${CPLUS_INCLUDE_PATH}" >> debug_enironment.sh


# Done
SUCCESS=1
