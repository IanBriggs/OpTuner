/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_15.c \
 *     --poly-degree 15 --fname ml2_raw_wide_sin_15 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_15(double);
double ml2_raw_wide_sin_15(double x){
    double x2_;
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
    pm_13 = x2_ * -0x1.6bc3b0e47159fp-41;
    pa_13 = 0x1.5c60a65d40ce2p-33 + pm_13;
    pm_11 = x2_ * pa_13;
    pa_11 = -0x1.ae06e8c6705adp-26 + pm_11;
    pm_9 = x2_ * pa_11;
    pa_9 = 0x1.71da29476dbf2p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.a019cf06d1f2fp-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.11110fd148c53p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.55555548c3bf6p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ffffffffa801cp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f15d9cc8eb0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f15d9cd01c0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f15d9cd0280> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f15d9cd0460> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f15d9cd7d60>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_15
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f15d9cd7d60>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_15
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f15d9cd7d60>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_15
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f15d9cd7d60>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_15
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f15d9cd7d60>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_15
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_15.c
//-3.149405153589793	-3.148916872339793	1.9980268158361847e-13	2.56051908723775e-11
//-3.148916872339793	-3.148428591089793	1.789684851567276e-13	2.4470103895290156e-11
//-3.148428591089793	-3.147940309839793	1.5935073226449077e-13	2.3351271206392215e-11
//-3.147940309839793	-3.147452028589793	1.4092985095905175e-13	2.224952598041788e-11
//-3.147452028589793	-3.146963747339793	1.2368515415440416e-13	2.1165809038512648e-11
//-3.146963747339793	-3.146475466089793	1.0759622654466752e-13	2.0101560646568236e-11
//-3.146475466089793	-3.145987184839793	9.264385752704223e-14	1.9059295513562593e-11
//-3.145987184839793	-3.145498903589793	7.880799312942793e-14	1.8042778289904992e-11
//-3.145498903589793	-3.145010622339793	6.606909994268975e-14	1.705862256578621e-11
//-3.145010622339793	-3.144522341089793	5.440781905755675e-14	1.6119195369533716e-11
//-3.144522341089793	-3.144034059839793	4.380475500613709e-14	1.5250354265971945e-11
//-3.144034059839793	-3.143545778589793	3.4241335708034615e-14	1.451746485478757e-11
//-3.143545778589793	-3.143057497339793	2.569834242105134e-14	1.4142521568899787e-11
//-3.143057497339793	-3.142569216089793	1.8157459696460436e-14	1.569409477283562e-11
//-3.142569216089793	-3.142080934839793	1.1599923338834512e-14	inf
//-3.142080934839793	-3.141592653589793	6.007550370413779e-15	inf
//-3.1415926535897927	-2.945243112740431	4.800366221061575e-12	inf
//-2.945243112740431	-2.7488935718910685	1.1313234172274872e-11	inf
//-2.7488935718910685	-2.5525440310417067	2.1146181883607887e-11	3.806497699826059e-11
//-2.5525440310417067	-2.3561944901923444	2.3843588983026945e-11	3.9859286018524484e-11
//-2.3561944901923444	-2.1598449493429825	2.319578612365944e-11	2.7897796084181256e-11
//-2.1598449493429825	-1.9634954084936205	3.5835415588816556e-11	3.974700127380279e-11
//-1.9634954084936205	-1.7671458676442584	3.447947611584199e-11	3.732041790429738e-11
//-1.7671458676442584	-1.5707963267948963	3.0143685991927765e-11	3.014376622962776e-11
//-1.5707963267948963	-1.3744467859455343	3.971708762419557e-11	4.013345536232666e-11
//-1.3744467859455343	-1.1780972450961722	3.827458550675139e-11	3.90244904765319e-11
//-1.1780972450961722	-0.9817477042468102	1.5420196099017022e-11	1.8545745459888567e-11
//-0.9817477042468102	-0.7853981633974482	2.776606646425368e-11	3.9267073052689596e-11
//-0.7853981633974482	-0.5890486225480861	2.7765979673063375e-11	4.025494962417597e-11
//-0.5890486225480861	-0.3926990816987241	1.8051604339918238e-11	3.249216342683498e-11
//-0.3926990816987241	-0.19634954084936204	5.258649533402827e-12	2.6928881413132715e-11
//-0.19634954084936204	0.0	5.253522133826003e-12	inf
//0.0	0.19634954084936204	5.253522133826003e-12	inf
//0.19634954084936204	0.3926990816987241	5.258649533402827e-12	2.6928881413132715e-11
//0.3926990816987241	0.5890486225480861	1.8051604339918238e-11	3.249216342683498e-11
//0.5890486225480861	0.7853981633974482	2.7765979673063375e-11	4.025494962417597e-11
//0.7853981633974482	0.9817477042468102	2.776606646425368e-11	3.9267073052689596e-11
//0.9817477042468102	1.1780972450961722	1.5420196099017022e-11	1.8545745459888567e-11
//1.1780972450961722	1.3744467859455343	3.827458550675139e-11	3.90244904765319e-11
//1.3744467859455343	1.5707963267948963	3.971708762419557e-11	4.013345536232666e-11
//1.5707963267948963	1.7671458676442584	3.0143685991927765e-11	3.014376622962776e-11
//1.7671458676442584	1.9634954084936205	3.447947611584199e-11	3.732041790429738e-11
//1.9634954084936205	2.1598449493429825	3.5835415588816556e-11	3.974700127380279e-11
//2.1598449493429825	2.3561944901923444	2.319578612365944e-11	2.7897796084181256e-11
//2.3561944901923444	2.5525440310417067	2.3843588983026945e-11	3.9859286018524484e-11
//2.5525440310417067	2.7488935718910685	2.1146181883607887e-11	3.806497699826059e-11
//2.7488935718910685	2.945243112740431	1.1313234172274872e-11	inf
//2.945243112740431	3.1415926535897927	4.800366221061575e-12	inf
//3.141592653589793	3.142080934839793	6.007550370413779e-15	inf
//3.142080934839793	3.142569216089793	1.1599923338834512e-14	inf
//3.142569216089793	3.143057497339793	1.8157459696460436e-14	1.569409477283562e-11
//3.143057497339793	3.143545778589793	2.569834242105134e-14	1.4142521568899787e-11
//3.143545778589793	3.144034059839793	3.4241335708034615e-14	1.451746485478757e-11
//3.144034059839793	3.144522341089793	4.380475500613709e-14	1.5250354265971945e-11
//3.144522341089793	3.145010622339793	5.440781905755675e-14	1.6119195369533716e-11
//3.145010622339793	3.145498903589793	6.606909994268975e-14	1.705862256578621e-11
//3.145498903589793	3.145987184839793	7.880799312942793e-14	1.8042778289904992e-11
//3.145987184839793	3.146475466089793	9.264385752704223e-14	1.9059295513562593e-11
//3.146475466089793	3.146963747339793	1.0759622654466752e-13	2.0101560646568236e-11
//3.146963747339793	3.147452028589793	1.2368515415440416e-13	2.1165809038512648e-11
//3.147452028589793	3.147940309839793	1.4092985095905175e-13	2.224952598041788e-11
//3.147940309839793	3.148428591089793	1.5935073226449077e-13	2.3351271206392215e-11
//3.148428591089793	3.148916872339793	1.789684851567276e-13	2.4470103895290156e-11
//3.148916872339793	3.149405153589793	1.9980268158361847e-13	2.56051908723775e-11
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_15",
//spec:     "delta": 3.971708762419557e-11,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 1.4142521568899787e-11,
//spec:     "operation": "sin"
//spec: }
