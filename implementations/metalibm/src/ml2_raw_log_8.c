/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_8.c --poly-degree 8 \
 *     --fname ml2_raw_log_8 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_8(double);
double ml2_raw_log_8(double x){
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
    
    pm_7 = x * -0x1.302a79190d33ap0;
    pa_7 = 0x1.0d6b17e8e068p3 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.a745a541f27f4p4 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.83f65b688f3c7p5 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.cb7f12b614347p5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.709e1fc3fe3d8p5 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.9c849f8c5b18ep4 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.5cdb98c6e7225p3 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.8409e727ba864p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fb3504a6790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fb3504a6a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fb3504a6b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fb3504a6d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3504b4730>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_8
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3504b4730>
//Info: executing pass instantiate_prec on fct ml2_raw_log_8
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3504b4730>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_8
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3504b4730>
//Info: executing pass check_processor_support on fct ml2_raw_log_8
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb3504b4730>
//Info: executing pass debug_tag_node on fct ml2_raw_log_8
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_8.c
//0.5	0.53125	1.0029564631981652e-07	1.520957269615255e-07
//0.53125	0.5625	8.210520726195221e-08	1.427012957733763e-07
//0.5625	0.59375	8.570227990757317e-08	1.520957836493691e-07
//0.59375	0.625	4.5046057302139624e-08	9.584193809548571e-08
//0.625	0.65625	6.591696287656655e-08	1.5209625218451774e-07
//0.65625	0.6875	6.244110388175166e-08	1.4824100774369123e-07
//0.6875	0.71875	3.3219005091201155e-08	1.0058998805226045e-07
//0.71875	0.75	4.516242848314704e-08	1.5209575522044064e-07
//0.75	0.78125	4.327078773313211e-08	1.5041186275771432e-07
//0.78125	0.8125	1.7370019713638574e-08	8.36547734723985e-08
//0.8125	0.84375	2.6652456163261626e-08	1.5209580811380584e-07
//0.84375	0.875	2.5804255198918854e-08	1.5188000367128803e-07
//0.875	0.90625	1.0472417235841986e-08	1.063837554026772e-07
//0.90625	0.9375	1.2393276702111226e-08	1.5209716351404923e-07
//0.9375	0.96875	8.305691402390192e-09	1.2869408193410481e-07
//0.96875	1.0	3.4622233410078113e-09	inf
//spec: {
//spec:     "cname": "ml2_raw_log_8",
//spec:     "delta": 1.0029564631981652e-07,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 8.36547734723985e-08,
//spec:     "operation": "log"
//spec: }
