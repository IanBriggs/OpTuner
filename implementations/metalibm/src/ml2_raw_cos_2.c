/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_cos.py --output src/ml2_raw_cos_2.c --poly-degree 2 \
 *     --fname ml2_raw_cos_2 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_cos_2(double);
double ml2_raw_cos_2(double x){
    double x2_;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    tmp = x2_ * -0x1.6d31b9a2c5bb5p-2;
    tmp1 = 0x1.c28a6aa3495b1p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f6b7b0297c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f6b7b029a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f6b7b029b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f6b7b029d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6b7b034460>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_cos_2
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6b7b034460>
//Info: executing pass instantiate_prec on fct ml2_raw_cos_2
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6b7b034460>
//Info: executing pass sub_expr_sharing on fct ml2_raw_cos_2
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6b7b034460>
//Info: executing pass check_processor_support on fct ml2_raw_cos_2
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6b7b034460>
//Info: executing pass debug_tag_node on fct ml2_raw_cos_2
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_cos_2.c
//-1.5707963267948963	-1.4726215563702154	0.008541404215535897	2953535294.0547776
//-1.4726215563702154	-1.3744467859455343	0.011151552572093652	0.08714194463149307
//-1.3744467859455343	-1.2762720155208533	0.011151371234336672	0.05716004319996332
//-1.2762720155208533	-1.1780972450961722	0.008765464790655972	0.030196098786751287
//-1.1780972450961722	-1.0799224746714913	0.007353796923718099	0.015600016608584582
//-1.0799224746714913	-0.9817477042468102	0.019342944054814484	0.034816379469581916
//-0.9817477042468102	-0.8835729338221292	0.03285634604706454	0.05179176209341629
//-0.8835729338221292	-0.7853981633974482	0.04713489382888848	0.06665880611383003
//-0.7853981633974482	-0.6872233929727671	0.06147831667471489	0.07953102885901862
//-0.6872233929727671	-0.5890486225480861	0.07525192619487521	0.09050472209860323
//-0.5890486225480861	-0.4908738521234051	0.08789272873175212	0.09966051651639832
//-0.4908738521234051	-0.3926990816987241	0.09891484729646602	0.10706465920680802
//-0.3926990816987241	-0.29452431127404305	0.10791420082988537	0.11277004093187708
//-0.29452431127404305	-0.19634954084936204	0.11457239572411929	0.11681700165505657
//-0.19634954084936204	-0.09817477042468102	0.11865979212701311	0.11923393611937774
//-0.09817477042468102	0.0	0.12003771549945869	0.1200377154994587
//0.0	0.09817477042468102	0.12003771549945869	0.1200377154994587
//0.09817477042468102	0.19634954084936204	0.11865979212701311	0.11923393611937774
//0.19634954084936204	0.29452431127404305	0.11457239572411929	0.11681700165505657
//0.29452431127404305	0.3926990816987241	0.10791420082988537	0.11277004093187708
//0.3926990816987241	0.4908738521234051	0.09891484729646602	0.10706465920680802
//0.4908738521234051	0.5890486225480861	0.08789272873175212	0.09966051651639832
//0.5890486225480861	0.6872233929727671	0.07525192619487521	0.09050472209860323
//0.6872233929727671	0.7853981633974482	0.06147831667471489	0.07953102885901862
//0.7853981633974482	0.8835729338221292	0.04713489382888848	0.06665880611383003
//0.8835729338221292	0.9817477042468102	0.03285634604706454	0.05179176209341629
//0.9817477042468102	1.0799224746714913	0.019342944054814484	0.034816379469581916
//1.0799224746714913	1.1780972450961722	0.007353796923718099	0.015600016608584582
//1.1780972450961722	1.2762720155208533	0.008765464790655972	0.030196098786751287
//1.2762720155208533	1.3744467859455343	0.011151371234336672	0.05716004319996332
//1.3744467859455343	1.4726215563702154	0.011151552572093652	0.08714194463149307
//1.4726215563702154	1.5707963267948963	0.008541404215535897	2953535294.0547776
//spec: {
//spec:     "cname": "ml2_raw_cos_2",
//spec:     "delta": 0.12003771549945869,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 0.015600016608584582,
//spec:     "operation": "cos"
//spec: }
