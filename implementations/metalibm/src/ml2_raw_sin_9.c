/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_9.c --poly-degree 9 \
 *     --fname ml2_raw_sin_9 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_9(double);
double ml2_raw_sin_9(double x){
    double x2_;
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
    pm_7 = x2_ * 0x1.5d32276c28e11p-19;
    pa_7 = -0x1.9f63d023b426ap-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.110e78b50ba2bp-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.555547ddc3a92p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffd20ece2p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fb0d959b760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fb0d959ba30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fb0d959baf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fb0d959bcd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb0d95a5d60>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_9
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb0d95a5d60>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_9
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb0d95a5d60>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_9
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb0d95a5d60>
//Info: executing pass check_processor_support on fct ml2_raw_sin_9
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fb0d95a5d60>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_9
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_9.c
//-1.5707963267948963	-1.4726215563702154	5.335369514803837e-09	5.348372537658617e-09
//-1.4726215563702154	-1.3744467859455343	4.458845418541985e-09	4.480419893571768e-09
//-1.3744467859455343	-1.2762720155208533	5.141300747986875e-09	5.348372495188449e-09
//-1.2762720155208533	-1.1780972450961722	5.053632764524567e-09	5.281032268771818e-09
//-1.1780972450961722	-1.0799224746714913	2.24536080233473e-09	2.5459878377713497e-09
//-1.0799224746714913	-0.9817477042468102	4.3052721309357586e-09	5.17790677741416e-09
//-0.9817477042468102	-0.8835729338221292	4.367717773257521e-09	5.348372381517227e-09
//-0.8835729338221292	-0.7853981633974482	3.604041947924967e-09	4.662345708626616e-09
//-0.7853981633974482	-0.6872233929727671	1.2475449887570272e-09	1.8507400538045498e-09
//-0.6872233929727671	-0.5890486225480861	2.527292069672184e-09	4.549005549359167e-09
//-0.5890486225480861	-0.4908738521234051	2.6777961920208827e-09	5.3483724573182155e-09
//-0.4908738521234051	-0.3926990816987241	2.5110822851440425e-09	5.326897940290948e-09
//-0.3926990816987241	-0.29452431127404305	1.5422764691267049e-09	4.030162700778303e-09
//-0.29452431127404305	-0.19634954084936204	3.7714130199266647e-10	1.933162540737858e-09
//-0.19634954084936204	-0.09817477042468102	4.897346713196084e-10	4.4168196822475935e-09
//-0.09817477042468102	0.0	4.329240148671733e-10	inf
//0.0	0.09817477042468102	4.329240148671733e-10	inf
//0.09817477042468102	0.19634954084936204	4.897346713196084e-10	4.4168196822475935e-09
//0.19634954084936204	0.29452431127404305	3.7714130199266647e-10	1.933162540737858e-09
//0.29452431127404305	0.3926990816987241	1.5422764691267049e-09	4.030162700778303e-09
//0.3926990816987241	0.4908738521234051	2.5110822851440425e-09	5.326897940290948e-09
//0.4908738521234051	0.5890486225480861	2.6777961920208827e-09	5.3483724573182155e-09
//0.5890486225480861	0.6872233929727671	2.527292069672184e-09	4.549005549359167e-09
//0.6872233929727671	0.7853981633974482	1.2475449887570272e-09	1.8507400538045498e-09
//0.7853981633974482	0.8835729338221292	3.604041947924967e-09	4.662345708626616e-09
//0.8835729338221292	0.9817477042468102	4.367717773257521e-09	5.348372381517227e-09
//0.9817477042468102	1.0799224746714913	4.3052721309357586e-09	5.17790677741416e-09
//1.0799224746714913	1.1780972450961722	2.24536080233473e-09	2.5459878377713497e-09
//1.1780972450961722	1.2762720155208533	5.053632764524567e-09	5.281032268771818e-09
//1.2762720155208533	1.3744467859455343	5.141300747986875e-09	5.348372495188449e-09
//1.3744467859455343	1.4726215563702154	4.458845418541985e-09	4.480419893571768e-09
//1.4726215563702154	1.5707963267948963	5.335369514803837e-09	5.348372537658617e-09
//spec: {
//spec:     "cname": "ml2_raw_sin_9",
//spec:     "delta": 5.335369514803837e-09,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 1.8507400538045498e-09,
//spec:     "operation": "sin"
//spec: }
