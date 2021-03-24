#!/bin/bash
set -x
set -e


SUCCESS=0

SCRIPT_LOCATION="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
LOG="${SCRIPT_LOCATION}/log.txt"
rm -f "${LOG}"
ACT="${SCRIPT_LOCATION}/activate"
rm -f "${ACT}"

pushd () {
    command pushd "$@" > /dev/null
}

popd () {
    command popd > /dev/null
}

function finish {
    if [ "$SUCCESS" == 0 ]
    then
	echo "MetaLibm and requirements failed to build."
	echo "See ${LOG} for details."
    else
	echo "Success"
    fi
}
trap finish EXIT


# Gappa release
echo "Installing gappa"
pushd "$SCRIPT_LOCATION"
rm -rf gappa-1.3.5 gappa-1.3.5.tar.gz
wget --no-verbose https://gforge.inria.fr/frs/download.php/file/38044/gappa-1.3.5.tar.gz #&>> "${LOG}"
tar xf gappa-1.3.5.tar.gz #&>> "${LOG}"
rm gappa-1.3.5.tar.gz
pushd gappa-1.3.5
./configure #&>> "${LOG}"
./remake #&>> "${LOG}"

export PATH="${PWD}/src:${PATH}"
echo "export PATH=${PWD}/src:\$PATH" >> "${ACT}"
popd
popd




# the following is replaced with 'apt install libsollya-dev'

# # Sollya specific weekly
# echo "Installing sollya"
# pushd "$SCRIPT_LOCATION"
# rm -rf sollya sollya-weekly-09-23-2019.tar.gz
# wget --no-verbose http://sollya.gforge.inria.fr/sollya-weekly-09-23-2019.tar.gz  #&>> "${LOG}"
# tar xf sollya-weekly-09-23-2019.tar.gz #&>> "${LOG}"
# rm -rf sollya-weekly-09-23-2019.tar.gz
# pushd sollya
# make #&>> "${LOG}"

# export PATH="${PWD}:${PATH}"
# echo "export PATH=${PWD}:\$PATH" >> "${ACT}"
# # library path??
# popd
# popd


# PythonSollya
echo "Installing pythonbsollya"
python3 -m pip install git+https://gitlab.com/metalibm-dev/pythonsollya


# asmde
echo "Installing asmde"
python3 -m pip install git+https://github.com/nibrunie/asmde


# MetaLibm
echo "Installing metalibm"
pushd "$SCRIPT_LOCATION"
rm -rf metalibm
git clone https://github.com/kalray/metalibm.git
pushd metalibm
export PYTHONPATH="${PWD}:${PYTHONPATH}"
echo "export PYTHONPATH=${PWD}:\$PYTHONPATH" >> "${ACT}"
popd
popd


SUCCESS=1
