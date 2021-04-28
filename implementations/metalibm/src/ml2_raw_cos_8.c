/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_cos.py --output src/ml2_raw_cos_8.c --poly-degree 8 \
 *     --fname ml2_raw_cos_8 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_cos_8(double);
double ml2_raw_cos_8(double x){
    double x2_;
    double pm_6;
    double pa_6;
    double pm_4;
    double pa_4;
    double pm_2;
    double pa_2;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    pm_6 = x2_ * 0x1.7ecf83115059bp-16;
    pa_6 = -0x1.6ab312f17bf23p-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.55488c12b7f8ep-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.ffff4eb2b387p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffff911336cp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7ff657997760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7ff657997a30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7ff657997af0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7ff657997cd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff6579a3c70>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_cos_8
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff6579a3c70>
//Info: executing pass instantiate_prec on fct ml2_raw_cos_8
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff6579a3c70>
//Info: executing pass sub_expr_sharing on fct ml2_raw_cos_8
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff6579a3c70>
//Info: executing pass check_processor_support on fct ml2_raw_cos_8
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff6579a3c70>
//Info: executing pass debug_tag_node on fct ml2_raw_cos_8
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_cos_8.c
//-1.5707963267948963	-1.4726215563702154	1.9673505737330904e-08	inf
//-1.4726215563702154	-1.3744467859455343	2.77149414894641e-08	2.066138812843627e-07
//-1.3744467859455343	-1.2762720155208533	2.2231616779921644e-08	1.1395550832731586e-07
//-1.2762720155208533	-1.1780972450961722	7.292327536967051e-08	1.9055770206544506e-07
//-1.1780972450961722	-1.0799224746714913	9.250134366307312e-08	2.0661381306671264e-07
//-1.0799224746714913	-0.9817477042468102	9.230761709400083e-08	1.9581725941050787e-07
//-0.9817477042468102	-0.8835729338221292	6.337365919218652e-08	1.1406957289666035e-07
//-0.8835729338221292	-0.7853981633974482	8.440696744291981e-08	1.1936947814796906e-07
//-0.7853981633974482	-0.6872233929727671	1.4729277577939064e-07	1.9054435183301155e-07
//-0.6872233929727671	-0.5890486225480861	1.701226864080633e-07	2.0661381245521372e-07
//-0.5890486225480861	-0.4908738521234051	1.7009807595446936e-07	2.045752165056926e-07
//-0.4908738521234051	-0.3926990816987241	1.4368933270747106e-07	1.6292762009058706e-07
//-0.3926990816987241	-0.29452431127404305	7.416177750084633e-08	8.027212952677872e-08
//-0.29452431127404305	-0.19634954084936204	1.1351899904640945e-07	1.1574296771824675e-07
//-0.19634954084936204	-0.09817477042468102	1.8171106925831216e-07	1.8259029141942464e-07
//-0.09817477042468102	0.0	2.0661381233870328e-07	2.066138123389809e-07
//0.0	0.09817477042468102	2.0661381233870328e-07	2.066138123389809e-07
//0.09817477042468102	0.19634954084936204	1.8171106925831216e-07	1.8259029141942464e-07
//0.19634954084936204	0.29452431127404305	1.1351899904640945e-07	1.1574296771824675e-07
//0.29452431127404305	0.3926990816987241	7.416177750084633e-08	8.027212952677872e-08
//0.3926990816987241	0.4908738521234051	1.4368933270747106e-07	1.6292762009058706e-07
//0.4908738521234051	0.5890486225480861	1.7009807595446936e-07	2.045752165056926e-07
//0.5890486225480861	0.6872233929727671	1.701226864080633e-07	2.0661381245521372e-07
//0.6872233929727671	0.7853981633974482	1.4729277577939064e-07	1.9054435183301155e-07
//0.7853981633974482	0.8835729338221292	8.440696744291981e-08	1.1936947814796906e-07
//0.8835729338221292	0.9817477042468102	6.337365919218652e-08	1.1406957289666035e-07
//0.9817477042468102	1.0799224746714913	9.230761709400083e-08	1.9581725941050787e-07
//1.0799224746714913	1.1780972450961722	9.250134366307312e-08	2.0661381306671264e-07
//1.1780972450961722	1.2762720155208533	7.292327536967051e-08	1.9055770206544506e-07
//1.2762720155208533	1.3744467859455343	2.2231616779921644e-08	1.1395550832731586e-07
//1.3744467859455343	1.4726215563702154	2.77149414894641e-08	2.066138812843627e-07
//1.4726215563702154	1.5707963267948963	1.9673505737330904e-08	inf
//spec: {
//spec:     "cname": "ml2_raw_cos_8",
//spec:     "delta": 2.0661381233870328e-07,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 8.027212952677872e-08,
//spec:     "operation": "cos"
//spec: }
