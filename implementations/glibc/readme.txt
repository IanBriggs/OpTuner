Error bound based on: https://www.gnu.org/software/libc/manual/html_node/Errors-in-Math-Functions.html
For functions with '-' in double precision the float and long double values were looked at.
Relavent text:

The table lists the ULP values for different architectures.
Different architectures have different results since their hardware support for
floating-point operations varies and also the existing hardware support is
different.
Only the round-to-nearest rounding mode is covered by this table.

Function | x86_64
=========+========
acosf	 | 1
acos	 | -
acosl	 | 1
---------+--------
asinf	 | 1
asin	 | -
asinl	 | 1
---------+--------
atanf	 | 1
atan	 | -
atanl	 | 1
---------+--------
cos	 | 1
---------+--------
expf	 | 1
exp	 | -
expl	 | 1
---------+--------
logf	 | 1
log	 | -
logl	 | 1
---------+--------
sin	 | 1
---------+--------
tanf	 | 1
tan	 | -
tanl	 | 2

