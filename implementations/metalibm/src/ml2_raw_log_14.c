/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_14.c --poly-degree 14 \
 *     --fname ml2_raw_log_14 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_14(double);
double ml2_raw_log_14(double x){
    double pm_13;
    double pa_13;
    double pm_12;
    double pa_12;
    double pm_11;
    double pa_11;
    double pm_10;
    double pa_10;
    double pm_9;
    double pa_9;
    double pm_8;
    double pa_8;
    double pm_7;
    double pa_7;
    double pm_6;
    double pa_6;
    double pm_5;
    double pa_5;
    double pm_4;
    double pa_4;
    double pm_3;
    double pa_3;
    double pm_2;
    double pa_2;
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_13 = x * -0x1.1f534e3a2b067p2;
    pa_13 = 0x1.9e4809b57617ep5 + pm_13;
    pm_12 = x * pa_13;
    pa_12 = -0x1.15d9366cdd798p8 + pm_12;
    pm_11 = x * pa_12;
    pa_11 = 0x1.cbff13a3549afp9 + pm_11;
    pm_10 = x * pa_11;
    pa_10 = -0x1.06dbb271e37c1p11 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.b77ffa25971f2p11 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = -0x1.15cf08b497c4cp12 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.0ea5a8dcacc1ap12 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.9a563711865aep11 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.e55e390a92996p10 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.be82d7aae1217p9 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.3d35188e8f41ap8 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.5afde98086db5p6 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.360300d355382p4 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.ca17bd3b71d82p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f58b9f74790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f58b9f74a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f58b9f74b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f58b9f74d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f58b9f6fa90>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_14
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f58b9f6fa90>
//Info: executing pass instantiate_prec on fct ml2_raw_log_14
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f58b9f6fa90>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_14
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f58b9f6fa90>
//Info: executing pass check_processor_support on fct ml2_raw_log_14
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f58b9f6fa90>
//Info: executing pass debug_tag_node on fct ml2_raw_log_14
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_14.c
//0.5	0.53125	1.66034159419923e-12	2.4316361557687395e-12
//0.53125	0.5625	1.455273388546276e-12	2.4828221550846386e-12
//0.5625	0.59375	1.3109713334157604e-12	2.5476968809460032e-12
//0.59375	0.625	1.3121776168560977e-12	2.6184550344263524e-12
//0.625	0.65625	1.1864973625858286e-12	2.7882198790324194e-12
//0.65625	0.6875	1.0275512902301196e-12	2.9413566935761146e-12
//0.6875	0.71875	1.0883360671141752e-12	3.3007518358773094e-12
//0.71875	0.75	9.81595852950398e-13	3.8152723376922875e-12
//0.75	0.78125	1.048118099261201e-12	4.357300697309102e-12
//0.78125	0.8125	1.0111777700493403e-12	6.2237739989257514e-12
//0.8125	0.84375	1.0513874863655551e-12	7.1183932431167815e-12
//0.84375	0.875	1.1745318707603566e-12	1.2187543490680546e-11
//0.875	0.90625	1.2599807613463348e-12	1.9895066307972647e-11
//0.90625	0.9375	1.6019223221619894e-12	3.487896047537292e-11
//0.9375	0.96875	1.9789063042546798e-12	8.893583596924327e-11
//0.96875	1.0	2.368622766865273e-12	inf
//spec: {
//spec:     "cname": "ml2_raw_log_14",
//spec:     "delta": 2.368622766865273e-12,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 2.4316361557687395e-12,
//spec:     "operation": "log"
//spec: }
