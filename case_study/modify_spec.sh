#!/bin/bash

set -x
set -e


SCRIPT_LOCATION="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
SPEC_INSTALL_DIR="${1}"
OPTUNER_GIT_DIR="${2}"

CONFIG="${SPEC_INSTALL_DIR}/config/default.cfg"

INC="${OPTUNER_GIT_DIR}/implementations/timing/out"
OBJ="${OPTUNER_GIT_DIR}/implementations/timing/out/all_functions.a"

cat <<EOF > "${CONFIG}"
%ifndef %{UNMODIFIED}
%define UNMODIFIED
%endif

%ifndef %{USE_SHORTS}
%define USE_SHORTS
%endif

%ifndef %{SIN_THETA}
%define SIN_THETA
%endif

%ifndef %{COS_THETA}
%define COS_THETA
%endif

%ifndef %{SIN_PHI}
%define SIN_PHI
%endif

%ifndef %{COS_PHI}
%define COS_PHI
%endif

EXTRA_CXXFLAGS = %{UNMODIFIED} %{USE_SHORTS} %{SIN_THETA} %{COS_THETA} %{SIN_PHI} %{COS_PHI} -I${INC}
EXTRA_LDFLAGS = ${OBJ}
strict_rundir_verify = 0
allow_label_override = yes
EOF

GCC_DIR="$(dirname $(dirname $(which gcc)))"
FROM="%   define  gcc_dir        /SW/compilers/GCC/Linux/x86_64/gcc-6.3.0"
TO="%   define  gcc_dir        ${GCC_DIR}"
EXAMPLE="${SPEC_INSTALL_DIR}/config/Example-gcc-linux-x86.cfg"
sed "s|${FROM}|${TO}|g" "${EXAMPLE}" >> "${CONFIG}"

cp "${SCRIPT_LOCATION}/modified_povray_files/lighting.cpp" \
    "${SCRIPT_LOCATION}/modified_povray_files/photons.cpp" \
    "${SCRIPT_LOCATION}/modified_povray_files/photons.h" \
    "${SCRIPT_LOCATION}/modified_povray_files/sin_cos_selector.h" \
    "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/src/"

cp "${SCRIPT_LOCATION}/modified_povray_files/messageoutput.cpp" \
   "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/src/frontend"

cp "${SCRIPT_LOCATION}/modified_spec_files/SPEC-benchmark-ref.ini" \
   "${SCRIPT_LOCATION}/modified_spec_files/SPEC-benchmark-ref.pov" \
   "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/data/refrate/input"

cp "${SCRIPT_LOCATION}/modified_spec_files/imagevalidate_SPEC-benchmark.tga.out" \
   "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/data/refrate/output"

cp "${SCRIPT_LOCATION}/modified_spec_files/SPEC-benchmark.org.tga" \
   "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/data/refrate/compare"

cp "${SCRIPT_LOCATION}/modified_spec_files/lemon.inc" \
   "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/data/all/input"

