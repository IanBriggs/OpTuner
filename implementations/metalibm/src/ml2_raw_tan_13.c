/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_13.c --poly-degree 13 \
 *     --fname ml2_raw_tan_13 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_13(double);
double ml2_raw_tan_13(double x){
    double x2_;
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
    pm_11 = x2_ * 0x1.38153437fc10ep-7;
    pa_11 = 0x1.75d9f9619cdbcp-9 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.93822b52a3f21p-6 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = 0x1.b4f8d16f7f83ep-5 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.1133f89dcaa4bp-3 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = 0x1.5554a58f225e8p-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.000000479958dp0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f73e0dce820> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f73e0dceaf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f73e0dcebb0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f73e0dced90> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f73e0ddf400>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_13
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f73e0ddf400>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_13
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f73e0ddf400>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_13
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f73e0ddf400>
//Info: executing pass check_processor_support on fct ml2_raw_tan_13
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f73e0ddf400>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_13
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_13.c
//0.0	0.09817477042468102	5.271774922244097e-10	inf
//0.09817477042468102	0.19634954084936204	3.095621128418046e-09	1.6670444655120106e-08
//0.19634954084936204	0.29452431127404305	3.0788582551033947e-09	1.547846569653895e-08
//0.29452431127404305	0.3926990816987241	6.0110134629600055e-09	1.6670445549212414e-08
//0.3926990816987241	0.4908738521234051	8.910157643190917e-09	1.6669732563485707e-08
//0.4908738521234051	0.5890486225480861	8.968402474184053e-09	1.6670453319620317e-08
//0.5890486225480861	0.6872233929727671	1.1822984803361734e-08	1.6670444891309413e-08
//0.6872233929727671	0.7853981633974482	1.606608180934508e-08	1.667044468295511e-08
//spec: {
//spec:     "cname": "ml2_raw_tan_13",
//spec:     "delta": 1.606608180934508e-08,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 1.547846569653895e-08,
//spec:     "operation": "tan"
//spec: }
