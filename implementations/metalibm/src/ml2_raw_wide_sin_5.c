/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_5.c \
 *     --poly-degree 5 --fname ml2_raw_wide_sin_5 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_5(double);
double ml2_raw_wide_sin_5(double x){
    double x2_;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_3 = x2_ * 0x1.48cadb1eca531p-8;
    pa_3 = -0x1.30184390e9215p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.f41c1f2cd912ep-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f0dfe11f760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f0dfe11fa30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f0dfe11faf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f0dfe11fcd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0dfe1297c0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_5
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0dfe1297c0>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_5
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0dfe1297c0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_5
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0dfe1297c0>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_5
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0dfe1297c0>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_5
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_5.c
//-3.1415926535897927	-2.945243112740431	0.0010079631151310939	inf
//-2.945243112740431	-2.7488935718910685	0.005565265343629951	0.014542739175412739
//-2.7488935718910685	-2.5525440310417067	0.011890520317834451	0.02140237113354469
//-2.5525440310417067	-2.3561944901923444	0.01641948993503786	0.02322294786014495
//-2.3561944901923444	-2.1598449493429825	0.01797146085685821	0.023220665353379195
//-2.1598449493429825	-1.9634954084936205	0.017971125843715876	0.021613689277169702
//-1.9634954084936205	-1.7671458676442584	0.01642851278351819	0.017782094099284048
//-1.7671458676442584	-1.5707963267948963	0.012379506529053695	0.012622035400005352
//-1.5707963267948963	-1.3744467859455343	0.006804560588970719	0.006804560588970774
//-1.3744467859455343	-1.1780972450961722	0.0045411245033312436	0.004915277742962448
//-1.1780972450961722	-0.9817477042468102	0.008446222494405936	0.010158185421853577
//-0.9817477042468102	-0.7853981633974482	0.010384962116288496	0.01468655426958601
//-0.7853981633974482	-0.5890486225480861	0.010561376686172175	0.018347686774712726
//-0.5890486225480861	-0.3926990816987241	0.010193428616797794	0.021033512308061875
//-0.3926990816987241	-0.19634954084936204	0.008049176684742402	0.02267225889729959
//-0.19634954084936204	0.0	0.004423138289107162	inf
//0.0	0.19634954084936204	0.004423138289107162	inf
//0.19634954084936204	0.3926990816987241	0.008049176684742402	0.02267225889729959
//0.3926990816987241	0.5890486225480861	0.010193428616797794	0.021033512308061875
//0.5890486225480861	0.7853981633974482	0.010561376686172175	0.018347686774712726
//0.7853981633974482	0.9817477042468102	0.010384962116288496	0.01468655426958601
//0.9817477042468102	1.1780972450961722	0.008446222494405936	0.010158185421853577
//1.1780972450961722	1.3744467859455343	0.0045411245033312436	0.004915277742962448
//1.3744467859455343	1.5707963267948963	0.006804560588970719	0.006804560588970774
//1.5707963267948963	1.7671458676442584	0.012379506529053695	0.012622035400005352
//1.7671458676442584	1.9634954084936205	0.01642851278351819	0.017782094099284048
//1.9634954084936205	2.1598449493429825	0.017971125843715876	0.021613689277169702
//2.1598449493429825	2.3561944901923444	0.01797146085685821	0.023220665353379195
//2.3561944901923444	2.5525440310417067	0.01641948993503786	0.02322294786014495
//2.5525440310417067	2.7488935718910685	0.011890520317834451	0.02140237113354469
//2.7488935718910685	2.945243112740431	0.005565265343629951	0.014542739175412739
//2.945243112740431	3.1415926535897927	0.0010079631151310939	inf
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_5",
//spec:     "delta": 0.01797146085685821,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 0.004915277742962448,
//spec:     "operation": "sin"
//spec: }
