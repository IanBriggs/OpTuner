/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_15.c --poly-degree 15 \
 *     --fname ml2_raw_sin_15 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_15(double);
double ml2_raw_sin_15(double x){
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
    pm_13 = x2_ * -0x1.9ef0baaebb29bp-41;
    pa_13 = 0x1.60e57134b4731p-33 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = -0x1.ae634c189997ap-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71de37e2e4ac9p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a01a0199d6703p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.1111111109323p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.5555555555467p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fffffffffffffp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f97f5ed3790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f97f5ed3a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f97f5ed3b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f97f5ed3d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f97f5ee3640>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_15
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f97f5ee3640>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_15
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f97f5ee3640>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_15
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f97f5ee3640>
//Info: executing pass check_processor_support on fct ml2_raw_sin_15
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f97f5ee3640>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_15
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_15.c
//0.0	0.09817477042468102	2.5044510364992744e-17	inf
//0.09817477042468102	0.19634954084936204	5.275647267369683e-17	4.698960507864371e-16
//0.19634954084936204	0.29452431127404305	1.14742216519467e-16	5.200977542229702e-16
//0.29452431127404305	0.3926990816987241	1.2496560995796171e-16	4.204972449793152e-16
//0.3926990816987241	0.4908738521234051	1.2205107034280398e-16	3.22260810264148e-16
//0.4908738521234051	0.5890486225480861	2.25694308703448e-16	4.592940379571033e-16
//0.5890486225480861	0.6872233929727671	2.371130784215358e-16	4.265750418608392e-16
//0.6872233929727671	0.7853981633974482	2.252196937216221e-16	3.616933348845034e-16
//0.7853981633974482	0.8835729338221292	2.869850103173141e-16	3.997608187100696e-16
//0.8835729338221292	0.9817477042468102	2.958340036052923e-16	3.9004626343747084e-16
//0.9817477042468102	1.0799224746714913	3.5067999428450233e-16	4.265416485612693e-16
//1.0799224746714913	1.1780972450961722	3.682533355750685e-16	4.260422918306394e-16
//1.1780972450961722	1.2762720155208533	4.1789506799781417e-16	4.657154779689354e-16
//1.2762720155208533	1.3744467859455343	4.654824746179011e-16	5.038782569364862e-16
//1.3744467859455343	1.4726215563702154	5.066277518506685e-16	5.38063890669669e-16
//1.4726215563702154	1.5707963267948963	5.177955738176101e-16	5.463125835278753e-16
//spec: {
//spec:     "cname": "ml2_raw_sin_15",
//spec:     "delta": 5.177955738176101e-16,
//spec:     "domain": [
//spec:         0.0,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 3.22260810264148e-16,
//spec:     "operation": "sin"
//spec: }
