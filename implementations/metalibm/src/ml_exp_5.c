/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ./scripts/ml_exp.py --accuracy dar(1.12031091460333726e-7) --precision \
 *     double --output src/ml_exp_5.c --fname ml_exp_5 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>
#include <math.h>



double ml_exp_5(double);
double ml_exp_5(double x){
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
                    double pre_sub_poly;
                    double tmp14;
                    double tmp15;
                    double poly;
                    double exp_ik;
                    double std_result;

                    tmp3 = k * 0x1.62e42fefa4p-1;
                    exact_hi = x - tmp3;
                    tmp4 =  - k;
                    exact_lo = tmp4 * -0x1.8432a1b0e2634p-43;
                    r = exact_hi + exact_lo;
                    r2_ = r * r;
                    tmp5 = 0x1.fffd2c98e3fdbp-2 * r2_;
                    tmp6 = 0x1.555389ee427b7p-3 * r2_;
                    tmp7 = r * tmp6;
                    tmp8 = tmp5 + tmp7;
                    tmp9 = 0x1.575c092a861dp-5 * r2_;
                    tmp10 = 0x1.12a2913553038p-7 * r2_;
                    tmp11 = r * tmp10;
                    tmp12 = tmp9 + tmp11;
                    tmp13 = r2_ * tmp12;
                    pre_sub_poly = tmp8 + tmp13;
                    tmp14 = exact_lo + pre_sub_poly;
                    tmp15 = exact_hi + tmp14;
                    poly = 1.0 + tmp15;
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
                        double pre_sub_poly;
                        double tmp14;
                        double tmp15;
                        double poly;
                        int64_t diff_k;
                        double tmp16;
                        double tmp17;
                        double tmp18;
                        double late_overflow_result;
                        int tmp19;

                        tmp3 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp3;
                        tmp4 =  - k;
                        exact_lo = tmp4 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp5 = 0x1.fffd2c98e3fdbp-2 * r2_;
                        tmp6 = 0x1.555389ee427b7p-3 * r2_;
                        tmp7 = r * tmp6;
                        tmp8 = tmp5 + tmp7;
                        tmp9 = 0x1.575c092a861dp-5 * r2_;
                        tmp10 = 0x1.12a2913553038p-7 * r2_;
                        tmp11 = r * tmp10;
                        tmp12 = tmp9 + tmp11;
                        tmp13 = r2_ * tmp12;
                        pre_sub_poly = tmp8 + tmp13;
                        tmp14 = exact_lo + pre_sub_poly;
                        tmp15 = exact_hi + tmp14;
                        poly = 1.0 + tmp15;
                        diff_k = ik - INT64_C(997);
                        tmp16 = ml_exp_insertion_fp64(diff_k);
                        tmp17 = tmp16 * poly;
                        tmp18 = ml_exp_insertion_fp64(INT64_C(997));
                        late_overflow_result = tmp17 * tmp18;
                        tmp19 = ml_is_inf(late_overflow_result);

                        if (__builtin_expect(tmp19, 0)) {

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
                        double pre_sub_poly;
                        double tmp14;
                        double tmp15;
                        double poly;
                        int64_t corrected_exp;
                        double tmp16;
                        double tmp17;
                        double tmp18;
                        double late_underflow_result;
                        int tmp19;

                        tmp3 = k * 0x1.62e42fefa4p-1;
                        exact_hi = x - tmp3;
                        tmp4 =  - k;
                        exact_lo = tmp4 * -0x1.8432a1b0e2634p-43;
                        r = exact_hi + exact_lo;
                        r2_ = r * r;
                        tmp5 = 0x1.fffd2c98e3fdbp-2 * r2_;
                        tmp6 = 0x1.555389ee427b7p-3 * r2_;
                        tmp7 = r * tmp6;
                        tmp8 = tmp5 + tmp7;
                        tmp9 = 0x1.575c092a861dp-5 * r2_;
                        tmp10 = 0x1.12a2913553038p-7 * r2_;
                        tmp11 = r * tmp10;
                        tmp12 = tmp9 + tmp11;
                        tmp13 = r2_ * tmp12;
                        pre_sub_poly = tmp8 + tmp13;
                        tmp14 = exact_lo + pre_sub_poly;
                        tmp15 = exact_hi + tmp14;
                        poly = 1.0 + tmp15;
                        corrected_exp = ik + INT64_C(104);
                        tmp16 = ml_exp_insertion_fp64(corrected_exp);
                        tmp17 = tmp16 * poly;
                        tmp18 = ml_exp_insertion_fp64(INT32_C(-104));
                        late_underflow_result = tmp17 * tmp18;
                        tmp19 = ml_is_subnormal(late_underflow_result);

                        if (tmp19) {

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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fa38aeb0b20> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fa38aeb0730> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fa38aeb06a0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fa38aeb0490> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: [33;1m generating implementation scheme [0m
//Info: log2_hi_precision: 39
//Info: eval error: [-1.13686837721628954436451023869919865760813593169587e-13;1.13686837721628954436451023869919865760813593169587e-13]
//Info: accuracy: ML_DegradedAccuracyRelative(1.1203109146033373e-07)
//Info: [33;1m building mathematical polynomial [0m
//
//Info: attempting poly degree: 4
//Info: polynomial: 1.1920928955078125e-7 * _x_^0 + 0.99996228116955232501084083196474239230155944824219 * _x_ + 0.49998471873519878538871807904797606170177459716797 * _x_^2 + 0.167921579839081819285340202441147994250059127807617 * _x_^3 + 4.1952367564007962685845853911814629100263118743896e-2 * _x_^4 
//Info: polynomial: 0.49998471873519878538871807904797606170177459716797 * _x_^2 + 0.167921579839081819285340202441147994250059127807617 * _x_^3 + 4.1952367564007962685845853911814629100263118743896e-2 * _x_^4 
//Info: poly approx error: 2.639403792404719154385784849425585127169054695751e-6
//Info: [33;1m generating polynomial evaluation scheme [0m
//Info: poly evaluation error: 1.7964069521054449175197270654591046489404291552024e-16
//Info: sub poly evaluation error: [-3.3923923228861006956520522148099706967400317544652e-17;3.3923923228861006956520522148099706967400317544652e-17]
//Info: attempting poly degree: 5
//Info: polynomial: 5.9604644775390625e-8 * _x_^0 + 1.0000000650813418712203883842448703944683074951172 * _x_ + 0.49998922045869925723238225145905744284391403198242 * _x_^2 + 0.16666324385033501331854211002791998907923698425293 * _x_^3 + 4.1914003279262979084762719139689579606056213378906e-2 * _x_^4 + 8.3811959290401721878183138869644608348608016967773e-3 * _x_^5 
//Info: polynomial: 0.49998922045869925723238225145905744284391403198242 * _x_^2 + 0.16666324385033501331854211002791998907923698425293 * _x_^3 + 4.1914003279262979084762719139689579606056213378906e-2 * _x_^4 + 8.3811959290401721878183138869644608348608016967773e-3 * _x_^5 
//Info: poly approx error: 7.921794436155561837199335259334632144943647692483e-8
//Info: [33;1m generating polynomial evaluation scheme [0m
//Info: poly evaluation error: 1.7991475654677970078775573422126185430950590019503e-16
//Info: sub poly evaluation error: [-3.3989670865554596278910086296548365734230091596024e-17;3.3989670865554596278910086296548365734230091596024e-17]
//Info: [33;1m MDL scheme [0m
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa38aeb02b0>
//Info: executing pass instantiate_abstract_prec on fct ml_exp_5
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa38aeb02b0>
//Info: executing pass instantiate_prec on fct ml_exp_5
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa38aeb02b0>
//Info: executing pass sub_expr_sharing on fct ml_exp_5
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa38aeb02b0>
//Info: executing pass check_processor_support on fct ml_exp_5
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa38aeb02b0>
//Info: executing pass debug_tag_node on fct ml_exp_5
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml_exp_5.c
//spec: {
//spec:     "cname": "ml_exp_5",
//spec:     "delta": 1.1226458442103615e-299,
//spec:     "domain": [
//spec:         -1.7976931348623157e+308,
//spec:         709.782712893384
//spec:     ],
//spec:     "epsilon": 1.12031091460333726e-7,
//spec:     "operation": "exp"
//spec: }
