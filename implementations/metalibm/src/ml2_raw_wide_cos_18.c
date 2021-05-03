/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_cos.py --output src/ml2_raw_wide_cos_18.c \
 *     --poly-degree 18 --fname ml2_raw_wide_cos_18 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_cos_18(double);
double ml2_raw_wide_cos_18(double x){
    double x2_;
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
    pm_16 = x2_ * -0x1.3c095fc06844p-53;
    pa_16 = 0x1.aaf62a835cbd4p-45 + pm_16;
    pm_14 = x2_ * pa_16;
    pa_14 = -0x1.936edbe6ab251p-37 + pm_14;
    pm_12 = x2_ * pa_14;
    pa_12 = 0x1.1eec76da6a895p-29 + pm_12;
    pm_10 = x2_ * pa_12;
    pa_10 = -0x1.27e4f2097d1fep-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a01a013bf3eecp-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c16c169a33acp-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.5555555544ea4p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.ffffffffff464p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffffffffff9ep-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f818eeefeb0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f818eef71c0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f818eef7280> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f818eef7460> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//LSKDFKLJK 0.9999999999999891198143586734659038484096527099609375 * _x_^0 + -0.4999999999998350208585407017380930483341217041015625 * _x_^2 + 4.16666666662000306775581748297554440796375274658203125e-2 * _x_^4 + -1.388888888331533781606008659537110361270606517791748046875e-3 * _x_^6 + 2.4801586945787554533242313947738466595183126628398895263671875e-5 * _x_^8 + -2.755730582331565661159049167305834515673268469981849193572998046875e-7 * _x_^10 + 2.087644596436634814408197605172835820130927686477662064135074615478515625e-9 * _x_^12 + -1.146625672060169830649669835610741518323874021945130152744241058826446533203125e-11 * _x_^14 + 4.740225836285434720281255577583050765861673314649493704564520157873630523681640625e-14 * _x_^16 + -1.37059034826095691124923838889055920903345571482123688156207208521664142608642578125e-16 * _x_^18
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f818ef00250>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_18
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f818ef00250>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_18
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f818ef00250>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_18
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f818ef00250>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_18
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f818ef00250>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_18
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_18.c
//-3.149405153589793	-3.148916872339793	1.9608692119627427e-14	1.961041558458328e-14
//-3.148916872339793	-3.148428591089793	1.929738022445599e-14	1.929902212172711e-14
//-3.148428591089793	-3.147940309839793	1.898502337080019e-14	1.8986591226900647e-14
//-3.147940309839793	-3.147452028589793	1.8671678068462113e-14	1.8673176198775638e-14
//-3.147452028589793	-3.146963747339793	1.8357397166020225e-14	1.8358834672642145e-14
//-3.146963747339793	-3.146475466089793	1.804223685580176e-14	1.8043617625522036e-14
//-3.146475466089793	-3.145987184839793	1.7726249678827236e-14	1.7727580381252128e-14
//-3.145987184839793	-3.145498903589793	1.7409488529727216e-14	1.7410775615537184e-14
//-3.145498903589793	-3.145010622339793	1.7092005661631457e-14	1.709325436097287e-14
//-3.145010622339793	-3.144522341089793	1.6773852691030564e-14	1.6775069012038866e-14
//-3.144522341089793	-3.144034059839793	1.6455081602610242e-14	1.6456269330062223e-14
//-3.144034059839793	-3.143545778589793	1.6135741754058326e-14	1.6136905448151195e-14
//-3.143545778589793	-3.143057497339793	1.5815882880844657e-14	1.5817027876099576e-14
//-3.143057497339793	-3.142569216089793	1.549555410097396e-14	1.5496685505261832e-14
//-3.142569216089793	-3.142080934839793	1.517480391971183e-14	1.5175925613399026e-14
//-3.142080934839793	-3.141592653589793	1.4853680234283924e-14	1.485479586949582e-14
//-3.1415926535897927	-2.945243112740431	2.540954983446469e-14	2.6372472530217978e-14
//-2.945243112740431	-2.7488935718910685	2.5868248147061193e-14	2.8102013284275177e-14
//-2.7488935718910685	-2.5525440310417067	1.9120402925736513e-14	2.147098165829247e-14
//-2.5525440310417067	-2.3561944901923444	1.901170764011445e-14	2.4557478029956934e-14
//-2.3561944901923444	-2.1598449493429825	9.961154121469805e-15	1.8506591427883235e-14
//-2.1598449493429825	-1.9634954084936205	1.0620615251738578e-14	2.2653328749673076e-14
//-1.9634954084936205	-1.7671458676442584	5.556555739764516e-15	1.8203180275139805e-14
//-1.7671458676442584	-1.5707963267948963	3.041258709405851e-15	inf
//-1.5707963267948963	-1.3744467859455343	1.7834414781885566e-15	inf
//-1.3744467859455343	-1.1780972450961722	3.939613064700986e-15	1.1519277331417555e-14
//-1.1780972450961722	-0.9817477042468102	4.837710460680187e-15	1.0816527315998858e-14
//-0.9817477042468102	-0.7853981633974482	3.843148875935467e-15	6.926070348481961e-15
//-0.7853981633974482	-0.5890486225480861	9.102846999143347e-15	1.0986391429876867e-14
//-0.5890486225480861	-0.3926990816987241	9.220956332219251e-15	1.0923226072102313e-14
//-0.3926990816987241	-0.19634954084936204	5.403109232961912e-15	5.848356671882897e-15
//-0.19634954084936204	0.0	1.0942970571326535e-14	1.0944204641326535e-14
//0.0	0.19634954084936204	1.0942970571326535e-14	1.0944204641326535e-14
//0.19634954084936204	0.3926990816987241	5.403109232961912e-15	5.848356671882897e-15
//0.3926990816987241	0.5890486225480861	9.220956332219251e-15	1.0923226072102313e-14
//0.5890486225480861	0.7853981633974482	9.102846999143347e-15	1.0986391429876867e-14
//0.7853981633974482	0.9817477042468102	3.843148875935467e-15	6.926070348481961e-15
//0.9817477042468102	1.1780972450961722	4.837710460680187e-15	1.0816527315998858e-14
//1.1780972450961722	1.3744467859455343	3.939613064700986e-15	1.1519277331417555e-14
//1.3744467859455343	1.5707963267948963	1.7834414781885566e-15	inf
//1.5707963267948963	1.7671458676442584	3.041258709405851e-15	inf
//1.7671458676442584	1.9634954084936205	5.556555739764516e-15	1.8203180275139805e-14
//1.9634954084936205	2.1598449493429825	1.0620615251738578e-14	2.2653328749673076e-14
//2.1598449493429825	2.3561944901923444	9.961154121469805e-15	1.8506591427883235e-14
//2.3561944901923444	2.5525440310417067	1.901170764011445e-14	2.4557478029956934e-14
//2.5525440310417067	2.7488935718910685	1.9120402925736513e-14	2.147098165829247e-14
//2.7488935718910685	2.945243112740431	2.5868248147061193e-14	2.8102013284275177e-14
//2.945243112740431	3.1415926535897927	2.540954983446469e-14	2.6372472530217978e-14
//3.141592653589793	3.142080934839793	1.4853680234283924e-14	1.485479586949582e-14
//3.142080934839793	3.142569216089793	1.517480391971183e-14	1.5175925613399026e-14
//3.142569216089793	3.143057497339793	1.549555410097396e-14	1.5496685505261832e-14
//3.143057497339793	3.143545778589793	1.5815882880844657e-14	1.5817027876099576e-14
//3.143545778589793	3.144034059839793	1.6135741754058326e-14	1.6136905448151195e-14
//3.144034059839793	3.144522341089793	1.6455081602610242e-14	1.6456269330062223e-14
//3.144522341089793	3.145010622339793	1.6773852691030564e-14	1.6775069012038866e-14
//3.145010622339793	3.145498903589793	1.7092005661631457e-14	1.709325436097287e-14
//3.145498903589793	3.145987184839793	1.7409488529727216e-14	1.7410775615537184e-14
//3.145987184839793	3.146475466089793	1.7726249678827236e-14	1.7727580381252128e-14
//3.146475466089793	3.146963747339793	1.804223685580176e-14	1.8043617625522036e-14
//3.146963747339793	3.147452028589793	1.8357397166020225e-14	1.8358834672642145e-14
//3.147452028589793	3.147940309839793	1.8671678068462113e-14	1.8673176198775638e-14
//3.147940309839793	3.148428591089793	1.898502337080019e-14	1.8986591226900647e-14
//3.148428591089793	3.148916872339793	1.929738022445599e-14	1.929902212172711e-14
//3.148916872339793	3.149405153589793	1.9608692119627427e-14	1.961041558458328e-14
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_18",
//spec:     "delta": 2.5868248147061193e-14,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 5.848356671882897e-15,
//spec:     "operation": "cos"
//spec: }
