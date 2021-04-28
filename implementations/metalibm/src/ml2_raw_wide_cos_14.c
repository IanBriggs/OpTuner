/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_cos.py --output src/ml2_raw_wide_cos_14.c \
 *     --poly-degree 14 --fname ml2_raw_wide_cos_14 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_cos_14(double);
double ml2_raw_wide_cos_14(double x){
    double x2_;
    double pm_12;
    double pa_12;
    double pm_10;
    double pa_10;
    double pm_8;
    double pa_8;
    double pm_6;
    double pa_6;
    double pm_4;
    double pa_4;
    double pm_2;
    double pa_2;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    pm_12 = x2_ * -0x1.57b022ca2d8acp-37;
    pa_12 = 0x1.1b5eedcb9c1c2p-29 + pm_12;
    pm_10 = x2_ * pa_12;
    pa_10 = -0x1.27abbad7b5386p-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a015f3d925de3p-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c16985a79168p-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.555553a4c9797p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.ffffffe1cda9cp-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffffffe56d4dp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f190a6467c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f190a646a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f190a646b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f190a646d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//LSKDFKLJK 0.99999999980665565946225115112611092627048492431640625 * _x_^0 + -0.4999999982423248834351170444278977811336517333984375 * _x_^2 + 4.1666663519477946386881939133672858588397502899169921875e-2 * _x_^4 + -1.38888649836940193671441790002063498832285404205322265625e-3 * _x_^6 + 2.480064344875615334087663732542949901471729390323162078857421875e-5 * _x_^8 + -2.753649090807492574436098585477505906737860641442239284515380859375e-7 * _x_^10 + 2.06179404608772792455265808323795762024843725157552398741245269775390625e-9 * _x_^12 + -9.768201347514205422817251959878375421053586791231282404623925685882568359375e-12 * _x_^14
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f190a655580>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_14
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f190a655580>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_14
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f190a655580>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_14
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f190a655580>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_14
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f190a655580>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_14
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_14.c
//-3.1415926535897927	-2.945243112740431	1.9291758018647426e-10	1.9334532937530345e-10
//-2.945243112740431	-2.7488935718910685	1.8636641505521258e-10	1.9334831999928454e-10
//-2.7488935718910685	-2.5525440310417067	1.5792866614580608e-10	1.8993981047131149e-10
//-2.5525440310417067	-2.3561944901923444	1.587427401607165e-10	1.9334716863631306e-10
//-2.3561944901923444	-2.1598449493429825	8.512604266670502e-11	1.5322340572588041e-10
//-2.1598449493429825	-1.9634954084936205	9.333068839633227e-11	1.9334872848715874e-10
//-1.9634954084936205	-1.7671458676442584	6.542064805409551e-11	1.7095607497077753e-10
//-1.7671458676442584	-1.5707963267948963	8.879995546777209e-12	inf
//-1.5707963267948963	-1.3744467859455343	3.562060676864062e-11	inf
//-1.3744467859455343	-1.1780972450961722	4.0054398171673406e-11	1.825849749090623e-10
//-1.1780972450961722	-0.9817477042468102	5.675770887890072e-11	1.0216149952987377e-10
//-0.9817477042468102	-0.7853981633974482	1.3502670136844723e-10	1.9095667482253032e-10
//-0.7853981633974482	-0.5890486225480861	1.4466008570869654e-10	1.9334452045436051e-10
//-0.5890486225480861	-0.3926990816987241	1.2481273391638227e-10	1.5011099923174455e-10
//-0.3926990816987241	-0.19634954084936204	1.3012341695453269e-10	1.326726907920549e-10
//-0.19634954084936204	0.0	1.9334440332267886e-10	1.9334440455674884e-10
//0.0	0.19634954084936204	1.9334440332267886e-10	1.9334440455674884e-10
//0.19634954084936204	0.3926990816987241	1.3012341695453269e-10	1.326726907920549e-10
//0.3926990816987241	0.5890486225480861	1.2481273391638227e-10	1.5011099923174455e-10
//0.5890486225480861	0.7853981633974482	1.4466008570869654e-10	1.9334452045436051e-10
//0.7853981633974482	0.9817477042468102	1.3502670136844723e-10	1.9095667482253032e-10
//0.9817477042468102	1.1780972450961722	5.675770887890072e-11	1.0216149952987377e-10
//1.1780972450961722	1.3744467859455343	4.0054398171673406e-11	1.825849749090623e-10
//1.3744467859455343	1.5707963267948963	3.562060676864062e-11	inf
//1.5707963267948963	1.7671458676442584	8.879995546777209e-12	inf
//1.7671458676442584	1.9634954084936205	6.542064805409551e-11	1.7095607497077753e-10
//1.9634954084936205	2.1598449493429825	9.333068839633227e-11	1.9334872848715874e-10
//2.1598449493429825	2.3561944901923444	8.512604266670502e-11	1.5322340572588041e-10
//2.3561944901923444	2.5525440310417067	1.587427401607165e-10	1.9334716863631306e-10
//2.5525440310417067	2.7488935718910685	1.5792866614580608e-10	1.8993981047131149e-10
//2.7488935718910685	2.945243112740431	1.8636641505521258e-10	1.9334831999928454e-10
//2.945243112740431	3.1415926535897927	1.9291758018647426e-10	1.9334532937530345e-10
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_14",
//spec:     "delta": 1.9334440332267886e-10,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 1.0216149952987377e-10,
//spec:     "operation": "cos"
//spec: }
