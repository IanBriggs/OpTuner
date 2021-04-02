Rlibm provides correctly rounded math functions for float, bfloat16, and posit16.


## To turn this into epsilon and delta values

* epsilon for float functions = ulp(float)*(0.5 + 0.5)
* delta for float functions = max_denormal(float)*(0.5 + 0.5)

The extra half is to account for possible double rounding.
