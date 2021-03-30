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
	echo "CRLibM failed to build."
	echo "See ${LOG} for details."
        echo ""
        tail "${LOG}"
    else
	echo "Success"
    fi
}
trap finish EXIT




# CRLibM
echo "Installing CRLibM"
if [ -f "${SCRIPT_LOCATION}/crlibm/done_crlibm" ]; then
    echo "  CRLibM already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf crlibm crlibm_src

    echo "  Extracting source"
    mkdir -p crlibm crlibm_src
    tar -xf crlibm.tar.gz -C crlibm_src --strip-components 1

    echo "  Configuring"
    cd "${SCRIPT_LOCATION}/crlibm_src"
    export CFLAGS="-fPIC ${CFLAGS}"
    export LDFLAGS="-fPIC ${LDFLAGS}"
    ./configure --enable-sse2 --prefix="${SCRIPT_LOCATION}/crlibm" &>> "${LOG}"

    echo "  Building"
    make &>> "${LOG}"
    make install &>> "${LOG}"

    echo "  Done"
    cd "${SCRIPT_LOCATION}/crlibm"
    touch done_crlibm
fi


# Debug enviroment source file
cd "${SCRIPT_LOCATION}"
rm -f debug_enironment.sh
echo "export LIBRARY_PATH=${SCRIPT_LOCATION}/lib:\${LIBRARY_PATH}" >> debug_enironment.sh
echo "export C_INCLUDE_PATH=${SCRIPT_LOCATION}/include:\${C_INCLUDE_PATH}" >> debug_enironment.sh
echo "export CPLUS_INCLUDE_PATH=${SCRIPT_LOCATION}/include:\${CPLUS_INCLUDE_PATH}" >> debug_enironment.sh


# Done
SUCCESS=1
