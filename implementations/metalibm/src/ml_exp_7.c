/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   scripts/ml_exp.py --precision double --output src/ml_exp_7.c \
 *     --poly-degree 7 --fname ml_exp_7 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>
#include <math.h>



double ml_exp_7(double);
double ml_exp_7(double x){
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
                    double pre_sub_poly;
                    double tmp18;
                    double tmp19;
                    double poly;
                    int64_t diff_k;
                    double tmp20;
                    double tmp21;
                    double tmp22;
                    double late_overflow_result;
                    int tmp23;

                    k = rint(unround_k);
                    tmp1 = k * 0x1.62e42fefa4p-1;
                    exact_hi = x - tmp1;
                    tmp2 =  - k;
                    exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                    r = exact_hi + exact_lo;
                    r2_ = r * r;
                    tmp3 = 0x1.0000005610082p-1 * r2_;
                    tmp4 = 0x1.555555c6cfc73p-3 * r2_;
                    tmp5 = r * tmp4;
                    tmp6 = tmp3 + tmp5;
                    tmp7 = 0x1.55546b5cde318p-5 * r2_;
                    tmp8 = r2_ * tmp7;
                    tmp9 = tmp6 + tmp8;
                    tmp10 = 0x1.11105ad14b01fp-7 * r2_;
                    tmp11 = 0x1.6da3527688e6fp-10 * r2_;
                    tmp12 = r * tmp11;
                    tmp13 = tmp10 + tmp12;
                    tmp14 = 0x1.a1d7872058ffp-13 * r2_;
                    tmp15 = r2_ * tmp14;
                    tmp16 = tmp13 + tmp15;
                    r3_ = r * r2_;
                    tmp17 = r3_ * tmp16;
                    pre_sub_poly = tmp9 + tmp17;
                    tmp18 = exact_lo + pre_sub_poly;
                    tmp19 = exact_hi + tmp18;
                    poly = 1.0 + tmp19;
                    diff_k = ik - INT64_C(997);
                    tmp20 = ml_exp_insertion_fp64(diff_k);
                    tmp21 = tmp20 * poly;
                    tmp22 = ml_exp_insertion_fp64(INT64_C(997));
                    late_overflow_result = tmp21 * tmp22;
                    tmp23 = ml_is_inf(late_overflow_result);

                    if (__builtin_expect(tmp23, 0)) {

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
                        double pre_sub_poly;
                        double tmp18;
                        double tmp19;
                        double poly;
                        int64_t corrected_exp;
                        double tmp20;
                        double tmp21;
                        double tmp22;
                        double late_underflow_result;
                        int tmp23;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1.0000005610082p-1 * r2_;
                        tmp4 = 0x1.555555c6cfc73p-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.55546b5cde318p-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        tmp9 = tmp6 + tmp8;
                        tmp10 = 0x1.11105ad14b01fp-7 * r2_;
                        tmp11 = 0x1.6da3527688e6fp-10 * r2_;
                        tmp12 = r * tmp11;
                        tmp13 = tmp10 + tmp12;
                        tmp14 = 0x1.a1d7872058ffp-13 * r2_;
                        tmp15 = r2_ * tmp14;
                        tmp16 = tmp13 + tmp15;
                        r3_ = r * r2_;
                        tmp17 = r3_ * tmp16;
                        pre_sub_poly = tmp9 + tmp17;
                        tmp18 = exact_lo + pre_sub_poly;
                        tmp19 = exact_hi + tmp18;
                        poly = 1.0 + tmp19;
                        corrected_exp = ik + INT64_C(104);
                        tmp20 = ml_exp_insertion_fp64(corrected_exp);
                        tmp21 = tmp20 * poly;
                        tmp22 = ml_exp_insertion_fp64(INT32_C(-104));
                        late_underflow_result = tmp21 * tmp22;
                        tmp23 = ml_is_subnormal(late_underflow_result);

                        if (tmp23) {

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
                        double pre_sub_poly;
                        double tmp18;
                        double tmp19;
                        double poly;
                        double exp_ik;
                        double std_result;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1.0000005610082p-1 * r2_;
                        tmp4 = 0x1.555555c6cfc73p-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.55546b5cde318p-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        tmp9 = tmp6 + tmp8;
                        tmp10 = 0x1.11105ad14b01fp-7 * r2_;
                        tmp11 = 0x1.6da3527688e6fp-10 * r2_;
                        tmp12 = r * tmp11;
                        tmp13 = tmp10 + tmp12;
                        tmp14 = 0x1.a1d7872058ffp-13 * r2_;
                        tmp15 = r2_ * tmp14;
                        tmp16 = tmp13 + tmp15;
                        r3_ = r * r2_;
                        tmp17 = r3_ * tmp16;
                        pre_sub_poly = tmp9 + tmp17;
                        tmp18 = exact_lo + pre_sub_poly;
                        tmp19 = exact_hi + tmp18;
                        poly = 1.0 + tmp19;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7faae4ea32e0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7faae4e90fd0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7faae4e90df0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7faae4e90be0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: [33;1m generating implementation scheme [0m
//Info: log2_hi_precision: 39
//Info: eval error: [-1.13686837721628954436451023869919865760813593169587e-13;1.13686837721628954436451023869919865760813593169587e-13]
//Info: [33;1m building mathematical polynomial [0m
//
//Info: attempting poly degree: 7
//Info: polynomial: -2.910383045673370361328125e-11 * _x_^0 + 0.99999999996388710954420275811571627855300903320312 * _x_ + 0.50000001001900806762989759590709581971168518066406 * _x_^2 + 0.1666666699693198638865254679330973885953426361084 * _x_^3 + 4.1666230862523245814799111030879430472850799560547e-2 * _x_^4 + 8.333248466975416365865036993909598095342516899109e-3 * _x_^5 + 1.39479819120760426508220941599347497685812413692474e-3 * _x_^6 + 1.99242546851440948535438835165223281364887952804565e-4 * _x_^7 
//Info: polynomial: 0.50000001001900806762989759590709581971168518066406 * _x_^2 + 0.1666666699693198638865254679330973885953426361084 * _x_^3 + 4.1666230862523245814799111030879430472850799560547e-2 * _x_^4 + 8.333248466975416365865036993909598095342516899109e-3 * _x_^5 + 1.39479819120760426508220941599347497685812413692474e-3 * _x_^6 + 1.99242546851440948535438835165223281364887952804565e-4 * _x_^7 
//Info: poly approx error: 4.2443416545145679926942813961627910767473522849269e-11
//Info: [33;1m generating polynomial evaluation scheme [0m
//Info: poly evaluation error: 1.86621983562040851074131020640015472461445371101234e-16
//Info: sub poly evaluation error: [-4.0889842639537056334484184016557182718848238387794e-17;4.0889842639537056334484184016557182718848238387794e-17]
//Info: [33;1m MDL scheme [0m
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7faae4e90cd0>
//Info: executing pass instantiate_abstract_prec on fct ml_exp_7
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7faae4e90cd0>
//Info: executing pass instantiate_prec on fct ml_exp_7
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7faae4e90cd0>
//Info: executing pass sub_expr_sharing on fct ml_exp_7
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7faae4e90cd0>
//Info: executing pass check_processor_support on fct ml_exp_7
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7faae4e90cd0>
//Info: executing pass debug_tag_node on fct ml_exp_7
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml_exp_7.c
