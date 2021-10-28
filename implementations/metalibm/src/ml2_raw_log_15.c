/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_15.c --poly-degree 15 \
 *     --fname ml2_raw_log_15 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>


double ml2_raw_log1p_15(double x) {
  return ml2_raw_log_15(x + 1);
}

double ml2_raw_log_15(double);
double ml2_raw_log_15(double x){
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
    
    pm_14 = x * 0x1.6fcc2148331e6p2;
    pa_14 = -0x1.1a4ba021b32e9p6 + pm_14;
    pm_13 = x * pa_14;
    pa_13 = 0x1.94fb457709c31p8 + pm_13;
    pm_12 = x * pa_13;
    pa_12 = -0x1.6867ff9154cdp10 + pm_12;
    pm_11 = x * pa_12;
    pa_11 = 0x1.bd7519dae94dbp11 + pm_11;
    pm_10 = x * pa_11;
    pa_10 = -0x1.95834e5e7cfdep12 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.195a6cd12c12bp13 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = -0x1.2fb57cb37ce83p13 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.01f98096cce99p13 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.5a87141f0353cp12 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.6fcd43de2c92fp11 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.32c577b6d1633p10 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.8e988e4eea572p8 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.91a67646e61f8p6 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.4ca157174239bp4 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.d2c9c0fb31804p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fd2bbc14790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fd2bbc14a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fd2bbc14b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fd2bbc14d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2bbc0e7f0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_15
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2bbc0e7f0>
//Info: executing pass instantiate_prec on fct ml2_raw_log_15
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2bbc0e7f0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_15
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2bbc0e7f0>
//Info: executing pass check_processor_support on fct ml2_raw_log_15
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2bbc0e7f0>
//Info: executing pass debug_tag_node on fct ml2_raw_log_15
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_15.c
//0.5	0.53125	3.314722562905852e-13	5.399453674169516e-13
//0.53125	0.5625	3.17166989552349e-13	5.725747803718194e-13
//0.5625	0.59375	3.2556339038331525e-13	7.491633070537453e-13
//0.59375	0.625	3.4061938109982776e-13	8.208857196139427e-13
//0.625	0.65625	3.9126808119042463e-13	1.2101414367795032e-12
//0.65625	0.6875	4.5303883718907343e-13	1.4255211678902595e-12
//0.6875	0.71875	5.468696760894753e-13	2.297787934653687e-12
//0.71875	0.75	6.84991709114442e-13	3.253923503173093e-12
//0.75	0.78125	9.101909407883959e-13	4.592904803578824e-12
//0.78125	0.8125	1.1493215695786234e-12	7.719329183312932e-12
//0.8125	0.84375	1.4681371070974471e-12	1.0473188683572092e-11
//0.84375	0.875	1.8095327163327557e-12	1.931541490125015e-11
//0.875	0.90625	2.327848005254428e-12	3.75493522159802e-11
//0.90625	0.9375	2.9836434537062703e-12	7.266705395129613e-11
//0.9375	0.96875	3.8363895688675985e-12	1.6475305529978893e-10
//0.96875	1.0	5.104003740012507e-12	inf
//spec: {
//spec:     "cname": "ml2_raw_log_15",
//spec:     "delta": 5.104003740012507e-12,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 5.399453674169516e-13,
//spec:     "operation": "log"
//spec: }
