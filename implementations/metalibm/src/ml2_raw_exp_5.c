/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_5.c --poly-degree 5 \
 *     --fname ml2_raw_exp_5 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>

double ml2_raw_exp_5(double);
double ml2_raw_expm1_5(double x) {
  return ml2_raw_exp_5(x) - 1;
}


double ml2_raw_exp_5(double x){
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
    
    pm_4 = x * 0x1.80830c5a77396p-7;
    pa_4 = 0x1.3f09e9fd443c3p-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.574f0ecb63e0cp-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.ffd88c57c1164p-2 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.00008b8fda91cp0 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.fffffdb903da7p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7ff1f7e55790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7ff1f7e55a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7ff1f7e55b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7ff1f7e55d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff1f7e61e80>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_5
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff1f7e61e80>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_5
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff1f7e61e80>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_5
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff1f7e61e80>
//Info: executing pass check_processor_support on fct ml2_raw_exp_5
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff1f7e61e80>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_5
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_5.c
//0.0	0.04332169878499658	7.947052961162965e-08	7.621077005638633e-08
//0.04332169878499658	0.08664339756999316	7.940731595778278e-08	7.604070627264098e-08
//0.08664339756999316	0.12996509635498973	6.843852975499283e-08	6.009765787359442e-08
//0.12996509635498973	0.17328679513998632	8.956472771976426e-08	7.621077014419743e-08
//0.17328679513998632	0.2166084939249829	8.738695965721227e-08	7.348338111567081e-08
//0.2166084939249829	0.25993019270997947	4.135186518996612e-08	3.329838954825473e-08
//0.25993019270997947	0.30325189149497606	9.274607961880352e-08	6.84849176644137e-08
//0.30325189149497606	0.34657359027997264	1.0611396453111079e-07	7.621076929300894e-08
//0.34657359027997264	0.38989528906496923	1.030317926215168e-07	7.285447924048061e-08
//0.38989528906496923	0.4332169878499658	5.6461190056049434e-08	3.82314399100316e-08
//0.4332169878499658	0.4765386866349624	1.0359079782604941e-07	6.432252077766916e-08
//0.4765386866349624	0.5198603854199589	1.2670057268056932e-07	7.621077438688974e-08
//0.5198603854199589	0.5631820842049555	1.242468217801508e-07	7.387760223871528e-08
//0.5631820842049555	0.6065037829899521	7.355350196450555e-08	4.010533133761249e-08
//0.6065037829899521	0.6498254817749487	1.4503347318479646e-07	7.621076915492569e-08
//0.6498254817749487	0.6931471805599453	1.42305574888871e-07	7.430299047485448e-08
//spec: {
//spec:     "cname": "ml2_raw_exp_5",
//spec:     "delta": 1.4503347318479646e-07,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 3.329838954825473e-08,
//spec:     "operation": "exp"
//spec: }
