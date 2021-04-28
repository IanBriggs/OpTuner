/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_1.c --poly-degree 1 \
 *     --fname ml2_raw_sin_1 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_1(double);
double ml2_raw_sin_1(double x){
    double pm_1;
    
    pm_1 = x * 0x1.8e2b344318869p-1;
    return pm_1;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f2499bb37c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f2499bb3a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f2499bb3b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f2499bb3d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2499bbc190>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_1
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2499bbc190>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_1
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2499bbc190>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_1
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2499bbc190>
//Info: executing pass check_processor_support on fct ml2_raw_sin_1
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2499bbc190>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_1
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_1.c
//-1.5707963267948963	-1.4726215563702154	0.2215664753930426	0.22156647539304258
//-1.4726215563702154	-1.3744467859455343	0.15003384400878061	0.1507597936219133
//-1.3744467859455343	-1.2762720155208533	0.0880853855656819	0.0898110802901399
//-1.2762720155208533	-1.1780972450961722	0.0355824255246383	0.0371835361056363
//-1.1780972450961722	-1.0799224746714913	0.04209431251563843	0.047730238760873525
//-1.0799224746714913	-0.9817477042468102	0.06799056518189378	0.08177155746391152
//-0.9817477042468102	-0.8835729338221292	0.0858793109541506	0.1110972181301817
//-0.8835729338221292	-0.7853981633974482	0.09632354349002632	0.13622206157942993
//-0.7853981633974482	-0.6872233929727671	0.09995795117918946	0.15756464274518509
//-0.6872233929727671	-0.5890486225480861	0.09997513945721107	0.17546441287427988
//-0.5890486225480861	-0.4908738521234051	0.09748280474721131	0.19019481099795196
//-0.4908738521234051	-0.3926990816987241	0.08965721326567187	0.20197324205844067
//-0.3926990816987241	-0.29452431127404305	0.07729181351682916	0.21096863843275945
//-0.29452431127404305	-0.19634954084936204	0.061240963118266906	0.21730710244300688
//-0.19634954084936204	-0.09817477042468102	0.04239451259199796	0.2210759826764741
//-0.09817477042468102	0.0	0.02166923561749545	inf
//0.0	0.09817477042468102	0.02166923561749545	inf
//0.09817477042468102	0.19634954084936204	0.04239451259199796	0.2210759826764741
//0.19634954084936204	0.29452431127404305	0.061240963118266906	0.21730710244300688
//0.29452431127404305	0.3926990816987241	0.07729181351682916	0.21096863843275945
//0.3926990816987241	0.4908738521234051	0.08965721326567187	0.20197324205844067
//0.4908738521234051	0.5890486225480861	0.09748280474721131	0.19019481099795196
//0.5890486225480861	0.6872233929727671	0.09997513945721107	0.17546441287427988
//0.6872233929727671	0.7853981633974482	0.09995795117918946	0.15756464274518509
//0.7853981633974482	0.8835729338221292	0.09632354349002632	0.13622206157942993
//0.8835729338221292	0.9817477042468102	0.0858793109541506	0.1110972181301817
//0.9817477042468102	1.0799224746714913	0.06799056518189378	0.08177155746391152
//1.0799224746714913	1.1780972450961722	0.04209431251563843	0.047730238760873525
//1.1780972450961722	1.2762720155208533	0.0355824255246383	0.0371835361056363
//1.2762720155208533	1.3744467859455343	0.0880853855656819	0.0898110802901399
//1.3744467859455343	1.4726215563702154	0.15003384400878061	0.1507597936219133
//1.4726215563702154	1.5707963267948963	0.2215664753930426	0.22156647539304258
//spec: {
//spec:     "cname": "ml2_raw_sin_1",
//spec:     "delta": 0.2215664753930426,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 0.0371835361056363,
//spec:     "operation": "sin"
//spec: }
