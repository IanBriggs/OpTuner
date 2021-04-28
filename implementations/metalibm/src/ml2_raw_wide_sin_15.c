/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_15.c \
 *     --poly-degree 15 --fname ml2_raw_wide_sin_15 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_15(double);
double ml2_raw_wide_sin_15(double x){
    double x2_;
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
    pm_13 = x2_ * -0x1.6c57c30714ae2p-41;
    pa_13 = 0x1.5c76a947ad3bdp-33 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = -0x1.ae0982ba43c16p-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71da50e21ae37p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a019d17d884cep-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.11110fe46cde7p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.55555549a99fcp-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffffaf225p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f601b2b3760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f601b2b3a30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f601b2b3af0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f601b2b3cd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f601b2c2610>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_15
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f601b2c2610>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_15
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f601b2c2610>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_15
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f601b2c2610>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_15
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f601b2c2610>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_15
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_15.c
//-3.1415926535897927	-2.945243112740431	3.2325654408614314e-12	inf
//-2.945243112740431	-2.7488935718910685	1.0989227006906976e-11	inf
//-2.7488935718910685	-2.5525440310417067	1.8656044217905976e-11	3.358284761532432e-11
//-2.5525440310417067	-2.3561944901923444	2.242995096841073e-11	3.6777204495022247e-11
//-2.3561944901923444	-2.1598449493429825	1.9587300276110432e-11	2.3557907056179122e-11
//-2.1598449493429825	-1.9634954084936205	3.335755092706519e-11	3.677545509386015e-11
//-1.9634954084936205	-1.7671458676442584	3.266754878872648e-11	3.5359201897930914e-11
//-1.7671458676442584	-1.5707963267948963	2.6231603734580474e-11	2.6231683972280476e-11
//-1.5707963267948963	-1.3744467859455343	3.6339137432379527e-11	3.677423679186448e-11
//-1.3744467859455343	-1.1780972450961722	3.542366751300048e-11	3.611771969732647e-11
//-1.1780972450961722	-0.9817477042468102	1.4857413015538087e-11	1.6081619749695782e-11
//-0.9817477042468102	-0.7853981633974482	2.5223033298525665e-11	3.5670773335735206e-11
//-0.7853981633974482	-0.5890486225480861	2.5229509222528352e-11	3.67739372279635e-11
//-0.5890486225480861	-0.3926990816987241	1.668411349000954e-11	3.0030744926286106e-11
//-0.3926990816987241	-0.19634954084936204	4.8081464239232655e-12	2.4629875337879737e-11
//-0.19634954084936204	0.0	4.805008298287864e-12	inf
//0.0	0.19634954084936204	4.805008298287864e-12	inf
//0.19634954084936204	0.3926990816987241	4.8081464239232655e-12	2.4629875337879737e-11
//0.3926990816987241	0.5890486225480861	1.668411349000954e-11	3.0030744926286106e-11
//0.5890486225480861	0.7853981633974482	2.5229509222528352e-11	3.67739372279635e-11
//0.7853981633974482	0.9817477042468102	2.5223033298525665e-11	3.5670773335735206e-11
//0.9817477042468102	1.1780972450961722	1.4857413015538087e-11	1.6081619749695782e-11
//1.1780972450961722	1.3744467859455343	3.542366751300048e-11	3.611771969732647e-11
//1.3744467859455343	1.5707963267948963	3.6339137432379527e-11	3.677423679186448e-11
//1.5707963267948963	1.7671458676442584	2.6231603734580474e-11	2.6231683972280476e-11
//1.7671458676442584	1.9634954084936205	3.266754878872648e-11	3.5359201897930914e-11
//1.9634954084936205	2.1598449493429825	3.335755092706519e-11	3.677545509386015e-11
//2.1598449493429825	2.3561944901923444	1.9587300276110432e-11	2.3557907056179122e-11
//2.3561944901923444	2.5525440310417067	2.242995096841073e-11	3.6777204495022247e-11
//2.5525440310417067	2.7488935718910685	1.8656044217905976e-11	3.358284761532432e-11
//2.7488935718910685	2.945243112740431	1.0989227006906976e-11	inf
//2.945243112740431	3.1415926535897927	3.2325654408614314e-12	inf
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_15",
//spec:     "delta": 3.6339137432379527e-11,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 1.6081619749695782e-11,
//spec:     "operation": "sin"
//spec: }
