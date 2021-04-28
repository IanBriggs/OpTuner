/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_17.c --poly-degree 17 \
 *     --fname ml2_raw_tan_17 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_17(double);
double ml2_raw_tan_17(double x){
    double x2_;
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
    pm_15 = x2_ * 0x1.0eca8c560193ep-9;
    pa_15 = -0x1.596d7d069df68p-11 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.4b833ca2fd351p-8 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = 0x1.0fd03d98a2719p-7 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.686217758fd83p-6 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = 0x1.b9fad935e7533p-5 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.111191c46eafbp-3 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = 0x1.555553d2cead1p-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.000000005f071p0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fc2683797f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fc268379ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fc268379b80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fc268379d60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc268389970>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_17
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc268389970>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_17
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc268389970>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_17
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc268389970>
//Info: executing pass check_processor_support on fct ml2_raw_tan_17
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc268389970>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_17
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_17.c
//0.0	0.09817477042468102	5.330430546489226e-12	inf
//0.09817477042468102	0.19634954084936204	1.2464034706091233e-11	8.642765643309595e-11
//0.19634954084936204	0.29452431127404305	2.4178042081964136e-11	8.642760769750976e-11
//0.29452431127404305	0.3926990816987241	3.5780251241776015e-11	8.638126418876624e-11
//0.3926990816987241	0.4908738521234051	4.1509839895226045e-11	8.642751809521856e-11
//0.4908738521234051	0.5890486225480861	5.0922133121587873e-11	8.64275614655347e-11
//0.5890486225480861	0.6872233929727671	7.016875186485285e-11	8.642752865079237e-11
//0.6872233929727671	0.7853981633974482	8.457160669804321e-11	8.642753821353924e-11
//spec: {
//spec:     "cname": "ml2_raw_tan_17",
//spec:     "delta": 8.457160669804321e-11,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 8.638126418876624e-11,
//spec:     "operation": "tan"
//spec: }
