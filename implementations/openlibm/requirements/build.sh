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
	echo "OpenLibm failed to build."
	echo "See ${LOG} for details."
        echo ""
        tail "${LOG}"
    else
	echo "Success"
    fi
}
trap finish EXIT




# OpenLibm
echo "Installing OpenLibm"
if [ -f "${SCRIPT_LOCATION}/openlibm/done_openlibm" ]; then
    echo "  OpenLibm already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf openlibm openlibm_src

    echo "  Cloning"
    git clone git@github.com:JuliaMath/openlibm.git openlibm_src &>> "${LOG}"

    echo "  Building"
    cd "${SCRIPT_LOCATION}/openlibm_src"
    make &>> "${LOG}"
    make prefix="${SCRIPT_LOCATION}/openlibm" install &>> "${LOG}"

    echo "  Done"
    cd "${SCRIPT_LOCATION}/openlibm"
    touch done_openlibm
fi


# Debug enviroment source file
cd "${SCRIPT_LOCATION}"
rm -f debug_enironment.sh
echo "export LIBRARY_PATH=${SCRIPT_LOCATION}/openlibm/lib:\${LIBRARY_PATH}" >> debug_enironment.sh
echo "export C_INCLUDE_PATH=${SCRIPT_LOCATION}/openlibm/include:\${C_INCLUDE_PATH}" >> debug_enironment.sh
echo "export CPLUS_INCLUDE_PATH=${SCRIPT_LOCATION}/openlibm/include:\${CPLUS_INCLUDE_PATH}" >> debug_enironment.sh


# Done
SUCCESS=1
