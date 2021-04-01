Error bound based on [https://www.gnu.org/software/libc/manual/html_node/Errors-in-Math-Functions.html]()

For functions with '-' in double precision the float and long double values were looked at.

## Relavent text:

```
The table lists the ULP values for different architectures.
Different architectures have different results since their hardware support for
floating-point operations varies and also the existing hardware support is
different.
Only the round-to-nearest rounding mode is covered by this table.
```
Function | x86_64
---------+-------
cos	 | 1
expf	 | 1
exp	 | -
expl	 | 1
logf	 | 1
log	 | -
logl	 | 1
sin	 | 1
tanf	 | 1
tan	 | -
tanl	 | 2



## To turn this into epsilon and delta values

* epsilon for double functions = ulp(double)*count
* delta for double functions = max_denormal(double)*count
* epsilon for float functions = ulp(float)*(count + 0.5)
* delta for float functions = max_denormal(float)*(count + 0.5)

The extra half for float is to account for possible double rounding.
