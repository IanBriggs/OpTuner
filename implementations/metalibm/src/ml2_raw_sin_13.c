/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_13.c --poly-degree 13 \
 *     --fname ml2_raw_sin_13 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_13(double);
double ml2_raw_sin_13(double x){
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
    pm_11 = x2_ * 0x1.52a851954275cp-33;
    pa_11 = -0x1.ae00bdd2a86a8p-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71dce463cf737p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a019fce360596p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.11111109020a6p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.5555555540916p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffffffdc9p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f9a62a73760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f9a62a73a30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f9a62a73af0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f9a62a73cd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9a62a82340>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_13
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9a62a82340>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_13
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9a62a82340>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_13
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9a62a82340>
//Info: executing pass check_processor_support on fct ml2_raw_sin_13
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9a62a82340>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_13
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_13.c
//-1.5707963267948963	-1.4726215563702154	6.333649265536948e-14	6.34058182562319e-14
//-1.4726215563702154	-1.3744467859455343	6.26958176827754e-14	6.339759598538375e-14
//-1.3744467859455343	-1.2762720155208533	5.3618016346539326e-14	5.604984458223834e-14
//-1.2762720155208533	-1.1780972450961722	5.999998769053763e-14	6.336445722117876e-14
//-1.1780972450961722	-1.0799224746714913	3.5314730663610534e-14	3.824855474036983e-14
//-1.0799224746714913	-0.9817477042468102	5.3304883656358314e-14	6.331618337551924e-14
//-0.9817477042468102	-0.8835729338221292	5.15953017131501e-14	6.207793273827482e-14
//-0.8835729338221292	-0.7853981633974482	2.939373214003227e-14	4.157649241551366e-14
//-0.7853981633974482	-0.6872233929727671	4.100633404733199e-14	6.326743270942974e-14
//-0.6872233929727671	-0.5890486225480861	3.985120359494772e-14	6.28580304214212e-14
//-0.5890486225480861	-0.4908738521234051	1.745926951733523e-14	3.1478909892760705e-14
//-0.4908738521234051	-0.3926990816987241	2.3180948092459432e-14	6.057806253025565e-14
//-0.3926990816987241	-0.29452431127404305	2.3183240743925024e-14	6.32801714545481e-14
//-0.29452431127404305	-0.19634954084936204	1.5369336870265338e-14	5.3070562346516134e-14
//-0.19634954084936204	-0.09817477042468102	4.116567359622243e-15	4.199291296772587e-14
//-0.09817477042468102	0.0	4.096287188923268e-15	inf
//0.0	0.09817477042468102	4.096287188923268e-15	inf
//0.09817477042468102	0.19634954084936204	4.116567359622243e-15	4.199291296772587e-14
//0.19634954084936204	0.29452431127404305	1.5369336870265338e-14	5.3070562346516134e-14
//0.29452431127404305	0.3926990816987241	2.3183240743925024e-14	6.32801714545481e-14
//0.3926990816987241	0.4908738521234051	2.3180948092459432e-14	6.057806253025565e-14
//0.4908738521234051	0.5890486225480861	1.745926951733523e-14	3.1478909892760705e-14
//0.5890486225480861	0.6872233929727671	3.985120359494772e-14	6.28580304214212e-14
//0.6872233929727671	0.7853981633974482	4.100633404733199e-14	6.326743270942974e-14
//0.7853981633974482	0.8835729338221292	2.939373214003227e-14	4.157649241551366e-14
//0.8835729338221292	0.9817477042468102	5.15953017131501e-14	6.207793273827482e-14
//0.9817477042468102	1.0799224746714913	5.3304883656358314e-14	6.331618337551924e-14
//1.0799224746714913	1.1780972450961722	3.5314730663610534e-14	3.824855474036983e-14
//1.1780972450961722	1.2762720155208533	5.999998769053763e-14	6.336445722117876e-14
//1.2762720155208533	1.3744467859455343	5.3618016346539326e-14	5.604984458223834e-14
//1.3744467859455343	1.4726215563702154	6.26958176827754e-14	6.339759598538375e-14
//1.4726215563702154	1.5707963267948963	6.333649265536948e-14	6.34058182562319e-14
//spec: {
//spec:     "cname": "ml2_raw_sin_13",
//spec:     "delta": 6.333649265536948e-14,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 3.1478909892760705e-14,
//spec:     "operation": "sin"
//spec: }
