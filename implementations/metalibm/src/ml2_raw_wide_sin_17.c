/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_17.c \
 *     --poly-degree 17 --fname ml2_raw_wide_sin_17 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_17(double);
double ml2_raw_wide_sin_17(double x){
    double x2_;
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
    pm_15 = x2_ * 0x1.5dc22f8865568p-49;
    pa_15 = -0x1.aa09c53e1b3c6p-41 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.60f1ab9074137p-33 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = -0x1.ae61a97c6f694p-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71de24af0790cp-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a01a00d6d9176p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.1111110d4de7cp-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.55555555389d6p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffffff68bp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7facb08ae7c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7facb08aea90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7facb08aeb50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7facb08aed30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7facb08bd940>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_17
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7facb08bd940>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_17
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7facb08bd940>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_17
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7facb08bd940>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_17
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7facb08bd940>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_17
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_17.c
//-3.1415926535897927	-2.945243112740431	4.8184014996850097e-14	inf
//-2.945243112740431	-2.7488935718910685	6.677082596594013e-14	inf
//-2.7488935718910685	-2.5525440310417067	1.309565891926448e-13	2.698780324176293e-13
//-2.5525440310417067	-2.3561944901923444	1.4487004470073854e-13	2.0590181477544492e-13
//-2.3561944901923444	-2.1598449493429825	2.0746894057173212e-13	2.68306252148508e-13
//-2.1598449493429825	-1.9634954084936205	1.6388490203396246e-13	1.9729205274158917e-13
//-1.9634954084936205	-1.7671458676442584	2.623337897679917e-13	2.688915339748747e-13
//-1.7671458676442584	-1.5707963267948963	2.6024686940020464e-13	2.654169518931577e-13
//-1.5707963267948963	-1.3744467859455343	1.9916586456041765e-13	2.03123762747004e-13
//-1.3744467859455343	-1.1780972450961722	2.551778013317148e-13	2.690400755850042e-13
//-1.1780972450961722	-0.9817477042468102	2.3347165539525026e-13	2.527796839438318e-13
//-0.9817477042468102	-0.7853981633974482	1.3918192890787735e-13	1.9685053227079302e-13
//-0.7853981633974482	-0.5890486225480861	1.6521570239272182e-13	2.690703033472236e-13
//-0.5890486225480861	-0.3926990816987241	1.4523981327774283e-13	2.6155879325536165e-13
//-0.3926990816987241	-0.19634954084936204	3.60474669013084e-14	1.5416258974812764e-13
//-0.19634954084936204	0.0	3.06732655351747e-14	inf
//0.0	0.19634954084936204	3.06732655351747e-14	inf
//0.19634954084936204	0.3926990816987241	3.60474669013084e-14	1.5416258974812764e-13
//0.3926990816987241	0.5890486225480861	1.4523981327774283e-13	2.6155879325536165e-13
//0.5890486225480861	0.7853981633974482	1.6521570239272182e-13	2.690703033472236e-13
//0.7853981633974482	0.9817477042468102	1.3918192890787735e-13	1.9685053227079302e-13
//0.9817477042468102	1.1780972450961722	2.3347165539525026e-13	2.527796839438318e-13
//1.1780972450961722	1.3744467859455343	2.551778013317148e-13	2.690400755850042e-13
//1.3744467859455343	1.5707963267948963	1.9916586456041765e-13	2.03123762747004e-13
//1.5707963267948963	1.7671458676442584	2.6024686940020464e-13	2.654169518931577e-13
//1.7671458676442584	1.9634954084936205	2.623337897679917e-13	2.688915339748747e-13
//1.9634954084936205	2.1598449493429825	1.6388490203396246e-13	1.9729205274158917e-13
//2.1598449493429825	2.3561944901923444	2.0746894057173212e-13	2.68306252148508e-13
//2.3561944901923444	2.5525440310417067	1.4487004470073854e-13	2.0590181477544492e-13
//2.5525440310417067	2.7488935718910685	1.309565891926448e-13	2.698780324176293e-13
//2.7488935718910685	2.945243112740431	6.677082596594013e-14	inf
//2.945243112740431	3.1415926535897927	4.8184014996850097e-14	inf
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_17",
//spec:     "delta": 2.623337897679917e-13,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 1.5416258974812764e-13,
//spec:     "operation": "sin"
//spec: }
