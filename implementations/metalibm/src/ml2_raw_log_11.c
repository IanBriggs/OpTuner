/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_11.c --poly-degree 11 \
 *     --fname ml2_raw_log_11 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>


double ml2_raw_log1p_11(double x) {
  return ml2_raw_log_11(x + 1);
}

double ml2_raw_log_11(double);
double ml2_raw_log_11(double x){
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
    
    pm_10 = x * 0x1.1be26b3952162p1;
    pa_10 = -0x1.4a1e6edbdc7ddp4 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.5eadec72b2f94p6 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = -0x1.c236518273eccp7 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.8554442a5487ep8 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.de8518737a1fep8 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.adaef9125ea48p8 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.1d7159b719f1dp8 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.198900252f19fp7 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.9e16b41efed65p5 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.e45dbee9fe7bdp3 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.abc96e273281ep1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f7304d1f790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f7304d1fa60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f7304d1fb20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f7304d1fd00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7304d2dfa0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_11
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7304d2dfa0>
//Info: executing pass instantiate_prec on fct ml2_raw_log_11
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7304d2dfa0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_11
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7304d2dfa0>
//Info: executing pass check_processor_support on fct ml2_raw_log_11
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7304d2dfa0>
//Info: executing pass debug_tag_node on fct ml2_raw_log_11
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_11.c
//0.5	0.53125	3.919797507603337e-10	5.801152509701709e-10
//0.53125	0.5625	3.602001092610481e-10	5.801254953867619e-10
//0.5625	0.59375	3.13081866721974e-10	5.801439479485547e-10
//0.59375	0.625	2.498856031940166e-10	4.793709822777384e-10
//0.625	0.65625	2.572254281585194e-10	5.801836261279028e-10
//0.65625	0.6875	1.9372359928585663e-10	4.599659641340412e-10
//0.6875	0.71875	1.9897420875632632e-10	5.802421672152536e-10
//0.71875	0.75	1.7964107099383998e-10	5.440759989131493e-10
//0.75	0.78125	1.4347273404101307e-10	5.797814306376885e-10
//0.78125	0.8125	1.4311769622870255e-10	5.80605885757022e-10
//0.8125	0.84375	9.217716433006262e-11	5.42692146197923e-10
//0.84375	0.875	9.445859304872814e-11	5.81191796042237e-10
//0.875	0.90625	5.378717741281801e-11	5.470316485819487e-10
//0.90625	0.9375	5.443158506004758e-11	5.827364824727042e-10
//0.9375	0.96875	2.4940854900662283e-11	5.873576235493545e-10
//0.96875	1.0	1.3971942497836664e-11	inf
//spec: {
//spec:     "cname": "ml2_raw_log_11",
//spec:     "delta": 3.919797507603337e-10,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 4.599659641340412e-10,
//spec:     "operation": "log"
//spec: }
