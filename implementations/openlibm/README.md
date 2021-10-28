Error bound based on [https://members.loria.fr/PZimmermann/papers/accuracy.pdf]()


| Function | Epsilon |
|----------|---------|
| cosf     | 0.501   |
| expf     | 0.911   |
| exmp1f   | 0.813   |
| logf     | 0.888   |
| log1pf   | 0.839   |
| sinf     | 0.501   |
| tanf     | 0.800   |
|----------|---------|
| cos      | 0.834   |
| exp      | 0.949   |
| exmp1    | 0.907   |
| log      | 0.944   |
| log1p    | 0.895   |
| sin      | 0.831   |
| tan      | 1.02    |



## To turn this into epsilon and delta values

* epsilon for double functions = ulp(double)*count
* delta for double functions = max_denormal(double)*count
* epsilon for float functions = ulp(float)*(count + 0.5)
* delta for float functions = max_denormal(float)*(count + 0.5)

The extra half for float is to account for possible double rounding.
