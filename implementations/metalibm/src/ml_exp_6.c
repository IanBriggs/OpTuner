/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   scripts/ml_exp.py --precision double --output src/ml_exp_6.c \
 *     --poly-degree 6 --fname ml_exp_6 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>
#include <math.h>



double ml_exp_6(double);
double ml_exp_6(double x){
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

                unround_k = x * 0x1.71547652b82fep0;
                ik = nearbyint(unround_k);
                late_overflow_test = ik > INT64_C(1023);

                if (__builtin_expect(late_overflow_test, 0)) {
                    double k;
                    double tmp1;
                    double exact_hi;
                    double tmp2;
                    double exact_lo;
                    double r;
                    double r2_;
                    double tmp3;
                    double tmp4;
                    double tmp5;
                    double tmp6;
                    double tmp7;
                    double tmp8;
                    double tmp9;
                    double tmp10;
                    double tmp11;
                    double tmp12;
                    double tmp13;
                    double r3_;
                    double tmp14;
                    double pre_sub_poly;
                    double tmp15;
                    double tmp16;
                    double poly;
                    int64_t diff_k;
                    double tmp17;
                    double tmp18;
                    double tmp19;
                    double late_overflow_result;
                    int tmp20;

                    k = rint(unround_k);
                    tmp1 = k * 0x1.62e42fefa4p-1;
                    exact_hi = x - tmp1;
                    tmp2 =  - k;
                    exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                    r = exact_hi + exact_lo;
                    r2_ = r * r;
                    tmp3 = 0x1.00000083a9728p-1 * r2_;
                    tmp4 = 0x1.55540432e88ap-3 * r2_;
                    tmp5 = r * tmp4;
                    tmp6 = tmp3 + tmp5;
                    tmp7 = 0x1.555429d54185ap-5 * r2_;
                    tmp8 = r2_ * tmp7;
                    tmp9 = tmp6 + tmp8;
                    tmp10 = 0x1.126fabac6698fp-7 * r2_;
                    tmp11 = 0x1.6dd174ffbcc16p-10 * r2_;
                    tmp12 = r * tmp11;
                    tmp13 = tmp10 + tmp12;
                    r3_ = r * r2_;
                    tmp14 = r3_ * tmp13;
                    pre_sub_poly = tmp9 + tmp14;
                    tmp15 = exact_lo + pre_sub_poly;
                    tmp16 = exact_hi + tmp15;
                    poly = 1.0 + tmp16;
                    diff_k = ik - INT64_C(997);
                    tmp17 = ml_exp_insertion_fp64(diff_k);
                    tmp18 = tmp17 * poly;
                    tmp19 = ml_exp_insertion_fp64(INT64_C(997));
                    late_overflow_result = tmp18 * tmp19;
                    tmp20 = ml_is_inf(late_overflow_result);

                    if (__builtin_expect(tmp20, 0)) {

                        return INFINITY;
                    } else {

                        return late_overflow_result;
                    }
                } else {
                    double k;
                    int late_underflow_test;

                    k = rint(unround_k);
                    late_underflow_test = k <= -1022.0;

                    if (__builtin_expect(late_underflow_test, 0)) {
                        double tmp1;
                        double exact_hi;
                        double tmp2;
                        double exact_lo;
                        double r;
                        double r2_;
                        double tmp3;
                        double tmp4;
                        double tmp5;
                        double tmp6;
                        double tmp7;
                        double tmp8;
                        double tmp9;
                        double tmp10;
                        double tmp11;
                        double tmp12;
                        double tmp13;
                        double r3_;
                        double tmp14;
                        double pre_sub_poly;
                        double tmp15;
                        double tmp16;
                        double poly;
                        int64_t corrected_exp;
                        double tmp17;
                        double tmp18;
                        double tmp19;
                        double late_underflow_result;
                        int tmp20;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1.00000083a9728p-1 * r2_;
                        tmp4 = 0x1.55540432e88ap-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.555429d54185ap-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        tmp9 = tmp6 + tmp8;
                        tmp10 = 0x1.126fabac6698fp-7 * r2_;
                        tmp11 = 0x1.6dd174ffbcc16p-10 * r2_;
                        tmp12 = r * tmp11;
                        tmp13 = tmp10 + tmp12;
                        r3_ = r * r2_;
                        tmp14 = r3_ * tmp13;
                        pre_sub_poly = tmp9 + tmp14;
                        tmp15 = exact_lo + pre_sub_poly;
                        tmp16 = exact_hi + tmp15;
                        poly = 1.0 + tmp16;
                        corrected_exp = ik + INT64_C(104);
                        tmp17 = ml_exp_insertion_fp64(corrected_exp);
                        tmp18 = tmp17 * poly;
                        tmp19 = ml_exp_insertion_fp64(INT32_C(-104));
                        late_underflow_result = tmp18 * tmp19;
                        tmp20 = ml_is_subnormal(late_underflow_result);

                        if (tmp20) {

                            return late_underflow_result;
                        }
                        return late_underflow_result;
                    } else {
                        double tmp1;
                        double exact_hi;
                        double tmp2;
                        double exact_lo;
                        double r;
                        double r2_;
                        double tmp3;
                        double tmp4;
                        double tmp5;
                        double tmp6;
                        double tmp7;
                        double tmp8;
                        double tmp9;
                        double tmp10;
                        double tmp11;
                        double tmp12;
                        double tmp13;
                        double r3_;
                        double tmp14;
                        double pre_sub_poly;
                        double tmp15;
                        double tmp16;
                        double poly;
                        double exp_ik;
                        double std_result;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1.00000083a9728p-1 * r2_;
                        tmp4 = 0x1.55540432e88ap-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.555429d54185ap-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        tmp9 = tmp6 + tmp8;
                        tmp10 = 0x1.126fabac6698fp-7 * r2_;
                        tmp11 = 0x1.6dd174ffbcc16p-10 * r2_;
                        tmp12 = r * tmp11;
                        tmp13 = tmp10 + tmp12;
                        r3_ = r * r2_;
                        tmp14 = r3_ * tmp13;
                        pre_sub_poly = tmp9 + tmp14;
                        tmp15 = exact_lo + pre_sub_poly;
                        tmp16 = exact_hi + tmp15;
                        poly = 1.0 + tmp16;
                        exp_ik = ml_exp_insertion_fp64(ik);
                        std_result = exp_ik * poly;
                        return std_result;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fd7383032e0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fd7382f0fd0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fd7382f0df0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fd7382f0be0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: [33;1m generating implementation scheme [0m
//Info: log2_hi_precision: 39
//Info: eval error: [-1.13686837721628954436451023869919865760813593169587e-13;1.13686837721628954436451023869919865760813593169587e-13]
//Info: [33;1m building mathematical polynomial [0m
//
//Info: attempting poly degree: 6
//Info: polynomial: -5.82076609134674072265625e-11 * _x_^0 + 1.00000003772604473262219926255056634545326232910156 * _x_ + 0.50000001532746285448638445814140141010284423828125 * _x_^2 + 0.16666415481910679119437190820463001728057861328125 * _x_^3 + 4.1666108803881399258450812794762896373867988586426e-2 * _x_^4 + 8.3751285790654422108714172168220102321356534957886e-3 * _x_^5 + 1.39548565487924080760762102215721824904903769493103e-3 * _x_^6 
//Info: polynomial: 0.50000001532746285448638445814140141010284423828125 * _x_^2 + 0.16666415481910679119437190820463001728057861328125 * _x_^3 + 4.1666108803881399258450812794762896373867988586426e-2 * _x_^4 + 8.3751285790654422108714172168220102321356534957886e-3 * _x_^5 + 1.39548565487924080760762102215721824904903769493103e-3 * _x_^6 
//Info: poly approx error: 1.88400498063738826218833313850580677620190639185736e-9
//Info: [33;1m generating polynomial evaluation scheme [0m
//Info: poly evaluation error: 1.8661699997822587139492280780050592853177641964406e-16
//Info: sub poly evaluation error: [-4.0885308710987240235016133312274306228100093330599e-17;4.0885308710987240235016133312274306228100093330599e-17]
//Info: [33;1m MDL scheme [0m
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd7382f0cd0>
//Info: executing pass instantiate_abstract_prec on fct ml_exp_6
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd7382f0cd0>
//Info: executing pass instantiate_prec on fct ml_exp_6
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd7382f0cd0>
//Info: executing pass sub_expr_sharing on fct ml_exp_6
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd7382f0cd0>
//Info: executing pass check_processor_support on fct ml_exp_6
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd7382f0cd0>
//Info: executing pass debug_tag_node on fct ml_exp_6
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml_exp_6.c
