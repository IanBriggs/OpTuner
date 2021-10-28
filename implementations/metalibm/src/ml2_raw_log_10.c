/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_10.c --poly-degree 10 \
 *     --fname ml2_raw_log_10 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>


double ml2_raw_log1p_10(double x) {
  return ml2_raw_log_10(x + 1);
}

double ml2_raw_log_10(double);
double ml2_raw_log_10(double x){
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
    
    pm_9 = x * -0x1.c7eaf2ea6cb19p0;
    pa_9 = 0x1.e7ea78abec014p3 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = -0x1.d919374ea6defp5 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.128a071689bc7p7 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.a85c100417c46p7 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.cbcfb4c280e22p7 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.66295f230c6c4p7 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.95874a5b0e0abp6 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.50cf7030248aap5 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.b72d180c89e28p3 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.9fdac95b47549p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fd35071f790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fd35071fa60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fd35071fb20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fd35071fd00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd35072dcd0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_10
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd35072dcd0>
//Info: executing pass instantiate_prec on fct ml2_raw_log_10
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd35072dcd0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_10
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd35072dcd0>
//Info: executing pass check_processor_support on fct ml2_raw_log_10
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd35072dcd0>
//Info: executing pass debug_tag_node on fct ml2_raw_log_10
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_10.c
//0.5	0.53125	2.47141715207502e-09	3.6788704526080085e-09
//0.53125	0.5625	2.232105676934587e-09	3.6788764648812974e-09
//0.5625	0.59375	1.8307627786513033e-09	3.5119437359513334e-09
//0.59375	0.625	1.8849959933264466e-09	3.67889195768168e-09
//0.625	0.65625	1.3334347165996168e-09	3.1657208668518888e-09
//0.65625	0.6875	1.4856991379586918e-09	3.6789209439537124e-09
//0.6875	0.71875	9.798301325469208e-10	2.615054526008123e-09
//0.71875	0.75	1.0844948683214839e-09	3.679004530560344e-09
//0.75	0.78125	1.0458579212729894e-09	3.635511611360265e-09
//0.78125	0.8125	6.772969499734389e-10	3.2619993142531027e-09
//0.8125	0.84375	7.194732127368331e-10	3.6791816579402517e-09
//0.84375	0.875	4.252535689529025e-10	2.5032828176332773e-09
//0.875	0.90625	4.1634782124580113e-10	3.6796420561318383e-09
//0.90625	0.9375	3.087908335219293e-10	3.1375255932715788e-09
//0.9375	0.96875	1.9102039435772843e-10	3.682282418375113e-09
//0.96875	1.0	5.236820465650308e-11	inf
//spec: {
//spec:     "cname": "ml2_raw_log_10",
//spec:     "delta": 2.47141715207502e-09,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 2.5032828176332773e-09,
//spec:     "operation": "log"
//spec: }
