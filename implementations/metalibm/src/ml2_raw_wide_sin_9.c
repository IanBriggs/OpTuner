/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_9.c \
 *     --poly-degree 9 --fname ml2_raw_wide_sin_9 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_9(double);
double ml2_raw_wide_sin_9(double x){
    double x2_;
    double pm_7;
    double pa_7;
    double pm_5;
    double pa_5;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_7 = x2_ * 0x1.179b74e856723p-19;
    pa_7 = -0x1.912bedcb03ddcp-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.0ffa4c2c15665p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.5536025997a8cp-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fffd57e1f150fp-1 + tmp;
    tmp2 = x * tmp1;
    return tmp2;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7ff9f63167c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7ff9f6316a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7ff9f6316b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7ff9f6316d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff9f6321dc0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_9
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff9f6321dc0>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_9
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff9f6321dc0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_9
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff9f6321dc0>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_9
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff9f6321dc0>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_9
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_9.c
//-3.1415926535897927	-2.945243112740431	3.927260409019634e-06	inf
//-2.945243112740431	-2.7488935718910685	4.9702027615458454e-06	inf
//-2.7488935718910685	-2.5525440310417067	5.9046253957169745e-06	1.0628044928178725e-05
//-2.5525440310417067	-2.3561944901923444	1.4042604195333142e-05	1.985924130509751e-05
//-2.3561944901923444	-2.1598449493429825	1.5463492771903188e-05	2.0269078497108497e-05
//-2.1598449493429825	-1.9634954084936205	1.4621858104275504e-05	1.7585559217180638e-05
//-1.9634954084936205	-1.7671458676442584	7.199787512846964e-06	7.792993847769897e-06
//-1.7671458676442584	-1.5707963267948963	1.4297774769076483e-05	1.429777476915666e-05
//-1.5707963267948963	-1.3744467859455343	1.9281247349665378e-05	1.9658989317002364e-05
//-1.3744467859455343	-1.1780972450961722	1.9537183782628526e-05	2.0269078379386933e-05
//-1.1780972450961722	-0.9817477042468102	1.803023892002635e-05	1.9515789976516645e-05
//-0.9817477042468102	-0.7853981633974482	1.2035492422256253e-05	1.4474963659795631e-05
//-0.7853981633974482	-0.5890486225480861	4.332471698221375e-06	6.127040234300645e-06
//-0.5890486225480861	-0.3926990816987241	4.641724769934813e-06	1.2129411355105434e-05
//-0.3926990816987241	-0.19634954084936204	4.7051669311028525e-06	1.8130943155373954e-05
//-0.19634954084936204	0.0	3.5371715385960076e-06	inf
//0.0	0.19634954084936204	3.5371715385960076e-06	inf
//0.19634954084936204	0.3926990816987241	4.7051669311028525e-06	1.8130943155373954e-05
//0.3926990816987241	0.5890486225480861	4.641724769934813e-06	1.2129411355105434e-05
//0.5890486225480861	0.7853981633974482	4.332471698221375e-06	6.127040234300645e-06
//0.7853981633974482	0.9817477042468102	1.2035492422256253e-05	1.4474963659795631e-05
//0.9817477042468102	1.1780972450961722	1.803023892002635e-05	1.9515789976516645e-05
//1.1780972450961722	1.3744467859455343	1.9537183782628526e-05	2.0269078379386933e-05
//1.3744467859455343	1.5707963267948963	1.9281247349665378e-05	1.9658989317002364e-05
//1.5707963267948963	1.7671458676442584	1.4297774769076483e-05	1.429777476915666e-05
//1.7671458676442584	1.9634954084936205	7.199787512846964e-06	7.792993847769897e-06
//1.9634954084936205	2.1598449493429825	1.4621858104275504e-05	1.7585559217180638e-05
//2.1598449493429825	2.3561944901923444	1.5463492771903188e-05	2.0269078497108497e-05
//2.3561944901923444	2.5525440310417067	1.4042604195333142e-05	1.985924130509751e-05
//2.5525440310417067	2.7488935718910685	5.9046253957169745e-06	1.0628044928178725e-05
//2.7488935718910685	2.945243112740431	4.9702027615458454e-06	inf
//2.945243112740431	3.1415926535897927	3.927260409019634e-06	inf
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_9",
//spec:     "delta": 1.9537183782628526e-05,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 6.127040234300645e-06,
//spec:     "operation": "sin"
//spec: }
