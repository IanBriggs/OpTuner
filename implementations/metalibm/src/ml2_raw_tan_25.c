/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_25.c --poly-degree 25 \
 *     --fname ml2_raw_tan_25 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_25(double);
double ml2_raw_tan_25(double x){
    double x2_;
    double pm_23;
    double pa_23;
    double pm_21;
    double pa_21;
    double pm_19;
    double pa_19;
    double pm_17;
    double pa_17;
    double pm_15;
    double pa_15;
    double pm_13;
    double pa_13;
    double pm_11;
    double pa_11;
    double pm_9;
    double pa_9;
    double pm_7;
    double pa_7;
    double pm_5;
    double pa_5;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_23 = x2_ * 0x1.97a5aba2e5f27p-14;
    pa_23 = -0x1.3cf73a41bdaebp-13 + pm_23;
    pm_21 = x2_ * pa_23;
    pa_21 = 0x1.525b10ae21e08p-12 + pm_21;
    pm_19 = x2_ * pa_21;
    pa_19 = 0x1.3ccc4f21efa33p-14 + pm_19;
    pm_17 = x2_ * pa_19;
    pa_17 = 0x1.5e2b1c21a859p-11 + pm_17;
    pm_15 = x2_ * pa_17;
    pa_15 = 0x1.77138a0efb4a9p-10 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.d78aa91527d5dp-9 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = 0x1.226797467160bp-7 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.664f96c4fd8b6p-6 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = 0x1.ba1b9f95f4846p-5 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.11111114f1e71p-3 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = 0x1.555555554fd95p-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.000000000000ap0 + tmp;
    tmp2 = x * tmp1;
    return tmp2;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f0e89c44790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f0e89c44a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f0e89c44b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f0e89c44d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0e89c40e80>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_25
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0e89c40e80>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_25
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0e89c40e80>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_25
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0e89c40e80>
//Info: executing pass check_processor_support on fct ml2_raw_tan_25
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0e89c40e80>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_25
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_25.c
//0.0	0.09817477042468102	2.5236420730117136e-16	inf
//0.09817477042468102	0.19634954084936204	4.995197777504961e-16	2.8411342653244345e-15
//0.19634954084936204	0.29452431127404305	7.632797511086445e-16	2.7925014860582814e-15
//0.29452431127404305	0.3926990816987241	1.0032524931813025e-15	2.6862576836486107e-15
//0.3926990816987241	0.4908738521234051	1.2739312441678375e-15	2.7029645424693733e-15
//0.4908738521234051	0.5890486225480861	1.778974817018337e-15	2.7464212964352633e-15
//0.5890486225480861	0.6872233929727671	2.019291919859214e-15	2.7135550733713954e-15
//0.6872233929727671	0.7853981633974482	2.685882650255787e-15	2.790944535732918e-15
//spec: {
//spec:     "cname": "ml2_raw_tan_25",
//spec:     "delta": 2.685882650255787e-15,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 2.6862576836486107e-15,
//spec:     "operation": "tan"
//spec: }
