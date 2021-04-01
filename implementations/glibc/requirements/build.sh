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
	echo "GLibc failed to build."
	echo "See ${LOG} for details."
        echo ""
        tail "${LOG}"
    else
	echo "Success"
    fi
}
trap finish EXIT


# GLibC
echo "Installing GLibC libm"
if [ -d "${SCRIPT_LOCATION}/butchered_libm/libm.a" ]; then
    echo "GLibC libm already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf glibc glibc_build glibc_install

    echo "  Cloning"
    git clone git://sourceware.org/git/glibc.git &>> "${LOG}"

    echo "  Selecting version to match system"
    cd "${SCRIPT_LOCATION}/glibc"
    VERSION=$(ldd --version | head -n 1 | grep "[0-9]\\.[0-9]*$" -o)
    git checkout "release/${VERSION}/master" &>> "${LOG}"

    echo "  Configuring"
    cd "${SCRIPT_LOCATION}"
    mkdir -p glibc_build
    cd "${SCRIPT_LOCATION}/glibc_build"
    ../glibc/configure CFLAGS="-O3 -march=native -mtune=native -fno-builtin -DNDEBUG" --prefix="${SCRIPT_LOCATION}/glibc_install" &>> "${LOG}"

    echo "  Building"
    make -j$(nproc) &>> "${LOG}"
    make install &>> "${LOG}"

    cd "${SCRIPT_LOCATION}"
    mkdir butchered_libm
    cp glibc_install/lib/libm* butchered_libm
fi

SUCCESS=1

