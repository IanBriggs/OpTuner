/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_9.c --poly-degree 9 \
 *     --fname ml2_raw_log_9 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_9(double);
double ml2_raw_log_9(double x){
    double pm_8;
    double pa_8;
    double pm_7;
    double pa_7;
    double pm_6;
    double pa_6;
    double pm_5;
    double pa_5;
    double pm_4;
    double pa_4;
    double pm_3;
    double pa_3;
    double pm_2;
    double pa_2;
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_8 = x * 0x1.71f85aa33e2c6p0;
    pa_8 = -0x1.69bf8c1d2ed57p3 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.3d5e7aacb4b0fp5 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.49712568d7864p6 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.c136b9c8cd15cp6 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.a6736a44c2e17p6 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.18888235e9ef5p6 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.0b88d1385e04fp5 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.8a0129ad5bb5dp3 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.92b2c4fb51b4dp1 + tmp;
    return tmp1;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fbe56ee77f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fbe56ee7ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fbe56ee7b80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fbe56ee7d60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbe56ef5a60>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_9
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbe56ef5a60>
//Info: executing pass instantiate_prec on fct ml2_raw_log_9
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbe56ef5a60>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_9
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbe56ef5a60>
//Info: executing pass check_processor_support on fct ml2_raw_log_9
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbe56ef5a60>
//Info: executing pass debug_tag_node on fct ml2_raw_log_9
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_9.c
//0.5	0.53125	1.568569040814755e-08	2.3531691463224428e-08
//0.53125	0.5625	1.3841830861568366e-08	2.3531696709180186e-08
//0.5625	0.59375	1.2591983864089143e-08	2.1885249793740467e-08
//0.59375	0.625	1.1243240657191192e-08	2.3531731804445632e-08
//0.625	0.65625	1.0912846393134544e-08	2.3218651913772346e-08
//0.65625	0.6875	7.556069426314188e-09	2.0166014900434663e-08
//0.6875	0.71875	8.369042604581925e-09	2.3531855146283095e-08
//0.71875	0.75	6.410905118214831e-09	1.9412785904887902e-08
//0.75	0.78125	5.550650719349212e-09	2.2485039485860215e-08
//0.78125	0.8125	5.6207073888356604e-09	2.3531809169172504e-08
//0.8125	0.84375	3.2744973943565257e-09	1.5770195078944848e-08
//0.84375	0.875	3.277857231062155e-09	2.3531953881811826e-08
//0.875	0.90625	3.125202562026527e-09	2.3404438023187795e-08
//0.90625	0.9375	1.5124027872945516e-09	2.321486348457068e-08
//0.9375	0.96875	1.4982446422487273e-09	2.353337563556533e-08
//0.96875	1.0	4.183189236879355e-10	3.1908003359919964e+18
//spec: {
//spec:     "cname": "ml2_raw_log_9",
//spec:     "delta": 1.568569040814755e-08,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 1.5770195078944848e-08,
//spec:     "operation": "log"
//spec: }
