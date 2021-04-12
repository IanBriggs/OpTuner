/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_cos.py --output src/ml2_raw_cos_20.c --poly-degree 20 \
 *     --fname ml2_raw_cos_20 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_cos_20(double);
double ml2_raw_cos_20(double x){
    double x2_;
    double pm_18;
    double pa_18;
    double pm_16;
    double pa_16;
    double pm_14;
    double pa_14;
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
    double pm_0;
    double pa_0;
    
    x2_ = x * x;
    pm_18 = x2_ * -0x1.920edf56b3dbdp-58;
    pa_18 = -0x1.be686d602e7e3p-54 + pm_18;
    pm_16 = x2_ * pa_18;
    pa_16 = 0x1.ac449eb9d8531p-45 + pm_16;
    pm_14 = x2_ * pa_16;
    pa_14 = -0x1.93925e4c66cf2p-37 + pm_14;
    pm_12 = x2_ * pa_14;
    pa_12 = 0x1.1eed88cc26d8cp-29 + pm_12;
    pm_10 = x2_ * pa_12;
    pa_10 = -0x1.27e4fb6e9c97cp-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a01a01a00c12cp-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c16c16c16b71p-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.5555555555555p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1p-1 + pm_2;
    pm_0 = x2_ * pa_2;
    pa_0 = 0x1p0 + pm_0;
    return pa_0;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fd1d63787f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fd1d6378ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fd1d6378b80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fd1d6378d60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd1d6388e20>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_cos_20
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd1d6388e20>
//Info: executing pass instantiate_prec on fct ml2_raw_cos_20
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd1d6388e20>
//Info: executing pass sub_expr_sharing on fct ml2_raw_cos_20
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd1d6388e20>
//Info: executing pass check_processor_support on fct ml2_raw_cos_20
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd1d6388e20>
//Info: executing pass debug_tag_node on fct ml2_raw_cos_20
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_cos_20.c
//0.0	0.09817477042468102	1.1310678431281083e-16	1.136544852046217e-16
//0.09817477042468102	0.19634954084936204	6.278221540104763e-17	6.401521998729886e-17
//0.19634954084936204	0.29452431127404305	7.302885627630736e-17	7.632877743460263e-17
//0.29452431127404305	0.3926990816987241	8.45102718045377e-17	9.151587472817448e-17
//0.3926990816987241	0.4908738521234051	8.963512246038692e-17	1.0173589284774522e-16
//0.4908738521234051	0.5890486225480861	1.2500843597546905e-16	1.5062025834148438e-16
//0.5890486225480861	0.6872233929727671	1.3338440276701789e-16	1.7309523195583632e-16
//0.6872233929727671	0.7853981633974482	1.6950612496065798e-16	2.4095545330459425e-16
//0.7853981633974482	0.8835729338221292	1.794396744746418e-16	2.8518666609985208e-16
//0.8835729338221292	0.9817477042468102	1.8927677027194994e-16	3.451006162299998e-16
//0.9817477042468102	1.0799224746714913	3.086981453155302e-16	6.682722672840767e-16
//1.0799224746714913	1.1780972450961722	2.8759748401030737e-16	7.763055667254745e-16
//1.1780972450961722	1.2762720155208533	3.0686866217490277e-16	1.1167286092883934e-15
//1.2762720155208533	1.3744467859455343	3.2141820647556884e-16	1.8272125658079473e-15
//1.3744467859455343	1.4726215563702154	3.708999675136592e-16	4.977019604249561e-15
//1.4726215563702154	1.5707963267948963	4.2527593642724134e-16	inf
//spec: {
//spec:     "cname": "ml2_raw_cos_20",
//spec:     "delta": 4.2527593642724134e-16,
//spec:     "domain": [
//spec:         0.0,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 6.401521998729886e-17,
//spec:     "operation": "cos"
//spec: }
