#!/bin/bash

set -e


SUCCESS=0

SCRIPT_LOCATION="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
LOG="${SCRIPT_LOCATION}/log.txt"
rm -f "${LOG}"

pushd () {
    command pushd "$@" > /dev/null
}

popd () {
    command popd > /dev/null
}

function finish {
    if [ "$SUCCESS" == 0 ]
    then
	echo "OpTuner requirements failed to build."
	echo "See ${LOG} for details."
    else
	echo "Success"
    fi
}
trap finish EXIT


# FPTaylor with my_sin
echo "Installing FPTaylor"
if [ -f "$SCRIPT_LOCATION/FPTaylor/done_fptaylor" ]; then
    echo "FPTaylor already installed"
else
    pushd "$SCRIPT_LOCATION"
    rm -rf FPTaylor
    git clone https://github.com/soarlab/FPTaylor.git &>> "${LOG}"
    pushd FPTaylor
    git checkout indices
    make &>> "${LOG}"
    touch done_fptaylor
    popd
    popd
fi

# gelpia
echo "Installing Gelpia"
if [ -f "$SCRIPT_LOCATION/gelpia/done_gelpia" ]; then
    echo "Gelpia already installed"
else
    pushd "$SCRIPT_LOCATION"
    rm -rf gelpia
    git clone https://github.com/soarlab/gelpia.git &>> "${LOG}"
    pushd gelpia
    SUCCESS=-1
    pushd requirements
    sed "s|downloads|versaweb.dl|g" build.sh -i
    ./build.sh | sed "s|^|    |g"
    popd
    SUCCESS=0
    make &>> "${LOG}"
    touch done_gelpia
    popd
    popd
fi

# symbolic link gelpia
pushd "$SCRIPT_LOCATION"
pushd FPTaylor
ln -s ../gelpia gelpia
popd
popd

# Debug enviroment source file
pushd "$SCRIPT_LOCATION"
rm -f debug_enironment.sh
echo "export PATH=${SCRIPT_LOCATION}/FPTaylor:${SCRIPT_LOCATION}/gelpia/bin:\$PATH" >> debug_enironment.sh
echo "export PYTHONPATH=${SCRIPT_LOCATION}/gelpia/bin:\$PYTHON_PATH" >> debug_enironment.sh
popd

SUCCESS=1
