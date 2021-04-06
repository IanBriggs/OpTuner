/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_6.c --poly-degree 6 \
 *     --fname ml2_raw_log_6 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_6(double);
double ml2_raw_log_6(double x){
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
    
    pm_5 = x * -0x1.b2757934aee7dp-1;
    pa_5 = 0x1.31ccaa740b136p2 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.721ee1ad853fp3 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.f89854bfa21d3p3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.aec8316b3d986p3 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.02af41c29cef8p3 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.607e044006632p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f30a8227790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f30a8227a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f30a8227b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f30a8227d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f30a8236190>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_6
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f30a8236190>
//Info: executing pass instantiate_prec on fct ml2_raw_log_6
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f30a8236190>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_6
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f30a8236190>
//Info: executing pass check_processor_support on fct ml2_raw_log_6
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f30a8236190>
//Info: executing pass debug_tag_node on fct ml2_raw_log_6
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_6.c
//0.5	0.53125	4.202807606375064e-06	6.627996531657276e-06
//0.53125	0.5625	4.192019538583887e-06	6.62746250166803e-06
//0.5625	0.59375	2.483970958514079e-06	4.764982962497036e-06
//0.59375	0.625	3.192720439672535e-06	6.628008235690006e-06
//0.625	0.65625	3.0821991327377866e-06	6.557819858981828e-06
//0.65625	0.6875	1.5478147870257034e-06	3.674656478530225e-06
//0.6875	0.71875	1.798635169438491e-06	5.446420734316563e-06
//0.71875	0.75	1.994158163275517e-06	6.627995869104937e-06
//0.75	0.78125	1.8877114894604005e-06	6.561797455606018e-06
//0.78125	0.8125	1.0331685612317178e-06	4.18523955866392e-06
//0.8125	0.84375	8.482101509376615e-07	4.992436505927906e-06
//0.84375	0.875	9.56022928030887e-07	6.6280463449811795e-06
//0.875	0.90625	8.801928879585523e-07	6.591655153279765e-06
//0.90625	0.9375	3.53477288498191e-07	3.590786584904762e-06
//0.9375	0.96875	2.735475155379152e-07	6.627996155625946e-06
//0.96875	1.0	2.0816749213101784e-07	inf
//spec: {
//spec:     "cname": "ml2_raw_log_6",
//spec:     "delta": 4.202807606375064e-06,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 3.590786584904762e-06,
//spec:     "operation": "log"
//spec: }
