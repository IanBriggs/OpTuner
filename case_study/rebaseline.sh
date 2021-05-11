#!/bin/bash

set -x
set -e


SCRIPT_LOCATION="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
SPEC_INSTALL_DIR="${1}"
NEW_BASE_DIR="${2}"

cd "${SPEC_INSTALL_DIR}"
source ./shrc

runcpu --action=clean all

cp "${NEW_BASE_DIR}/SPEC-benchmark-ref.ini" \
   "${NEW_BASE_DIR}/SPEC-benchmark-ref.pov" \
   "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/data/refrate/input"


runcpu --size=ref --tune=base --iterations=1 povray --label all_crlibm

cp "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/run/run_base_refrate_all_crlibm.0000/SPEC-benchmark.tga" \
   "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/data/refrate/compare/SPEC-benchmark.org.tga"

runcpu --action=clean all

runcpu --size=ref --tune=base --iterations=1 povray --label all_crlibm

cp "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/run/run_base_refrate_all_crlibm.0000/imagevalidate_SPEC-benchmark.tga.out" \
   "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/data/refrate/output/imagevalidate_SPEC-benchmark.tga.out"


runcpu --action=clean all

runcpu --size=ref --tune=base --iterations=1 povray --label all_crlibm

cp "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/data/refrate/output/imagevalidate_SPEC-benchmark.tga.out" \
   "${SPEC_INSTALL_DIR}/benchspec/CPU/511.povray_r/data/refrate/compare/SPEC-benchmark.org.tga" \
   "${NEW_BASE_DIR}/"
