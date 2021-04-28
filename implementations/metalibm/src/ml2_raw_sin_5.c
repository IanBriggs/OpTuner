/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_5.c --poly-degree 5 \
 *     --fname ml2_raw_sin_5 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_5(double);
double ml2_raw_sin_5(double x){
    double x2_;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_3 = x2_ * 0x1.f2345aea90749p-8;
    pa_3 = -0x1.53e1f45b9de87p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fff1c3cdae85dp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f118de187c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f118de18a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f118de18b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f118de18d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f118de22820>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_5
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f118de22820>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_5
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f118de22820>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_5
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f118de22820>
//Info: executing pass check_processor_support on fct ml2_raw_sin_5
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f118de22820>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_5
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_5.c
//-1.5707963267948963	-1.4726215563702154	0.00010581781140477077	0.00010581781140479837
//-1.4726215563702154	-1.3744467859455343	0.00010674356520910279	0.00010860515885101862
//-1.3744467859455343	-1.2762720155208533	0.00010618486255762285	0.00010826514699934474
//-1.2762720155208533	-1.1780972450961722	7.251228257952721e-05	7.577513442786527e-05
//-1.1780972450961722	-1.0799224746714913	3.5077760346257184e-05	3.97742539660684e-05
//-1.0799224746714913	-0.9817477042468102	6.875150929398416e-05	8.268673716602092e-05
//-0.9817477042468102	-0.8835729338221292	8.133561968637605e-05	0.00010521930115247145
//-0.8835729338221292	-0.7853981633974482	8.152085534859373e-05	0.00010860496381218968
//-0.7853981633974482	-0.6872233929727671	7.558421261746292e-05	0.00010689221858494049
//-0.6872233929727671	-0.5890486225480861	5.743411119643921e-05	9.053392056661371e-05
//-0.5890486225480861	-0.4908738521234051	3.3797521800043314e-05	6.083393204200032e-05
//-0.4908738521234051	-0.3926990816987241	1.0986309070358073e-05	2.330586576468952e-05
//-0.3926990816987241	-0.29452431127404305	1.5472473865890426e-05	5.3301035425745965e-05
//-0.29452431127404305	-0.19634954084936204	1.6848616340331686e-05	8.290377377104099e-05
//-0.19634954084936204	-0.09817477042468102	1.61737239213105e-05	0.00010200980054590115
//-0.09817477042468102	0.0	9.99870893507834e-06	inf
//0.0	0.09817477042468102	9.99870893507834e-06	inf
//0.09817477042468102	0.19634954084936204	1.61737239213105e-05	0.00010200980054590115
//0.19634954084936204	0.29452431127404305	1.6848616340331686e-05	8.290377377104099e-05
//0.29452431127404305	0.3926990816987241	1.5472473865890426e-05	5.3301035425745965e-05
//0.3926990816987241	0.4908738521234051	1.0986309070358073e-05	2.330586576468952e-05
//0.4908738521234051	0.5890486225480861	3.3797521800043314e-05	6.083393204200032e-05
//0.5890486225480861	0.6872233929727671	5.743411119643921e-05	9.053392056661371e-05
//0.6872233929727671	0.7853981633974482	7.558421261746292e-05	0.00010689221858494049
//0.7853981633974482	0.8835729338221292	8.152085534859373e-05	0.00010860496381218968
//0.8835729338221292	0.9817477042468102	8.133561968637605e-05	0.00010521930115247145
//0.9817477042468102	1.0799224746714913	6.875150929398416e-05	8.268673716602092e-05
//1.0799224746714913	1.1780972450961722	3.5077760346257184e-05	3.97742539660684e-05
//1.1780972450961722	1.2762720155208533	7.251228257952721e-05	7.577513442786527e-05
//1.2762720155208533	1.3744467859455343	0.00010618486255762285	0.00010826514699934474
//1.3744467859455343	1.4726215563702154	0.00010674356520910279	0.00010860515885101862
//1.4726215563702154	1.5707963267948963	0.00010581781140477077	0.00010581781140479837
//spec: {
//spec:     "cname": "ml2_raw_sin_5",
//spec:     "delta": 0.00010674356520910279,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 2.330586576468952e-05,
//spec:     "operation": "sin"
//spec: }
