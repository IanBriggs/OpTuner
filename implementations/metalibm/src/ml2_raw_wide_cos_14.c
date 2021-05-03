/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_cos.py --output src/ml2_raw_wide_cos_14.c \
 *     --poly-degree 14 --fname ml2_raw_wide_cos_14 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_cos_14(double);
double ml2_raw_wide_cos_14(double x){
    double x2_;
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
    pm_12 = x2_ * -0x1.5773ba55d5b1bp-37;
    pa_12 = 0x1.1b579b9ec0e95p-29 + pm_12;
    pm_10 = x2_ * pa_12;
    pa_10 = -0x1.27ab092054135p-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a015e31a70b9cp-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c169787b2bc1p-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.5555539a6fd42p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.ffffffe0f4ca7p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffffffe48ccdp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f0804d73eb0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f0804d7b1c0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f0804d7b280> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f0804d7b460> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//LSKDFKLJK 0.99999999980027498569512545145698823034763336181640625 * _x_^0 + -0.499999998193013828196029635364538989961147308349609375 * _x_^2 + 4.166666344417048473136588881970965303480625152587890625e-2 * _x_^4 + -1.38888645044475699842634330849477919400669634342193603515625e-3 * _x_^6 + 2.4800628219311471127882240406137270838371478021144866943359375e-5 * _x_^8 + -2.7536238357985907606394313136555229704072189633734524250030517578125e-7 * _x_^10 + 2.061585970839618254655718301870427622279891011203289963304996490478515625e-9 * _x_^12 + -9.76149470946310668313966042271959447883256100197968407883308827877044677734375e-12 * _x_^14
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0804d82c70>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_14
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0804d82c70>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_14
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0804d82c70>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_14
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0804d82c70>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_14
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f0804d82c70>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_14
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_14.c
//-3.149405153589793	-3.148916872339793	1.9972225909688787e-10	1.9972835541658207e-10
//-3.148916872339793	-3.148428591089793	1.92628700306076e-10	1.926338682502181e-10
//-3.148428591089793	-3.147940309839793	1.856196966331303e-10	1.8562403484890314e-10
//-3.147940309839793	-3.147452028589793	1.7869464177906322e-10	1.7869824301082029e-10
//-3.147452028589793	-3.146963747339793	1.7185293253760088e-10	1.7185588375228222e-10
//-3.146963747339793	-3.146475466089793	1.6509396877910259e-10	1.6509635129814926e-10
//-3.146475466089793	-3.145987184839793	1.5841715344551773e-10	1.5841904306429683e-10
//-3.145987184839793	-3.145498903589793	1.5182189253138044e-10	1.5182335964813184e-10
//-3.145498903589793	-3.145010622339793	1.453075950768414e-10	1.4530870481115796e-10
//-3.145010622339793	-3.144522341089793	1.38873673150737e-10	1.388744854695897e-10
//-3.144522341089793	-3.144034059839793	1.3251954184569577e-10	1.3252011167701499e-10
//-3.144034059839793	-3.143545778589793	1.2624461925828172e-10	1.2624499661410616e-10
//-3.143545778589793	-3.143057497339793	1.2004832648517503e-10	1.200485565753792e-10
//-3.143057497339793	-3.142569216089793	1.1393008760538913e-10	1.1393021095400099e-10
//-3.142569216089793	-3.142080934839793	1.0788932966852518e-10	1.0788938222764476e-10
//-3.142080934839793	-3.141592653589793	1.0192548268806276e-10	1.0192549595239286e-10
//-3.1415926535897927	-2.945243112740431	1.9937220218467774e-10	1.9972915022121736e-10
//-2.945243112740431	-2.7488935718910685	1.9285496138852195e-10	1.9972944991356322e-10
//-2.7488935718910685	-2.5525440310417067	1.6438800387987655e-10	1.9770838991005124e-10
//-2.5525440310417067	-2.3561944901923444	1.6464020792929108e-10	1.9972656376397833e-10
//-2.3561944901923444	-2.1598449493429825	8.99946702833394e-11	1.6198670391443293e-10
//-2.1598449493429825	-1.9634954084936205	9.723835336885665e-11	1.9972756838970028e-10
//-1.9634954084936205	-1.7671458676442584	6.661864479311422e-11	1.7408659131326655e-10
//-1.7671458676442584	-1.5707963267948963	9.53471278338209e-12	inf
//-1.5707963267948963	-1.3744467859455343	3.658400352343691e-11	inf
//-1.3744467859455343	-1.1780972450961722	4.0884221550234306e-11	1.875231837594052e-10
//-1.1780972450961722	-0.9817477042468102	5.965271133511967e-11	1.0737236628291093e-10
//-0.9817477042468102	-0.7853981633974482	1.3966669270395091e-10	1.975186134984933e-10
//-0.7853981633974482	-0.5890486225480861	1.492086683745113e-10	1.99725313281573e-10
//-0.5890486225480861	-0.3926990816987241	1.2826896846569176e-10	1.5426777718029557e-10
//-0.3926990816987241	-0.19634954084936204	1.347122146417192e-10	1.3735138834071706e-10
//-0.19634954084936204	0.0	1.9972507708980456e-10	1.9972507832387454e-10
//0.0	0.19634954084936204	1.9972507708980456e-10	1.9972507832387454e-10
//0.19634954084936204	0.3926990816987241	1.347122146417192e-10	1.3735138834071706e-10
//0.3926990816987241	0.5890486225480861	1.2826896846569176e-10	1.5426777718029557e-10
//0.5890486225480861	0.7853981633974482	1.492086683745113e-10	1.99725313281573e-10
//0.7853981633974482	0.9817477042468102	1.3966669270395091e-10	1.975186134984933e-10
//0.9817477042468102	1.1780972450961722	5.965271133511967e-11	1.0737236628291093e-10
//1.1780972450961722	1.3744467859455343	4.0884221550234306e-11	1.875231837594052e-10
//1.3744467859455343	1.5707963267948963	3.658400352343691e-11	inf
//1.5707963267948963	1.7671458676442584	9.53471278338209e-12	inf
//1.7671458676442584	1.9634954084936205	6.661864479311422e-11	1.7408659131326655e-10
//1.9634954084936205	2.1598449493429825	9.723835336885665e-11	1.9972756838970028e-10
//2.1598449493429825	2.3561944901923444	8.99946702833394e-11	1.6198670391443293e-10
//2.3561944901923444	2.5525440310417067	1.6464020792929108e-10	1.9972656376397833e-10
//2.5525440310417067	2.7488935718910685	1.6438800387987655e-10	1.9770838991005124e-10
//2.7488935718910685	2.945243112740431	1.9285496138852195e-10	1.9972944991356322e-10
//2.945243112740431	3.1415926535897927	1.9937220218467774e-10	1.9972915022121736e-10
//3.141592653589793	3.142080934839793	1.0192548268806276e-10	1.0192549595239286e-10
//3.142080934839793	3.142569216089793	1.0788932966852518e-10	1.0788938222764476e-10
//3.142569216089793	3.143057497339793	1.1393008760538913e-10	1.1393021095400099e-10
//3.143057497339793	3.143545778589793	1.2004832648517503e-10	1.200485565753792e-10
//3.143545778589793	3.144034059839793	1.2624461925828172e-10	1.2624499661410616e-10
//3.144034059839793	3.144522341089793	1.3251954184569577e-10	1.3252011167701499e-10
//3.144522341089793	3.145010622339793	1.38873673150737e-10	1.388744854695897e-10
//3.145010622339793	3.145498903589793	1.453075950768414e-10	1.4530870481115796e-10
//3.145498903589793	3.145987184839793	1.5182189253138044e-10	1.5182335964813184e-10
//3.145987184839793	3.146475466089793	1.5841715344551773e-10	1.5841904306429683e-10
//3.146475466089793	3.146963747339793	1.6509396877910259e-10	1.6509635129814926e-10
//3.146963747339793	3.147452028589793	1.7185293253760088e-10	1.7185588375228222e-10
//3.147452028589793	3.147940309839793	1.7869464177906322e-10	1.7869824301082029e-10
//3.147940309839793	3.148428591089793	1.856196966331303e-10	1.8562403484890314e-10
//3.148428591089793	3.148916872339793	1.92628700306076e-10	1.926338682502181e-10
//3.148916872339793	3.149405153589793	1.9972225909688787e-10	1.9972835541658207e-10
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_14",
//spec:     "delta": 1.9972507708980456e-10,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 1.0192549595239286e-10,
//spec:     "operation": "cos"
//spec: }
