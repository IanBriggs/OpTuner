/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_12.c --poly-degree 12 \
 *     --fname ml2_raw_log_12 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_12(double);
double ml2_raw_log_12(double x){
    double pm_11;
    double pa_11;
    double pm_10;
    double pa_10;
    double pm_9;
    double pa_9;
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
    
    pm_11 = x * -0x1.649918265c32ap1;
    pa_11 = 0x1.bfcb8590eafbbp4 + pm_11;
    pm_10 = x * pa_11;
    pa_10 = -0x1.02a3a587d6916p7 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.6c085b5be61f6p8 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = -0x1.5c727992717dep9 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.df76cd9a5e503p9 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.e895389f2f9b6p9 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.764acf7c2c639p9 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.b14ce8cdc160ap8 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.7a776a2b62549p7 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.f35ebf8184e3p5 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.08c8f04d2ba76p4 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.b6b3f390f5614p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7ffa97592790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7ffa97592a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7ffa97592b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7ffa97592d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffa97592250>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_12
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffa97592250>
//Info: executing pass instantiate_prec on fct ml2_raw_log_12
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffa97592250>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_12
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffa97592250>
//Info: executing pass check_processor_support on fct ml2_raw_log_12
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffa97592250>
//Info: executing pass debug_tag_node on fct ml2_raw_log_12
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_12.c
//0.5	0.53125	6.254744120078535e-11	9.217154078816656e-11
//0.53125	0.5625	5.824507674273022e-11	9.21750117384836e-11
//0.5625	0.59375	5.175811375729233e-11	9.220277202821433e-11
//0.59375	0.625	4.388502938116405e-11	9.223014372330253e-11
//0.625	0.65625	4.267408762565097e-11	9.083212635084615e-11
//0.65625	0.6875	3.543959497700978e-11	9.23498595310023e-11
//0.6875	0.71875	3.323546704655745e-11	8.878735907640208e-11
//0.71875	0.75	2.7115477295430702e-11	9.261216310498057e-11
//0.75	0.78125	2.627772961756531e-11	9.154676633017808e-11
//0.78125	0.8125	1.9453523584270033e-11	9.309268943407768e-11
//0.8125	0.84375	1.9279155580738974e-11	9.326280960034905e-11
//0.84375	0.875	1.28372112052428e-11	9.434338107465292e-11
//0.875	0.90625	1.245662232281106e-11	9.511487800548447e-11
//0.90625	0.9375	7.528475907963049e-12	9.816035595424344e-11
//0.9375	0.96875	4.511611897170454e-12	1.1073969014677061e-10
//0.96875	1.0	3.292355528387147e-12	inf
//spec: {
//spec:     "cname": "ml2_raw_log_12",
//spec:     "delta": 6.254744120078535e-11,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 8.878735907640208e-11,
//spec:     "operation": "log"
//spec: }
