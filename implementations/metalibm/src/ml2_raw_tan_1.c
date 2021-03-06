/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_1.c --poly-degree 1 \
 *     --fname ml2_raw_tan_1 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_1(double);
double ml2_raw_tan_1(double x){
    double pm_1;
    
    pm_1 = x * 0x1.1edc460f0d5ecp0;
    return pm_1;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7ffb416d67f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7ffb416d6ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7ffb416d6b80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7ffb416d6d60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffb416e01c0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_1
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffb416e01c0>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_1
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffb416e01c0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_1
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffb416e01c0>
//Info: executing pass check_processor_support on fct ml2_raw_tan_1
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffb416e01c0>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_1
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_1.c
//0.0	0.09817477042468102	0.011518199122683844	inf
//0.09817477042468102	0.19634954084936204	0.021106837580038187	0.11694623825101609
//0.19634954084936204	0.29452431127404305	0.026682123832201917	0.10611123812001208
//0.29452431127404305	0.3926990816987241	0.027262931689677212	0.08795917435095402
//0.3926990816987241	0.4908738521234051	0.025824847546297373	0.06234669719248866
//0.4908738521234051	0.5890486225480861	0.015536876448448906	0.029067451365277573
//0.5890486225480861	0.6872233929727671	0.05061157346972381	0.061670380708413394
//0.6872233929727671	0.7853981633974482	0.11992318016121535	0.1199231801612154
//spec: {
//spec:     "cname": "ml2_raw_tan_1",
//spec:     "delta": 0.11992318016121535,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 0.029067451365277573,
//spec:     "operation": "tan"
//spec: }
