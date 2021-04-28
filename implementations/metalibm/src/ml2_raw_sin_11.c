/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_11.c --poly-degree 11 \
 *     --fname ml2_raw_sin_11 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_11(double);
double ml2_raw_sin_11(double x){
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
    pm_9 = x2_ * -0x1.9a07a3f744af2p-26;
    pa_9 = 0x1.716b5b78489d6p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a017a6b7e7556p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.11110b6d61c18p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.55555541551adp-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffffd121p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f4aa4fe7760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f4aa4fe7a30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f4aa4fe7af0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f4aa4fe7cd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4aa4ff6070>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_11
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4aa4ff6070>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_11
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4aa4ff6070>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_11
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4aa4ff6070>
//Info: executing pass check_processor_support on fct ml2_raw_sin_11
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f4aa4ff6070>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_11
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_11.c
//-1.5707963267948963	-1.4726215563702154	2.12894613609284e-11	2.1314912692089576e-11
//-1.4726215563702154	-1.3744467859455343	2.090332172128969e-11	2.1312865424696678e-11
//-1.3744467859455343	-1.2762720155208533	2.0903305306472693e-11	2.1314870258595832e-11
//-1.2762720155208533	-1.1780972450961722	1.7048689479819528e-11	1.8453385721958877e-11
//-1.1780972450961722	-1.0799224746714913	1.9309184678283317e-11	2.1314792479616195e-11
//-1.0799224746714913	-0.9817477042468102	1.598552489131428e-11	1.8125824870864857e-11
//-0.9817477042468102	-0.8835729338221292	1.2811940437074664e-11	1.657409252338236e-11
//-0.8835729338221292	-0.7853981633974482	1.5487348233901277e-11	2.1314766996431427e-11
//-0.7853981633974482	-0.6872233929727671	1.4800772935389692e-11	2.0931486735715282e-11
//-0.6872233929727671	-0.5890486225480861	7.068528251493216e-12	1.1142226654514832e-11
//-0.5890486225480861	-0.4908738521234051	8.59538440142928e-12	1.8233870652591177e-11
//-0.4908738521234051	-0.3926990816987241	9.038799408705448e-12	2.131473937063032e-11
//-0.3926990816987241	-0.29452431127404305	7.97187235356525e-12	2.08315748116168e-11
//-0.29452431127404305	-0.19634954084936204	3.5636665327712915e-12	1.2276578979880397e-11
//-0.19634954084936204	-0.09817477042468102	1.6178707194161216e-12	1.597012648907423e-11
//-0.09817477042468102	0.0	1.5653263911061402e-12	inf
//0.0	0.09817477042468102	1.5653263911061402e-12	inf
//0.09817477042468102	0.19634954084936204	1.6178707194161216e-12	1.597012648907423e-11
//0.19634954084936204	0.29452431127404305	3.5636665327712915e-12	1.2276578979880397e-11
//0.29452431127404305	0.3926990816987241	7.97187235356525e-12	2.08315748116168e-11
//0.3926990816987241	0.4908738521234051	9.038799408705448e-12	2.131473937063032e-11
//0.4908738521234051	0.5890486225480861	8.59538440142928e-12	1.8233870652591177e-11
//0.5890486225480861	0.6872233929727671	7.068528251493216e-12	1.1142226654514832e-11
//0.6872233929727671	0.7853981633974482	1.4800772935389692e-11	2.0931486735715282e-11
//0.7853981633974482	0.8835729338221292	1.5487348233901277e-11	2.1314766996431427e-11
//0.8835729338221292	0.9817477042468102	1.2811940437074664e-11	1.657409252338236e-11
//0.9817477042468102	1.0799224746714913	1.598552489131428e-11	1.8125824870864857e-11
//1.0799224746714913	1.1780972450961722	1.9309184678283317e-11	2.1314792479616195e-11
//1.1780972450961722	1.2762720155208533	1.7048689479819528e-11	1.8453385721958877e-11
//1.2762720155208533	1.3744467859455343	2.0903305306472693e-11	2.1314870258595832e-11
//1.3744467859455343	1.4726215563702154	2.090332172128969e-11	2.1312865424696678e-11
//1.4726215563702154	1.5707963267948963	2.12894613609284e-11	2.1314912692089576e-11
//spec: {
//spec:     "cname": "ml2_raw_sin_11",
//spec:     "delta": 2.12894613609284e-11,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 1.1142226654514832e-11,
//spec:     "operation": "sin"
//spec: }
