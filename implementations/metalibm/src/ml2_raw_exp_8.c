/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_8.c --poly-degree 8 \
 *     --fname ml2_raw_exp_8 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_exp_8(double);
double ml2_raw_exp_8(double x){
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
    
    pm_7 = x * 0x1.25574d2bccd98p-15;
    pa_7 = 0x1.8356ef032ccedp-13 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = 0x1.6e9e74cda146cp-10 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.10f065062fec7p-7 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = 0x1.55573f244d645p-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.555545697e915p-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.0000004152abp-1 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.fffffffe6facep-1 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.0000000000ab4p0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f77edcf1730> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f77edcf1a00> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f77edcf1ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f77edcf1ca0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77edd006d0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_8
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77edd006d0>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_8
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77edd006d0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_8
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77edd006d0>
//Info: executing pass check_processor_support on fct ml2_raw_exp_8
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77edd006d0>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_8
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_8.c
//0.0	0.04332169878499658	8.094018684224601e-13	7.943994256233317e-13
//0.04332169878499658	0.08664339756999316	8.569699140202303e-13	7.944084238790267e-13
//0.08664339756999316	0.12996509635498973	7.770869915465014e-13	7.125919130818742e-13
//0.12996509635498973	0.17328679513998632	9.364527665167106e-13	7.944222982146238e-13
//0.17328679513998632	0.2166084939249829	9.063809777533407e-13	7.621725150163692e-13
//0.2166084939249829	0.25993019270997947	9.514333270516773e-13	7.336626088301506e-13
//0.25993019270997947	0.30325189149497606	1.0462492261687045e-12	7.944483967045072e-13
//0.30325189149497606	0.34657359027997264	7.825377595592595e-13	5.778361117872175e-13
//0.34657359027997264	0.38989528906496923	1.1624594965613676e-12	7.87140775003387e-13
//0.38989528906496923	0.4332169878499658	1.1803038536704449e-12	7.944700214015819e-13
//0.4332169878499658	0.4765386866349624	7.201125806464255e-13	4.4714678454034204e-13
//0.4765386866349624	0.5198603854199589	1.3252512231786504e-12	7.944968628287701e-13
//0.5198603854199589	0.5631820842049555	1.2925337823904756e-12	7.685451852292688e-13
//0.5631820842049555	0.6065037829899521	1.455767684258661e-12	7.937721215335146e-13
//0.6065037829899521	0.6498254817749487	1.459240915591162e-12	7.944953319401876e-13
//0.6498254817749487	0.6931471805599453	1.5553885425317678e-12	7.944947364888964e-13
//spec: {
//spec:     "cname": "ml2_raw_exp_8",
//spec:     "delta": 1.5553885425317678e-12,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 4.4714678454034204e-13,
//spec:     "operation": "exp"
//spec: }
