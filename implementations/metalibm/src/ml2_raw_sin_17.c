/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_17.c --poly-degree 17 \
 *     --fname ml2_raw_sin_17 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_17(double);
double ml2_raw_sin_17(double x){
    double x2_;
    double pm_15;
    double pa_15;
    double pm_13;
    double pa_13;
    double pm_11;
    double pa_11;
    double pm_9;
    double pa_9;
    double pm_7;
    double pa_7;
    double pm_5;
    double pa_5;
    double pm_3;
    double pa_3;
    double x3_;
    double pm_1;
    double pa_1;
    
    x2_ = x * x;
    pm_15 = x2_ * 0x1.8833e7cd1aff2p-49;
    pa_15 = -0x1.ae438ec68318ap-41 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.6123cd2841d73p-33 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = -0x1.ae6454d4d95e1p-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71de3a52a1442p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a01a01a014d79p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.11111111110c8p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.5555555555555p-3 + pm_3;
    x3_ = x * x2_;
    pm_1 = x3_ * pa_3;
    pa_1 = x + pm_1;
    return pa_1;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fc8cddc5760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fc8cddc5a30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fc8cddc5af0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fc8cddc5cd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8cddd48e0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_17
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8cddd48e0>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_17
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8cddd48e0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_17
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8cddd48e0>
//Info: executing pass check_processor_support on fct ml2_raw_sin_17
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8cddd48e0>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_17
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_17.c
//-1.5707963267948963	-1.4726215563702154	3.7241548453439075e-16	4.008772024017306e-16
//-1.4726215563702154	-1.3744467859455343	3.620928114668529e-16	3.926071128887267e-16
//-1.3744467859455343	-1.2762720155208533	3.246306303918829e-16	3.58397327349953e-16
//-1.2762720155208533	-1.1780972450961722	3.161546281062603e-16	3.594032739705536e-16
//-1.1780972450961722	-1.0799224746714913	2.367990385426017e-16	2.804751470063971e-16
//-1.0799224746714913	-0.9817477042468102	2.4878699562855564e-16	3.11016678523618e-16
//-0.9817477042468102	-0.8835729338221292	1.8262698846581818e-16	2.444345995877466e-16
//-0.8835729338221292	-0.7853981633974482	1.7460291772413765e-16	2.5440272816492997e-16
//-0.7853981633974482	-0.6872233929727671	1.6208410930928183e-16	2.6213842862743315e-16
//-0.6872233929727671	-0.5890486225480861	1.5260668093966832e-16	2.8079138008572494e-16
//-0.5890486225480861	-0.4908738521234051	1.4724410680663493e-16	3.1811567505315643e-16
//-0.4908738521234051	-0.3926990816987241	8.531342360088989e-17	2.2619516309629847e-16
//-0.3926990816987241	-0.29452431127404305	7.860980722024919e-17	2.7391226934917085e-16
//-0.29452431127404305	-0.19634954084936204	7.251252117461472e-17	3.7465464351804446e-16
//-0.19634954084936204	-0.09817477042468102	3.895396131200251e-17	3.99146711613409e-16
//-0.09817477042468102	0.0	2.4823017829289312e-17	inf
//0.0	0.09817477042468102	2.4823017829289312e-17	inf
//0.09817477042468102	0.19634954084936204	3.895396131200251e-17	3.99146711613409e-16
//0.19634954084936204	0.29452431127404305	7.251252117461472e-17	3.7465464351804446e-16
//0.29452431127404305	0.3926990816987241	7.860980722024919e-17	2.7391226934917085e-16
//0.3926990816987241	0.4908738521234051	8.531342360088989e-17	2.2619516309629847e-16
//0.4908738521234051	0.5890486225480861	1.4724410680663493e-16	3.1811567505315643e-16
//0.5890486225480861	0.6872233929727671	1.5260668093966832e-16	2.8079138008572494e-16
//0.6872233929727671	0.7853981633974482	1.6208410930928183e-16	2.6213842862743315e-16
//0.7853981633974482	0.8835729338221292	1.7460291772413765e-16	2.5440272816492997e-16
//0.8835729338221292	0.9817477042468102	1.8262698846581818e-16	2.444345995877466e-16
//0.9817477042468102	1.0799224746714913	2.4878699562855564e-16	3.11016678523618e-16
//1.0799224746714913	1.1780972450961722	2.367990385426017e-16	2.804751470063971e-16
//1.1780972450961722	1.2762720155208533	3.161546281062603e-16	3.594032739705536e-16
//1.2762720155208533	1.3744467859455343	3.246306303918829e-16	3.58397327349953e-16
//1.3744467859455343	1.4726215563702154	3.620928114668529e-16	3.926071128887267e-16
//1.4726215563702154	1.5707963267948963	3.7241548453439075e-16	4.008772024017306e-16
//spec: {
//spec:     "cname": "ml2_raw_sin_17",
//spec:     "delta": 3.7241548453439075e-16,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 2.2619516309629847e-16,
//spec:     "operation": "sin"
//spec: }
