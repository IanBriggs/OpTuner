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
    pm_18 = x2_ * -0x1.e2dd9f70f0bb7p-62;
    pa_18 = -0x1.1cce477060b9ap-53 + pm_18;
    pm_16 = x2_ * pa_18;
    pa_16 = 0x1.a995febcb12e7p-45 + pm_16;
    pm_14 = x2_ * pa_16;
    pa_14 = -0x1.936b89f9ec93fp-37 + pm_14;
    pm_12 = x2_ * pa_14;
    pa_12 = 0x1.1eecaf12e11ffp-29 + pm_12;
    pm_10 = x2_ * pa_12;
    pa_10 = -0x1.27e4f649ef6ecp-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a01a017e06a2fp-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c16c16ba4bc3p-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.5555555554093p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.fffffffffffaep-2 + pm_2;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fc427967eb0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fc42796f1c0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fc42796f280> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fc42796f460> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//LSKDFKLJK 0.99999999999999988897769753748434595763683319091796875 * _x_^0 + -0.49999999999999544808559903685818426311016082763671875 * _x_^2 + 4.1666666666629791071496669019325054250657558441162109375e-2 * _x_^4 + -1.38888888878761838745201639966353468480519950389862060546875e-3 * _x_^6 + 2.480158718052622549856377209831492791636264882981777191162109375e-5 * _x_^8 + -2.75573118654075724980804899810760133505027624778449535369873046875e-7 * _x_^10 + 2.087650838172597907150264577645464025845711830697837285697460174560546875e-9 * _x_^12 + -1.146588812448330520075564862716736218122004498098931435379199683666229248046875e-11 * _x_^14 + 4.72495285374461672490016278160245765811958533475500843223926494829356670379638671875e-14 * _x_^16 + -1.2351481711210888845438059428226200555776492198863103499917315275524742901325225830078125e-16 * _x_^18 + -4.09003168966934970858701291791403575995511430427267903463250942053264225251041352748870849609375e-19 * _x_^20
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc427978520>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_20
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc427978520>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_20
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc427978520>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_20
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc427978520>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_20
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fc427978520>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_20
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_20.c
//-3.149405153589793	-3.148916872339793	2.1865769728468011e-13	2.1866549539768798e-13
//-3.148916872339793	-3.148428591089793	2.103805474752523e-13	2.1038731473702213e-13
//-3.148428591089793	-3.147940309839793	2.0221780703864443e-13	2.0222365621589865e-13
//-3.147940309839793	-3.147452028589793	1.9416847031009731e-13	1.9417350412306888e-13
//-3.147452028589793	-3.146963747339793	1.8623153521550386e-13	1.8623585451391938e-13
//-3.146963747339793	-3.146475466089793	1.7840601023696507e-13	1.7840970417352105e-13
//-3.146475466089793	-3.145987184839793	1.706909073784953e-13	1.706940625798521e-13
//-3.145987184839793	-3.145498903589793	1.6308524613187619e-13	1.63087939867194e-13
//-3.145498903589793	-3.145010622339793	1.5558805244265868e-13	1.5559035778969998e-13
//-3.145010622339793	-3.144522341089793	1.481983586763125e-13	1.482003426851351e-13
//-3.144522341089793	-3.144034059839793	1.40915204584523e-13	1.4091692643878734e-13
//-3.144034059839793	-3.143545778589793	1.337376332716341e-13	1.3373914844754883e-13
//-3.143545778589793	-3.143057497339793	1.2666469816123743e-13	1.2666605558416658e-13
//-3.143057497339793	-3.142569216089793	1.1969545596290677e-13	1.1969669916166212e-13
//-3.142569216089793	-3.142080934839793	1.1282897163907746e-13	1.1283013889791898e-13
//-3.142080934839793	-3.141592653589793	1.0606431337207005e-13	1.060654398804378e-13
//-3.1415926535897927	-2.945243112740431	1.9528633544349952e-13	1.9641292099615257e-13
//-2.945243112740431	-2.7488935718910685	1.386583062122457e-13	1.4334350402617534e-13
//-2.7488935718910685	-2.5525440310417067	7.830379048956721e-14	9.075319719419613e-14
//-2.5525440310417067	-2.3561944901923444	6.116466416467149e-14	7.437424133339124e-14
//-2.3561944901923444	-2.1598449493429825	3.530020657422405e-14	5.668971331077703e-14
//-2.1598449493429825	-1.9634954084936205	2.563146937570442e-14	4.790448451793617e-14
//-1.9634954084936205	-1.7671458676442584	1.2903519981380426e-14	5.912778011860573e-14
//-1.7671458676442584	-1.5707963267948963	1.102475317038484e-14	inf
//-1.5707963267948963	-1.3744467859455343	4.056542083063838e-15	inf
//-1.3744467859455343	-1.1780972450961722	3.854214853501675e-15	2.015274559987572e-14
//-1.1780972450961722	-0.9817477042468102	1.1948159194908448e-15	2.8337973388408092e-15
//-0.9817477042468102	-0.7853981633974482	1.0616849469962571e-15	1.9136434923685823e-15
//-0.7853981633974482	-0.5890486225480861	4.3475558204523006e-16	6.171824440647463e-16
//-0.5890486225480861	-0.3926990816987241	2.914440500581882e-16	3.5101852164512465e-16
//-0.3926990816987241	-0.19634954084936204	1.5094538380783123e-16	1.611688046114647e-16
//-0.19634954084936204	0.0	1.7380723246251566e-16	1.7504130246251566e-16
//0.0	0.19634954084936204	1.7380723246251566e-16	1.7504130246251566e-16
//0.19634954084936204	0.3926990816987241	1.5094538380783123e-16	1.611688046114647e-16
//0.3926990816987241	0.5890486225480861	2.914440500581882e-16	3.5101852164512465e-16
//0.5890486225480861	0.7853981633974482	4.3475558204523006e-16	6.171824440647463e-16
//0.7853981633974482	0.9817477042468102	1.0616849469962571e-15	1.9136434923685823e-15
//0.9817477042468102	1.1780972450961722	1.1948159194908448e-15	2.8337973388408092e-15
//1.1780972450961722	1.3744467859455343	3.854214853501675e-15	2.015274559987572e-14
//1.3744467859455343	1.5707963267948963	4.056542083063838e-15	inf
//1.5707963267948963	1.7671458676442584	1.102475317038484e-14	inf
//1.7671458676442584	1.9634954084936205	1.2903519981380426e-14	5.912778011860573e-14
//1.9634954084936205	2.1598449493429825	2.563146937570442e-14	4.790448451793617e-14
//2.1598449493429825	2.3561944901923444	3.530020657422405e-14	5.668971331077703e-14
//2.3561944901923444	2.5525440310417067	6.116466416467149e-14	7.437424133339124e-14
//2.5525440310417067	2.7488935718910685	7.830379048956721e-14	9.075319719419613e-14
//2.7488935718910685	2.945243112740431	1.386583062122457e-13	1.4334350402617534e-13
//2.945243112740431	3.1415926535897927	1.9528633544349952e-13	1.9641292099615257e-13
//3.141592653589793	3.142080934839793	1.0606431337207005e-13	1.060654398804378e-13
//3.142080934839793	3.142569216089793	1.1282897163907746e-13	1.1283013889791898e-13
//3.142569216089793	3.143057497339793	1.1969545596290677e-13	1.1969669916166212e-13
//3.143057497339793	3.143545778589793	1.2666469816123743e-13	1.2666605558416658e-13
//3.143545778589793	3.144034059839793	1.337376332716341e-13	1.3373914844754883e-13
//3.144034059839793	3.144522341089793	1.40915204584523e-13	1.4091692643878734e-13
//3.144522341089793	3.145010622339793	1.481983586763125e-13	1.482003426851351e-13
//3.145010622339793	3.145498903589793	1.5558805244265868e-13	1.5559035778969998e-13
//3.145498903589793	3.145987184839793	1.6308524613187619e-13	1.63087939867194e-13
//3.145987184839793	3.146475466089793	1.706909073784953e-13	1.706940625798521e-13
//3.146475466089793	3.146963747339793	1.7840601023696507e-13	1.7840970417352105e-13
//3.146963747339793	3.147452028589793	1.8623153521550386e-13	1.8623585451391938e-13
//3.147452028589793	3.147940309839793	1.9416847031009731e-13	1.9417350412306888e-13
//3.147940309839793	3.148428591089793	2.0221780703864443e-13	2.0222365621589865e-13
//3.148428591089793	3.148916872339793	2.103805474752523e-13	2.1038731473702213e-13
//3.148916872339793	3.149405153589793	2.1865769728468011e-13	2.1866549539768798e-13
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_20",
//spec:     "delta": 2.1865769728468011e-13,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 1.611688046114647e-16,
//spec:     "operation": "cos"
//spec: }