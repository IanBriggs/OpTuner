/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   scripts/ml_exp.py --precision double --output src/ml_exp_12.c \
 *     --poly-degree 12 --fname ml_exp_12 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>
#include <math.h>



double ml_exp_12(double);
double ml_exp_12(double x){
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
                    double tmp14;
                    double tmp15;
                    double tmp16;
                    double r3_;
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
                    double tmp29;
                    double tmp30;
                    double tmp31;
                    double r6_;
                    double tmp32;
                    double pre_sub_poly;
                    double tmp33;
                    double tmp34;
                    double poly;
                    int64_t diff_k;
                    double tmp35;
                    double tmp36;
                    double tmp37;
                    double late_overflow_result;
                    int tmp38;

                    k = rint(unround_k);
                    tmp1 = k * 0x1.62e42fefa4p-1;
                    exact_hi = x - tmp1;
                    tmp2 =  - k;
                    exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                    r = exact_hi + exact_lo;
                    r2_ = r * r;
                    tmp3 = 0x1p-1 * r2_;
                    tmp4 = 0x1.555555555555cp-3 * r2_;
                    tmp5 = r * tmp4;
                    tmp6 = tmp3 + tmp5;
                    tmp7 = 0x1.5555555555559p-5 * r2_;
                    tmp8 = r2_ * tmp7;
                    tmp9 = tmp6 + tmp8;
                    tmp10 = 0x1.111111110e9efp-7 * r2_;
                    tmp11 = 0x1.6c16c16c149e8p-10 * r2_;
                    tmp12 = r * tmp11;
                    tmp13 = tmp10 + tmp12;
                    tmp14 = 0x1.a01a01b44afd9p-13 * r2_;
                    tmp15 = r2_ * tmp14;
                    tmp16 = tmp13 + tmp15;
                    r3_ = r * r2_;
                    tmp17 = r3_ * tmp16;
                    tmp18 = tmp9 + tmp17;
                    tmp19 = 0x1.a01a01af3c8bdp-16 * r2_;
                    tmp20 = 0x1.71ddee6190153p-19 * r2_;
                    tmp21 = r * tmp20;
                    tmp22 = tmp19 + tmp21;
                    tmp23 = 0x1.27e4c8990fb27p-22 * r2_;
                    tmp24 = r2_ * tmp23;
                    tmp25 = tmp22 + tmp24;
                    tmp26 = 0x1.af6e9ed009631p-26 * r2_;
                    tmp27 = 0x1.1f90e97eddc43p-29 * r2_;
                    tmp28 = r * tmp27;
                    tmp29 = tmp26 + tmp28;
                    tmp30 = r3_ * tmp29;
                    tmp31 = tmp25 + tmp30;
                    r6_ = r3_ * r3_;
                    tmp32 = r6_ * tmp31;
                    pre_sub_poly = tmp18 + tmp32;
                    tmp33 = exact_lo + pre_sub_poly;
                    tmp34 = exact_hi + tmp33;
                    poly = 1.0 + tmp34;
                    diff_k = ik - INT64_C(997);
                    tmp35 = ml_exp_insertion_fp64(diff_k);
                    tmp36 = tmp35 * poly;
                    tmp37 = ml_exp_insertion_fp64(INT64_C(997));
                    late_overflow_result = tmp36 * tmp37;
                    tmp38 = ml_is_inf(late_overflow_result);

                    if (__builtin_expect(tmp38, 0)) {

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
                        double tmp14;
                        double tmp15;
                        double tmp16;
                        double r3_;
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
                        double tmp29;
                        double tmp30;
                        double tmp31;
                        double r6_;
                        double tmp32;
                        double pre_sub_poly;
                        double tmp33;
                        double tmp34;
                        double poly;
                        int64_t corrected_exp;
                        double tmp35;
                        double tmp36;
                        double tmp37;
                        double late_underflow_result;
                        int tmp38;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1p-1 * r2_;
                        tmp4 = 0x1.555555555555cp-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.5555555555559p-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        tmp9 = tmp6 + tmp8;
                        tmp10 = 0x1.111111110e9efp-7 * r2_;
                        tmp11 = 0x1.6c16c16c149e8p-10 * r2_;
                        tmp12 = r * tmp11;
                        tmp13 = tmp10 + tmp12;
                        tmp14 = 0x1.a01a01b44afd9p-13 * r2_;
                        tmp15 = r2_ * tmp14;
                        tmp16 = tmp13 + tmp15;
                        r3_ = r * r2_;
                        tmp17 = r3_ * tmp16;
                        tmp18 = tmp9 + tmp17;
                        tmp19 = 0x1.a01a01af3c8bdp-16 * r2_;
                        tmp20 = 0x1.71ddee6190153p-19 * r2_;
                        tmp21 = r * tmp20;
                        tmp22 = tmp19 + tmp21;
                        tmp23 = 0x1.27e4c8990fb27p-22 * r2_;
                        tmp24 = r2_ * tmp23;
                        tmp25 = tmp22 + tmp24;
                        tmp26 = 0x1.af6e9ed009631p-26 * r2_;
                        tmp27 = 0x1.1f90e97eddc43p-29 * r2_;
                        tmp28 = r * tmp27;
                        tmp29 = tmp26 + tmp28;
                        tmp30 = r3_ * tmp29;
                        tmp31 = tmp25 + tmp30;
                        r6_ = r3_ * r3_;
                        tmp32 = r6_ * tmp31;
                        pre_sub_poly = tmp18 + tmp32;
                        tmp33 = exact_lo + pre_sub_poly;
                        tmp34 = exact_hi + tmp33;
                        poly = 1.0 + tmp34;
                        corrected_exp = ik + INT64_C(104);
                        tmp35 = ml_exp_insertion_fp64(corrected_exp);
                        tmp36 = tmp35 * poly;
                        tmp37 = ml_exp_insertion_fp64(INT32_C(-104));
                        late_underflow_result = tmp36 * tmp37;
                        tmp38 = ml_is_subnormal(late_underflow_result);

                        if (tmp38) {

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
                        double tmp14;
                        double tmp15;
                        double tmp16;
                        double r3_;
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
                        double tmp29;
                        double tmp30;
                        double tmp31;
                        double r6_;
                        double tmp32;
                        double pre_sub_poly;
                        double tmp33;
                        double tmp34;
                        double poly;
                        double exp_ik;
                        double std_result;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1p-1 * r2_;
                        tmp4 = 0x1.555555555555cp-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.5555555555559p-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        tmp9 = tmp6 + tmp8;
                        tmp10 = 0x1.111111110e9efp-7 * r2_;
                        tmp11 = 0x1.6c16c16c149e8p-10 * r2_;
                        tmp12 = r * tmp11;
                        tmp13 = tmp10 + tmp12;
                        tmp14 = 0x1.a01a01b44afd9p-13 * r2_;
                        tmp15 = r2_ * tmp14;
                        tmp16 = tmp13 + tmp15;
                        r3_ = r * r2_;
                        tmp17 = r3_ * tmp16;
                        tmp18 = tmp9 + tmp17;
                        tmp19 = 0x1.a01a01af3c8bdp-16 * r2_;
                        tmp20 = 0x1.71ddee6190153p-19 * r2_;
                        tmp21 = r * tmp20;
                        tmp22 = tmp19 + tmp21;
                        tmp23 = 0x1.27e4c8990fb27p-22 * r2_;
                        tmp24 = r2_ * tmp23;
                        tmp25 = tmp22 + tmp24;
                        tmp26 = 0x1.af6e9ed009631p-26 * r2_;
                        tmp27 = 0x1.1f90e97eddc43p-29 * r2_;
                        tmp28 = r * tmp27;
                        tmp29 = tmp26 + tmp28;
                        tmp30 = r3_ * tmp29;
                        tmp31 = tmp25 + tmp30;
                        r6_ = r3_ * r3_;
                        tmp32 = r6_ * tmp31;
                        pre_sub_poly = tmp18 + tmp32;
                        tmp33 = exact_lo + pre_sub_poly;
                        tmp34 = exact_hi + tmp33;
                        poly = 1.0 + tmp34;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f0b81b052e0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f0b81af2fd0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f0b81af2df0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f0b81af2be0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: [33;1m generating implementation scheme [0m
//Info: log2_hi_precision: 39
//Info: eval error: [-1.13686837721628954436451023869919865760813593169587e-13;1.13686837721628954436451023869919865760813593169587e-13]
//Info: [33;1m building mathematical polynomial [0m
//
//Info: attempting poly degree: 12
//Info: polynomial: -8.470329472543003390683225006796419620513916015625e-22 * _x_^0 + _x_ + 0.5 * _x_^2 + 0.16666666666666685170383743752609007060527801513672 * _x_^3 + 4.1666666666666692109277647659837384708225727081299e-2 * _x_^4 + 8.3333333333159547579027659480743750464171171188354e-3 * _x_^5 + 1.38888888888699137125204430276426137425005435943604e-3 * _x_^6 + 1.9841269898657093212653024227876130680670030415058e-4 * _x_^7 + 2.48015873553573426926483619370245037316635716706514e-5 * _x_^8 + 2.7557232875898055793199067226018073029081278946251e-6 * _x_^9 + 2.7557246934713600040452673688162743559360023937188e-7 * _x_^10 + 2.5112654011965703736817767340906704109926295132027e-8 * _x_^11 + 2.0923184846445714933981654346786469012009490597848e-9 * _x_^12 
//Info: polynomial: 0.5 * _x_^2 + 0.16666666666666685170383743752609007060527801513672 * _x_^3 + 4.1666666666666692109277647659837384708225727081299e-2 * _x_^4 + 8.3333333333159547579027659480743750464171171188354e-3 * _x_^5 + 1.38888888888699137125204430276426137425005435943604e-3 * _x_^6 + 1.9841269898657093212653024227876130680670030415058e-4 * _x_^7 + 2.48015873553573426926483619370245037316635716706514e-5 * _x_^8 + 2.7557232875898055793199067226018073029081278946251e-6 * _x_^9 + 2.7557246934713600040452673688162743559360023937188e-7 * _x_^10 + 2.5112654011965703736817767340906704109926295132027e-8 * _x_^11 + 2.0923184846445714933981654346786469012009490597848e-9 * _x_^12 
//Info: poly approx error: 6.1207235412571604816411795687873526939586015516965e-20
//Info: [33;1m generating polynomial evaluation scheme [0m
//Info: poly evaluation error: 1.90091424324711538926503770988979379405946589309114e-16
//Info: sub poly evaluation error: [-4.782873939871432837898470149859293624728421890593e-17;4.782873939871432837898470149859293624728421890593e-17]
//Info: [33;1m MDL scheme [0m
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0b81af2cd0>
//Info: executing pass instantiate_abstract_prec on fct ml_exp_12
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0b81af2cd0>
//Info: executing pass instantiate_prec on fct ml_exp_12
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0b81af2cd0>
//Info: executing pass sub_expr_sharing on fct ml_exp_12
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0b81af2cd0>
//Info: executing pass check_processor_support on fct ml_exp_12
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0b81af2cd0>
//Info: executing pass debug_tag_node on fct ml_exp_12
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml_exp_12.c
