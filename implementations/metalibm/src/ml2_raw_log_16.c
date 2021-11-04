/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_16.c --poly-degree 16 \
 *     --fname ml2_raw_log_16 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>

double ml2_raw_log_16(double);
double ml2_raw_log1p_16(double x) {
  return ml2_raw_log_16(x + 1);
}


double ml2_raw_log_16(double x){
    double pm_15;
    double pa_15;
    double pm_14;
    double pa_14;
    double pm_13;
    double pa_13;
    double pm_12;
    double pa_12;
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
    
    pm_15 = x * -0x1.d929f2a983e63p2;
    pa_15 = 0x1.81393e14e36b9p6 + pm_15;
    pm_14 = x * pa_15;
    pa_14 = -0x1.2649c0b247eedp9 + pm_14;
    pm_13 = x * pa_14;
    pa_13 = 0x1.18321fbcd48d6p11 + pm_13;
    pm_12 = x * pa_13;
    pa_12 = -0x1.746e88da35351p12 + pm_12;
    pm_11 = x * pa_12;
    pa_11 = 0x1.6ec1f1e325fc4p13 + pm_11;
    pm_10 = x * pa_11;
    pa_10 = -0x1.1527491b5bc42p14 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.48740e50b6835p14 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = -0x1.352e59d3ed5a5p14 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.d16a6b6051717p13 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.18839a1ce4adfp13 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.0df44160e5f1p12 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.9bcfd6e79901p10 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.ece06b19cd213p8 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.cc54feaeae791p6 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.634243e9910dep4 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.daeef1dd6bbaap1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f3f245f1790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f3f245f1a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f3f245f1b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f3f245f1d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3f245ec430>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_16
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3f245ec430>
//Info: executing pass instantiate_prec on fct ml2_raw_log_16
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3f245ec430>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_16
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3f245ec430>
//Info: executing pass check_processor_support on fct ml2_raw_log_16
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3f245ec430>
//Info: executing pass debug_tag_node on fct ml2_raw_log_16
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_16.c
//0.5	0.53125	1.677077913939248e-13	2.869559704294219e-13
//0.53125	0.5625	1.9845296327247006e-13	4.5067167346680235e-13
//0.5625	0.59375	2.6044824614774796e-13	6.188318980205992e-13
//0.59375	0.625	3.449249278599608e-13	8.905742738200597e-13
//0.625	0.65625	4.2826558657557066e-13	1.4625850671695552e-12
//0.65625	0.6875	5.812639209051807e-13	1.8488392082446497e-12
//0.6875	0.71875	7.803725767718502e-13	3.804912314399585e-12
//0.71875	0.75	1.1161518958545512e-12	4.8610331037246175e-12
//0.75	0.78125	1.4986863658860754e-12	8.142915408797468e-12
//0.78125	0.8125	1.9276328586602627e-12	1.3525723086949596e-11
//0.8125	0.84375	2.505983897668853e-12	2.0312387873484552e-11
//0.84375	0.875	3.3460647203833017e-12	3.78145122265716e-11
//0.875	0.90625	4.3954468820035e-12	7.87898499273233e-11
//0.90625	0.9375	5.85798005265112e-12	1.6111138133398507e-10
//0.9375	0.96875	7.86973705764736e-12	3.405941732732136e-10
//0.96875	1.0	1.0411560316146301e-11	inf
//spec: {
//spec:     "cname": "ml2_raw_log_16",
//spec:     "delta": 1.0411560316146301e-11,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 2.869559704294219e-13,
//spec:     "operation": "log"
//spec: }
