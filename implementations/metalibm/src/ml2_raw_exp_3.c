/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_3.c --poly-degree 3 \
 *     --fname ml2_raw_exp_3 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>

double ml2_raw_exp_3(double);
double ml2_raw_expm1_3(double x) {
  return ml2_raw_exp_3(x) - 1;
}


double ml2_raw_exp_3(double x){
    double pm_2;
    double pa_2;
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_2 = x * 0x1.dfcf8c68d72eap-3;
    pa_2 = 0x1.e1dedc2d91667p-2 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.00fc30dbe96eep0 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.fff697ef4057cp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fc8f81c9730> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fc8f81c9a00> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fc8f81c9ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fc8f81c9ca0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8f81d4880>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_3
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8f81d4880>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_3
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8f81d4880>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_3
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8f81d4880>
//Info: executing pass check_processor_support on fct ml2_raw_exp_3
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc8f81d4880>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_3
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_3.c
//0.0	0.04332169878499658	7.176594211045866e-05	7.176594211045867e-05
//0.04332169878499658	0.08664339756999316	8.235644365209668e-05	7.552119181293584e-05
//0.08664339756999316	0.12996509635498973	8.284044945783709e-05	7.562582327896237e-05
//0.12996509635498973	0.17328679513998632	6.759867348982935e-05	5.9360158177441035e-05
//0.17328679513998632	0.2166084939249829	2.740711710070457e-05	2.206944855864897e-05
//0.2166084939249829	0.25993019270997947	7.254277284172536e-05	5.593812479081622e-05
//0.25993019270997947	0.30325189149497606	9.986088658170492e-05	7.373858413028757e-05
//0.30325189149497606	0.34657359027997264	0.00010479589277616487	7.562582265241843e-05
//0.34657359027997264	0.38989528906496923	0.00010284504185542685	7.272242650738665e-05
//0.38989528906496923	0.4332169878499658	7.975036011851426e-05	5.400118378035635e-05
//0.4332169878499658	0.4765386866349624	3.381475477916389e-05	2.1926155764222006e-05
//0.4765386866349624	0.5198603854199589	8.738020392225505e-05	5.1956580107376376e-05
//0.5198603854199589	0.5631820842049555	0.00012921503931417663	7.35743091053209e-05
//0.5631820842049555	0.6065037829899521	0.0001352911787043366	7.562581973518083e-05
//0.6065037829899521	0.6498254817749487	0.00012654996388147732	6.900185709063003e-05
//0.6498254817749487	0.6931471805599453	0.0001453934938042196	7.269674690211882e-05
//spec: {
//spec:     "cname": "ml2_raw_exp_3",
//spec:     "delta": 0.0001453934938042196,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 2.1926155764222006e-05,
//spec:     "operation": "exp"
//spec: }
