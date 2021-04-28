/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_9.c --poly-degree 9 \
 *     --fname ml2_raw_tan_9 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_9(double);
double ml2_raw_tan_9(double x){
    double x2_;
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
    pm_7 = x2_ * 0x1.67ac8bc43ad42p-5;
    pa_7 = 0x1.4a328e3e1ca1p-5 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.17a6007f7ac5cp-3 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = 0x1.55121399b8bd2p-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.000035f24de7cp0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7ff4456b1790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7ff4456b1a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7ff4456b1b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7ff4456b1d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff4456bcd90>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_9
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff4456bcd90>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_9
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff4456bcd90>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_9
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff4456bcd90>
//Info: executing pass check_processor_support on fct ml2_raw_tan_9
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff4456bcd90>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_9
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_9.c
//0.0	0.09817477042468102	1.4256137069967462e-07	inf
//0.09817477042468102	0.19634954084936204	5.171928817807815e-07	2.60010419988291e-06
//0.19634954084936204	0.29452431127404305	8.383735904931629e-07	3.2154666158596183e-06
//0.29452431127404305	0.3926990816987241	7.575118573263294e-07	2.497181931637226e-06
//0.3926990816987241	0.4908738521234051	1.6274433509760011e-06	3.2154851638865255e-06
//0.4908738521234051	0.5890486225480861	1.5581104489454566e-06	2.9150196210110385e-06
//0.5890486225480861	0.6872233929727671	2.3909928941108964e-06	3.215464408004665e-06
//0.6872233929727671	0.7853981633974482	2.9882938039144177e-06	3.215478493012369e-06
//spec: {
//spec:     "cname": "ml2_raw_tan_9",
//spec:     "delta": 2.9882938039144177e-06,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 2.497181931637226e-06,
//spec:     "operation": "tan"
//spec: }
