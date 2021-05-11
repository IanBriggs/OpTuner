# Install

To install run `modify_spec.sh <spec2017_install> <optuner_install>`.


# Runflags

To modify the code being compiled there are 5 spec level flags that can be used.
These are arguments to `runcpu`.

## `-S UNMODIFIED=-DUSE_CHAR_THETA`
When defined will cause photon angles to be stored as chars and sin/cos calls
to be done via table lookup. Other defines described will no longer have effect.
When not defined double is used and function selection can be done.

## `-S SIN_(THETA|PHI)=-DSIN_(THETA|PHI)_IS_<sname>`
When defined will select which function to use for the two call sites of sin.
If multiple are defined the earliest in the following list will be selected.
If none are selected crlibm will be used.

### `<sname>` is in
* `SIN_CRLIBM`
* `SIN_GLIBC`
* `SINF_GLIBC`
* `ML2_SIN_1`
* `ML2_SIN_3`
* `ML2_SIN_5`
* `ML2_SIN_7`
* `ML2_SIN_9`
* `ML2_SIN_11`
* `ML2_SIN_13`
* `ML2_SIN_15`
* `ML2_SIN_17`
* `ML2_SIN_19`
* `ML2_WIDE_SIN_3`
* `ML2_WIDE_SIN_5`
* `ML2_WIDE_SIN_7`
* `ML2_WIDE_SIN_9`
* `ML2_WIDE_SIN_11`
* `ML2_WIDE_SIN_13`
* `ML2_WIDE_SIN_15`
* `ML2_WIDE_SIN_17`
* `ML2_WIDE_SIN_19`
* `ML2_RAW_SIN_1`
* `ML2_RAW_SIN_3`
* `ML2_RAW_SIN_5`
* `ML2_RAW_SIN_7`
* `ML2_RAW_SIN_9`
* `ML2_RAW_SIN_11`
* `ML2_RAW_SIN_13`
* `ML2_RAW_SIN_15`
* `ML2_RAW_SIN_17`
* `ML2_RAW_SIN_19`
* `ML2_RAW_WIDE_SIN_3`
* `ML2_RAW_WIDE_SIN_5`
* `ML2_RAW_WIDE_SIN_7`
* `ML2_RAW_WIDE_SIN_9`
* `ML2_RAW_WIDE_SIN_11`
* `ML2_RAW_WIDE_SIN_13`
* `ML2_RAW_WIDE_SIN_15`
* `ML2_RAW_WIDE_SIN_17`
* `ML2_RAW_WIDE_SIN_19`
* `SIN_OPENLIBM`
* `SINF_OPENLIBM`
* `SIN_POVRAY`
* `SIN_VDT`
* `SINF_VDT`


## `-S COS_(THETA|PHI)=COS_(THETA|PHI)_IS_<cname>`
When defined will select which function to use for the two call sites of cos.
If multiple are defined the earliest in the following list will be selected.
If none are selected crlibm will be used.

### `<cname>` is in
* `COS_CRLIBM`
* `COS_GLIBC`
* `COSF_GLIBC`
* `ML2_COS_2`
* `ML2_COS_4`
* `ML2_COS_6`
* `ML2_COS_8`
* `ML2_COS_10`
* `ML2_COS_12`
* `ML2_COS_14`
* `ML2_COS_16`
* `ML2_COS_18`
* `ML2_COS_20`
* `ML2_WIDE_COS_2`
* `ML2_WIDE_COS_6`
* `ML2_WIDE_COS_8`
* `ML2_WIDE_COS_12`
* `ML2_WIDE_COS_14`
* `ML2_WIDE_COS_18`
* `ML2_WIDE_COS_20`
* `ML2_RAW_COS_2`
* `ML2_RAW_COS_4`
* `ML2_RAW_COS_6`
* `ML2_RAW_COS_8`
* `ML2_RAW_COS_10`
* `ML2_RAW_COS_12`
* `ML2_RAW_COS_14`
* `ML2_RAW_COS_16`
* `ML2_RAW_COS_18`
* `ML2_RAW_COS_20`
* `ML2_RAW_WIDE_COS_2`
* `ML2_RAW_WIDE_COS_6`
* `ML2_RAW_WIDE_COS_8`
* `ML2_RAW_WIDE_COS_12`
* `ML2_RAW_WIDE_COS_14`
* `ML2_RAW_WIDE_COS_18`
* `ML2_RAW_WIDE_COS_20`
* `COS_OPENLIBM`
* `COSF_OPENLIBM`
* `COS_POVRAY`
* `COS_VDT`
* `COSF_VDT`
