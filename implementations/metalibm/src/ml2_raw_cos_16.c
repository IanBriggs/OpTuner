/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_cos.py --output src/ml2_raw_cos_16.c --poly-degree 16 \
 *     --fname ml2_raw_cos_16 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_cos_16(double);
double ml2_raw_cos_16(double x){
    double x2_;
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
    pm_14 = x2_ * 0x1.09cb54dfb6885p-44;
    pa_14 = -0x1.9717cb319e6d6p-37 + pm_14;
    pm_12 = x2_ * pa_14;
    pa_12 = 0x1.1ef925d11272cp-29 + pm_12;
    pm_10 = x2_ * pa_12;
    pa_10 = -0x1.27e520ed2daf6p-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a01a021bd8b66p-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c16c16cdbd04p-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.555555555651bp-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.000000000000ap-1 + pm_2;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f0c3bd947f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f0c3bd94ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f0c3bd94b80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f0c3bd94d60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0c3bda4880>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_cos_16
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0c3bda4880>
//Info: executing pass instantiate_prec on fct ml2_raw_cos_16
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0c3bda4880>
//Info: executing pass sub_expr_sharing on fct ml2_raw_cos_16
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0c3bda4880>
//Info: executing pass check_processor_support on fct ml2_raw_cos_16
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0c3bda4880>
//Info: executing pass debug_tag_node on fct ml2_raw_cos_16
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_cos_16.c
//0.0	0.09817477042468102	1.213575283955423e-16	1.219451511097559e-16
//0.09817477042468102	0.19634954084936204	7.55954262955859e-17	7.69931315785174e-17
//0.19634954084936204	0.29452431127404305	9.571022366839768e-17	1.0003076314530128e-16
//0.29452431127404305	0.3926990816987241	1.4413988760789986e-16	1.560586079359156e-16
//0.3926990816987241	0.4908738521234051	1.5005190320421433e-16	1.6753028539074783e-16
//0.4908738521234051	0.5890486225480861	2.366336813709177e-16	2.848713248524557e-16
//0.5890486225480861	0.6872233929727671	3.2203232490442477e-16	4.1540305546826443e-16
//0.6872233929727671	0.7853981633974482	3.5627151737531643e-16	4.825628558714349e-16
//0.7853981633974482	0.8835729338221292	5.869462064863557e-16	9.275429806830864e-16
//0.8835729338221292	0.9817477042468102	7.307236327254553e-16	1.2779774507509435e-15
//0.9817477042468102	1.0799224746714913	7.964710856885559e-16	1.54618269028478e-15
//1.0799224746714913	1.1780972450961722	1.5457971217241901e-15	4.064200756123153e-15
//1.1780972450961722	1.2762720155208533	1.6036917077642433e-15	4.7192479807206425e-15
//1.2762720155208533	1.3744467859455343	2.589781956288324e-15	1.3455083762271199e-14
//1.3744467859455343	1.4726215563702154	2.8301121832423755e-15	1.9857593393334022e-14
//1.4726215563702154	1.5707963267948963	4.133031712808647e-15	inf
//spec: {
//spec:     "cname": "ml2_raw_cos_16",
//spec:     "delta": 4.133031712808647e-15,
//spec:     "domain": [
//spec:         0.0,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 7.69931315785174e-17,
//spec:     "operation": "cos"
//spec: }
