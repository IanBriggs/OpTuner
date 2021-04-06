/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_2.c --poly-degree 2 \
 *     --fname ml2_raw_exp_2 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_exp_2(double);
double ml2_raw_exp_2(double x){
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_1 = x * 0x1.67507a01b042cp-1;
    pa_1 = 0x1.e5d715d17167ep-1 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.006e9844d596p0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f095491f760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f095491fa30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f095491faf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f095491fcd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f095492b5e0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_2
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f095492b5e0>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_2
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f095492b5e0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_2
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f095492b5e0>
//Info: executing pass check_processor_support on fct ml2_raw_exp_2
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f095492b5e0>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_2
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_2.c
//0.0	0.04332169878499658	0.001687542729620027	0.0016875427296200267
//0.04332169878499658	0.08664339756999316	0.0013353371129719144	0.0012245095316365038
//0.08664339756999316	0.12996509635498973	0.0019225417052011495	0.001688234011583649
//0.12996509635498973	0.17328679513998632	0.0020325573084026263	0.0017393289769841002
//0.17328679513998632	0.2166084939249829	0.0020131437267779336	0.001692845343238068
//0.2166084939249829	0.25993019270997947	0.0017017818478404498	0.0013703516065168909
//0.25993019270997947	0.30325189149497606	0.001087284750417708	0.0008384111561975803
//0.30325189149497606	0.34657359027997264	0.0006337290531376648	0.0004481141109085797
//0.34657359027997264	0.38989528906496923	0.0015199273374253675	0.00102918501382467
//0.38989528906496923	0.4332169878499658	0.0022682104449237056	0.001470752511624821
//0.4332169878499658	0.4765386866349624	0.0027558472047979057	0.0017111851900795843
//0.4765386866349624	0.5198603854199589	0.0028738225196923753	0.0017393289607599875
//0.5198603854199589	0.5631820842049555	0.0028546726730587306	0.001697398526902639
//0.5631820842049555	0.6065037829899521	0.0024308475588717443	0.0013841107864345948
//0.6065037829899521	0.6498254817749487	0.0013446069997600368	0.000733152165317076
//0.6498254817749487	0.6931471805599453	0.0034053934612921152	0.0017026967306460659
//spec: {
//spec:     "cname": "ml2_raw_exp_2",
//spec:     "delta": 0.0034053934612921152,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 0.0004481141109085797,
//spec:     "operation": "exp"
//spec: }
