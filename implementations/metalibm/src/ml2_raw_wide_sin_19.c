/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_19.c \
 *     --poly-degree 19 --fname ml2_raw_wide_sin_19 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_19(double);
double ml2_raw_wide_sin_19(double x){
    double x2_;
    double pm_17;
    double pa_17;
    double pm_15;
    double pa_15;
    double pm_13;
    double pa_13;
    double pm_11;
    double pa_11;
    double pm_9;
    double pa_9;
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
    pm_17 = x2_ * -0x1.09b750883af05p-57;
    pa_17 = 0x1.91c38827cb3b2p-49 + pm_17;
    pm_15 = x2_ * pa_17;
    pa_15 = -0x1.ae527c3b57dcp-41 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.6122f8a6ee594p-33 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = -0x1.ae64483c27062p-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71de39fbff7d4p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a01a019d88c44p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.11111111073a6p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.5555555555183p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fffffffffffeep-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fe131dc1eb0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fe131dc81c0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fe131dc8280> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fe131dc8460> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe131dd2340>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_19
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe131dd2340>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_19
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe131dd2340>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_19
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe131dd2340>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_19
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fe131dd2340>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_19
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_19.c
//-3.149405153589793	-3.148916872339793	1.3827816479116693e-15	2.0718556351959294e-13
//-3.148916872339793	-3.148428591089793	1.3809170679428132e-15	2.2326457290794296e-13
//-3.148428591089793	-3.147940309839793	1.3787187216396455e-15	2.4204254714627713e-13
//-3.147940309839793	-3.147452028589793	1.3770510568193471e-15	2.6444506825532835e-13
//-3.147452028589793	-3.146963747339793	1.3754795571650888e-15	2.9150531839379284e-13
//-3.146963747339793	-3.146475466089793	1.373659741886997e-15	3.2475517985751047e-13
//-3.146475466089793	-3.145987184839793	1.3722711653854969e-15	3.668006350786487e-13
//-3.145987184839793	-3.145498903589793	1.3709704169170188e-15	4.2149726662489077e-13
//-3.145498903589793	-3.145010622339793	1.3697551202620565e-15	4.955489571986275e-13
//-3.145010622339793	-3.144522341089793	1.368623933395562e-15	6.014128896361535e-13
//-3.144522341089793	-3.144034059839793	1.3673565481596652e-15	7.650360469068668e-13
//-3.144034059839793	-3.143545778589793	1.3663836899387064e-15	1.0518733121124729e-12
//-3.143545778589793	-3.143057497339793	1.3653181173365676e-15	1.6840106684861918e-12
//-3.143057497339793	-3.142569216089793	1.3644966218562913e-15	4.23012249939197e-12
//-3.142569216089793	-3.142080934839793	1.3636390275819711e-15	inf
//-3.142080934839793	-3.141592653589793	1.3628741908629054e-15	inf
//-3.1415926535897927	-2.945243112740431	1.947915385905046e-15	inf
//-2.945243112740431	-2.7488935718910685	1.9499052427095864e-15	inf
//-2.7488935718910685	-2.5525440310417067	1.536543395914918e-15	6.039502514648693e-15
//-2.5525440310417067	-2.3561944901923444	2.016806609468711e-15	4.0302949546227645e-15
//-2.3561944901923444	-2.1598449493429825	1.9429755269348067e-15	2.7981130551648473e-15
//-2.1598449493429825	-1.9634954084936205	2.304984607752816e-15	2.869690204772099e-15
//-1.9634954084936205	-1.7671458676442584	1.693942499046619e-15	1.8649493905437013e-15
//-1.7671458676442584	-1.5707963267948963	2.3720079328948166e-15	2.4544225644795246e-15
//-1.5707963267948963	-1.3744467859455343	2.235532514802048e-15	2.2991715148020483e-15
//-1.3744467859455343	-1.1780972450961722	1.6587735556078158e-15	1.8358046908395163e-15
//-1.1780972450961722	-0.9817477042468102	1.7340051162961206e-15	1.992805050144934e-15
//-0.9817477042468102	-0.7853981633974482	1.12227079221395e-15	1.4068205111686013e-15
//-0.7853981633974482	-0.5890486225480861	1.0866458603695989e-15	1.943997135946164e-15
//-0.5890486225480861	-0.3926990816987241	1.0552951496025538e-15	2.03758383264242e-15
//-0.3926990816987241	-0.19634954084936204	3.828910412673263e-16	1.4731701481795287e-15
//-0.19634954084936204	0.0	2.550468672234382e-16	inf
//0.0	0.19634954084936204	2.550468672234382e-16	inf
//0.19634954084936204	0.3926990816987241	3.828910412673263e-16	1.4731701481795287e-15
//0.3926990816987241	0.5890486225480861	1.0552951496025538e-15	2.03758383264242e-15
//0.5890486225480861	0.7853981633974482	1.0866458603695989e-15	1.943997135946164e-15
//0.7853981633974482	0.9817477042468102	1.12227079221395e-15	1.4068205111686013e-15
//0.9817477042468102	1.1780972450961722	1.7340051162961206e-15	1.992805050144934e-15
//1.1780972450961722	1.3744467859455343	1.6587735556078158e-15	1.8358046908395163e-15
//1.3744467859455343	1.5707963267948963	2.235532514802048e-15	2.2991715148020483e-15
//1.5707963267948963	1.7671458676442584	2.3720079328948166e-15	2.4544225644795246e-15
//1.7671458676442584	1.9634954084936205	1.693942499046619e-15	1.8649493905437013e-15
//1.9634954084936205	2.1598449493429825	2.304984607752816e-15	2.869690204772099e-15
//2.1598449493429825	2.3561944901923444	1.9429755269348067e-15	2.7981130551648473e-15
//2.3561944901923444	2.5525440310417067	2.016806609468711e-15	4.0302949546227645e-15
//2.5525440310417067	2.7488935718910685	1.536543395914918e-15	6.039502514648693e-15
//2.7488935718910685	2.945243112740431	1.9499052427095864e-15	inf
//2.945243112740431	3.1415926535897927	1.947915385905046e-15	inf
//3.141592653589793	3.142080934839793	1.3628741908629054e-15	inf
//3.142080934839793	3.142569216089793	1.3636390275819711e-15	inf
//3.142569216089793	3.143057497339793	1.3644966218562913e-15	4.23012249939197e-12
//3.143057497339793	3.143545778589793	1.3653181173365676e-15	1.6840106684861918e-12
//3.143545778589793	3.144034059839793	1.3663836899387064e-15	1.0518733121124729e-12
//3.144034059839793	3.144522341089793	1.3673565481596652e-15	7.650360469068668e-13
//3.144522341089793	3.145010622339793	1.368623933395562e-15	6.014128896361535e-13
//3.145010622339793	3.145498903589793	1.3697551202620565e-15	4.955489571986275e-13
//3.145498903589793	3.145987184839793	1.3709704169170188e-15	4.2149726662489077e-13
//3.145987184839793	3.146475466089793	1.3722711653854969e-15	3.668006350786487e-13
//3.146475466089793	3.146963747339793	1.373659741886997e-15	3.2475517985751047e-13
//3.146963747339793	3.147452028589793	1.3754795571650888e-15	2.9150531839379284e-13
//3.147452028589793	3.147940309839793	1.3770510568193471e-15	2.6444506825532835e-13
//3.147940309839793	3.148428591089793	1.3787187216396455e-15	2.4204254714627713e-13
//3.148428591089793	3.148916872339793	1.3809170679428132e-15	2.2326457290794296e-13
//3.148916872339793	3.149405153589793	1.3827816479116693e-15	2.0718556351959294e-13
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_19",
//spec:     "delta": 2.3720079328948166e-15,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 1.4068205111686013e-15,
//spec:     "operation": "sin"
//spec: }
