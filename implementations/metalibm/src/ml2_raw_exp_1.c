/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_1.c --poly-degree 1 \
 *     --fname ml2_raw_exp_1 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>

double ml2_raw_exp_1(double);
double ml2_raw_expm1_1(double x) {
  return ml2_raw_exp_1(x) - 1;
}


double ml2_raw_exp_1(double x){
    double tmp;
    double tmp1;
    
    tmp = x * 0x1.664b6548881a7p0;
    tmp1 = 0x1.f0dc6bfe5e509p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7feee8b2d730> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7feee8b2da00> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7feee8b2dac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7feee8b2dca0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7feee8b382e0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_1
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7feee8b382e0>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_1
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7feee8b382e0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_1
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7feee8b382e0>
//Info: executing pass check_processor_support on fct ml2_raw_exp_1
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7feee8b382e0>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_1
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_1.c
//0.0	0.04332169878499658	0.029568314742248532	0.029568314742248535
//0.04332169878499658	0.08664339756999316	0.013209569744029183	0.012649527323498964
//0.08664339756999316	0.12996509635498973	0.013540632777959676	0.011890382784556602
//0.12996509635498973	0.17328679513998632	0.023754679957563463	0.019975225221814382
//0.17328679513998632	0.2166084939249829	0.0317365103124337	0.02555567151399114
//0.2166084939249829	0.25993019270997947	0.037387295160541296	0.028829545664654357
//0.25993019270997947	0.30325189149497606	0.04060383030029144	0.029982399106380436
//0.30325189149497606	0.34657359027997264	0.04135423248701591	0.029988290793481674
//0.34657359027997264	0.38989528906496923	0.041278342289722346	0.029188195749202107
//0.38989528906496923	0.4332169878499658	0.039298286148951284	0.026609961001165264
//0.4332169878499658	0.4765386866349624	0.034546134106142976	0.022400396584562252
//0.4765386866349624	0.5198603854199589	0.026899154990462727	0.01670246288154079
//0.5198603854199589	0.5631820842049555	0.016229183857921152	0.009649930457263572
//0.5631820842049555	0.6065037829899521	0.014721017192726308	0.008026691540683127
//0.6065037829899521	0.6498254817749487	0.03528696475489793	0.018424626077490062
//0.6498254817749487	0.6931471805599453	0.059447875932117436	0.02972393796605873
//spec: {
//spec:     "cname": "ml2_raw_exp_1",
//spec:     "delta": 0.059447875932117436,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 0.008026691540683127,
//spec:     "operation": "exp"
//spec: }
