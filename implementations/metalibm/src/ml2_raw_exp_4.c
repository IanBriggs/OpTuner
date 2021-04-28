/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_4.c --poly-degree 4 \
 *     --fname ml2_raw_exp_4 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_exp_4(double);
double ml2_raw_exp_4(double x){
    double pm_3;
    double pa_3;
    double pm_2;
    double pa_2;
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_3 = x * 0x1.e04b53fe7cdf1p-5;
    pa_3 = 0x1.3fe125a655e6ap-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.014a65aa5643cp-1 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.ffe54182ad919p-1 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.000028b2c949dp0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f11e8cde790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f11e8cdea60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f11e8cdeb20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f11e8cded00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f11e8ce9bb0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_4
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f11e8ce9bb0>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_4
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f11e8ce9bb0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_4
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f11e8ce9bb0>
//Info: executing pass check_processor_support on fct ml2_raw_exp_4
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f11e8ce9bb0>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_4
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_4.c
//0.0	0.04332169878499658	2.4760157203874536e-06	2.425812716378854e-06
//0.04332169878499658	0.08664339756999316	2.7915378672393356e-06	2.630052822923294e-06
//0.08664339756999316	0.12996509635498973	2.2286951222382545e-06	2.043722438163009e-06
//0.12996509635498973	0.17328679513998632	2.206849919955744e-06	1.855732186699824e-06
//0.17328679513998632	0.2166084939249829	3.2565975038521637e-06	2.6223593975080737e-06
//0.2166084939249829	0.25993019270997947	3.2886764123497864e-06	2.630052849338506e-06
//0.25993019270997947	0.30325189149497606	2.830786357022467e-06	2.182834682108578e-06
//0.30325189149497606	0.34657359027997264	1.1790126963470573e-06	8.705983881799808e-07
//0.34657359027997264	0.38989528906496923	3.0714353479826242e-06	2.0797541785389188e-06
//0.38989528906496923	0.4332169878499658	4.05416448569541e-06	2.6288004330636964e-06
//0.4332169878499658	0.4765386866349624	4.07408749793941e-06	2.630052715743929e-06
//0.4765386866349624	0.5198603854199589	3.462826724766439e-06	2.1501692100040197e-06
//0.5198603854199589	0.5631820842049555	2.0037435665540284e-06	1.140920200288487e-06
//0.5631820842049555	0.6065037829899521	4.613281892310306e-06	2.515409788273658e-06
//0.6065037829899521	0.6498254817749487	4.8954371058277934e-06	2.6300529093651044e-06
//0.6498254817749487	0.6931471805599453	4.935205848414189e-06	2.467602924216233e-06
//spec: {
//spec:     "cname": "ml2_raw_exp_4",
//spec:     "delta": 4.935205848414189e-06,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 8.705983881799808e-07,
//spec:     "operation": "exp"
//spec: }
