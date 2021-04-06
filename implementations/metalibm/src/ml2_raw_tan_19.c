/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_19.c --poly-degree 19 \
 *     --fname ml2_raw_tan_19 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_19(double);
double ml2_raw_tan_19(double x){
    double x2_;
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
    pm_17 = x2_ * 0x1.f87bc23fd294cp-11;
    pa_17 = -0x1.3cdd852ffb8e2p-11 + pm_17;
    pm_15 = x2_ * pa_17;
    pa_15 = 0x1.3e39ac063e7f1p-9 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.9aefb90563a8dp-9 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = 0x1.26b0127131838p-7 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.65f23b67f115p-6 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = 0x1.ba202770b63c5p-5 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.111102df671a9p-3 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = 0x1.55555577b7ebcp-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fffffffff250cp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f0a78b5d820> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f0a78b5daf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f0a78b5dbb0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f0a78b5dd90> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0a78b6ec70>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_19
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0a78b6ec70>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_19
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0a78b6ec70>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_19
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0a78b6ec70>
//Info: executing pass check_processor_support on fct ml2_raw_tan_19
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0a78b6ec70>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_19
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_19.c
//0.0	0.09817477042468102	4.90251591040731e-13	inf
//0.09817477042468102	0.19634954084936204	8.073562780265171e-13	6.223539901945061e-12
//0.19634954084936204	0.29452431127404305	1.5654744676914135e-12	6.2234912365762154e-12
//0.29452431127404305	0.3926990816987241	2.338989226883173e-12	6.2233858646799956e-12
//0.3926990816987241	0.4908738521234051	3.1157531057218047e-12	6.223405231651104e-12
//0.4908738521234051	0.5890486225480861	3.8805281910676344e-12	6.223446139136543e-12
//0.5890486225480861	0.6872233929727671	4.607073477779917e-12	6.223412746680037e-12
//0.6872233929727671	0.7853981633974482	6.116999268489286e-12	6.2234905700918125e-12
//spec: {
//spec:     "cname": "ml2_raw_tan_19",
//spec:     "delta": 6.116999268489286e-12,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 6.2233858646799956e-12,
//spec:     "operation": "tan"
//spec: }
