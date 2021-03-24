/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   scripts/ml_exp.py --precision double --output src/ml_exp_4.c \
 *     --poly-degree 4 --fname ml_exp_4 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>
#include <math.h>



double ml_exp_4(double);
double ml_exp_4(double x){
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
                    double pre_sub_poly;
                    double tmp9;
                    double tmp10;
                    double poly;
                    int64_t diff_k;
                    double tmp11;
                    double tmp12;
                    double tmp13;
                    double late_overflow_result;
                    int tmp14;

                    k = rint(unround_k);
                    tmp1 = k * 0x1.62e42fefa4p-1;
                    exact_hi = x - tmp1;
                    tmp2 =  - k;
                    exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                    r = exact_hi + exact_lo;
                    r2_ = r * r;
                    tmp3 = 0x1.fffbfe7ddea7ep-2 * r2_;
                    tmp4 = 0x1.57e744ed9cb0fp-3 * r2_;
                    tmp5 = r * tmp4;
                    tmp6 = tmp3 + tmp5;
                    tmp7 = 0x1.57ac7dd5ab80bp-5 * r2_;
                    tmp8 = r2_ * tmp7;
                    pre_sub_poly = tmp6 + tmp8;
                    tmp9 = exact_lo + pre_sub_poly;
                    tmp10 = exact_hi + tmp9;
                    poly = 1.0 + tmp10;
                    diff_k = ik - INT64_C(997);
                    tmp11 = ml_exp_insertion_fp64(diff_k);
                    tmp12 = tmp11 * poly;
                    tmp13 = ml_exp_insertion_fp64(INT64_C(997));
                    late_overflow_result = tmp12 * tmp13;
                    tmp14 = ml_is_inf(late_overflow_result);

                    if (__builtin_expect(tmp14, 0)) {

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
                        double pre_sub_poly;
                        double tmp9;
                        double tmp10;
                        double poly;
                        int64_t corrected_exp;
                        double tmp11;
                        double tmp12;
                        double tmp13;
                        double late_underflow_result;
                        int tmp14;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1.fffbfe7ddea7ep-2 * r2_;
                        tmp4 = 0x1.57e744ed9cb0fp-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.57ac7dd5ab80bp-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        pre_sub_poly = tmp6 + tmp8;
                        tmp9 = exact_lo + pre_sub_poly;
                        tmp10 = exact_hi + tmp9;
                        poly = 1.0 + tmp10;
                        corrected_exp = ik + INT64_C(104);
                        tmp11 = ml_exp_insertion_fp64(corrected_exp);
                        tmp12 = tmp11 * poly;
                        tmp13 = ml_exp_insertion_fp64(INT32_C(-104));
                        late_underflow_result = tmp12 * tmp13;
                        tmp14 = ml_is_subnormal(late_underflow_result);

                        if (tmp14) {

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
                        double pre_sub_poly;
                        double tmp9;
                        double tmp10;
                        double poly;
                        double exp_ik;
                        double std_result;

                        tmp1 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp1;
                        tmp2 =  - k;
                        exact_lo = tmp2 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp3 = 0x1.fffbfe7ddea7ep-2 * r2_;
                        tmp4 = 0x1.57e744ed9cb0fp-3 * r2_;
                        tmp5 = r * tmp4;
                        tmp6 = tmp3 + tmp5;
                        tmp7 = 0x1.57ac7dd5ab80bp-5 * r2_;
                        tmp8 = r2_ * tmp7;
                        pre_sub_poly = tmp6 + tmp8;
                        tmp9 = exact_lo + pre_sub_poly;
                        tmp10 = exact_hi + tmp9;
                        poly = 1.0 + tmp10;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f79d50de2e0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f79d50cbfd0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f79d50cbdf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f79d50cbbe0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: [33;1m generating implementation scheme [0m
//Info: log2_hi_precision: 39
//Info: eval error: [-1.13686837721628954436451023869919865760813593169587e-13;1.13686837721628954436451023869919865760813593169587e-13]
//Info: [33;1m building mathematical polynomial [0m
//
//Info: attempting poly degree: 4
//Info: polynomial: 1.1920928955078125e-7 * _x_^0 + 0.99996228116955232501084083196474239230155944824219 * _x_ + 0.49998471873519878538871807904797606170177459716797 * _x_^2 + 0.167921579839081819285340202441147994250059127807617 * _x_^3 + 4.1952367564007962685845853911814629100263118743896e-2 * _x_^4 
//Info: polynomial: 0.49998471873519878538871807904797606170177459716797 * _x_^2 + 0.167921579839081819285340202441147994250059127807617 * _x_^3 + 4.1952367564007962685845853911814629100263118743896e-2 * _x_^4 
//Info: poly approx error: 2.639403792404719154385784849425585127169054695751e-6
//Info: [33;1m generating polynomial evaluation scheme [0m
//Info: poly evaluation error: 1.7964069521054449175197270654591046489404291552024e-16
//Info: sub poly evaluation error: [-3.3923923228861006956520522148099706967400317544652e-17;3.3923923228861006956520522148099706967400317544652e-17]
//Info: [33;1m MDL scheme [0m
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f79d50cbcd0>
//Info: executing pass instantiate_abstract_prec on fct ml_exp_4
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f79d50cbcd0>
//Info: executing pass instantiate_prec on fct ml_exp_4
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f79d50cbcd0>
//Info: executing pass sub_expr_sharing on fct ml_exp_4
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f79d50cbcd0>
//Info: executing pass check_processor_support on fct ml_exp_4
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f79d50cbcd0>
//Info: executing pass debug_tag_node on fct ml_exp_4
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml_exp_4.c
