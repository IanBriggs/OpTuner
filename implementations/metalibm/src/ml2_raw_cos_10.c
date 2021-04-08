/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_cos.py --output src/ml2_raw_cos_10.c --poly-degree 10 \
 *     --fname ml2_raw_cos_10 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_cos_10(double);
double ml2_raw_cos_10(double x){
    double x2_;
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
    pm_8 = x2_ * -0x1.14f62e6f3d846p-22;
    pa_8 = 0x1.9f1febd0072b1p-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c109b09ec8dap-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.555530e73521dp-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.fffffeb2ab326p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffffff79f543p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fc5c1c54790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fc5c1c54a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fc5c1c54b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fc5c1c54d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc5c1c5ff70>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_cos_10
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc5c1c5ff70>
//Info: executing pass instantiate_prec on fct ml2_raw_cos_10
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc5c1c5ff70>
//Info: executing pass sub_expr_sharing on fct ml2_raw_cos_10
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc5c1c5ff70>
//Info: executing pass check_processor_support on fct ml2_raw_cos_10
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc5c1c5ff70>
//Info: executing pass debug_tag_node on fct ml2_raw_cos_10
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_cos_10.c
//0.0	0.09817477042468102	9.752835779378886e-10	9.752835782154984e-10
//0.09817477042468102	0.19634954084936204	7.944994759173166e-10	7.983437200636863e-10
//0.19634954084936204	0.29452431127404305	3.2299278336095267e-10	3.293205879490692e-10
//0.29452431127404305	0.3926990816987241	7.077495229963498e-10	7.660625634946399e-10
//0.3926990816987241	0.4908738521234051	8.609853579047051e-10	9.749103351809156e-10
//0.4908738521234051	0.5890486225480861	8.597941907144508e-10	9.752869553888345e-10
//0.5890486225480861	0.6872233929727671	6.567091945538467e-10	7.898174453692142e-10
//0.6872233929727671	0.7853981633974482	2.873356640586807e-10	4.0635399430573104e-10
//0.7853981633974482	0.8835729338221292	5.674991011688854e-10	8.945540831156195e-10
//0.8835729338221292	0.9817477042468102	5.864019190063776e-10	9.752838571125989e-10
//0.9817477042468102	1.0799224746714913	5.065531690304451e-10	9.117717283361957e-10
//1.0799224746714913	1.1780972450961722	1.8581384783897748e-10	4.85555008733141e-10
//1.1780972450961722	1.2762720155208533	2.919301769396387e-10	9.745247976732538e-10
//1.2762720155208533	1.3744467859455343	2.8288961350948974e-10	9.752853998729813e-10
//1.3744467859455343	1.4726215563702154	8.529983500089534e-11	8.69872177659427e-10
//1.4726215563702154	1.5707963267948963	8.526232023327971e-11	inf
//spec: {
//spec:     "cname": "ml2_raw_cos_10",
//spec:     "delta": 9.752835779378886e-10,
//spec:     "domain": [
//spec:         0.0,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 3.293205879490692e-10,
//spec:     "operation": "cos"
//spec: }
