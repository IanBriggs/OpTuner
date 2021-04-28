/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_cos.py --output src/ml2_raw_wide_cos_2.c \
 *     --poly-degree 2 --fname ml2_raw_wide_cos_2 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_cos_2(double);
double ml2_raw_wide_cos_2(double x){
    double x2_;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    tmp = x2_ * -0x1.9ec0e733e1874p-3;
    tmp1 = 0x1.001d058ac7cfbp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fbf409337c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fbf40933a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fbf40933b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fbf40933d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//LSKDFKLJK 0.50022141760919625053105619372217915952205657958984375 * _x_^0 + -0.20251637103155284425071158693754114210605621337890625 * _x_^2
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbf4093d460>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_2
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbf4093d460>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_2
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbf4093d460>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_2
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbf4093d460>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_2
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbf4093d460>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_2
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_2.c
//-3.1415926535897927	-2.945243112740431	0.4985350492164633	0.49853504921646313
//-2.945243112740431	-2.7488935718910685	0.2757128529085633	0.2811143870299617
//-2.7488935718910685	-2.5525440310417067	0.10619696979291277	0.11494677179853584
//-2.5525440310417067	-2.3561944901923444	0.08302768620631092	0.11741887988542257
//-2.3561944901923444	-2.1598449493429825	0.11106691435573336	0.19991516419457764
//-2.1598449493429825	-1.9634954084936205	0.11205775036420977	0.26690626372105025
//-1.9634954084936205	-1.7671458676442584	0.10214060512051298	0.3223773513919832
//-1.7671458676442584	-1.5707963267948963	0.06289270129376834	inf
//-1.5707963267948963	-1.3744467859455343	0.07744338438528113	2259094641464.8184
//-1.3744467859455343	-1.1780972450961722	0.16353714290325208	0.42734314859817
//-1.1780972450961722	-0.9817477042468102	0.25053987662384947	0.45095986381799147
//-0.9817477042468102	-0.7853981633974482	0.33180764275395513	0.4692468684816902
//-0.7853981633974482	-0.5890486225480861	0.40151697673018866	0.48290036194863306
//-0.5890486225480861	-0.3926990816987241	0.4548886846962415	0.49236796431647795
//-0.3926990816987241	-0.19634954084936204	0.48837150524257195	0.4979392686662138
//-0.19634954084936204	0.0	0.4997785823908038	0.49977858239080386
//0.0	0.19634954084936204	0.4997785823908038	0.49977858239080386
//0.19634954084936204	0.3926990816987241	0.48837150524257195	0.4979392686662138
//0.3926990816987241	0.5890486225480861	0.4548886846962415	0.49236796431647795
//0.5890486225480861	0.7853981633974482	0.40151697673018866	0.48290036194863306
//0.7853981633974482	0.9817477042468102	0.33180764275395513	0.4692468684816902
//0.9817477042468102	1.1780972450961722	0.25053987662384947	0.45095986381799147
//1.1780972450961722	1.3744467859455343	0.16353714290325208	0.42734314859817
//1.3744467859455343	1.5707963267948963	0.07744338438528113	2259094641464.8184
//1.5707963267948963	1.7671458676442584	0.06289270129376834	inf
//1.7671458676442584	1.9634954084936205	0.10214060512051298	0.3223773513919832
//1.9634954084936205	2.1598449493429825	0.11205775036420977	0.26690626372105025
//2.1598449493429825	2.3561944901923444	0.11106691435573336	0.19991516419457764
//2.3561944901923444	2.5525440310417067	0.08302768620631092	0.11741887988542257
//2.5525440310417067	2.7488935718910685	0.10619696979291277	0.11494677179853584
//2.7488935718910685	2.945243112740431	0.2757128529085633	0.2811143870299617
//2.945243112740431	3.1415926535897927	0.4985350492164633	0.49853504921646313
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_2",
//spec:     "delta": 0.4997785823908038,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 0.11494677179853584,
//spec:     "operation": "cos"
//spec: }
