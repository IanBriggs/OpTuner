/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_13.c \
 *     --poly-degree 13 --fname ml2_raw_wide_sin_13 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_13(double);
double ml2_raw_wide_sin_13(double x){
    double x2_;
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
    pm_11 = x2_ * 0x1.233540278c0e9p-33;
    pa_11 = -0x1.a6d6ce053fc98p-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.7164d630a0acep-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a011e7bce4336p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.1110cc66fb9c5p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.555551bb642bfp-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffddc5842p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fb640424760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fb640424a30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fb640424af0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fb640424cd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb640433340>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_13
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb640433340>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_13
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb640433340>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_13
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb640433340>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_13
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb640433340>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_13
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_13.c
//-3.1415926535897927	-2.945243112740431	4.6511366633300843e-10	inf
//-2.945243112740431	-2.7488935718910685	1.5239449727003258e-09	inf
//-2.7488935718910685	-2.5525440310417067	1.573037624720814e-09	3.982261067314242e-09
//-2.5525440310417067	-2.3561944901923444	2.5445389165380024e-09	3.5985224703723046e-09
//-2.3561944901923444	-2.1598449493429825	3.063030513337254e-09	3.984717682291293e-09
//-2.1598449493429825	-1.9634954084936205	2.659164414584624e-09	3.1981500378163486e-09
//-1.9634954084936205	-1.7671458676442584	3.2332731934075704e-09	3.2966168978907324e-09
//-1.7671458676442584	-1.5707963267948963	3.977417669874378e-09	3.984716776948608e-09
//-1.5707963267948963	-1.3744467859455343	3.841644178220708e-09	3.841644241859608e-09
//-1.3744467859455343	-1.1780972450961722	1.796701147756946e-09	1.8319006657054796e-09
//-1.1780972450961722	-0.9817477042468102	2.9247642821474264e-09	3.5175841264197354e-09
//-0.9817477042468102	-0.7853981633974482	3.0745173288763084e-09	3.984716592018972e-09
//-0.7853981633974482	-0.5890486225480861	2.72392666297585e-09	3.8522141080749015e-09
//-0.5890486225480861	-0.3926990816987241	1.2117951717204737e-09	2.1811738177559226e-09
//-0.3926990816987241	-0.19634954084936204	6.105135110387313e-10	3.0162688858331126e-09
//-0.19634954084936204	0.0	5.884448262118141e-10	inf
//0.0	0.19634954084936204	5.884448262118141e-10	inf
//0.19634954084936204	0.3926990816987241	6.105135110387313e-10	3.0162688858331126e-09
//0.3926990816987241	0.5890486225480861	1.2117951717204737e-09	2.1811738177559226e-09
//0.5890486225480861	0.7853981633974482	2.72392666297585e-09	3.8522141080749015e-09
//0.7853981633974482	0.9817477042468102	3.0745173288763084e-09	3.984716592018972e-09
//0.9817477042468102	1.1780972450961722	2.9247642821474264e-09	3.5175841264197354e-09
//1.1780972450961722	1.3744467859455343	1.796701147756946e-09	1.8319006657054796e-09
//1.3744467859455343	1.5707963267948963	3.841644178220708e-09	3.841644241859608e-09
//1.5707963267948963	1.7671458676442584	3.977417669874378e-09	3.984716776948608e-09
//1.7671458676442584	1.9634954084936205	3.2332731934075704e-09	3.2966168978907324e-09
//1.9634954084936205	2.1598449493429825	2.659164414584624e-09	3.1981500378163486e-09
//2.1598449493429825	2.3561944901923444	3.063030513337254e-09	3.984717682291293e-09
//2.3561944901923444	2.5525440310417067	2.5445389165380024e-09	3.5985224703723046e-09
//2.5525440310417067	2.7488935718910685	1.573037624720814e-09	3.982261067314242e-09
//2.7488935718910685	2.945243112740431	1.5239449727003258e-09	inf
//2.945243112740431	3.1415926535897927	4.6511366633300843e-10	inf
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_13",
//spec:     "delta": 3.977417669874378e-09,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 1.8319006657054796e-09,
//spec:     "operation": "sin"
//spec: }
