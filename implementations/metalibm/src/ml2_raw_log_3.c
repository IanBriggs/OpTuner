/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_3.c --poly-degree 3 \
 *     --fname ml2_raw_log_3 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>

double ml2_raw_log_3(double);
double ml2_raw_log1p_3(double x) {
  return ml2_raw_log_3(x + 1);
}


double ml2_raw_log_3(double x){
    double pm_2;
    double pa_2;
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_2 = x * 0x1.5ad1a37b68146p-1;
    pa_2 = -0x1.3a44ea0838443p1 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.f0b8768efdb72p1 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.0d27f6012b73fp1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f7b93a0a790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f7b93a0aa60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f7b93a0ab20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f7b93a0ad00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7b93a158e0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_3
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7b93a158e0>
//Info: executing pass instantiate_prec on fct ml2_raw_log_3
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7b93a158e0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_3
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7b93a158e0>
//Info: executing pass check_processor_support on fct ml2_raw_log_3
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7b93a158e0>
//Info: executing pass debug_tag_node on fct ml2_raw_log_3
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_3.c
//0.5	0.53125	0.0015454124832034934	0.0022295589256457055
//0.53125	0.5625	0.0008541561427276185	0.0014845487858316598
//0.5625	0.59375	0.0011358441908741136	0.0021788814385430406
//0.59375	0.625	0.0011475647314002177	0.00231758636172007
//0.625	0.65625	0.0010823627459640235	0.002302881677107775
//0.65625	0.6875	0.0008404763683067522	0.0019953691844933103
//0.6875	0.71875	0.0005191346371844573	0.0013854916277787697
//0.71875	0.75	0.00019620091878012254	0.0005941131195142537
//0.75	0.78125	0.00026772790750458916	0.001084533026757727
//0.78125	0.8125	0.00036592043891421795	0.0017622883758346933
//0.8125	0.84375	0.00038079852410514346	0.002201104186486771
//0.84375	0.875	0.0003739654811702787	0.0023175762023787223
//0.875	0.90625	0.00030819378010769584	0.0023080249074832315
//0.90625	0.9375	0.00019627798765639066	0.00199388299955787
//0.9375	0.96875	7.56939840976049e-05	0.0011728496836517013
//0.96875	1.0	1.887162879825008e-05	1.836372635073347e+23
//spec: {
//spec:     "cname": "ml2_raw_log_3",
//spec:     "delta": 0.0015454124832034934,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 0.0005941131195142537,
//spec:     "operation": "log"
//spec: }
