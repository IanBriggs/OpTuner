/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_10.c --poly-degree 10 \
 *     --fname ml2_raw_exp_10 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>


ml2_raw_expm1_10(double x) {
  return ml2_raw_exp_10(x) - 1;
}

double ml2_raw_exp_10(double);
double ml2_raw_exp_10(double x){
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
    
    pm_9 = x * 0x1.a19a72400a25ap-22;
    pa_9 = 0x1.57bafa3b0c196p-19 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = 0x1.a32d1adba0108p-16 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.9fe14d92dea1fp-13 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = 0x1.6c195b8f87206p-10 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.1110fd8fcdafep-7 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = 0x1.5555560a8f42ap-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.5555555184dbap-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.000000000a797p-1 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.ffffffffffd36p-1 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.0000000000001p0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f1ab65dc730> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f1ab65dca00> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f1ab65dcac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f1ab65dcca0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1ab65ebc70>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_10
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1ab65ebc70>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_10
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1ab65ebc70>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_10
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1ab65ebc70>
//Info: executing pass check_processor_support on fct ml2_raw_exp_10
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1ab65ebc70>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_10
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_10.c
//0.0	0.04332169878499658	3.451504049250313e-16	3.451504049250313e-16
//0.04332169878499658	0.08664339756999316	3.614776307534254e-16	3.4421453406503604e-16
//0.08664339756999316	0.12996509635498973	3.97819429082324e-16	3.587576609628184e-16
//0.12996509635498973	0.17328679513998632	3.551149405965591e-16	3.1183564622569174e-16
//0.17328679513998632	0.2166084939249829	4.3186862889540507e-16	3.584252054280463e-16
//0.2166084939249829	0.25993019270997947	4.0304466362904276e-16	3.245497365535891e-16
//0.25993019270997947	0.30325189149497606	5.069950229788947e-16	3.8475187965120367e-16
//0.30325189149497606	0.34657359027997264	4.856570816710373e-16	3.5861557428778887e-16
//0.34657359027997264	0.38989528906496923	5.556347571922921e-16	3.840152783564156e-16
//0.38989528906496923	0.4332169878499658	5.983471709642079e-16	4.0515750933337316e-16
//0.4332169878499658	0.4765386866349624	6.320395439665822e-16	4.005192388690896e-16
//0.4765386866349624	0.5198603854199589	7.000255811614179e-16	4.332287746892927e-16
//0.5198603854199589	0.5631820842049555	7.344599919947814e-16	4.2740448273327414e-16
//0.5631820842049555	0.6065037829899521	7.592593466539897e-16	4.311190208322841e-16
//0.6065037829899521	0.6498254817749487	8.035447354116863e-16	4.316686388468093e-16
//0.6498254817749487	0.6931471805599453	9.489350674409018e-16	4.890489360793909e-16
//spec: {
//spec:     "cname": "ml2_raw_exp_10",
//spec:     "delta": 9.489350674409018e-16,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 3.1183564622569174e-16,
//spec:     "operation": "exp"
//spec: }
