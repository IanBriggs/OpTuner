/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_17.c \
 *     --poly-degree 17 --fname ml2_raw_wide_sin_17 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_17(double);
double ml2_raw_wide_sin_17(double x){
    double x2_;
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
    pm_15 = x2_ * 0x1.5d560670aa29dp-49;
    pa_15 = -0x1.a9f7818aa210bp-41 + pm_15;
    pm_13 = x2_ * pa_15;
    pa_13 = 0x1.60f068d1440bfp-33 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = -0x1.ae61921d04674p-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71de23bcdb73cp-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a01a00cc17782p-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.1111110d1129p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.55555555368dbp-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffffff5ccp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fd838e11eb0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fd838e191c0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fd838e19280> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fd838e19460> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd838e22070>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_17
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd838e22070>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_17
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd838e22070>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_17
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd838e22070>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_17
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd838e22070>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_17
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_17.c
//-3.149405153589793	-3.148916872339793	2.931307768520344e-15	4.0539885128321917e-13
//-3.148916872339793	-3.148428591089793	2.7533661777960357e-15	4.1065123660452936e-13
//-3.148428591089793	-3.147940309839793	2.5867846151206493e-15	4.187667982367269e-13
//-3.147940309839793	-3.147452028589793	2.4321808901759143e-15	4.3066967273733885e-13
//-3.147452028589793	-3.146963747339793	2.2888707175515307e-15	4.473915057545199e-13
//-3.146963747339793	-3.146475466089793	2.156265694531244e-15	4.704629519835084e-13
//-3.146475466089793	-3.145987184839793	2.0348072790037394e-15	5.024883751232513e-13
//-3.145987184839793	-3.145498903589793	1.92391076749781e-15	5.473221478331986e-13
//-3.145498903589793	-3.145010622339793	1.823339273341262e-15	6.116666516902674e-13
//-3.145010622339793	-3.144522341089793	1.7328587049430044e-15	7.079774771459726e-13
//-3.144522341089793	-3.144034059839793	1.6520177441977963e-15	8.622005234837266e-13
//-3.144034059839793	-3.143545778589793	1.5810228250131042e-15	1.1397889987763058e-12
//-3.143545778589793	-3.143057497339793	1.5192591119575401e-15	1.7628280198434832e-12
//-3.143057497339793	-3.142569216089793	1.4668424790303424e-15	4.299987312209827e-12
//-3.142569216089793	-3.142080934839793	1.4232734885513728e-15	inf
//-3.142080934839793	-3.141592653589793	1.3884643701710922e-15	inf
//-3.1415926535897927	-2.945243112740431	5.885534731413557e-14	inf
//-2.945243112740431	-2.7488935718910685	6.997899336725698e-14	inf
//-2.7488935718910685	-2.5525440310417067	1.4319185434469925e-13	3.0345507004453163e-13
//-2.5525440310417067	-2.3561944901923444	1.7054431981903354e-13	2.422107228518358e-13
//-2.3561944901923444	-2.1598449493429825	2.23946692304248e-13	2.925845441114692e-13
//-2.1598449493429825	-1.9634954084936205	1.6386709418226902e-13	1.972706354204629e-13
//-1.9634954084936205	-1.7671458676442584	2.871155382198081e-13	2.9494991449506393e-13
//-1.7671458676442584	-1.5707963267948963	2.8226567362010764e-13	2.878671299900907e-13
//-1.5707963267948963	-1.3744467859455343	2.2587286281741563e-13	2.303539820321241e-13
//-1.3744467859455343	-1.1780972450961722	2.80692164271715e-13	2.9534872345623144e-13
//-1.1780972450961722	-0.9817477042468102	2.534991251435844e-13	2.744572609910205e-13
//-0.9817477042468102	-0.7853981633974482	1.5256010102269558e-13	2.1577012471533054e-13
//-0.7853981633974482	-0.5890486225480861	1.7929244882849984e-13	2.910881140613883e-13
//-0.5890486225480861	-0.3926990816987241	1.566991279477898e-13	2.821850147283229e-13
//-0.3926990816987241	-0.19634954084936204	3.8297836158957255e-14	1.6704013286212517e-13
//-0.19634954084936204	0.0	3.3197925417607843e-14	inf
//0.0	0.19634954084936204	3.3197925417607843e-14	inf
//0.19634954084936204	0.3926990816987241	3.8297836158957255e-14	1.6704013286212517e-13
//0.3926990816987241	0.5890486225480861	1.566991279477898e-13	2.821850147283229e-13
//0.5890486225480861	0.7853981633974482	1.7929244882849984e-13	2.910881140613883e-13
//0.7853981633974482	0.9817477042468102	1.5256010102269558e-13	2.1577012471533054e-13
//0.9817477042468102	1.1780972450961722	2.534991251435844e-13	2.744572609910205e-13
//1.1780972450961722	1.3744467859455343	2.80692164271715e-13	2.9534872345623144e-13
//1.3744467859455343	1.5707963267948963	2.2587286281741563e-13	2.303539820321241e-13
//1.5707963267948963	1.7671458676442584	2.8226567362010764e-13	2.878671299900907e-13
//1.7671458676442584	1.9634954084936205	2.871155382198081e-13	2.9494991449506393e-13
//1.9634954084936205	2.1598449493429825	1.6386709418226902e-13	1.972706354204629e-13
//2.1598449493429825	2.3561944901923444	2.23946692304248e-13	2.925845441114692e-13
//2.3561944901923444	2.5525440310417067	1.7054431981903354e-13	2.422107228518358e-13
//2.5525440310417067	2.7488935718910685	1.4319185434469925e-13	3.0345507004453163e-13
//2.7488935718910685	2.945243112740431	6.997899336725698e-14	inf
//2.945243112740431	3.1415926535897927	5.885534731413557e-14	inf
//3.141592653589793	3.142080934839793	1.3884643701710922e-15	inf
//3.142080934839793	3.142569216089793	1.4232734885513728e-15	inf
//3.142569216089793	3.143057497339793	1.4668424790303424e-15	4.299987312209827e-12
//3.143057497339793	3.143545778589793	1.5192591119575401e-15	1.7628280198434832e-12
//3.143545778589793	3.144034059839793	1.5810228250131042e-15	1.1397889987763058e-12
//3.144034059839793	3.144522341089793	1.6520177441977963e-15	8.622005234837266e-13
//3.144522341089793	3.145010622339793	1.7328587049430044e-15	7.079774771459726e-13
//3.145010622339793	3.145498903589793	1.823339273341262e-15	6.116666516902674e-13
//3.145498903589793	3.145987184839793	1.92391076749781e-15	5.473221478331986e-13
//3.145987184839793	3.146475466089793	2.0348072790037394e-15	5.024883751232513e-13
//3.146475466089793	3.146963747339793	2.156265694531244e-15	4.704629519835084e-13
//3.146963747339793	3.147452028589793	2.2888707175515307e-15	4.473915057545199e-13
//3.147452028589793	3.147940309839793	2.4321808901759143e-15	4.3066967273733885e-13
//3.147940309839793	3.148428591089793	2.5867846151206493e-15	4.187667982367269e-13
//3.148428591089793	3.148916872339793	2.7533661777960357e-15	4.1065123660452936e-13
//3.148916872339793	3.149405153589793	2.931307768520344e-15	4.0539885128321917e-13
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_17",
//spec:     "delta": 2.871155382198081e-13,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 1.6704013286212517e-13,
//spec:     "operation": "sin"
//spec: }
