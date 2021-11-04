/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_13.c --poly-degree 13 \
 *     --fname ml2_raw_log_13 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>

double ml2_raw_log_13(double);
double ml2_raw_log1p_13(double x) {
  return ml2_raw_log_13(x + 1);
}


double ml2_raw_log_13(double x){
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
    
    pm_12 = x * 0x1.c33ee0e81966ep1;
    pa_12 = -0x1.304f39196956p5 + pm_12;
    pm_11 = x * pa_12;
    pa_11 = 0x1.7bd778742e6cdp7 + pm_11;
    pm_10 = x * pa_11;
    pa_10 = -0x1.22da08e3e9c39p9 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.315f55fbaaf63p10 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = -0x1.d14ef89a0d726p10 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.0984af73a1148p11 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.cdcf727d20324p10 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.3453fcbdced09p10 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.3c23c43d91b25p9 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.ef755d6a1de8ep7 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.285527ce458ep6 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.1f64f4b967d56p4 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.c0c3648846bdfp1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f7d49dfa7f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f7d49dfaac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f7d49dfab80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f7d49dfad60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7d49df5ee0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_13
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7d49df5ee0>
//Info: executing pass instantiate_prec on fct ml2_raw_log_13
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7d49df5ee0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_13
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7d49df5ee0>
//Info: executing pass check_processor_support on fct ml2_raw_log_13
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7d49df5ee0>
//Info: executing pass debug_tag_node on fct ml2_raw_log_13
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_13.c
//0.5	0.53125	1.0053294057078543e-11	1.4774842055686546e-11
//0.53125	0.5625	8.559325480725833e-12	1.4818154821843454e-11
//0.5625	0.59375	8.41843062529978e-12	1.466678815100011e-11
//0.59375	0.625	7.46023513825808e-12	1.4910397085046785e-11
//0.625	0.65625	6.238653912839843e-12	1.484160382961665e-11
//0.65625	0.6875	6.264083175387711e-12	1.5084664008621483e-11
//0.6875	0.71875	5.0306300116864904e-12	1.5161357931248455e-11
//0.71875	0.75	4.9745173138808695e-12	1.540662622636301e-11
//0.75	0.78125	3.90667876625218e-12	1.568100507479815e-11
//0.78125	0.8125	3.783973283887832e-12	1.6121730358625808e-11
//0.8125	0.84375	2.9335331558351305e-12	1.690018252927978e-11
//0.84375	0.875	2.6839405964022905e-12	1.7763615911194076e-11
//0.875	0.90625	2.2352251268107977e-12	2.1744058870351712e-11
//0.90625	0.9375	1.6218086948000668e-12	2.9322737538230364e-11
//0.9375	0.96875	1.7476128939299424e-12	5.841121339872629e-11
//0.96875	1.0	1.483858468502384e-12	inf
//spec: {
//spec:     "cname": "ml2_raw_log_13",
//spec:     "delta": 1.0053294057078543e-11,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 1.466678815100011e-11,
//spec:     "operation": "log"
//spec: }
