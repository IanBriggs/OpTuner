/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   scripts/ml_exp.py --precision double --output src/ml_exp_11.c \
 *     --poly-degree 11 --fname ml_exp_11 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>
#include <math.h>



double ml_exp_11(double);
double ml_exp_11(double x){
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
                    double tmp15;
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
                    double tmp28;
                    double r4_;
                    double r5_;
                    double tmp29;
                    double pre_sub_poly;
                    double tmp30;
                    double tmp31;
                    double poly;
                    int64_t diff_k;
                    double tmp32;
                    double tmp33;
                    double tmp34;
                    double late_overflow_result;
                    int tmp35;

                    k = rint(unround_k);
                    tmp1 = k * 0x1.62e42fefa4p-1;
                    exact_hi = x - tmp1;
                    tmp2 =  - k;
                    exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                    r = exact_hi + exact_lo;
                    r2_ = r * r;
                    tmp3 = 0x1.0000000000011p-1 * r2_;
                    tmp4 = 0x1.555555555555ep-3 * r2_;
                    tmp5 = r * tmp4;
                    tmp6 = tmp3 + tmp5;
                    tmp7 = 0x1.555555554efbbp-5 * r2_;
                    tmp8 = r2_ * tmp7;
                    tmp9 = tmp6 + tmp8;
                    tmp10 = 0x1.111111110e174p-7 * r2_;
                    tmp11 = 0x1.6c16c188207c6p-10 * r2_;
                    tmp12 = r * tmp11;
                    tmp13 = tmp10 + tmp12;
                    r3_ = r * r2_;
                    tmp14 = r3_ * tmp13;
                    tmp15 = tmp9 + tmp14;
                    tmp16 = 0x1.a01a01b744dbfp-13 * r2_;
                    tmp17 = 0x1.a019916618836p-16 * r2_;
                    tmp18 = r * tmp17;
                    tmp19 = tmp16 + tmp18;
                    tmp20 = 0x1.71dde791e78c7p-19 * r2_;
                    tmp21 = r2_ * tmp20;
                    tmp22 = tmp19 + tmp21;
                    tmp23 = 0x1.28b437c81e5c5p-22 * r2_;
                    tmp24 = 0x1.af7996ac10bccp-26 * r2_;
                    tmp25 = r * tmp24;
                    tmp26 = tmp23 + tmp25;
                    tmp27 = r3_ * tmp26;
                    tmp28 = tmp22 + tmp27;
                    r4_ = r2_ * r2_;
                    r5_ = r * r4_;
                    tmp29 = r5_ * tmp28;
                    pre_sub_poly = tmp15 + tmp29;
                    tmp30 = exact_lo + pre_sub_poly;
                    tmp31 = exact_hi + tmp30;
                    poly = 1.0 + tmp31;
                    diff_k = ik - INT64_C(997);
                    tmp32 = ml_exp_insertion_fp64(diff_k);
                    tmp33 = tmp32 * poly;
                    tmp34 = ml_exp_insertion_fp64(INT64_C(997));
                    late_overflow_result = tmp33 * tmp34;
                    tmp35 = ml_is_inf(late_overflow_result);

                    if (__builtin_expect(tmp35, 0)) {

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
                        double tmp15;
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
                        double tmp28;
                        double r4_;
                        double r5_;
                        double tmp29;
                        double pre_sub_poly;
                        double tmp30;
                        double tmp31;
                        double poly;
                        int64_t corrected_exp;
                        double tmp32;
                        double tmp33;
                        double tmp34;
                        double late_underflow_result;
                        int tmp35;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1.0000000000011p-1 * r2_;
                        tmp4 = 0x1.555555555555ep-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.555555554efbbp-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        tmp9 = tmp6 + tmp8;
                        tmp10 = 0x1.111111110e174p-7 * r2_;
                        tmp11 = 0x1.6c16c188207c6p-10 * r2_;
                        tmp12 = r * tmp11;
                        tmp13 = tmp10 + tmp12;
                        r3_ = r * r2_;
                        tmp14 = r3_ * tmp13;
                        tmp15 = tmp9 + tmp14;
                        tmp16 = 0x1.a01a01b744dbfp-13 * r2_;
                        tmp17 = 0x1.a019916618836p-16 * r2_;
                        tmp18 = r * tmp17;
                        tmp19 = tmp16 + tmp18;
                        tmp20 = 0x1.71dde791e78c7p-19 * r2_;
                        tmp21 = r2_ * tmp20;
                        tmp22 = tmp19 + tmp21;
                        tmp23 = 0x1.28b437c81e5c5p-22 * r2_;
                        tmp24 = 0x1.af7996ac10bccp-26 * r2_;
                        tmp25 = r * tmp24;
                        tmp26 = tmp23 + tmp25;
                        tmp27 = r3_ * tmp26;
                        tmp28 = tmp22 + tmp27;
                        r4_ = r2_ * r2_;
                        r5_ = r * r4_;
                        tmp29 = r5_ * tmp28;
                        pre_sub_poly = tmp15 + tmp29;
                        tmp30 = exact_lo + pre_sub_poly;
                        tmp31 = exact_hi + tmp30;
                        poly = 1.0 + tmp31;
                        corrected_exp = ik + INT64_C(104);
                        tmp32 = ml_exp_insertion_fp64(corrected_exp);
                        tmp33 = tmp32 * poly;
                        tmp34 = ml_exp_insertion_fp64(INT32_C(-104));
                        late_underflow_result = tmp33 * tmp34;
                        tmp35 = ml_is_subnormal(late_underflow_result);

                        if (tmp35) {

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
                        double tmp15;
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
                        double tmp28;
                        double r4_;
                        double r5_;
                        double tmp29;
                        double pre_sub_poly;
                        double tmp30;
                        double tmp31;
                        double poly;
                        double exp_ik;
                        double std_result;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1.0000000000011p-1 * r2_;
                        tmp4 = 0x1.555555555555ep-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.555555554efbbp-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        tmp9 = tmp6 + tmp8;
                        tmp10 = 0x1.111111110e174p-7 * r2_;
                        tmp11 = 0x1.6c16c188207c6p-10 * r2_;
                        tmp12 = r * tmp11;
                        tmp13 = tmp10 + tmp12;
                        r3_ = r * r2_;
                        tmp14 = r3_ * tmp13;
                        tmp15 = tmp9 + tmp14;
                        tmp16 = 0x1.a01a01b744dbfp-13 * r2_;
                        tmp17 = 0x1.a019916618836p-16 * r2_;
                        tmp18 = r * tmp17;
                        tmp19 = tmp16 + tmp18;
                        tmp20 = 0x1.71dde791e78c7p-19 * r2_;
                        tmp21 = r2_ * tmp20;
                        tmp22 = tmp19 + tmp21;
                        tmp23 = 0x1.28b437c81e5c5p-22 * r2_;
                        tmp24 = 0x1.af7996ac10bccp-26 * r2_;
                        tmp25 = r * tmp24;
                        tmp26 = tmp23 + tmp25;
                        tmp27 = r3_ * tmp26;
                        tmp28 = tmp22 + tmp27;
                        r4_ = r2_ * r2_;
                        r5_ = r * r4_;
                        tmp29 = r5_ * tmp28;
                        pre_sub_poly = tmp15 + tmp29;
                        tmp30 = exact_lo + pre_sub_poly;
                        tmp31 = exact_hi + tmp30;
                        poly = 1.0 + tmp31;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f607be432e0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f607be30fd0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f607be30df0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f607be30be0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: [33;1m generating implementation scheme [0m
//Info: log2_hi_precision: 39
//Info: eval error: [-1.13686837721628954436451023869919865760813593169587e-13;1.13686837721628954436451023869919865760813593169587e-13]
//Info: [33;1m building mathematical polynomial [0m
//
//Info: attempting poly degree: 11
//Info: polynomial: -3.4694469519536141888238489627838134765625e-18 * _x_^0 + _x_ + 0.50000000000000188737914186276611872017383575439453 * _x_^2 + 0.166666666666666907214988668783917091786861419677734 * _x_^3 + 4.166666666648618372326140502082125749439001083374e-2 * _x_^4 + 8.3333333333121886732364202998724067583680152893066e-3 * _x_^5 + 1.38888889526399402982170805387340806191787123680115e-3 * _x_^6 + 1.98412699071155344083747240624404639675049111247063e-4 * _x_^7 + 2.4801485232102587813376309844315414920856710523367e-5 * _x_^8 + 2.7557225132499526126523669428136642522986221592873e-6 * _x_^9 + 2.7632711097728113608192512980210597817176676471718e-7 * _x_^10 + 2.5115147892167747124948600206256754674427611462306e-8 * _x_^11 
//Info: polynomial: 0.50000000000000188737914186276611872017383575439453 * _x_^2 + 0.166666666666666907214988668783917091786861419677734 * _x_^3 + 4.166666666648618372326140502082125749439001083374e-2 * _x_^4 + 8.3333333333121886732364202998724067583680152893066e-3 * _x_^5 + 1.38888889526399402982170805387340806191787123680115e-3 * _x_^6 + 1.98412699071155344083747240624404639675049111247063e-4 * _x_^7 + 2.4801485232102587813376309844315414920856710523367e-5 * _x_^8 + 2.7557225132499526126523669428136642522986221592873e-6 * _x_^9 + 2.7632711097728113608192512980210597817176676471718e-7 * _x_^10 + 2.5115147892167747124948600206256754674427611462306e-8 * _x_^11 
//Info: poly approx error: 3.4694469519536141888238489627838134765625e-18
//Info: [33;1m generating polynomial evaluation scheme [0m
//Info: poly evaluation error: 1.9355741912082689447551706341443134340490059957069e-16
//Info: sub poly evaluation error: [-4.7824262062570239524015784950353734097955089211687e-17;4.7824262062570239524015784950353734097955089211687e-17]
//Info: [33;1m MDL scheme [0m
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f607be30cd0>
//Info: executing pass instantiate_abstract_prec on fct ml_exp_11
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f607be30cd0>
//Info: executing pass instantiate_prec on fct ml_exp_11
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f607be30cd0>
//Info: executing pass sub_expr_sharing on fct ml_exp_11
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f607be30cd0>
//Info: executing pass check_processor_support on fct ml_exp_11
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f607be30cd0>
//Info: executing pass debug_tag_node on fct ml_exp_11
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml_exp_11.c
