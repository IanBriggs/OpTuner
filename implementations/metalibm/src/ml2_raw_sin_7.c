/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_7.c --poly-degree 7 \
 *     --fname ml2_raw_sin_7 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_7(double);
double ml2_raw_sin_7(double x){
    double x2_;
    double pm_5;
    double pa_5;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_5 = x2_ * -0x1.83b070a8638c9p-13;
    pa_5 = 0x1.105cd0d26c46ap-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.554f7a550c797p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffe0532d068p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f61b3e0a7c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f61b3e0aa90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f61b3e0ab50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f61b3e0ad30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f61b3e14af0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_7
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f61b3e14af0>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_7
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f61b3e14af0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_7
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f61b3e14af0>
//Info: executing pass check_processor_support on fct ml2_raw_sin_7
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f61b3e14af0>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_7
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_7.c
//-1.5707963267948963	-1.4726215563702154	9.304277042551725e-07	9.34929646069763e-07
//-1.4726215563702154	-1.3744467859455343	9.385644391693707e-07	9.439913769041829e-07
//-1.3744467859455343	-1.2762720155208533	4.222387859672457e-07	4.3591556587964536e-07
//-1.2762720155208533	-1.1780972450961722	8.377614014071944e-07	9.067864066063697e-07
//-1.1780972450961722	-1.0799224746714913	8.596621563864909e-07	9.439913817173937e-07
//-1.0799224746714913	-0.9817477042468102	7.543292114366685e-07	8.553248934523979e-07
//-0.9817477042468102	-0.8835729338221292	3.610309613430558e-07	4.3420824528256967e-07
//-0.8835729338221292	-0.7853981633974482	4.3378054892288526e-07	6.134583353878672e-07
//-0.7853981633974482	-0.6872233929727671	5.69382410455721e-07	8.975227586316649e-07
//-0.6872233929727671	-0.5890486225480861	5.71937248132689e-07	9.439913950417884e-07
//-0.5890486225480861	-0.4908738521234051	5.126938419018734e-07	9.228245349733479e-07
//-0.4908738521234051	-0.3926990816987241	3.3370266784046004e-07	7.079019471128642e-07
//-0.3926990816987241	-0.29452431127404305	1.2387426655318353e-07	3.2369905802768373e-07
//-0.29452431127404305	-0.19634954084936204	1.0692824028115592e-07	5.480960776358014e-07
//-0.19634954084936204	-0.09817477042468102	1.0881514534394339e-07	8.396790766634415e-07
//-0.09817477042468102	0.0	8.230294186937835e-08	inf
//0.0	0.09817477042468102	8.230294186937835e-08	inf
//0.09817477042468102	0.19634954084936204	1.0881514534394339e-07	8.396790766634415e-07
//0.19634954084936204	0.29452431127404305	1.0692824028115592e-07	5.480960776358014e-07
//0.29452431127404305	0.3926990816987241	1.2387426655318353e-07	3.2369905802768373e-07
//0.3926990816987241	0.4908738521234051	3.3370266784046004e-07	7.079019471128642e-07
//0.4908738521234051	0.5890486225480861	5.126938419018734e-07	9.228245349733479e-07
//0.5890486225480861	0.6872233929727671	5.71937248132689e-07	9.439913950417884e-07
//0.6872233929727671	0.7853981633974482	5.69382410455721e-07	8.975227586316649e-07
//0.7853981633974482	0.8835729338221292	4.3378054892288526e-07	6.134583353878672e-07
//0.8835729338221292	0.9817477042468102	3.610309613430558e-07	4.3420824528256967e-07
//0.9817477042468102	1.0799224746714913	7.543292114366685e-07	8.553248934523979e-07
//1.0799224746714913	1.1780972450961722	8.596621563864909e-07	9.439913817173937e-07
//1.1780972450961722	1.2762720155208533	8.377614014071944e-07	9.067864066063697e-07
//1.2762720155208533	1.3744467859455343	4.222387859672457e-07	4.3591556587964536e-07
//1.3744467859455343	1.4726215563702154	9.385644391693707e-07	9.439913769041829e-07
//1.4726215563702154	1.5707963267948963	9.304277042551725e-07	9.34929646069763e-07
//spec: {
//spec:     "cname": "ml2_raw_sin_7",
//spec:     "delta": 9.385644391693707e-07,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 3.2369905802768373e-07,
//spec:     "operation": "sin"
//spec: }
