/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_7.c --poly-degree 7 \
 *     --fname ml2_raw_exp_7 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_exp_7(double);
double ml2_raw_exp_7(double x){
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
    
    pm_6 = x * 0x1.253e17fd78628p-12;
    pa_6 = 0x1.5341dd24bd194p-10 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.12e32cb90b39ep-7 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = 0x1.55302409ff038p-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.5556ebea5027ep-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.ffffef3bfbdfap-2 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.00000020bf7d4p0 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.ffffffffb68e5p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fe48d1d2790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fe48d1d2a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fe48d1d2b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fe48d1d2d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe48d1e0460>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_7
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe48d1e0460>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_7
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe48d1e0460>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_7
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe48d1e0460>
//Info: executing pass check_processor_support on fct ml2_raw_exp_7
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe48d1e0460>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_7
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_7.c
//0.0	0.04332169878499658	4.211354463486073e-11	4.112588410640328e-11
//0.04332169878499658	0.08664339756999316	4.3217239262206764e-11	3.963038865623597e-11
//0.08664339756999316	0.12996509635498973	4.5215059125766057e-11	4.1125906515565455e-11
//0.12996509635498973	0.17328679513998632	3.524074622658503e-11	2.963382326508231e-11
//0.17328679513998632	0.2166084939249829	5.038847718061755e-11	4.1125906320373804e-11
//0.2166084939249829	0.25993019270997947	4.775847253736864e-11	3.845727914501758e-11
//0.25993019270997947	0.30325189149497606	4.284087225871701e-11	3.163426732922383e-11
//0.30325189149497606	0.34657359027997264	5.7440149859719526e-11	4.11259325114218e-11
//0.34657359027997264	0.38989528906496923	5.540759414151873e-11	3.9179085546699166e-11
//0.38989528906496923	0.4332169878499658	4.294758093917776e-11	2.784806898197703e-11
//0.4332169878499658	0.4765386866349624	6.571770426833147e-11	4.112595308191133e-11
//0.4765386866349624	0.5198603854199589	6.47669366836291e-11	4.021566314228503e-11
//0.5198603854199589	0.5631820842049555	5.7111482034747466e-11	3.251896253473459e-11
//0.5631820842049555	0.6065037829899521	7.388502297680295e-11	4.1125978996033504e-11
//0.6065037829899521	0.6498254817749487	5.861849659938444e-11	3.196196190939399e-11
//0.6498254817749487	0.6931471805599453	8.002949307554615e-11	4.1125979235597327e-11
//spec: {
//spec:     "cname": "ml2_raw_exp_7",
//spec:     "delta": 8.002949307554615e-11,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 2.784806898197703e-11,
//spec:     "operation": "exp"
//spec: }
