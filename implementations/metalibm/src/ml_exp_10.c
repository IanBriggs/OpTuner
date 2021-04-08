/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ./scripts/ml_exp.py --accuracy dar(4.7257127389527359e-16) --precision \
 *     double --output src/ml_exp_10.c --fname ml_exp_10 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>
#include <math.h>



double ml_exp_10(double);
double ml_exp_10(double x){
    int nan_or_inf;
    
    nan_or_inf = ml_is_nan_or_inf(x);

    if (__builtin_expect(nan_or_inf, 0)) {
        int is_nan_test;

        is_nan_test = ml_is_nan(x);

        if (is_nan_test) {
            int is_signaling_nan;

            is_signaling_nan = ml_is_signaling_nan(x);

            if (is_signaling_nan) {

                return __builtin_nan("");
            } else {

                return __builtin_nan("");
            }
        } else {
            int inf_sign;

            inf_sign = x >= 0.0;

            if (inf_sign) {

                return INFINITY;
            } else {

                return 0.;
            }
        }
    } else {
        int tmp;

        tmp = x > 0x1.63p9;

        if (__builtin_expect(tmp, 0)) {

            return INFINITY;
        } else {
            int tmp0;

            tmp0 = x < -0x1.748p9;

            if (__builtin_expect(tmp0, 0)) {

                return 0.;
            } else {
                double unround_k;
                int64_t ik;
                int late_overflow_test;
                double k;
                int late_underflow_test;
                int tmp1;
                int tmp2;

                unround_k = x * 0x1.71547652b82fep0;
                ik = nearbyint(unround_k);
                late_overflow_test = ik > INT64_C(1023);
                k = rint(unround_k);
                late_underflow_test = k <= -1022.0;
                tmp1 = late_overflow_test || late_underflow_test;
                tmp2 =  ! tmp1;

                if (__builtin_expect(tmp2, 1)) {
                    double tmp3;
                    double exact_hi;
                    double tmp4;
                    double exact_lo;
                    double r;
                    double r2_;
                    double tmp5;
                    double tmp6;
                    double tmp7;
                    double tmp8;
                    double tmp9;
                    double tmp10;
                    double tmp11;
                    double tmp12;
                    double tmp13;
                    double tmp14;
                    double tmp15;
                    double r3_;
                    double tmp16;
                    double tmp17;
                    double tmp18;
                    double tmp19;
                    double tmp20;
                    double tmp21;
                    double tmp22;
                    double tmp23;
                    double tmp24;
                    double tmp25;
                    double tmp26;
                    double tmp27;
                    double r4_;
                    double r5_;
                    double tmp28;
                    double pre_sub_poly;
                    double tmp29;
                    double tmp30;
                    double poly;
                    double exp_ik;
                    double std_result;

                    tmp3 = k * 0x1.62e42fefa4p-1;
                    exact_hi = x - tmp3;
                    tmp4 =  - k;
                    exact_lo = tmp4 * -0x1.8432a1b0e2634p-43;
                    r = exact_hi + exact_lo;
                    r2_ = r * r;
                    tmp5 = 0x1.000000000001dp-1 * r2_;
                    tmp6 = 0x1.555555554b83fp-3 * r2_;
                    tmp7 = r * tmp6;
                    tmp8 = tmp5 + tmp7;
                    tmp9 = 0x1.555555554be86p-5 * r2_;
                    tmp10 = r2_ * tmp9;
                    tmp11 = tmp8 + tmp10;
                    tmp12 = 0x1.1111112dbfe0dp-7 * r2_;
                    tmp13 = 0x1.6c16c19108c9ap-10 * r2_;
                    tmp14 = r * tmp13;
                    tmp15 = tmp12 + tmp14;
                    r3_ = r * r2_;
                    tmp16 = r3_ * tmp15;
                    tmp17 = tmp11 + tmp16;
                    tmp18 = 0x1.a01978fe6009bp-13 * r2_;
                    tmp19 = 0x1.a0197c475e151p-16 * r2_;
                    tmp20 = r * tmp19;
                    tmp21 = tmp18 + tmp20;
                    tmp22 = 0x1.72fac0d8b3ee7p-19 * r2_;
                    tmp23 = 0x1.28c5c43857c0dp-22 * r2_;
                    tmp24 = r * tmp23;
                    tmp25 = tmp22 + tmp24;
                    tmp26 = r2_ * tmp25;
                    tmp27 = tmp21 + tmp26;
                    r4_ = r2_ * r2_;
                    r5_ = r * r4_;
                    tmp28 = r5_ * tmp27;
                    pre_sub_poly = tmp17 + tmp28;
                    tmp29 = exact_lo + pre_sub_poly;
                    tmp30 = exact_hi + tmp29;
                    poly = 1.0 + tmp30;
                    exp_ik = ml_exp_insertion_fp64(ik);
                    std_result = exp_ik * poly;
                    return std_result;
                } else {


                    if (__builtin_expect(late_overflow_test, 0)) {
                        double tmp3;
                        double exact_hi;
                        double tmp4;
                        double exact_lo;
                        double r;
                        double r2_;
                        double tmp5;
                        double tmp6;
                        double tmp7;
                        double tmp8;
                        double tmp9;
                        double tmp10;
                        double tmp11;
                        double tmp12;
                        double tmp13;
                        double tmp14;
                        double tmp15;
                        double r3_;
                        double tmp16;
                        double tmp17;
                        double tmp18;
                        double tmp19;
                        double tmp20;
                        double tmp21;
                        double tmp22;
                        double tmp23;
                        double tmp24;
                        double tmp25;
                        double tmp26;
                        double tmp27;
                        double r4_;
                        double r5_;
                        double tmp28;
                        double pre_sub_poly;
                        double tmp29;
                        double tmp30;
                        double poly;
                        int64_t diff_k;
                        double tmp31;
                        double tmp32;
                        double tmp33;
                        double late_overflow_result;
                        int tmp34;

                        tmp3 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp3;
                        tmp4 =  - k;
                        exact_lo = tmp4 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp5 = 0x1.000000000001dp-1 * r2_;
                        tmp6 = 0x1.555555554b83fp-3 * r2_;
                        tmp7 = r * tmp6;
                        tmp8 = tmp5 + tmp7;
                        tmp9 = 0x1.555555554be86p-5 * r2_;
                        tmp10 = r2_ * tmp9;
                        tmp11 = tmp8 + tmp10;
                        tmp12 = 0x1.1111112dbfe0dp-7 * r2_;
                        tmp13 = 0x1.6c16c19108c9ap-10 * r2_;
                        tmp14 = r * tmp13;
                        tmp15 = tmp12 + tmp14;
                        r3_ = r * r2_;
                        tmp16 = r3_ * tmp15;
                        tmp17 = tmp11 + tmp16;
                        tmp18 = 0x1.a01978fe6009bp-13 * r2_;
                        tmp19 = 0x1.a0197c475e151p-16 * r2_;
                        tmp20 = r * tmp19;
                        tmp21 = tmp18 + tmp20;
                        tmp22 = 0x1.72fac0d8b3ee7p-19 * r2_;
                        tmp23 = 0x1.28c5c43857c0dp-22 * r2_;
                        tmp24 = r * tmp23;
                        tmp25 = tmp22 + tmp24;
                        tmp26 = r2_ * tmp25;
                        tmp27 = tmp21 + tmp26;
                        r4_ = r2_ * r2_;
                        r5_ = r * r4_;
                        tmp28 = r5_ * tmp27;
                        pre_sub_poly = tmp17 + tmp28;
                        tmp29 = exact_lo + pre_sub_poly;
                        tmp30 = exact_hi + tmp29;
                        poly = 1.0 + tmp30;
                        diff_k = ik - INT64_C(997);
                        tmp31 = ml_exp_insertion_fp64(diff_k);
                        tmp32 = tmp31 * poly;
                        tmp33 = ml_exp_insertion_fp64(INT64_C(997));
                        late_overflow_result = tmp32 * tmp33;
                        tmp34 = ml_is_inf(late_overflow_result);

                        if (__builtin_expect(tmp34, 0)) {

                            return INFINITY;
                        } else {

                            return late_overflow_result;
                        }
                    } else {
                        double tmp3;
                        double exact_hi;
                        double tmp4;
                        double exact_lo;
                        double r;
                        double r2_;
                        double tmp5;
                        double tmp6;
                        double tmp7;
                        double tmp8;
                        double tmp9;
                        double tmp10;
                        double tmp11;
                        double tmp12;
                        double tmp13;
                        double tmp14;
                        double tmp15;
                        double r3_;
                        double tmp16;
                        double tmp17;
                        double tmp18;
                        double tmp19;
                        double tmp20;
                        double tmp21;
                        double tmp22;
                        double tmp23;
                        double tmp24;
                        double tmp25;
                        double tmp26;
                        double tmp27;
                        double r4_;
                        double r5_;
                        double tmp28;
                        double pre_sub_poly;
                        double tmp29;
                        double tmp30;
                        double poly;
                        int64_t corrected_exp;
                        double tmp31;
                        double tmp32;
                        double tmp33;
                        double late_underflow_result;
                        int tmp34;

                        tmp3 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp3;
                        tmp4 =  - k;
                        exact_lo = tmp4 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp5 = 0x1.000000000001dp-1 * r2_;
                        tmp6 = 0x1.555555554b83fp-3 * r2_;
                        tmp7 = r * tmp6;
                        tmp8 = tmp5 + tmp7;
                        tmp9 = 0x1.555555554be86p-5 * r2_;
                        tmp10 = r2_ * tmp9;
                        tmp11 = tmp8 + tmp10;
                        tmp12 = 0x1.1111112dbfe0dp-7 * r2_;
                        tmp13 = 0x1.6c16c19108c9ap-10 * r2_;
                        tmp14 = r * tmp13;
                        tmp15 = tmp12 + tmp14;
                        r3_ = r * r2_;
                        tmp16 = r3_ * tmp15;
                        tmp17 = tmp11 + tmp16;
                        tmp18 = 0x1.a01978fe6009bp-13 * r2_;
                        tmp19 = 0x1.a0197c475e151p-16 * r2_;
                        tmp20 = r * tmp19;
                        tmp21 = tmp18 + tmp20;
                        tmp22 = 0x1.72fac0d8b3ee7p-19 * r2_;
                        tmp23 = 0x1.28c5c43857c0dp-22 * r2_;
                        tmp24 = r * tmp23;
                        tmp25 = tmp22 + tmp24;
                        tmp26 = r2_ * tmp25;
                        tmp27 = tmp21 + tmp26;
                        r4_ = r2_ * r2_;
                        r5_ = r * r4_;
                        tmp28 = r5_ * tmp27;
                        pre_sub_poly = tmp17 + tmp28;
                        tmp29 = exact_lo + pre_sub_poly;
                        tmp30 = exact_hi + tmp29;
                        poly = 1.0 + tmp30;
                        corrected_exp = ik + INT64_C(104);
                        tmp31 = ml_exp_insertion_fp64(corrected_exp);
                        tmp32 = tmp31 * poly;
                        tmp33 = ml_exp_insertion_fp64(INT32_C(-104));
                        late_underflow_result = tmp32 * tmp33;
                        tmp34 = ml_is_subnormal(late_underflow_result);

                        if (tmp34) {

                            return late_underflow_result;
                        }
                        return late_underflow_result;
                    }
                }
            }
        }
    }
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f16b84a1b20> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f16b84a1730> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f16b84a16a0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f16b84a1490> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: [33;1m generating implementation scheme [0m
//Info: log2_hi_precision: 39
//Info: eval error: [-1.13686837721628954436451023869919865760813593169587e-13;1.13686837721628954436451023869919865760813593169587e-13]
//Info: accuracy: ML_DegradedAccuracyRelative(4.725712738952736e-16)
//Info: [33;1m building mathematical polynomial [0m
//
//Info: attempting poly degree: 9
//Info: polynomial: 1.42108547152020037174224853515625e-14 * _x_^0 + 1.00000000000001221245327087672194465994834899902344 * _x_ + 0.49999999999430511099518525952589698135852813720703 * _x_^2 + 0.166666666664935458896934505901299417018890380859375 * _x_^3 + 4.1666667042981407609314459250526851974427700042725e-2 * _x_^4 + 8.3333334039257193209815355317005014512687921524048e-3 * _x_^5 + 1.38888014792992796168913383070275813224725425243378e-3 * _x_^6 + 1.9841149992138749826725563352169956488069146871567e-4 * _x_^7 + 2.48845599756363706806135127624912684041191823780537e-5 * _x_^8 + 2.7647686745988652718796895618735831590129237156361e-6 * _x_^9 
//Info: polynomial: 0.49999999999430511099518525952589698135852813720703 * _x_^2 + 0.166666666664935458896934505901299417018890380859375 * _x_^3 + 4.1666667042981407609314459250526851974427700042725e-2 * _x_^4 + 8.3333334039257193209815355317005014512687921524048e-3 * _x_^5 + 1.38888014792992796168913383070275813224725425243378e-3 * _x_^6 + 1.9841149992138749826725563352169956488069146871567e-4 * _x_^7 + 2.48845599756363706806135127624912684041191823780537e-5 * _x_^8 + 2.7647686745988652718796895618735831590129237156361e-6 * _x_^9 
//Info: poly approx error: 1.42174003542196530897679876776207842247119413804624e-14
//Info: [33;1m generating polynomial evaluation scheme [0m
//Info: poly evaluation error: 1.8687160644212429136247865216269097872180708671036e-16
//Info: sub poly evaluation error: [-4.0929848670378802780984834163346693563174693359328e-17;4.0929848670378802780984834163346693563174693359328e-17]
//Info: attempting poly degree: 10
//Info: polynomial: -6.938893903907228377647697925567626953125e-18 * _x_^0 + 1.00000000000000666133814775093924254179000854492187 * _x_ + 0.5000000000000032196467714129539672285318374633789 * _x_^2 + 0.16666666666555049469700122699578059837222099304199 * _x_^3 + 4.1666666666398774476753885664948029443621635437012e-2 * _x_^4 + 8.3333333855071470980258041549859626684337854385376e-3 * _x_^5 + 1.3888888972893088415150320003021988668479025363922e-3 * _x_^6 + 1.9841170428592101357932742100587120148702524602413e-4 * _x_^7 + 2.48014660235451916330071814309476962989720050245523e-5 * _x_^8 + 2.76401270258424292759129141383578343038607272319496e-6 * _x_^9 + 2.7639095236635579296103422571040386657159615424462e-7 * _x_^10 
//Info: polynomial: 0.5000000000000032196467714129539672285318374633789 * _x_^2 + 0.16666666666555049469700122699578059837222099304199 * _x_^3 + 4.1666666666398774476753885664948029443621635437012e-2 * _x_^4 + 8.3333333855071470980258041549859626684337854385376e-3 * _x_^5 + 1.3888888972893088415150320003021988668479025363922e-3 * _x_^6 + 1.9841170428592101357932742100587120148702524602413e-4 * _x_^7 + 2.48014660235451916330071814309476962989720050245523e-5 * _x_^8 + 2.76401270258424292759129141383578343038607272319496e-6 * _x_^9 + 2.7639095236635579296103422571040386657159615424462e-7 * _x_^10 
//Info: poly approx error: 2.1345066366031363988716526968865513660161272608998e-16
//Info: [33;1m generating polynomial evaluation scheme [0m
//Info: poly evaluation error: 1.93557405404941771702291047955651879565437764506887e-16
//Info: sub poly evaluation error: [-4.7824253606655169668134483154859822305955777220387e-17;4.7824253606655169668134483154859822305955777220387e-17]
//Info: [33;1m MDL scheme [0m
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f16b84a12b0>
//Info: executing pass instantiate_abstract_prec on fct ml_exp_10
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f16b84a12b0>
//Info: executing pass instantiate_prec on fct ml_exp_10
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f16b84a12b0>
//Info: executing pass sub_expr_sharing on fct ml_exp_10
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f16b84a12b0>
//Info: executing pass check_processor_support on fct ml_exp_10
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f16b84a12b0>
//Info: executing pass debug_tag_node on fct ml_exp_10
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml_exp_10.c
//spec: {
//spec:     "cname": "ml_exp_10",
//spec:     "delta": 4.735561974950208e-308,
//spec:     "domain": [
//spec:         -1.7976931348623157e+308,
//spec:         709.782712893384
//spec:     ],
//spec:     "epsilon": 4.7257127389527359e-16,
//spec:     "operation": "exp"
//spec: }
