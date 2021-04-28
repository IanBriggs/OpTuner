/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_19.c \
 *     --poly-degree 19 --fname ml2_raw_wide_sin_19 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_19(double);
double ml2_raw_wide_sin_19(double x){
    double x2_;
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
    pm_17 = x2_ * -0x1.1bfb7ad9c19e6p-57;
    pa_17 = 0x1.946a7af5a98b3p-49 + pm_17;
    pm_15 = x2_ * pa_17;
    pa_15 = -0x1.ae7a455bab671p-41 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.61242db9da66dp-33 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = -0x1.ae64529de6f39p-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71de3a2d260e6p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a01a019e7b8e1p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.1111111109771p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.555555555521bp-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffffffff2p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f68928d47c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f68928d4a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f68928d4b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f68928d4d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68928e3c10>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_19
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68928e3c10>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_19
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68928e3c10>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_19
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68928e3c10>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_19
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68928e3c10>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_19
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_19.c
//-3.1415926535897927	-2.945243112740431	1.0758243996515828e-13	inf
//-2.945243112740431	-2.7488935718910685	6.460802014525704e-14	inf
//-2.7488935718910685	-2.5525440310417067	3.121845815859145e-14	8.363317507217951e-14
//-2.5525440310417067	-2.3561944901923444	3.200464115405382e-14	5.687459267752228e-14
//-2.3561944901923444	-2.1598449493429825	1.2204970806186265e-14	1.754516839593194e-14
//-2.1598449493429825	-1.9634954084936205	1.3022233148009489e-14	1.5380077647421018e-14
//-1.9634954084936205	-1.7671458676442584	8.179266208493063e-15	8.955060290318326e-15
//-1.7671458676442584	-1.5707963267948963	4.932106800993965e-15	5.020408402227789e-15
//-1.5707963267948963	-1.3744467859455343	4.542527296401911e-15	4.606166296401912e-15
//-1.3744467859455343	-1.1780972450961722	2.2686225956180817e-15	2.495900535102432e-15
//-1.1780972450961722	-0.9817477042468102	2.327640546897958e-15	2.637748645571124e-15
//-0.9817477042468102	-0.7853981633974482	1.4210055367506973e-15	1.766105733522641e-15
//-0.7853981633974482	-0.5890486225480861	1.1150930126693095e-15	1.9879997445139994e-15
//-0.5890486225480861	-0.3926990816987241	1.0797416890980566e-15	2.0799617186538677e-15
//-0.3926990816987241	-0.19634954084936204	4.159631967153454e-16	1.2945209708457735e-15
//-0.19634954084936204	0.0	1.9928321570895632e-16	inf
//0.0	0.19634954084936204	1.9928321570895632e-16	inf
//0.19634954084936204	0.3926990816987241	4.159631967153454e-16	1.2945209708457735e-15
//0.3926990816987241	0.5890486225480861	1.0797416890980566e-15	2.0799617186538677e-15
//0.5890486225480861	0.7853981633974482	1.1150930126693095e-15	1.9879997445139994e-15
//0.7853981633974482	0.9817477042468102	1.4210055367506973e-15	1.766105733522641e-15
//0.9817477042468102	1.1780972450961722	2.327640546897958e-15	2.637748645571124e-15
//1.1780972450961722	1.3744467859455343	2.2686225956180817e-15	2.495900535102432e-15
//1.3744467859455343	1.5707963267948963	4.542527296401911e-15	4.606166296401912e-15
//1.5707963267948963	1.7671458676442584	4.932106800993965e-15	5.020408402227789e-15
//1.7671458676442584	1.9634954084936205	8.179266208493063e-15	8.955060290318326e-15
//1.9634954084936205	2.1598449493429825	1.3022233148009489e-14	1.5380077647421018e-14
//2.1598449493429825	2.3561944901923444	1.2204970806186265e-14	1.754516839593194e-14
//2.3561944901923444	2.5525440310417067	3.200464115405382e-14	5.687459267752228e-14
//2.5525440310417067	2.7488935718910685	3.121845815859145e-14	8.363317507217951e-14
//2.7488935718910685	2.945243112740431	6.460802014525704e-14	inf
//2.945243112740431	3.1415926535897927	1.0758243996515828e-13	inf
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_19",
//spec:     "delta": 1.0758243996515828e-13,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 1.2945209708457735e-15,
//spec:     "operation": "sin"
//spec: }
