/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_23.c --poly-degree 23 \
 *     --fname ml2_raw_tan_23 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_23(double);
double ml2_raw_tan_23(double x){
    double x2_;
    double pm_21;
    double pa_21;
    double pm_19;
    double pa_19;
    double pm_17;
    double pa_17;
    double pm_15;
    double pa_15;
    double pm_13;
    double pa_13;
    double pm_11;
    double pa_11;
    double pm_9;
    double pa_9;
    double pm_7;
    double pa_7;
    double pm_5;
    double pa_5;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_21 = x2_ * 0x1.b5bd38fa3007ap-13;
    pa_21 = -0x1.10d25bb2e3602p-12 + pm_21;
    pm_19 = x2_ * pa_21;
    pa_19 = 0x1.43dca696abd1fp-11 + pm_19;
    pm_17 = x2_ * pa_19;
    pa_17 = 0x1.6d0d721f95fa6p-12 + pm_17;
    pm_15 = x2_ * pa_17;
    pa_15 = 0x1.97b7644a785a8p-10 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.d34dcc04ff29p-9 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = 0x1.2295ede0befp-7 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.664d14b4334c9p-6 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = 0x1.ba1bb41394b07p-5 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.111110e9bc2f1p-3 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = 0x1.5555555597263p-2 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffffffeddp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f84f39e8790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f84f39e8a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f84f39e8b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f84f39e8d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f84f39e81f0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_23
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f84f39e81f0>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_23
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f84f39e81f0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_23
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f84f39e81f0>
//Info: executing pass check_processor_support on fct ml2_raw_tan_23
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f84f39e81f0>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_23
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_23.c
//0.0	0.09817477042468102	3.1697284930637845e-15	inf
//0.09817477042468102	0.19634954084936204	6.287393986290523e-15	3.277674122999899e-14
//0.19634954084936204	0.29452431127404305	9.627482261018537e-15	3.272797861903365e-14
//0.29452431127404305	0.3926990816987241	1.3463164452247829e-14	3.2621612305452405e-14
//0.3926990816987241	0.4908738521234051	1.6956434266899124e-14	3.263816605784395e-14
//0.4908738521234051	0.5890486225480861	2.0324289607120454e-14	3.2681237789137395e-14
//0.5890486225480861	0.6872233929727671	2.643366153358051e-14	3.264815819346458e-14
//0.6872233929727671	0.7853981633974482	3.227558682407614e-14	3.272498679798031e-14
//spec: {
//spec:     "cname": "ml2_raw_tan_23",
//spec:     "delta": 3.227558682407614e-14,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 3.2621612305452405e-14,
//spec:     "operation": "tan"
//spec: }
