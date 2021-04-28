/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_cos.py --output src/ml2_raw_wide_cos_20.c \
 *     --poly-degree 20 --fname ml2_raw_wide_cos_20 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_cos_20(double);
double ml2_raw_wide_cos_20(double x){
    double x2_;
    double pm_18;
    double pa_18;
    double pm_16;
    double pa_16;
    double pm_14;
    double pa_14;
    double pm_12;
    double pa_12;
    double pm_10;
    double pa_10;
    double pm_8;
    double pa_8;
    double pm_6;
    double pa_6;
    double pm_4;
    double pa_4;
    double pm_2;
    double pa_2;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    pm_18 = x2_ * -0x1.b341b0d4b59d4p-62;
    pa_18 = -0x1.20cebb64a7e2fp-53 + pm_18;
    pm_16 = x2_ * pa_18;
    pa_16 = 0x1.a9dc45dc02349p-45 + pm_16;
    pm_14 = x2_ * pa_16;
    pa_14 = -0x1.936e1396ee7a4p-37 + pm_14;
    pm_12 = x2_ * pa_14;
    pa_12 = 0x1.1eecbc5b13795p-29 + pm_12;
    pm_10 = x2_ * pa_12;
    pa_10 = -0x1.27e4f698d5753p-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a01a018000416p-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c16c16baad21p-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.5555555554179p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.fffffffffffbp-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffffffffffffp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f243277e760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f243277ea30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f243277eaf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f243277ecd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//LSKDFKLJK 0.99999999999999988897769753748434595763683319091796875 * _x_^0 + -0.49999999999999555910790149937383830547332763671875 * _x_^2 + 4.1666666666631387017094567681851913221180438995361328125e-2 * _x_^4 + -1.38888888879302335212229113636794863850809633731842041015625e-3 * _x_^6 + 2.48015871875430972555952313651772556113428436219692230224609375e-5 * _x_^8 + -2.7557312303382427372784656098569922022534228744916617870330810546875e-7 * _x_^10 + 2.087652312772847216299700276475638516249233589405776001513004302978515625e-9 * _x_^12 + -1.1466169849348198759045842000340730167107228254508299869485199451446533203125e-11 * _x_^14 + 4.72800066841894827894273921396270831386224493819714354003735934384167194366455078125e-14 * _x_^16 + -1.25250307908686877865811448166829218914804794783417196679664584735292010009288787841796875e-16 * _x_^18 + -3.686766845006508145097336675858567485806079968389402552741973551064802450127899646759033203125e-19 * _x_^20
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f243278cd90>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_20
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f243278cd90>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_20
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f243278cd90>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_20
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f243278cd90>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_20
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f243278cd90>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_20
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_20.c
//-3.1415926535897927	-2.945243112740431	1.8145326948110045e-13	1.8230475348110045e-13
//-2.945243112740431	-2.7488935718910685	1.2452244567630872e-13	1.2899494355211053e-13
//-2.7488935718910685	-2.5525440310417067	7.05229831165339e-14	8.20168608928869e-14
//-2.5525440310417067	-2.3561944901923444	5.6635173963246425e-14	6.892666978729254e-14
//-2.3561944901923444	-2.1598449493429825	3.193170618434249e-14	5.154445297195302e-14
//-2.1598449493429825	-1.9634954084936205	2.3607597040501413e-14	4.426161055724361e-14
//-1.9634954084936205	-1.7671458676442584	1.175458858085576e-14	5.4326587736040195e-14
//-1.7671458676442584	-1.5707963267948963	1.0088087002408747e-14	inf
//-1.5707963267948963	-1.3744467859455343	3.745763424731473e-15	inf
//-1.3744467859455343	-1.1780972450961722	3.547904032162324e-15	1.8582648128233696e-14
//-1.1780972450961722	-0.9817477042468102	1.1294194428448575e-15	2.61471815381666e-15
//-0.9817477042468102	-0.7853981633974482	9.948817081260016e-16	1.7959329442520134e-15
//-0.7853981633974482	-0.5890486225480861	4.01966625499771e-16	5.70811857022096e-16
//-0.5890486225480861	-0.3926990816987241	2.8152248854508745e-16	3.3908596107249524e-16
//-0.3926990816987241	-0.19634954084936204	1.50551164596519e-16	1.60840279257469e-16
//-0.19634954084936204	0.0	1.7380723246251566e-16	1.7504130246251566e-16
//0.0	0.19634954084936204	1.7380723246251566e-16	1.7504130246251566e-16
//0.19634954084936204	0.3926990816987241	1.50551164596519e-16	1.60840279257469e-16
//0.3926990816987241	0.5890486225480861	2.8152248854508745e-16	3.3908596107249524e-16
//0.5890486225480861	0.7853981633974482	4.01966625499771e-16	5.70811857022096e-16
//0.7853981633974482	0.9817477042468102	9.948817081260016e-16	1.7959329442520134e-15
//0.9817477042468102	1.1780972450961722	1.1294194428448575e-15	2.61471815381666e-15
//1.1780972450961722	1.3744467859455343	3.547904032162324e-15	1.8582648128233696e-14
//1.3744467859455343	1.5707963267948963	3.745763424731473e-15	inf
//1.5707963267948963	1.7671458676442584	1.0088087002408747e-14	inf
//1.7671458676442584	1.9634954084936205	1.175458858085576e-14	5.4326587736040195e-14
//1.9634954084936205	2.1598449493429825	2.3607597040501413e-14	4.426161055724361e-14
//2.1598449493429825	2.3561944901923444	3.193170618434249e-14	5.154445297195302e-14
//2.3561944901923444	2.5525440310417067	5.6635173963246425e-14	6.892666978729254e-14
//2.5525440310417067	2.7488935718910685	7.05229831165339e-14	8.20168608928869e-14
//2.7488935718910685	2.945243112740431	1.2452244567630872e-13	1.2899494355211053e-13
//2.945243112740431	3.1415926535897927	1.8145326948110045e-13	1.8230475348110045e-13
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_20",
//spec:     "delta": 1.8145326948110045e-13,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 1.60840279257469e-16,
//spec:     "operation": "cos"
//spec: }
