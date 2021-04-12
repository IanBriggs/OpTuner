/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_cos.py --output src/ml2_raw_cos_4.c --poly-degree 4 \
 *     --fname ml2_raw_cos_4 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_cos_4(double);
double ml2_raw_cos_4(double x){
    double x2_;
    double pm_2;
    double pa_2;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    pm_2 = x2_ * 0x1.200a2cd38d13cp-5;
    pa_2 = -0x1.f6c348e9dd421p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fea88cf753da9p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f6a7e6717f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f6a7e671ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f6a7e671b80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f6a7e671d60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6a7e67b760>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_cos_4
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6a7e67b760>
//Info: executing pass instantiate_prec on fct ml2_raw_cos_4
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6a7e67b760>
//Info: executing pass sub_expr_sharing on fct ml2_raw_cos_4
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6a7e67b760>
//Info: executing pass check_processor_support on fct ml2_raw_cos_4
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6a7e67b760>
//Info: executing pass debug_tag_node on fct ml2_raw_cos_4
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_cos_4.c
//0.0	0.09817477042468102	0.0026203106008990135	0.002620310600899014
//0.09817477042468102	0.19634954084936204	0.002533969884322174	0.0025462306810068616
//0.19634954084936204	0.29452431127404305	0.002282125309058375	0.002326834787039347
//0.29452431127404305	0.3926990816987241	0.0018858629942872546	0.001970721604962213
//0.3926990816987241	0.4908738521234051	0.0013788420922825355	0.0014924479261214665
//0.4908738521234051	0.5890486225480861	0.000805083231101912	0.0009128742708078251
//0.5890486225480861	0.6872233929727671	0.00033398152160800414	0.000432053046831545
//0.6872233929727671	0.7853981633974482	0.0007911241260684167	0.0011188184686065177
//0.7853981633974482	0.8835729338221292	0.00110877931326427	0.0017477790842726742
//0.8835729338221292	0.9817477042468102	0.0012530107372192838	0.0022553597416639765
//0.9817477042468102	1.0799224746714913	0.0012597809729433538	0.002565643525757879
//1.0799224746714913	1.1780972450961722	0.001209435985900985	0.0026203106008998453
//1.1780972450961722	1.2762720155208533	0.000990537216550949	0.0025883984849546906
//1.2762720155208533	1.3744467859455343	0.0006434680310375947	0.002216679285740343
//1.3744467859455343	1.4726215563702154	0.00025828140675257115	0.0013239068144639135
//1.4726215563702154	1.5707963267948963	6.532242175081672e-05	inf
//spec: {
//spec:     "cname": "ml2_raw_cos_4",
//spec:     "delta": 0.0026203106008990135,
//spec:     "domain": [
//spec:         0.0,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 0.000432053046831545,
//spec:     "operation": "cos"
//spec: }
