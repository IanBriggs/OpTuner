/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_4.c --poly-degree 4 \
 *     --fname ml2_raw_log_4 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_4(double);
double ml2_raw_log_4(double x){
    double pm_3;
    double pa_3;
    double pm_2;
    double pa_2;
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_3 = x * -0x1.5fdbbcc27ac92p-1;
    pa_3 = 0x1.74c168a4c62a1p1 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.48740d25232c1p2 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.51aeb1abf0849p2 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.2f3fc25ba6d31p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f3eeef91790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f3eeef91a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f3eeef91b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f3eeef91d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3eeef9cbb0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_4
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3eeef9cbb0>
//Info: executing pass instantiate_prec on fct ml2_raw_log_4
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3eeef9cbb0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_4
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3eeef9cbb0>
//Info: executing pass check_processor_support on fct ml2_raw_log_4
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3eeef9cbb0>
//Info: executing pass debug_tag_node on fct ml2_raw_log_4
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_4.c
//0.5	0.53125	0.00020442678917775142	0.00029492551497182226
//0.53125	0.5625	0.0001800056754744184	0.0003128552188539335
//0.5625	0.59375	0.00018002042068716566	0.00031586505634795487
//0.59375	0.625	0.00013925650722351686	0.0002671347190257234
//0.625	0.65625	5.723934771218556e-05	0.00012178490579821326
//0.65625	0.6875	7.553714441587105e-05	0.00020159718438826556
//0.6875	0.71875	9.725102651362877e-05	0.0002944844045447734
//0.71875	0.75	9.790591072326071e-05	0.00031586487599114703
//0.75	0.78125	9.011757626946279e-05	0.0003132540568213989
//0.78125	0.8125	6.320115713913686e-05	0.00025602016198782233
//0.8125	0.84375	2.8026560581419425e-05	0.00013497710615757374
//0.84375	0.875	2.4680290433146114e-05	0.00018482762703782274
//0.875	0.90625	2.9595287764308036e-05	0.0002965578800234672
//0.90625	0.9375	2.919317930232056e-05	0.00031586515429456787
//0.9375	0.96875	1.9317124154114447e-05	0.00029931154010264866
//0.96875	1.0	3.8745544976266855e-06	inf
//spec: {
//spec:     "cname": "ml2_raw_log_4",
//spec:     "delta": 0.00020442678917775142,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 0.00012178490579821326,
//spec:     "operation": "log"
//spec: }
