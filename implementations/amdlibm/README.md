Error bound based on [https://members.loria.fr/PZimmermann/papers/accuracy.pdf]()


| Function | Epsilon |
|----------|---------|
| cosf     | 0.530   |
| expf     | 1.00    |
| exmp1f   | 0.537   |
| logf     | 0.940   |
| log1pf   | 0.504   |
| sinf     | 0.530   |
| tanf     | 0.509   |
|----------|---------|
| cos      | 0.800   |
| exp      | 0.756   |
| exmp1    | 0.724   |
| log      | 0.578   |
| log1p    | 2.52e8  |
| sin      | 0.800   |
| tan      | 1.40    |



## To turn this into epsilon and delta values

* epsilon for double functions = ulp(double)*count
* delta for double functions = max_denormal(double)*count
* epsilon for float functions = ulp(float)*(count + 0.5)
* delta for float functions = max_denormal(float)*(count + 0.5)

The extra half for float is to account for possible double rounding.
