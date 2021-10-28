/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_1.c --poly-degree 1 \
 *     --fname ml2_raw_log_1 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>


double ml2_raw_log1p_1(double x) {
  return ml2_raw_log_1(x + 1);
}

double ml2_raw_log_1(double);
double ml2_raw_log_1(double x){
    double tmp;
    double tmp1;
    
    tmp = x * 0x1.298c000b9b8dp0;
    tmp1 = -0x1.298c0916fe47cp0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f4f630ed7f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f4f630edac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f4f630edb80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f4f630edd60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4f630f73a0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_1
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4f630f73a0>
//Info: executing pass instantiate_prec on fct ml2_raw_log_1
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4f630f73a0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_1
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4f630f73a0>
//Info: executing pass check_processor_support on fct ml2_raw_log_1
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4f630f73a0>
//Info: executing pass debug_tag_node on fct ml2_raw_log_1
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_1.c
//0.5	0.53125	0.11200039988153163	0.1615824214866666
//0.53125	0.5625	0.08769741816420178	0.1386470995412566
//0.5625	0.59375	0.06686064442335815	0.11620578900439628
//0.59375	0.625	0.049115063252187355	0.09421705946367351
//0.625	0.65625	0.03414340896374181	0.07264499003664156
//0.65625	0.6875	0.021674884893414795	0.0514581956431245
//0.6875	0.71875	0.011476509357626929	0.03062906323752395
//0.71875	0.75	0.003346386885898082	0.010133144963039041
//0.75	0.78125	0.0073919418549432915	0.02994385287763568
//0.78125	0.8125	0.010291014909119597	0.049561964900587265
//0.8125	0.84375	0.01170970279286162	0.06892153724781344
//0.84375	0.875	0.011898688819270928	0.08803702735047056
//0.875	0.90625	0.011755706864631536	0.10692176748755562
//0.90625	0.9375	0.010525386576796643	0.12558853240680273
//0.9375	0.96875	0.008105298153373	0.14405254766487632
//0.96875	1.0	0.004573480877258877	1.3667624556897673e+24
//spec: {
//spec:     "cname": "ml2_raw_log_1",
//spec:     "delta": 0.11200039988153163,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 0.010133144963039041,
//spec:     "operation": "log"
//spec: }
