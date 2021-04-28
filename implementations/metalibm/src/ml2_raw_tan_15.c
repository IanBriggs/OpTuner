/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_15.c --poly-degree 15 \
 *     --fname ml2_raw_tan_15 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_15(double);
double ml2_raw_tan_15(double x){
    double x2_;
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
    pm_13 = x2_ * 0x1.22b46d5ec0e44p-8;
    pa_13 = -0x1.696dd6bd003bap-15 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = 0x1.66edf27a0cdfep-7 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.5bd12658e5412p-6 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = 0x1.baf69be018faap-5 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.110cbcb9c46bep-3 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = 0x1.555565e2bc673p-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fffffff5b0758p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fe4b89d7790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fe4b89d7a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fe4b89d7b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fe4b89d7d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe4b89e7640>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_15
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe4b89e7640>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_15
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe4b89e7640>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_15
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe4b89e7640>
//Info: executing pass check_processor_support on fct ml2_raw_tan_15
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe4b89e7640>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_15
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_15.c
//0.0	0.09817477042468102	4.888785480616574e-11	inf
//0.09817477042468102	0.19634954084936204	1.9486560577908328e-10	1.2003248240086089e-09
//0.19634954084936204	0.29452431127404305	3.5965279755169765e-10	1.185616542700765e-09
//0.29452431127404305	0.3926990816987241	3.781897927993032e-10	1.2003246743443707e-09
//0.3926990816987241	0.4908738521234051	5.649486454415321e-10	1.2003246829295222e-09
//0.4908738521234051	0.5890486225480861	7.495124387412782e-10	1.2003251421547695e-09
//0.5890486225480861	0.6872233929727671	9.22371057416631e-10	1.2003250168281888e-09
//0.6872233929727671	0.7853981633974482	1.167278140143815e-09	1.2003251455689012e-09
//spec: {
//spec:     "cname": "ml2_raw_tan_15",
//spec:     "delta": 1.167278140143815e-09,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 1.185616542700765e-09,
//spec:     "operation": "tan"
//spec: }
