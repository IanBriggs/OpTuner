/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_9.c --poly-degree 9 \
 *     --fname ml2_raw_exp_9 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>


ml2_raw_expm1_9(double x) {
  return ml2_raw_exp_9(x) - 1;
}

double ml2_raw_exp_9(double);
double ml2_raw_exp_9(double x){
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
    
    pm_8 = x * 0x1.04d1bdd66fd85p-18;
    pa_8 = 0x1.8309e64550f78p-16 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.a315c80197bd8p-13 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = 0x1.6be815a02bd7dp-10 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.1112d04b93eedp-7 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = 0x1.55554123e20abp-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.555555d9f7213p-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.fffffffc98fep-2 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.000000000431p0 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.fffffffffffa7p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fef928ee730> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fef928eea00> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fef928eeac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fef928eeca0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fef928fd9a0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_9
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fef928fd9a0>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_9
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fef928fd9a0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_9
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fef928fd9a0>
//Info: executing pass check_processor_support on fct ml2_raw_exp_9
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fef928fd9a0>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_9
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_9.c
//0.0	0.04332169878499658	1.4138457961160678e-14	1.392866678799893e-14
//0.04332169878499658	0.08664339756999316	1.4823452750271247e-14	1.3935636749440944e-14
//0.08664339756999316	0.12996509635498973	1.557015498642553e-14	1.3678664251814617e-14
//0.12996509635498973	0.17328679513998632	1.5975013300418974e-14	1.3949192789544597e-14
//0.17328679513998632	0.2166084939249829	1.5975917265923154e-14	1.2870612625809557e-14
//0.2166084939249829	0.25993019270997947	1.758556988438708e-14	1.3975793915871866e-14
//0.25993019270997947	0.30325189149497606	1.130386251008266e-14	8.444157280753811e-15
//0.30325189149497606	0.34657359027997264	1.9551944998352558e-14	1.397493670373717e-14
//0.34657359027997264	0.38989528906496923	1.8796575555933246e-14	1.3291186037935196e-14
//0.38989528906496923	0.4332169878499658	2.051812538005289e-14	1.3312471016359138e-14
//0.4332169878499658	0.4765386866349624	2.1825337029247265e-14	1.3995759702738452e-14
//0.4765386866349624	0.5198603854199589	1.6697759482085682e-14	9.937798683756453e-15
//0.5198603854199589	0.5631820842049555	2.414807135490879e-14	1.4022633000627327e-14
//0.5631820842049555	0.6065037829899521	1.9040136922409627e-14	1.084134577749417e-14
//0.6065037829899521	0.6498254817749487	2.6164665061022094e-14	1.4022166185769477e-14
//0.6498254817749487	0.6931471805599453	2.755767296219242e-14	1.4021592487108707e-14
//spec: {
//spec:     "cname": "ml2_raw_exp_9",
//spec:     "delta": 2.755767296219242e-14,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 8.444157280753811e-15,
//spec:     "operation": "exp"
//spec: }
