/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_3.c \
 *     --poly-degree 3 --fname ml2_raw_wide_sin_3 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_3(double);
double ml2_raw_wide_sin_3(double x){
    double x2_;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    tmp = x2_ * -0x1.15069b74197bp-4;
    tmp1 = 0x1.55c474222286cp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f918b7767c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f918b776a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f918b776b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f918b776d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f918b781550>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_3
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f918b781550>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_3
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f918b781550>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_3
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f918b781550>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_3
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f918b781550>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_3
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_3.c
//-3.1415926535897927	-2.945243112740431	0.04298160682118851	6554929993.731958
//-2.945243112740431	-2.7488935718910685	0.049589525424524786	0.22031644818155027
//-2.7488935718910685	-2.5525440310417067	0.04737945895707969	0.1238084927384011
//-2.5525440310417067	-2.3561944901923444	0.023477601944521972	0.042258567052662115
//-2.3561944901923444	-2.1598449493429825	0.07118251262809257	0.08561048001618564
//-2.1598449493429825	-1.9634954084936205	0.1251943947909028	0.135509436442
//-1.9634954084936205	-1.7671458676442584	0.1744206895246994	0.17783779284798185
//-1.7671458676442584	-1.5707963267948963	0.21360268236232793	0.21360268236232802
//-1.5707963267948963	-1.3744467859455343	0.23893010391664482	0.24361102138320584
//-1.3744467859455343	-1.1780972450961722	0.24806950659723656	0.26850849907123153
//-1.1780972450961722	-0.9817477042468102	0.24808116127580593	0.288808976708969
//-0.9817477042468102	-0.7853981633974482	0.24013588789370108	0.30491667802280664
//-0.7853981633974482	-0.5890486225480861	0.2156086507268016	0.3171428561001606
//-0.5890486225480861	-0.3926990816987241	0.17619513046406826	0.32571813315708636
//-0.3926990816987241	-0.19634954084936204	0.12464693318010307	0.3308013565834933
//-0.19634954084936204	0.0	0.06453614317924569	inf
//0.0	0.19634954084936204	0.06453614317924569	inf
//0.19634954084936204	0.3926990816987241	0.12464693318010307	0.3308013565834933
//0.3926990816987241	0.5890486225480861	0.17619513046406826	0.32571813315708636
//0.5890486225480861	0.7853981633974482	0.2156086507268016	0.3171428561001606
//0.7853981633974482	0.9817477042468102	0.24013588789370108	0.30491667802280664
//0.9817477042468102	1.1780972450961722	0.24808116127580593	0.288808976708969
//1.1780972450961722	1.3744467859455343	0.24806950659723656	0.26850849907123153
//1.3744467859455343	1.5707963267948963	0.23893010391664482	0.24361102138320584
//1.5707963267948963	1.7671458676442584	0.21360268236232793	0.21360268236232802
//1.7671458676442584	1.9634954084936205	0.1744206895246994	0.17783779284798185
//1.9634954084936205	2.1598449493429825	0.1251943947909028	0.135509436442
//2.1598449493429825	2.3561944901923444	0.07118251262809257	0.08561048001618564
//2.3561944901923444	2.5525440310417067	0.023477601944521972	0.042258567052662115
//2.5525440310417067	2.7488935718910685	0.04737945895707969	0.1238084927384011
//2.7488935718910685	2.945243112740431	0.049589525424524786	0.22031644818155027
//2.945243112740431	3.1415926535897927	0.04298160682118851	6554929993.731958
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_3",
//spec:     "delta": 0.24808116127580593,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 0.042258567052662115,
//spec:     "operation": "sin"
//spec: }
