/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_2.c --poly-degree 2 \
 *     --fname ml2_raw_log_2 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>

double ml2_raw_log_2(double);
double ml2_raw_log1p_2(double x) {
  return ml2_raw_log_2(x + 1);
}


double ml2_raw_log_2(double x){
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_1 = x * -0x1.84cb20f4ed1c1p-1;
    pa_1 = 0x1.4010615ae692ap1 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.bdbb2e0da2f5fp0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fca64491790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fca64491a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fca64491b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fca64491d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fca6449b610>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_2
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fca6449b610>
//Info: executing pass instantiate_prec on fct ml2_raw_log_2
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fca6449b610>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_2
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fca6449b610>
//Info: executing pass check_processor_support on fct ml2_raw_log_2
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fca6449b610>
//Info: executing pass debug_tag_node on fct ml2_raw_log_2
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_2.c
//0.5	0.53125	0.01241917313726322	0.01791707949707115
//0.53125	0.5625	0.005463537799352486	0.008637696353796
//0.5625	0.59375	0.0028735125331837905	0.005512237657487527
//0.59375	0.625	0.004947208621569533	0.010525894511727174
//0.625	0.65625	0.00600090388495649	0.014246704776803431
//0.65625	0.6875	0.006270359966011956	0.016727220655359143
//0.6875	0.71875	0.006267580006924046	0.018014480589435423
//0.71875	0.75	0.005949132457952409	0.018232072613027582
//0.75	0.78125	0.005221666150062635	0.018150822209951692
//0.78125	0.8125	0.004239709336751835	0.017174544269276087
//0.8125	0.84375	0.00313960054958696	0.01512044959750347
//0.84375	0.875	0.0020422359851076043	0.012020291719294167
//0.875	0.90625	0.0010553170017758428	0.007903137839231114
//0.90625	0.9375	0.0002752030519591003	0.003277881745640415
//0.9375	0.96875	0.0003370937589733205	0.01029654157612464
//0.96875	1.0	0.00032690179218372	inf
//spec: {
//spec:     "cname": "ml2_raw_log_2",
//spec:     "delta": 0.01241917313726322,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 0.003277881745640415,
//spec:     "operation": "log"
//spec: }
