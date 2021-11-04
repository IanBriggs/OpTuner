/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_6.c --poly-degree 6 \
 *     --fname ml2_raw_exp_6 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>

double ml2_raw_exp_6(double);
double ml2_raw_expm1_6(double x) {
  return ml2_raw_exp_6(x) - 1;
}


double ml2_raw_exp_6(double x){
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
    
    pm_5 = x * 0x1.007ac71c6a495p-9;
    pa_5 = 0x1.fd8c5a4db11p-8 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = 0x1.577b9a8dca482p-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.5534d3a5200e7p-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.0000e5850da4fp-1 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.fffff6c6d5c9ep-1 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.00000006f09c7p0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fee43ee6730> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fee43ee6a00> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fee43ee6ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fee43ee6ca0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fee43ef6130>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_6
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fee43ef6130>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_6
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fee43ef6130>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_6
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fee43ef6130>
//Info: executing pass check_processor_support on fct ml2_raw_exp_6
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fee43ef6130>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_6
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_6.c
//0.0	0.04332169878499658	1.952180861465945e-09	1.8926805830693784e-09
//0.04332169878499658	0.08664339756999316	1.6530440818505675e-09	1.5829604359194607e-09
//0.08664339756999316	0.12996509635498973	2.137586809218902e-09	1.8926805991306567e-09
//0.12996509635498973	0.17328679513998632	2.0933986926855163e-09	1.8382679882757447e-09
//0.17328679513998632	0.2166084939249829	1.5867031359358797e-09	1.2776850361316243e-09
//0.2166084939249829	0.25993019270997947	2.4454191000490975e-09	1.8926806282629602e-09
//0.25993019270997947	0.30325189149497606	2.441800387120909e-09	1.8828854952515996e-09
//0.30325189149497606	0.34657359027997264	1.3896472088499483e-09	1.0261336658307097e-09
//0.34657359027997264	0.38989528906496923	2.5806235076668294e-09	1.7474118570710927e-09
//0.38989528906496923	0.4332169878499658	2.85358909858284e-09	1.8926806852305226e-09
//0.4332169878499658	0.4765386866349624	2.579286364161355e-09	1.6724602899082817e-09
//0.4765386866349624	0.5198603854199589	2.2284623685550073e-09	1.3250516613522466e-09
//0.5198603854199589	0.5631820842049555	3.2953099801117767e-09	1.8926806579824665e-09
//0.5631820842049555	0.6065037829899521	3.2324710586411266e-09	1.8405506518802876e-09
//0.6065037829899521	0.6498254817749487	3.480608690259722e-09	1.8173542102509305e-09
//0.6498254817749487	0.6931471805599453	3.6508463699226477e-09	1.892680656042462e-09
//spec: {
//spec:     "cname": "ml2_raw_exp_6",
//spec:     "delta": 3.6508463699226477e-09,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 1.0261336658307097e-09,
//spec:     "operation": "exp"
//spec: }
