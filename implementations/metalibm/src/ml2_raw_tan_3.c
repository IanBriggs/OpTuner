/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_3.c --poly-degree 3 \
 *     --fname ml2_raw_tan_3 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_3(double);
double ml2_raw_tan_3(double x){
    double x2_;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    tmp = x2_ * 0x1.c20c821071907p-2;
    tmp1 = 0x1.fb95e455580fdp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f849e4397f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f849e439ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f849e439b80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f849e439d60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f849e444580>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_3
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f849e444580>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_3
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f849e444580>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_3
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f849e444580>
//Info: executing pass check_processor_support on fct ml2_raw_tan_3
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f849e444580>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_3
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_3.c
//0.0	0.09817477042468102	0.0007472280411084735	inf
//0.09817477042468102	0.19634954084936204	0.0009633028612162739	0.007586733619773853
//0.19634954084936204	0.29452431127404305	0.0009287864075816378	0.004669324586584865
//0.29452431127404305	0.3926990816987241	0.001715442290776899	0.004141444043862057
//0.3926990816987241	0.4908738521234051	0.004114347428784792	0.0076974026396404455
//0.4908738521234051	0.5890486225480861	0.005619475875806344	0.008622040350030728
//0.5890486225480861	0.6872233929727671	0.005626937346703685	0.008410139978891501
//0.6872233929727671	0.7853981633974482	0.00844724891450526	0.008447248914505325
//spec: {
//spec:     "cname": "ml2_raw_tan_3",
//spec:     "delta": 0.00844724891450526,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 0.004141444043862057,
//spec:     "operation": "tan"
//spec: }
