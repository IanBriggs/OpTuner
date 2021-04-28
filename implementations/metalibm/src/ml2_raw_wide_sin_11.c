/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_11.c \
 *     --poly-degree 11 --fname ml2_raw_wide_sin_11 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_11(double);
double ml2_raw_wide_sin_11(double x){
    double x2_;
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
    pm_9 = x2_ * -0x1.568701b1cf8fap-26;
    pa_9 = 0x1.68df54982c90fp-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.9f353d2cb8dc4p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.11063bc7500bp-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.5554871dcf7f4p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fffff4e214d1ep-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f7bacde07c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f7bacde0a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f7bacde0b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f7bacde0d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7bacdef0d0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_11
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7bacdef0d0>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_11
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7bacdef0d0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_11
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7bacdef0d0>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_11
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7bacdef0d0>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_11
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_11.c
//-3.1415926535897927	-2.945243112740431	5.4044865759672204e-08	inf
//-2.945243112740431	-2.7488935718910685	7.109195621002719e-08	inf
//-2.7488935718910685	-2.5525440310417067	1.792001490548272e-07	3.313071318243295e-07
//-2.5525440310417067	-2.3561944901923444	1.79289601647131e-07	3.225517472965935e-07
//-2.3561944901923444	-2.1598449493429825	1.5126872571767798e-07	1.8192934998825574e-07
//-2.1598449493429825	-1.9634954084936205	3.0179217229761386e-07	3.2665749369456675e-07
//-1.9634954084936205	-1.7671458676442584	3.1239668051186475e-07	3.313071267876894e-07
//-1.7671458676442584	-1.5707963267948963	2.691217235820849e-07	2.743941299176196e-07
//-1.5707963267948963	-1.3744467859455343	1.3391406917299867e-07	1.3653760094449365e-07
//-1.3744467859455343	-1.1780972450961722	2.700286284701555e-07	2.9227688135210957e-07
//-1.1780972450961722	-0.9817477042468102	2.8794321380892534e-07	3.313071260304897e-07
//-0.9817477042468102	-0.7853981633974482	2.726173922981479e-07	3.2787414995319005e-07
//-0.7853981633974482	-0.5890486225480861	1.6949894023776603e-07	2.3970770017050015e-07
//-0.5890486225480861	-0.3926990816987241	4.852086150664216e-08	1.267911213500892e-07
//-0.3926990816987241	-0.19634954084936204	6.122079450107111e-08	2.7573768278101797e-07
//-0.19634954084936204	0.0	5.379375328371723e-08	inf
//0.0	0.19634954084936204	5.379375328371723e-08	inf
//0.19634954084936204	0.3926990816987241	6.122079450107111e-08	2.7573768278101797e-07
//0.3926990816987241	0.5890486225480861	4.852086150664216e-08	1.267911213500892e-07
//0.5890486225480861	0.7853981633974482	1.6949894023776603e-07	2.3970770017050015e-07
//0.7853981633974482	0.9817477042468102	2.726173922981479e-07	3.2787414995319005e-07
//0.9817477042468102	1.1780972450961722	2.8794321380892534e-07	3.313071260304897e-07
//1.1780972450961722	1.3744467859455343	2.700286284701555e-07	2.9227688135210957e-07
//1.3744467859455343	1.5707963267948963	1.3391406917299867e-07	1.3653760094449365e-07
//1.5707963267948963	1.7671458676442584	2.691217235820849e-07	2.743941299176196e-07
//1.7671458676442584	1.9634954084936205	3.1239668051186475e-07	3.313071267876894e-07
//1.9634954084936205	2.1598449493429825	3.0179217229761386e-07	3.2665749369456675e-07
//2.1598449493429825	2.3561944901923444	1.5126872571767798e-07	1.8192934998825574e-07
//2.3561944901923444	2.5525440310417067	1.79289601647131e-07	3.225517472965935e-07
//2.5525440310417067	2.7488935718910685	1.792001490548272e-07	3.313071318243295e-07
//2.7488935718910685	2.945243112740431	7.109195621002719e-08	inf
//2.945243112740431	3.1415926535897927	5.4044865759672204e-08	inf
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_11",
//spec:     "delta": 3.1239668051186475e-07,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 1.267911213500892e-07,
//spec:     "operation": "sin"
//spec: }
