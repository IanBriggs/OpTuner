/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_19.c --poly-degree 19 \
 *     --fname ml2_raw_sin_19 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_19(double);
double ml2_raw_sin_19(double x){
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
    double x3_;
    double pm_1;
    double pa_1;
    
    x2_ = x * x;
    pm_17 = x2_ * -0x1.79788be11bcecp-58;
    pa_17 = 0x1.902dd55f5409p-49 + pm_17;
    pm_15 = x2_ * pa_17;
    pa_15 = -0x1.ae672c08db96p-41 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.612421a64f915p-33 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = -0x1.ae6455b8d9fa2p-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71de3a53faf73p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a01a01a016efcp-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.11111111110dcp-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.5555555555555p-3 + pm_3;
    x3_ = x * x2_;
    pm_1 = x3_ * pa_3;
    pa_1 = x + pm_1;
    return pa_1;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fcbdb93d7f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fcbdb93dac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fcbdb93db80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fcbdb93dd60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcbdb94dc40>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_19
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcbdb94dc40>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_19
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcbdb94dc40>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_19
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcbdb94dc40>
//Info: executing pass check_processor_support on fct ml2_raw_sin_19
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcbdb94dc40>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_19
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_19.c
//0.0	0.09817477042468102	2.482331430763855e-17	inf
//0.09817477042468102	0.19634954084936204	3.8961717579354225e-17	3.9918646892823403e-16
//0.19634954084936204	0.29452431127404305	7.254880080216117e-17	3.747477682543875e-16
//0.29452431127404305	0.3926990816987241	7.865397431073056e-17	2.7405390128889585e-16
//0.3926990816987241	0.4908738521234051	8.52505828630541e-17	2.26096502203272e-16
//0.4908738521234051	0.5890486225480861	1.4717609381811915e-16	3.179649849972797e-16
//0.5890486225480861	0.6872233929727671	1.525729432892032e-16	2.8072714942912764e-16
//0.6872233929727671	0.7853981633974482	1.619254050244981e-16	2.619219623351104e-16
//0.7853981633974482	0.8835729338221292	1.7447262349097488e-16	2.542127226120777e-16
//0.8835729338221292	0.9817477042468102	1.8248526101199181e-16	2.442706450784345e-16
//0.9817477042468102	1.0799224746714913	2.4861051587591153e-16	3.1080698901830763e-16
//1.0799224746714913	1.1780972450961722	2.3664460949742425e-16	2.803116097115042e-16
//1.1780972450961722	1.2762720155208533	3.159484314095902e-16	3.5918226812236943e-16
//1.2762720155208533	1.3744467859455343	3.2440523840874873e-16	3.5816709895778654e-16
//1.3744467859455343	1.4726215563702154	3.6187365360904415e-16	3.9238352858977943e-16
//1.4726215563702154	1.5707963267948963	3.7218354869838007e-16	4.0064514562551266e-16
//spec: {
//spec:     "cname": "ml2_raw_sin_19",
//spec:     "delta": 3.7218354869838007e-16,
//spec:     "domain": [
//spec:         0.0,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 2.26096502203272e-16,
//spec:     "operation": "sin"
//spec: }
