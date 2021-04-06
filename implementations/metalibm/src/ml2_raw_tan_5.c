/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_5.c --poly-degree 5 \
 *     --fname ml2_raw_tan_5 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_5(double);
double ml2_raw_tan_5(double x){
    double x2_;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_3 = x2_ * 0x1.9eed02ba2b541p-3;
    pa_3 = 0x1.4355cac9aa601p-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.0028a66b09948p0 + tmp;
    tmp2 = x * tmp1;
    return tmp2;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f4100f3c7c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f4100f3ca90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f4100f3cb50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f4100f3cd30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4100f48820>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_5
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4100f48820>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_5
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4100f48820>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_5
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4100f48820>
//Info: executing pass check_processor_support on fct ml2_raw_tan_5
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4100f48820>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_5
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_5.c
//0.0	0.09817477042468102	4.4890502717764314e-05	inf
//0.09817477042468102	0.19634954084936204	4.5993500538724995e-05	0.0004557809228791413
//0.19634954084936204	0.29452431127404305	0.00012360732013434072	0.00040747872587388836
//0.29452431127404305	0.3926990816987241	0.00025685093186301366	0.0006200930032119518
//0.3926990816987241	0.4908738521234051	0.00027111252892214393	0.000620273120950778
//0.4908738521234051	0.5890486225480861	0.00021103947791960325	0.00039482709288031026
//0.5890486225480861	0.6872233929727671	0.0005075675459444809	0.0006202708738100574
//0.6872233929727671	0.7853981633974482	0.0005923108974207986	0.0006184728442074604
//spec: {
//spec:     "cname": "ml2_raw_tan_5",
//spec:     "delta": 0.0005923108974207986,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 0.00039482709288031026,
//spec:     "operation": "tan"
//spec: }
