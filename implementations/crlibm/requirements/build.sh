#!/bin/bash


set -e

SCRIPT_LOCATION="$(readlink -f "$(dirname "${0}")")"

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
if [ -f "${SCRIPT_LOCATION}/crlibm/lib/libcrlibm.a" ]; then
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

    echo "  Installing"
    make install &>> "${LOG}"

    echo "  Done"
fi


# Done
SUCCESS=1
