#!/bin/bash

set -e -x

export SCRIPT_LOCATION=$(readlink -f $(dirname $0))

rm -rf ${SCRIPT_LOCATION}/../cost-measurement/kerns
rm -rf ${SCRIPT_LOCATION}/tmp
rm -rf ${SCRIPT_LOCATION}/log

export check_date=$(date +%s)

export OPTUNER="${SCRIPT_LOCATION}/optuner --nightly --cfile"

run ()
{
    \time -f %e ${OPTUNER} ${SCRIPT_LOCATION}/../benchmarks/$1 -v medium -e ${@:2} | tee -a ${check_date}/index.html
    echo -e "\n\n\n\n" >> ${check_date}/index.html
}
export -f run

mkdir ${check_date}
cat <<EOF > ${check_date}/index.html
<!doctype html>
<title>Optuner Results for $(date +%Y-%m-%d)</title>
<body>
EOF

BINADES ()
{
    echo "128 16 2 0.25 0.03125 0.00390625 0.00048828125 6.103515625e-05 7.62939453125e-06 9.5367431640625e-07 1.1920928955078125e-07 1.4901161193847656e-08 1.862645149230957e-09 2.3283064365386963e-10 2.9103830456733704e-11 3.637978807091713e-12"
}
export -f BINADES

if [ "$(hostname)" = "nimbus" ]; then
    bash ${SCRIPT_LOCATION}/runs.sh
else
    bash ${SCRIPT_LOCATION}/runs.sh
fi

pushd ${SCRIPT_LOCATION}/../cost-measurement/
python3 ${SCRIPT_LOCATION}/generate_aggregated_graph.py *.data
popd
echo "<h1>Aggregated Graph</h1>" >> ${check_date}/index.html
echo "<img src='aggregate.png'>" >> ${check_date}/index.html

cat <<EOF >> ${check_date}/index.html
</body>
EOF

mv ${SCRIPT_LOCATION}/../cost-measurement/*.png ${check_date}
mv ${SCRIPT_LOCATION}/../cost-measurement/*.data ${check_date}

if [ "$(hostname)" = "warfa" ]; then
    scp -r ${check_date} uwplse.org:/var/www/optuner/
fi

if command -v nightly-results &>/dev/null; then
    nightly-results url https://optuner.uwplse.org/${check_date}/
fi
