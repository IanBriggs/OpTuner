#!/bin/bash

run ()
{
    runcpu --size=ref --tune=base --iterations=1 povray \
           --label $1 \
           -S SIN_THETA=-DSIN_THETA_IS_$2 \
           -S COS_THETA=-DCOS_THETA_IS_$3 \
           -S SIN_PHI=-DSIN_PHI_IS_$4 \
           -S COS_PHI=-DCOS_PHI_IS_$5

}

source ./shrc

runcpu --action=clean all

runcpu --size=ref --tune=base --iterations=1 povray \
       --label all_char_povray \
       -S UNMODIFIED=-DUSE_CHAR_THETA


run all_crlibm SIN_CRLIBM COS_CRLIBM SIN_CRLIBM COS_CRLIBM
run all_glibc SIN_GLIBC COS_GLIBC SIN_GLIBC COS_GLIBC
run all_povray SIN_POVRAY COS_POVRAY SIN_POVRAY COS_POVRAY
run all_vdt SIN_VDT COS_VDT SIN_VDT COS_VDT
run all_fvdt SINF_VDT COSF_VDT SINF_VDT COSF_VDT


run optuner_00 SIN_CRLIBM ML2_COS_20 SIN_CRLIBM ML2_COS_16
run optuner_01 ML2_SIN_15 ML2_RAW_WIDE_COS_20 SIN_VDT ML2_RAW_WIDE_COS_20
run optuner_02 SIN_CRLIBM ML2_COS_20 SIN_CRLIBM ML2_COS_20
run optuner_03 ML2_SIN_19 ML2_COS_20 ML2_SIN_19 ML2_COS_20
run optuner_04 SIN_GLIBC ML2_COS_20 SIN_GLIBC ML2_COS_20
run optuner_05 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_18 ML2_RAW_WIDE_SIN_17 ML2_RAW_WIDE_COS_18
run optuner_06 ML2_SIN_19 ML2_COS_20 SIN_CRLIBM ML2_COS_16
run optuner_07 SIN_GLIBC ML2_COS_20 ML2_SIN_19 ML2_COS_16
run optuner_08 SIN_GLIBC ML2_COS_20 SIN_CRLIBM ML2_COS_20
run optuner_09 SIN_GLIBC ML2_COS_20 SIN_CRLIBM ML2_COS_16
run optuner_10 SIN_GLIBC ML2_COS_20 SIN_GLIBC ML2_COS_16
run optuner_11 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_18 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_14
run optuner_12 SIN_CRLIBM ML2_COS_16 SIN_CRLIBM ML2_COS_16
run optuner_13 SIN_CRLIBM ML2_COS_20 SIN_CRLIBM ML2_RAW_WIDE_COS_20
run optuner_14 SIN_CRLIBM ML2_COS_16 SIN_GLIBC ML2_COS_16
run optuner_15 ML2_SIN_19 ML2_COS_16 SIN_CRLIBM ML2_COS_16
run optuner_16 SIN_GLIBC ML2_COS_20 ML2_SIN_19 ML2_COS_20
run optuner_17 ML2_SIN_19 ML2_COS_20 ML2_SIN_19 ML2_RAW_WIDE_COS_20
run optuner_18 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_20 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_20
run optuner_19 ML2_SIN_19 ML2_COS_20 SIN_CRLIBM ML2_COS_20
run optuner_20 ML2_SIN_19 ML2_RAW_WIDE_COS_20 ML2_SIN_19 ML2_RAW_WIDE_COS_20
run optuner_21 ML2_SIN_15 ML2_RAW_WIDE_COS_20 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_20
run optuner_22 ML2_SIN_19 ML2_COS_16 ML2_SIN_19 ML2_COS_16
run optuner_23 ML2_SIN_19 ML2_COS_20 ML2_SIN_19 ML2_COS_16
run optuner_24 SIN_GLIBC ML2_COS_16 ML2_SIN_19 ML2_COS_16
run optuner_25 ML2_RAW_WIDE_SIN_17 ML2_RAW_WIDE_COS_18 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_14
run optuner_26 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_14
run optuner_27 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_14
run optuner_28 SIN_GLIBC ML2_COS_16 SIN_GLIBC ML2_COS_16
run optuner_29 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_18 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_18
run optuner_30 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_18 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_18
run optuner_31 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_17 ML2_RAW_WIDE_COS_14
run optuner_32 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_18 ML2_RAW_WIDE_SIN_17 ML2_RAW_WIDE_COS_18
run optuner_33 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_20 SIN_VDT ML2_RAW_WIDE_COS_20
run optuner_34 ML2_SIN_19 ML2_COS_20 ML2_SIN_15 ML2_RAW_WIDE_COS_20
run optuner_35 ML2_RAW_WIDE_SIN_17 ML2_RAW_WIDE_COS_18 ML2_RAW_WIDE_SIN_17 ML2_RAW_WIDE_COS_18
run optuner_36 ML2_SIN_19 ML2_COS_16 ML2_SIN_19 ML2_RAW_WIDE_COS_20
run optuner_37 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_18 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_18
run optuner_38 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_20 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_18
run optuner_39 ML2_RAW_WIDE_SIN_19 ML2_RAW_WIDE_COS_20 ML2_SIN_19 ML2_RAW_WIDE_COS_20
run optuner_40 ML2_SIN_15 ML2_RAW_WIDE_COS_20 ML2_SIN_19 ML2_RAW_WIDE_COS_20
run optuner_41 ML2_SIN_19 ML2_COS_16 ML2_SIN_15 ML2_RAW_WIDE_COS_20
run optuner_42 ML2_SIN_19 ML2_RAW_WIDE_COS_20 SIN_VDT ML2_RAW_WIDE_COS_20
run optuner_43 ML2_SIN_15 ML2_RAW_WIDE_COS_20 ML2_SIN_15 ML2_RAW_WIDE_COS_20
run optuner_44 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_12
run optuner_45 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_12
run optuner_46 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_12
run optuner_47 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_14
run optuner_48 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_12
run optuner_49 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_12
run optuner_50 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_12
run optuner_51 ML2_RAW_WIDE_SIN_11 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_12
run optuner_52 ML2_RAW_WIDE_SIN_11 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_12
run optuner_53 ML2_RAW_WIDE_SIN_11 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_13 ML2_RAW_WIDE_COS_12
run optuner_54 ML2_RAW_WIDE_SIN_15 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_11 ML2_RAW_WIDE_COS_12
run optuner_55 ML2_RAW_WIDE_SIN_11 ML2_RAW_WIDE_COS_14 ML2_RAW_WIDE_SIN_11 ML2_RAW_WIDE_COS_12
run optuner_56 ML2_RAW_WIDE_SIN_11 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_11 ML2_RAW_WIDE_COS_12
run optuner_57 ML2_RAW_WIDE_SIN_11 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_12
run optuner_58 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_12
run optuner_59 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_8
run optuner_60 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_8 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_8
run optuner_61 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_8 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_8
run optuner_62 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_8 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_8
run optuner_63 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_12 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_6
run optuner_64 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_8 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_6
run optuner_65 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_8 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_6
run optuner_66 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_8 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_6
run optuner_67 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_6
run optuner_68 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_6
run optuner_69 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_6
run optuner_70 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_6
run optuner_71 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_6
run optuner_72 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_6
run optuner_73 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_2
run optuner_74 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_2 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_2
run optuner_75 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_6
run optuner_76 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_6
run optuner_77 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_6
run optuner_78 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_2
run optuner_79 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_2
run optuner_80 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_2
run optuner_81 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_2 ML2_RAW_WIDE_SIN_9 ML2_RAW_WIDE_COS_2
run optuner_82 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_2 ML2_RAW_WIDE_SIN_5 ML2_RAW_WIDE_COS_2
run optuner_83 ML2_RAW_WIDE_SIN_7 ML2_RAW_WIDE_COS_2 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_2
run optuner_84 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_6
run optuner_85 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_6 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_2
run optuner_86 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_2 ML2_RAW_WIDE_SIN_3 ML2_RAW_WIDE_COS_2

