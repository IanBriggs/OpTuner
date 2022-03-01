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
if [ -f "${SCRIPT_LOCATION}/openlibm/lib/libopenlibm.a" ]; then
    echo "  OpenLibm already installed"
else
    cd "${SCRIPT_LOCATION}"

    echo "  Cleaning build location"
    rm -rf openlibm openlibm_src

    echo "  Cloning"
    git clone https://github.com/JuliaMath/openlibm.git openlibm_src &>> "${LOG}"

    echo "  Renaming"
    cd "${SCRIPT_LOCATION}/openlibm_src"
    sed "s|__ieee754_rem_pio2f|__ieee754_rem_pio2f_openlibm|g" -i src/s_sinf.c
    sed "s|__ieee754_rem_pio2f|__ieee754_rem_pio2f_openlibm|g" -i src/math_private.h
    sed "s|__ieee754_rem_pio2f|__ieee754_rem_pio2f_openlibm|g" -i src/s_sincosf.c
    sed "s|__ieee754_rem_pio2f|__ieee754_rem_pio2f_openlibm|g" -i src/s_tanf.c
    sed "s|__ieee754_rem_pio2f|__ieee754_rem_pio2f_openlibm|g" -i src/s_cosf.c
    sed "s|__ieee754_rem_pio2f|__ieee754_rem_pio2f_openlibm|g" -i src/e_rem_pio2f.c

    echo "  Building"
    cd "${SCRIPT_LOCATION}/openlibm_src"
    make &>> "${LOG}"

    echo "  Installing"
    make prefix="${SCRIPT_LOCATION}/openlibm" install &>> "${LOG}"

    echo "  Done"
fi


# Done
SUCCESS=1
