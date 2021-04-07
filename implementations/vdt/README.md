Error bound based on [https://indico.cern.ch/event/202688/contributions/1487957/]()

## Relavent text:

```
The results yielded by the VDT functions validated against Libm.
The results are presented in terms of most significant different bit.
```

Function | Max VDT
---------+-------
cos	 | 2
exp	 | 2
log	 | 2
sin	 | 2
tan	 | 2
cosf	 | 6
expf	 | 6
logf	 | 2
sinf	 | 6
tanf	 | 6

## To turn this into epsilon and delta values

Since the counts are in terms of different bits a value of two means that two
bits disagre and thus the relative difference is 2^2*ulp(double).
Also, since the oracle used was GLibc's libm (which itself can be one ulp off),
the actual epsilon is (2^(count) + 1) * ulp(double)
Similarly delta is (2^(count) + 1) * max_denormal(double).
For the float versions one extra half ulp is added to cover possible double
rounding.

