/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_cos.py --output src/ml2_raw_cos_12.c --poly-degree 12 \
 *     --fname ml2_raw_cos_12 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_cos_12(double);
double ml2_raw_cos_12(double x){
    double x2_;
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
    pm_10 = x2_ * 0x1.0fa7a6852909bp-29;
    pa_10 = -0x1.276cf10362b33p-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a01644028b10dp-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c16b1b5593a6p-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.5555551473485p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.fffffffe5d0b6p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffffffff8aeap-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f9f641647c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f9f64164a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f9f64164b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f9f64164d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9f641742b0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_cos_12
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9f641742b0>
//Info: executing pass instantiate_prec on fct ml2_raw_cos_12
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9f641742b0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_cos_12
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9f641742b0>
//Info: executing pass check_processor_support on fct ml2_raw_cos_12
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f9f641742b0>
//Info: executing pass debug_tag_node on fct ml2_raw_cos_12
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_cos_12.c
//-1.5707963267948963	-1.4726215563702154	2.0625129470251985e-13	inf
//-1.4726215563702154	-1.3744467859455343	6.438922452403882e-13	3.3035549945707125e-12
//-1.3744467859455343	-1.2762720155208533	7.084046928695159e-13	3.330948752021992e-12
//-1.2762720155208533	-1.1780972450961722	1.0166471479315081e-12	2.6569415049473473e-12
//-1.1780972450961722	-1.0799224746714913	1.4738075848661557e-12	3.328558923550194e-12
//-1.0799224746714913	-0.9817477042468102	1.422538519604659e-12	3.017723144211206e-12
//-0.9817477042468102	-0.8835729338221292	1.4941586188872716e-12	2.355302781731212e-12
//-0.8835729338221292	-0.7853981633974482	2.3427501782093933e-12	3.3279947991926917e-12
//-0.7853981633974482	-0.6872233929727671	2.343181401585134e-12	3.3131363380784707e-12
//-0.6872233929727671	-0.5890486225480861	1.5270346431294969e-12	1.97543908560043e-12
//-0.5890486225480861	-0.4908738521234051	2.4100803444638595e-12	2.7327702241280608e-12
//-0.4908738521234051	-0.3926990816987241	3.0520330637858167e-12	3.327863458012533e-12
//-0.3926990816987241	-0.29452431127404305	3.0340829424307005e-12	3.2840677546450247e-12
//-0.29452431127404305	-0.19634954084936204	1.9330691018018803e-12	2.0200518703929226e-12
//-0.19634954084936204	-0.09817477042468102	2.4527510160815836e-12	2.4646197585962143e-12
//-0.09817477042468102	0.0	3.327839821851444e-12	3.327840099461444e-12
//0.0	0.09817477042468102	3.327839821851444e-12	3.327840099461444e-12
//0.09817477042468102	0.19634954084936204	2.4527510160815836e-12	2.4646197585962143e-12
//0.19634954084936204	0.29452431127404305	1.9330691018018803e-12	2.0200518703929226e-12
//0.29452431127404305	0.3926990816987241	3.0340829424307005e-12	3.2840677546450247e-12
//0.3926990816987241	0.4908738521234051	3.0520330637858167e-12	3.327863458012533e-12
//0.4908738521234051	0.5890486225480861	2.4100803444638595e-12	2.7327702241280608e-12
//0.5890486225480861	0.6872233929727671	1.5270346431294969e-12	1.97543908560043e-12
//0.6872233929727671	0.7853981633974482	2.343181401585134e-12	3.3131363380784707e-12
//0.7853981633974482	0.8835729338221292	2.3427501782093933e-12	3.3279947991926917e-12
//0.8835729338221292	0.9817477042468102	1.4941586188872716e-12	2.355302781731212e-12
//0.9817477042468102	1.0799224746714913	1.422538519604659e-12	3.017723144211206e-12
//1.0799224746714913	1.1780972450961722	1.4738075848661557e-12	3.328558923550194e-12
//1.1780972450961722	1.2762720155208533	1.0166471479315081e-12	2.6569415049473473e-12
//1.2762720155208533	1.3744467859455343	7.084046928695159e-13	3.330948752021992e-12
//1.3744467859455343	1.4726215563702154	6.438922452403882e-13	3.3035549945707125e-12
//1.4726215563702154	1.5707963267948963	2.0625129470251985e-13	inf
//spec: {
//spec:     "cname": "ml2_raw_cos_12",
//spec:     "delta": 3.327839821851444e-12,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 1.97543908560043e-12,
//spec:     "operation": "cos"
//spec: }
