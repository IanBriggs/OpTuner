#!/bin/bash

set -e -x

SCRIPT_LOCATION=$(readlink -f $(dirname $0))

INSTALL_PATH=${SCRIPT_LOCATION}/glibc_install

rm -rf glibc glibc_build glibc_install

git clone git://sourceware.org/git/glibc.git
cd glibc
VERSION=`ldd --version | head -n 1 | grep "[0-9]\.[0-9]*$" -o`
git checkout release/${VERSION}/master

cd ..
mkdir -p glibc_build
cd glibc_build
../glibc/configure CFLAGS="-O3 -march=native -mtune=native -fno-builtin -DNDEBUG" --prefix=${INSTALL_PATH}
make
make install

cd ..
cd glibc_install
mkdir butchered_libm
cp lib/libm* butchered_libm

