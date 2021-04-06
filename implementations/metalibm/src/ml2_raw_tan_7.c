/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_7.c --poly-degree 7 \
 *     --fname ml2_raw_tan_7 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_7(double);
double ml2_raw_tan_7(double x){
    double x2_;
    double pm_5;
    double pa_5;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_5 = x2_ * 0x1.8228194f2df0bp-4;
    pa_5 = 0x1.da94869d91ff3p-4 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = 0x1.57a86126a70fep-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fffa2588f0bfp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f5a5e8167c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f5a5e816a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f5a5e816b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f5a5e816d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5a5e822af0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_7
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5a5e822af0>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_7
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5a5e822af0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_7
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5a5e822af0>
//Info: executing pass check_processor_support on fct ml2_raw_tan_7
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5a5e822af0>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_7
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_7.c
//0.0	0.09817477042468102	2.4781207227532745e-06	inf
//0.09817477042468102	0.19634954084936204	3.76020294496467e-06	2.4288170370004104e-05
//0.19634954084936204	0.29452431127404305	1.3496397200160631e-05	4.4491658981442234e-05
//0.29452431127404305	0.3926990816987241	1.4591575576424428e-05	4.465773943392201e-05
//0.3926990816987241	0.4908738521234051	1.4602405954660048e-05	2.731918003678353e-05
//0.4908738521234051	0.5890486225480861	2.8175390190633314e-05	4.465773933593856e-05
//0.5890486225480861	0.6872233929727671	2.6643401506425437e-05	3.9874668231526704e-05
//0.6872233929727671	0.7853981633974482	4.111367756877496e-05	4.465773938227323e-05
//spec: {
//spec:     "cname": "ml2_raw_tan_7",
//spec:     "delta": 4.111367756877496e-05,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 2.4288170370004104e-05,
//spec:     "operation": "tan"
//spec: }
