#!/bin/bash


set -e


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


ACTIVATE_SCRIPT="${SCRIPT_LOCATION}/activate"
rm -f "${ACTIVATE_SCRIPT}"

# Gappa release
echo "Installing gappa"
if [ -f "${SCRIPT_LOCATION}/gappa/src/gappa" ]; then
    echo "  gappa already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf gappa gappa-1.3.5 gappa-1.3.5.tar.gz

    echo "  Downloading"
    wget --no-verbose https://gforge.inria.fr/frs/download.php/file/38044/gappa-1.3.5.tar.gz &>> "${LOG}"

    echo "  Untaring"
    tar xf gappa-1.3.5.tar.gz &>> "${LOG}"
    mv gappa-1.3.5 gappa

    echo "  Configuring"
    cd gappa
    ./configure &>> "${LOG}"

    echo "  Building"
    ./remake &>> "${LOG}"

    echo "  Done"
fi

export PATH="${SCRIPT_LOCATION}/gappa/src:${PATH}"
echo "export PATH=${SCRIPT_LOCATION}/gappa/src:\$PATH" >> "${ACTIVATE_SCRIPT}"




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
echo "Installing pythonsollya with pip"
python3 -m pip install git+https://gitlab.com/metalibm-dev/pythonsollya &>> "${LOG}"


# asmde
echo "Installing asmde with pip"
python3 -m pip install git+https://github.com/nibrunie/asmde  &>> "${LOG}"


# MetaLibm
echo "Installing metalibm"
if [ -f "${SCRIPT_LOCATION}/metalibm/metalibm_core/support_lib/ml_support_lib.h" ]; then
    echo "  metalibm already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf metalibm

    echo "  Cloning"
    git clone https://github.com/kalray/metalibm.git &>> "${LOG}"

    # update time so make will be happy
    touch "${SCRIPT_LOCATION}/metalibm/metalibm_core/support_lib/ml_support_lib.h"
    echo "  Done"
fi

export PYTHONPATH="${SCRIPT_LOCATION}/metalibm:${PYTHONPATH}"
echo "export PYTHONPATH=${SCRIPT_LOCATION}/metalibm:\$PYTHONPATH" >> "${ACTIVATE_SCRIPT}"



# Done
SUCCESS=1
