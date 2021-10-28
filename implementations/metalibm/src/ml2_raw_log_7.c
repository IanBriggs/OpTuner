/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_7.c --poly-degree 7 \
 *     --fname ml2_raw_log_7 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>


double ml2_raw_log1p_7(double x) {
  return ml2_raw_log_7(x + 1);
}

double ml2_raw_log_7(double);
double ml2_raw_log_7(double x){
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
    
    pm_6 = x * 0x1.fc81e1d75f662p-1;
    pa_6 = -0x1.93ecfb17ed0b9p2 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.188fe5b29988fp4 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.bf4498bbdb9a3p4 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.c4525c11800f8p4 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.31f64ab6d2c2dp4 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.2fbeefa50e92ep3 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.737d3365b119cp1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fe10eaaf7f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fe10eaafac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fe10eaafb80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fe10eaafd60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe10eabd4c0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_7
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe10eabd4c0>
//Info: executing pass instantiate_prec on fct ml2_raw_log_7
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe10eabd4c0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_7
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe10eabd4c0>
//Info: executing pass check_processor_support on fct ml2_raw_log_7
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe10eabd4c0>
//Info: executing pass debug_tag_node on fct ml2_raw_log_7
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_7.c
//0.5	0.53125	6.465396518732212e-07	9.958322579511222e-07
//0.53125	0.5625	5.441312928813611e-07	8.602559487914744e-07
//0.5625	0.59375	5.273407291897845e-07	9.958330522312016e-07
//0.59375	0.625	5.14442700979877e-07	9.868515996776904e-07
//0.625	0.65625	2.385148229032565e-07	5.662564094698322e-07
//0.65625	0.6875	3.742360510374052e-07	9.948465550948507e-07
//0.6875	0.71875	3.7276248695556246e-07	9.95839265629073e-07
//0.71875	0.75	2.1853529161292671e-07	6.617435156322768e-07
//0.75	0.78125	2.0896784847562388e-07	8.465032194940219e-07
//0.78125	0.8125	2.2527410289206393e-07	9.958322469713475e-07
//0.8125	0.84375	1.9575798034434415e-07	9.427787733741174e-07
//0.84375	0.875	7.819558255439607e-08	5.855970189099646e-07
//0.875	0.90625	1.0595617406147303e-07	9.958407318120146e-07
//0.90625	0.9375	9.75291645896133e-08	9.907466660379701e-07
//0.9375	0.96875	2.9921728846556485e-08	9.29612634356132e-07
//0.96875	1.0	2.9513988725144282e-08	1.438331501491918e+20
//spec: {
//spec:     "cname": "ml2_raw_log_7",
//spec:     "delta": 6.465396518732212e-07,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 5.662564094698322e-07,
//spec:     "operation": "log"
//spec: }
