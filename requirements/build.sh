#!/bin/bash


set -e

SCRIPT_LOCATION="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

LOG="${SCRIPT_LOCATION}/log.txt"
rm -f "${LOG}"

SUCCESS=0
function finish {
    if [ "$SUCCESS" == 0 ]
    then
	echo "OpTuner requirements failed to build."
	echo "See ${LOG} for details."
        echo ""
        tail "${LOG}"
    else
	echo "Success"
    fi
}
trap finish EXIT




# FPTaylor with indicies
echo "Installing FPTaylor"
if [ -f "${SCRIPT_LOCATION}/FPTaylor/done_fptaylor" ]; then
    echo "  FPTaylor already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf FPTaylor

    echo "  Downloading FPTaylor (indices branch)"
    git clone https://github.com/soarlab/FPTaylor.git &>> "${LOG}"
    cd "${SCRIPT_LOCATION}/FPTaylor"
    git checkout indices &>> "${LOG}"

    echo "  Building FPTaylor"
    make &>> "${LOG}"

    echo "  Done"
    touch done_fptaylor
fi


# gelpia
echo "Installing Gelpia"
if [ -f "${SCRIPT_LOCATION}/gelpia/done_gelpia" ]; then
    echo "  Gelpia already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf gelpia

    echo "  Downloading Gelpia"
    git clone https://github.com/soarlab/gelpia.git &>> "${LOG}"

    echo "  Building Gelpia requirements"
    cd "${SCRIPT_LOCATION}/gelpia/requirements"
    SUCCESS=-1
    ./build.sh | sed "s|^|    |g"
    SUCCESS=0

    echo "  Building Gelpia"
    cd "${SCRIPT_LOCATION}/gelpia"
    make &>> "${LOG}"

    echo "Done"
    touch done_gelpia
fi


# symbolic link gelpia
echo "Connecting Gelpia to FPTaylor"
cd "${SCRIPT_LOCATION}/FPTaylor"
ln -s ../gelpia gelpia


# Debug enviroment source file
cd "${SCRIPT_LOCATION}"
rm -f debug_enironment.sh
echo "export PATH=${SCRIPT_LOCATION}/FPTaylor:${SCRIPT_LOCATION}/gelpia/bin:\$PATH" >> debug_enironment.sh
echo "export PYTHONPATH=${SCRIPT_LOCATION}/gelpia/bin:\$PYTHON_PATH" >> debug_enironment.sh


# Done
SUCCESS=1
