/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_12.c --poly-degree 12 \
 *     --fname ml2_raw_exp_12 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_exp_12(double);
double ml2_raw_exp_12(double x){
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
    double pm_0;
    double pa_0;
    
    pm_11 = x * 0x1.92ef740040bc9p-29;
    pa_11 = 0x1.90bf4706f9ee9p-26 + pm_11;
    pm_10 = x * pa_11;
    pa_10 = 0x1.2a06b9b570bep-22 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.71ac824800dbbp-19 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = 0x1.a01d04f257033p-16 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.a019e20a33cbfp-13 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = 0x1.6c16c24a2f67ap-10 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.1111110d191d4p-7 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = 0x1.555555556b834p-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.5555555555128p-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.0000000000005p-1 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1p0 + pm_1;
    pm_0 = x * pa_1;
    pa_0 = 0x1p0 + pm_0;
    return pa_0;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f65c993a760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f65c993aa30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f65c993aaf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f65c993acd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f65c993a220>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_12
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f65c993a220>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_12
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f65c993a220>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_12
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f65c993a220>
//Info: executing pass check_processor_support on fct ml2_raw_exp_12
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f65c993a220>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_12
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_12.c
//0.0	0.04332169878499658	1.2317576767419457e-16	1.231740460830246e-16
//0.04332169878499658	0.08664339756999316	1.35940301175203e-16	1.301751339456792e-16
//0.08664339756999316	0.12996509635498973	1.570916048441973e-16	1.4405132087821067e-16
//0.12996509635498973	0.17328679513998632	1.637018156618124e-16	1.437504528569193e-16
//0.17328679513998632	0.2166084939249829	1.706745781559743e-16	1.4351769393057062e-16
//0.2166084939249829	0.25993019270997947	2.1156085121703767e-16	1.7035832224642964e-16
//0.25993019270997947	0.30325189149497606	2.2017890140731399e-16	1.6977953702197216e-16
//0.30325189149497606	0.34657359027997264	2.2955189137000897e-16	1.6950415371410403e-16
//0.34657359027997264	0.38989528906496923	2.390523921412612e-16	1.690340506027697e-16
//0.38989528906496923	0.4332169878499658	2.8265848704144715e-16	1.9139593367957e-16
//0.4332169878499658	0.4765386866349624	2.9354283940422825e-16	1.9033770291747512e-16
//0.4765386866349624	0.5198603854199589	3.514954021388754e-16	2.1825222172247945e-16
//0.5198603854199589	0.5631820842049555	3.653133713169981e-16	2.1721583092701275e-16
//0.5631820842049555	0.6065037829899521	3.796679321764348e-16	2.16178800237268e-16
//0.6065037829899521	0.6498254817749487	3.975295442369693e-16	2.1675232610241894e-16
//0.6498254817749487	0.6931471805599453	5.805693034958316e-16	3.031348904067493e-16
//spec: {
//spec:     "cname": "ml2_raw_exp_12",
//spec:     "delta": 5.805693034958316e-16,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 1.231740460830246e-16,
//spec:     "operation": "exp"
//spec: }
