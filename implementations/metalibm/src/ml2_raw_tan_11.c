/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_11.c --poly-degree 11 \
 *     --fname ml2_raw_tan_11 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_11(double);
double ml2_raw_tan_11(double x){
    double x2_;
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
    pm_9 = x2_ * 0x1.4f088076d6b11p-6;
    pa_9 = 0x1.97dcc5360c5cap-7 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = 0x1.d4c60e0954297p-5 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.100f423ef2b7dp-3 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = 0x1.555c538c85f46p-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fffff83b39a07p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fb3bee55790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fb3bee55a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fb3bee55b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fb3bee55d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3bee650a0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_11
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3bee650a0>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_11
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3bee650a0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_11
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3bee650a0>
//Info: executing pass check_processor_support on fct ml2_raw_tan_11
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3bee650a0>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_11
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_11.c
//0.0	0.09817477042468102	8.54690661630277e-09	inf
//0.09817477042468102	0.19634954084936204	4.5697826055098124e-08	2.2973848589110503e-07
//0.19634954084936204	0.29452431127404305	5.02181739357711e-08	2.315238701028683e-07
//0.29452431127404305	0.3926990816987241	9.586162582220769e-08	2.3143043726748427e-07
//0.3926990816987241	0.4908738521234051	9.754635529926707e-08	2.315238717367569e-07
//0.4908738521234051	0.5890486225480861	1.4498341993867866e-07	2.315238699157787e-07
//0.5890486225480861	0.6872233929727671	1.882818097946558e-07	2.31523869934567e-07
//0.6872233929727671	0.7853981633974482	2.2007819489501224e-07	2.3152386986822815e-07
//spec: {
//spec:     "cname": "ml2_raw_tan_11",
//spec:     "delta": 2.2007819489501224e-07,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 2.2973848589110503e-07,
//spec:     "operation": "tan"
//spec: }
