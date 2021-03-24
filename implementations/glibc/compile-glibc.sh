#!/bin/bash

set -e

SUCCESS=0

SCRIPT_LOCATION="$(readlink -f $(dirname $0))"
LOG="${SCRIPT_LOCATION}/log.txt"
rm -f "${LOG}"

INSTALL_PATH="${SCRIPT_LOCATION}/glibc_install"

pushd () {
    command pushd "$@" > /dev/null
}

popd () {
    command popd > /dev/null
}

function finish {
    if [ "$SUCCESS" == 0 ]
    then
	echo "GLibc failed to build."
	echo "See ${LOG} for details."
    else
	echo "Success"
    fi
}
trap finish EXIT

echo "Installing GLibC libm"
if [ -d "${INSTALL_PATH}/butchered_libm" ]; then
    echo "GLibC libm already installed"
else
    rm -rf glibc glibc_build glibc_install

    git clone git://sourceware.org/git/glibc.git &>> "${LOG}"
    pushd glibc
    VERSION=`ldd --version | head -n 1 | grep "[0-9]\.[0-9]*$" -o`
    git checkout release/${VERSION}/master &>> "${LOG}"

    popd
    mkdir -p glibc_build
    pushd glibc_build
    ../glibc/configure CFLAGS="-O3 -march=native -mtune=native -fno-builtin -DNDEBUG" --prefix=${INSTALL_PATH} &>> "${LOG}"
    make &>> "${LOG}"
    make install &>> "${LOG}"

    popd
    pushd glibc_install
    mkdir butchered_libm
    cp lib/libm* butchered_libm
fi

SUCCESS=1

