/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_cos.py --output src/ml2_raw_cos_14.c --poly-degree 14 \
 *     --fname ml2_raw_cos_14 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_cos_14(double);
double ml2_raw_cos_14(double x){
    double x2_;
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
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    pm_12 = x2_ * -0x1.817f4865e641bp-37;
    pa_12 = 0x1.1e9bf2b6e06fep-29 + pm_12;
    pm_10 = x2_ * pa_12;
    pa_10 = -0x1.27e37346ec206p-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a019f947b2b63p-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c16c152c9204p-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.5555555507db9p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.fffffffffe8a7p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffffffffffb3p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f09113787c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f0911378a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f0911378b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f0911378d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0911388580>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_cos_14
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0911388580>
//Info: executing pass instantiate_prec on fct ml2_raw_cos_14
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0911388580>
//Info: executing pass sub_expr_sharing on fct ml2_raw_cos_14
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0911388580>
//Info: executing pass check_processor_support on fct ml2_raw_cos_14
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0911388580>
//Info: executing pass debug_tag_node on fct ml2_raw_cos_14
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_cos_14.c
//-1.5707963267948963	-1.4726215563702154	2.9862976338648935e-15	inf
//-1.4726215563702154	-1.3744467859455343	1.9669655801591378e-15	2.1261808563331437e-14
//-1.3744467859455343	-1.2762720155208533	3.204881051063373e-15	1.1760147607507023e-14
//-1.2762720155208533	-1.1780972450961722	3.3751737715234045e-15	1.1098572497269583e-14
//-1.1780972450961722	-1.0799224746714913	2.975248907795721e-15	6.477709820411675e-15
//-1.0799224746714913	-0.9817477042468102	5.331034370145045e-15	9.872009366473004e-15
//-0.9817477042468102	-0.8835729338221292	5.202057674590871e-15	9.367880513574419e-15
//-0.8835729338221292	-0.7853981633974482	4.0151471154075156e-15	5.709683608294087e-15
//-0.7853981633974482	-0.6872233929727671	6.9296583418711664e-15	9.006016600291005e-15
//-0.6872233929727671	-0.5890486225480861	6.894529220707146e-15	8.918323332942371e-15
//-0.5890486225480861	-0.4908738521234051	4.04888656142694e-15	4.8698288791026335e-15
//-0.4908738521234051	-0.3926990816987241	7.60342936442837e-15	8.234607808367169e-15
//-0.3926990816987241	-0.29452431127404305	8.15019983336485e-15	8.689605881906879e-15
//-0.29452431127404305	-0.19634954084936204	7.088101824042423e-15	7.407060615767986e-15
//-0.19634954084936204	-0.09817477042468102	5.613080629708482e-15	5.641169128838256e-15
//-0.09817477042468102	0.0	8.606045129613705e-15	8.606322739613706e-15
//0.0	0.09817477042468102	8.606045129613705e-15	8.606322739613706e-15
//0.09817477042468102	0.19634954084936204	5.613080629708482e-15	5.641169128838256e-15
//0.19634954084936204	0.29452431127404305	7.088101824042423e-15	7.407060615767986e-15
//0.29452431127404305	0.3926990816987241	8.15019983336485e-15	8.689605881906879e-15
//0.3926990816987241	0.4908738521234051	7.60342936442837e-15	8.234607808367169e-15
//0.4908738521234051	0.5890486225480861	4.04888656142694e-15	4.8698288791026335e-15
//0.5890486225480861	0.6872233929727671	6.894529220707146e-15	8.918323332942371e-15
//0.6872233929727671	0.7853981633974482	6.9296583418711664e-15	9.006016600291005e-15
//0.7853981633974482	0.8835729338221292	4.0151471154075156e-15	5.709683608294087e-15
//0.8835729338221292	0.9817477042468102	5.202057674590871e-15	9.367880513574419e-15
//0.9817477042468102	1.0799224746714913	5.331034370145045e-15	9.872009366473004e-15
//1.0799224746714913	1.1780972450961722	2.975248907795721e-15	6.477709820411675e-15
//1.1780972450961722	1.2762720155208533	3.3751737715234045e-15	1.1098572497269583e-14
//1.2762720155208533	1.3744467859455343	3.204881051063373e-15	1.1760147607507023e-14
//1.3744467859455343	1.4726215563702154	1.9669655801591378e-15	2.1261808563331437e-14
//1.4726215563702154	1.5707963267948963	2.9862976338648935e-15	inf
//spec: {
//spec:     "cname": "ml2_raw_cos_14",
//spec:     "delta": 8.606045129613705e-15,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 4.8698288791026335e-15,
//spec:     "operation": "cos"
//spec: }
