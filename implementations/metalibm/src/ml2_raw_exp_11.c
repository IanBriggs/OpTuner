/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_11.c --poly-degree 11 \
 *     --fname ml2_raw_exp_11 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_exp_11(double);
double ml2_raw_exp_11(double x){
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
    
    pm_10 = x * 0x1.2f4df02fd4d01p-25;
    pa_10 = 0x1.13121bb32d743p-22 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.749b5396cbc0bp-19 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = 0x1.9fe064f301d6ap-16 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.a01d1a213a949p-13 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = 0x1.6c16a544e32fp-10 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.111111b7ec2eap-7 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = 0x1.555555508034bp-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.555555556a074p-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.ffffffffffa84p-2 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.0000000000004p0 + pm_1;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f7daf3307c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f7daf330a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f7daf330b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f7daf330d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7daf341fd0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_11
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7daf341fd0>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_11
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7daf341fd0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_11
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7daf341fd0>
//Info: executing pass check_processor_support on fct ml2_raw_exp_11
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f7daf341fd0>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_11
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_11.c
//0.0	0.04332169878499658	1.2650848862875455e-16	1.2637029105549389e-16
//0.04332169878499658	0.08664339756999316	1.3925659805537256e-16	1.333525710531287e-16
//0.08664339756999316	0.12996509635498973	1.606263127255778e-16	1.4726852302906504e-16
//0.12996509635498973	0.17328679513998632	1.6749600796034492e-16	1.4696720420272216e-16
//0.17328679513998632	0.2166084939249829	1.7424706875187476e-16	1.4652370491014296e-16
//0.2166084939249829	0.25993019270997947	2.1568697169529037e-16	1.7357981603478005e-16
//0.25993019270997947	0.30325189149497606	2.2387837115306457e-16	1.7263384028779286e-16
//0.30325189149497606	0.34657359027997264	2.3407215461795933e-16	1.727310915305776e-16
//0.34657359027997264	0.38989528906496923	2.433120460526828e-16	1.7204759695772374e-16
//0.38989528906496923	0.4332169878499658	2.876136594675646e-16	1.9462638196965737e-16
//0.4332169878499658	0.4765386866349624	2.9838839187374457e-16	1.9348099181805885e-16
//0.4765386866349624	0.5198603854199589	3.569017313190545e-16	2.2148899134237629e-16
//0.5198603854199589	0.5631820842049555	3.705205581291036e-16	2.203128711936265e-16
//0.5631820842049555	0.6065037829899521	3.8547312522964117e-16	2.1940580689523186e-16
//0.6065037829899521	0.6498254817749487	4.0368359614474986e-16	2.1998101675907193e-16
//0.6498254817749487	0.6931471805599453	5.869528101809906e-16	3.063637256761373e-16
//spec: {
//spec:     "cname": "ml2_raw_exp_11",
//spec:     "delta": 5.869528101809906e-16,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 1.2637029105549389e-16,
//spec:     "operation": "exp"
//spec: }
