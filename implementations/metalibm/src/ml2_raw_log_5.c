/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_5.c --poly-degree 5 \
 *     --fname ml2_raw_log_5 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>


double ml2_raw_log1p_5(double x) {
  return ml2_raw_log_5(x + 1);
}

double ml2_raw_log_5(double);
double ml2_raw_log_5(double x){
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
    
    pm_4 = x * 0x1.7e858f144e84ep-1;
    pa_4 = -0x1.d68e39ba36ce5p1 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.e84fd81f4eccfp2 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.19933b3c925fcp3 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.ab671589b9c32p2 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.4a3418706ae59p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fc198c74790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fc198c74a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fc198c74b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fc198c74d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc198c7ee80>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_5
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc198c7ee80>
//Info: executing pass instantiate_prec on fct ml2_raw_log_5
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc198c7ee80>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_5
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc198c7ee80>
//Info: executing pass check_processor_support on fct ml2_raw_log_5
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc198c7ee80>
//Info: executing pass debug_tag_node on fct ml2_raw_log_5
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_5.c
//0.5	0.53125	2.8060280393104052e-05	4.048242736956062e-05
//0.53125	0.5625	2.75073556792152e-05	4.507496764086807e-05
//0.5625	0.59375	2.1471542788762353e-05	3.7318180111506964e-05
//0.59375	0.625	1.3012205876013933e-05	2.7685330637363212e-05
//0.625	0.65625	1.8566801451304097e-05	4.4079316050572035e-05
//0.65625	0.6875	1.8585542819038307e-05	4.507507753697794e-05
//0.6875	0.71875	1.5218978450031232e-05	4.061714576041853e-05
//0.71875	0.75	6.967121106991021e-06	2.109703706358188e-05
//0.75	0.78125	7.646682407455836e-06	3.097577572002787e-05
//0.78125	0.8125	9.248722698176656e-06	4.431948340072215e-05
//0.8125	0.84375	9.202469379566703e-06	4.5075188488608515e-05
//0.84375	0.875	6.840529178418711e-06	4.026231878110029e-05
//0.875	0.90625	2.4518308622365893e-06	1.836145656321199e-05
//0.90625	0.9375	2.6976182968392857e-06	4.15175962277533e-05
//0.9375	0.96875	2.6794842603590704e-06	4.507495908859526e-05
//0.96875	1.0	1.1296905281491927e-06	6.818117132416459e+21
//spec: {
//spec:     "cname": "ml2_raw_log_5",
//spec:     "delta": 2.8060280393104052e-05,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 1.836145656321199e-05,
//spec:     "operation": "log"
//spec: }
