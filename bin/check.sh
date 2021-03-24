#!/bin/bash

set -e -x

export SCRIPT_LOCATION=$(readlink -f $(dirname $0))

export check_date=$(date +%s)

export OPTUNER="${SCRIPT_LOCATION}/optuner"

echo "Nigtly not ready"

# run ()
# {
#     \time -f %e ${OPTUNER} ${SCRIPT_LOCATION}/../benchmarks/$1 -v medium
#     echo -e "\n\n\n\n" >> ${check_date}/index.html
# }
# export -f run

# mkdir ${check_date}
# cat <<EOF > ${check_date}/index.html
# <!doctype html>
# <title>Optuner Results for $(date +%Y-%m-%d)</title>
# <body>
# EOF


# cat <<EOF >> ${check_date}/index.html
# </body>
# EOF


# if [ "$(hostname)" = "warfa" ]; then
#     scp -r ${check_date} uwplse.org:/var/www/optuner/
# fi
