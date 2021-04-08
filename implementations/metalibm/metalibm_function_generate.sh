#!/bin/bash

set -e

# args:
#   1: function
#   2: degraded accuracy requirement
#   3: index
#   4: domain low
#   5: domain high
#   6: delta
function gen_ml() {
    python3 ./scripts/ml_$1.py --accuracy "dar($2)" --precision double --output src/ml_$1_$3.c --fname "ml_$1_$3" --verbose Info | sed "s|^|//|g" > src/ml_$1_$3.c.tmp
    cat src/ml_$1_$3.c.tmp >> src/ml_$1_$3.c
    rm src/ml_$1_$3.c.tmp
    echo "//spec: {" >> src/ml_$1_$3.c
    echo "//spec:     \"cname\": \"ml_$1_$3\"," >> src/ml_$1_$3.c
    echo "//spec:     \"delta\": $6," >> src/ml_$1_$3.c
    echo "//spec:     \"domain\": [" >> src/ml_$1_$3.c
    echo "//spec:         $4," >> src/ml_$1_$3.c
    echo "//spec:         $5" >> src/ml_$1_$3.c
    echo "//spec:     ]," >> src/ml_$1_$3.c
    echo "//spec:     \"epsilon\": $2," >> src/ml_$1_$3.c
    echo "//spec:     \"operation\": \"$1\"" >> src/ml_$1_$3.c
    echo "//spec: }" >> src/ml_$1_$3.c
}

gen_ml exp 2.5023696978571325e-3    2 -1.7976931348623157e+308 709.782712893384 2.507585086745239e-295
gen_ml exp 1.14500524190353435e-4   3 -1.7976931348623157e+308 709.782712893384 1.1473916389337419e-296
gen_ml exp 3.732680639958562e-6     4 -1.7976931348623157e+308 709.782712893384 3.740460218311497e-298
gen_ml exp 1.12031091460333726e-7   5 -1.7976931348623157e+308 709.782712893384 1.1226458442103615e-299
gen_ml exp 2.6643855609940937e-9    6 -1.7976931348623157e+308 709.782712893384 2.66993862010456e-301
gen_ml exp 6.0024221116325451e-11   7 -1.7976931348623157e+308 709.782712893384 6.014932239776097e-303
gen_ml exp 1.1033009481662085e-12   8 -1.7976931348623157e+308 709.782712893384 1.1056004259413074e-304
gen_ml exp 2.0272255839325989e-14   9 -1.7976931348623157e+308 709.782712893384 2.0314506869592146e-306
gen_ml exp 4.7257127389527359e-16  10 -1.7976931348623157e+308 709.782712893384 4.735561974950208e-308
gen_ml exp 1.75613007738656749e-16 11 -1.7976931348623157e+308 709.782712893384 1.759790168579134e-308
gen_ml exp 1.658912039536903e-16   12 -1.7976931348623157e+308 709.782712893384 1.6623695108389075e-308
