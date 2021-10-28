/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_16.c --poly-degree 16 \
 *     --fname ml2_log_16 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>


double ml2_log1p_16(double x) {
  return ml2_log_16(x + 1);
}

double ml2_log_16(double);
double ml2_log_16(double x){
    double x_man;
    double r;
    double pm_15;
    double pa_15;
    double pm_14;
    double pa_14;
    double pm_13;
    double pa_13;
    double pm_12;
    double pa_12;
    double pm_11;
    double pa_11;
    double pm_10;
    double pa_10;
    double pm_9;
    double pa_9;
    double pm_8;
    double pa_8;
    double pm_7;
    double pa_7;
    double pm_6;
    double pa_6;
    double pm_5;
    double pa_5;
    double pm_4;
    double pa_4;
    double pm_3;
    double pa_3;
    double pm_2;
    double pa_2;
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    int32_t x_exp_int;
    double x_exp;
    double x_mul;
    double offset;
    double retval;
    
    x_man = ml_mantissa_extraction_fp64(x);
    r = x_man * 0.5;
    pm_15 = r * -0x1.d929f2a983e63p2;
    pa_15 = 0x1.81393e14e36b9p6 + pm_15;
    pm_14 = r * pa_15;
    pa_14 = -0x1.2649c0b247eedp9 + pm_14;
    pm_13 = r * pa_14;
    pa_13 = 0x1.18321fbcd48d6p11 + pm_13;
    pm_12 = r * pa_13;
    pa_12 = -0x1.746e88da35351p12 + pm_12;
    pm_11 = r * pa_12;
    pa_11 = 0x1.6ec1f1e325fc4p13 + pm_11;
    pm_10 = r * pa_11;
    pa_10 = -0x1.1527491b5bc42p14 + pm_10;
    pm_9 = r * pa_10;
    pa_9 = 0x1.48740e50b6835p14 + pm_9;
    pm_8 = r * pa_9;
    pa_8 = -0x1.352e59d3ed5a5p14 + pm_8;
    pm_7 = r * pa_8;
    pa_7 = 0x1.d16a6b6051717p13 + pm_7;
    pm_6 = r * pa_7;
    pa_6 = -0x1.18839a1ce4adfp13 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.0df44160e5f1p12 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = -0x1.9bcfd6e79901p10 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.ece06b19cd213p8 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = -0x1.cc54feaeae791p6 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.634243e9910dep4 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.daeef1dd6bbaap1 + tmp;
    x_exp_int = ml_exp_extraction_dirty_fp64(x);
    x_exp = x_exp_int;
    x_mul = x_exp + 1.0;
    offset = x_mul * 0x1.62e42fefa39efp-1;
    retval = offset + tmp1;
    return retval;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fdac1afe7f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fdac1afeac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fdac1afeb80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fdac1afed60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdac1b65dc0>
//Info: executing pass instantiate_abstract_prec on fct ml2_log_16
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdac1b65dc0>
//Info: executing pass instantiate_prec on fct ml2_log_16
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdac1b65dc0>
//Info: executing pass sub_expr_sharing on fct ml2_log_16
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdac1b65dc0>
//Info: executing pass check_processor_support on fct ml2_log_16
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdac1b65dc0>
//Info: executing pass debug_tag_node on fct ml2_log_16
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_log_16.c
//0.000244140625	0.0002593994140625	9.043980451007029e-05	6.523852872908875e-05
//0.0002593994140625	0.000274658203125	4.6438806762926204e-05	3.503044942539731e-05
//0.000274658203125	0.0002899169921875	2.3268034057903966e-05	1.8342787789501488e-05
//0.0002899169921875	0.00030517578125	1.1339516008658036e-05	9.337207008666767e-06
//0.00030517578125	0.0003204345703125	5.354952933341937e-06	4.603833724432136e-06
//0.0003204345703125	0.000335693359375	2.439543207742109e-06	2.1891864248248572e-06
//0.000335693359375	0.0003509521484375	1.0663707472772002e-06	9.986234888041167e-07
//0.0003509521484375	0.0003662109375	4.442699464864663e-07	4.341164400009968e-07
//0.0003662109375	0.0003814697265625	1.7491358440414343e-07	1.7833233119305225e-07
//0.0003814697265625	0.000396728515625	6.435460840940606e-08	6.846179914893308e-08
//0.000396728515625	0.0004119873046875	2.1791676938183562e-08	2.4191805673736997e-08
//0.0004119873046875	0.00042724609375	6.644643304314942e-09	7.699024349691798e-09
//0.00042724609375	0.0004425048828125	1.7644852049082553e-09	2.134385103654651e-09
//0.0004425048828125	0.000457763671875	3.8578931266322973e-10	4.8730342122553e-10
//0.000457763671875	0.0004730224609375	6.224609684925773e-11	8.2081060022573e-11
//0.0004730224609375	0.00048828125	5.604760708047016e-12	7.642780899407574e-12
//0.00048828125	0.000518798828125	9.043980451007029e-05	6.523852872915593e-05
//0.000518798828125	0.00054931640625	4.6438806762926204e-05	3.5030449425470704e-05
//0.00054931640625	0.000579833984375	2.3268034057903966e-05	1.8342787789589708e-05
//0.000579833984375	0.0006103515625	1.1339516008658036e-05	9.337207008773295e-06
//0.0006103515625	0.000640869140625	5.354952933341937e-06	4.603833724562315e-06
//0.000640869140625	0.00067138671875	2.439543207742109e-06	2.1891864249851294e-06
//0.00067138671875	0.000701904296875	1.0663707472772002e-06	9.986234890081756e-07
//0.000701904296875	0.000732421875	4.442699464864663e-07	4.3411644027332777e-07
//0.000732421875	0.000762939453125	1.7491358440414343e-07	1.7833233154557722e-07
//0.000762939453125	0.00079345703125	6.435460840940606e-08	6.846179961491408e-08
//0.00079345703125	0.000823974609375	2.1791676938183562e-08	2.4191806305582998e-08
//0.000823974609375	0.0008544921875	6.644643304314942e-09	7.699025279162799e-09
//0.0008544921875	0.000885009765625	1.7644852049082553e-09	2.134383578777651e-09
//0.000885009765625	0.00091552734375	3.8578931266322973e-10	4.8730437453053e-10
//0.00091552734375	0.000946044921875	6.224609684925773e-11	8.2082345077573e-11
//0.000946044921875	0.0009765625	5.604760708047016e-12	7.644654489407575e-12
//0.0009765625	0.00103759765625	9.043980451007029e-05	6.523852872923649e-05
//0.00103759765625	0.0010986328125	4.6438806762926204e-05	3.503044942555901e-05
//0.0010986328125	0.00115966796875	2.3268034057903966e-05	1.8342787789696282e-05
//0.00115966796875	0.001220703125	1.1339516008658036e-05	9.337207008902582e-06
//0.001220703125	0.00128173828125	5.354952933341937e-06	4.6038337247211586e-06
//0.00128173828125	0.0013427734375	2.439543207742109e-06	2.189186425181928e-06
//0.0013427734375	0.00140380859375	1.0663707472772002e-06	9.986234892606427e-07
//0.00140380859375	0.00146484375	4.442699464864663e-07	4.341164406133828e-07
//0.00146484375	0.00152587890625	1.7491358440414343e-07	1.7833233199083624e-07
//0.00152587890625	0.0015869140625	6.435460840940606e-08	6.846180021208508e-08
//0.0015869140625	0.00164794921875	2.1791676938183562e-08	2.4191807130791e-08
//0.00164794921875	0.001708984375	6.644643304314942e-09	7.699026524453798e-09
//0.001708984375	0.00177001953125	1.7644852049082553e-09	2.134384492529651e-09
//0.00177001953125	0.0018310546875	3.8578931266322973e-10	4.8730559660753e-10
//0.0018310546875	0.00189208984375	6.224609684925773e-11	8.208402153757301e-11
//0.00189208984375	0.001953125	5.604760708047016e-12	7.647156309407574e-12
//0.001953125	0.0020751953125	9.04398045096262e-05	6.523852872926408e-05
//0.0020751953125	0.002197265625	4.6438806762482115e-05	3.503044942559484e-05
//0.002197265625	0.0023193359375	2.3268034057459877e-05	1.834278778975321e-05
//0.0023193359375	0.00244140625	1.1339516008213947e-05	9.33720700898617e-06
//0.00244140625	0.0025634765625	5.354952932897847e-06	4.603833724840043e-06
//0.0025634765625	0.002685546875	2.4395432072980195e-06	2.18918642534695e-06
//0.002685546875	0.0028076171875	1.06637074683311e-06	9.986234894948418e-07
//0.0028076171875	0.0029296875	4.442699464864663e-07	4.3411644105001177e-07
//0.0029296875	0.0030517578125	1.7491358440414343e-07	1.7833233257096225e-07
//0.0030517578125	0.003173828125	6.435460840940606e-08	6.846180100492408e-08
//0.003173828125	0.0032958984375	2.1791676938183562e-08	2.4191808254156e-08
//0.0032958984375	0.00341796875	6.644643304314942e-09	7.699024672373798e-09
//0.00341796875	0.0035400390625	1.7644852049082553e-09	2.134385684961651e-09
//0.0035400390625	0.003662109375	3.8578931266322973e-10	4.8730721977853e-10
//0.003662109375	0.0037841796875	6.224609684925773e-11	8.2086300387573e-11
//0.0037841796875	0.00390625	5.604760708047016e-12	7.646929469407574e-12
//0.00390625	0.004150390625	9.04398045096262e-05	6.523852872937804e-05
//0.004150390625	0.00439453125	4.6438806762482115e-05	3.50304494257215e-05
//0.00439453125	0.004638671875	2.3268034057459877e-05	1.8342787789909267e-05
//0.004638671875	0.0048828125	1.1339516008213947e-05	9.337207009179506e-06
//0.0048828125	0.005126953125	5.354952932897847e-06	4.603833725082942e-06
//0.005126953125	0.00537109375	2.4395432072980195e-06	2.1891864256552405e-06
//0.00537109375	0.005615234375	1.06637074683311e-06	9.986234899015078e-07
//0.005615234375	0.005859375	4.442699460423763e-07	4.3411644152513277e-07
//0.005859375	0.006103515625	1.7491358396005342e-07	1.7833233324381724e-07
//0.006103515625	0.00634765625	6.435460796531606e-08	6.846180198291307e-08
//0.00634765625	0.006591796875	2.1791676938183562e-08	2.4191809872896997e-08
//0.006591796875	0.0068359375	6.644643304314942e-09	7.699025799183798e-09
//0.0068359375	0.007080078125	1.7644852049082553e-09	2.134387191230651e-09
//0.007080078125	0.00732421875	3.8578931266322973e-10	4.8730935447853e-10
//0.00732421875	0.007568359375	6.224609684925773e-11	8.2089437087573e-11
//0.007568359375	0.0078125	5.604760708047016e-12	7.645265649407574e-12
//0.0078125	0.00830078125	9.04398045096262e-05	6.523852872952433e-05
//0.00830078125	0.0087890625	4.6438806762482115e-05	3.503044942588518e-05
//0.0087890625	0.00927734375	2.3268034057459877e-05	1.8342787790112524e-05
//0.00927734375	0.009765625	1.1339516008213947e-05	9.337207009433635e-06
//0.009765625	0.01025390625	5.354952932897847e-06	4.603833725405692e-06
//0.01025390625	0.0107421875	2.4395432072980195e-06	2.1891864260702883e-06
//0.0107421875	0.01123046875	1.06637074683311e-06	9.986234904579407e-07
//0.01123046875	0.01171875	4.442699460423763e-07	4.341164423157688e-07
//0.01171875	0.01220703125	1.7491358396005342e-07	1.7833233434822123e-07
//0.01220703125	0.0126953125	6.435460796531606e-08	6.846180359362608e-08
//0.0126953125	0.01318359375	2.1791676494093562e-08	2.4191808306585e-08
//0.01318359375	0.013671875	6.644642860224942e-09	7.699027379760798e-09
//0.013671875	0.01416015625	1.7644852049082553e-09	2.1343894990406508e-09
//0.01416015625	0.0146484375	3.8578931266322973e-10	4.8731268856853e-10
//0.0146484375	0.01513671875	6.224609684925773e-11	8.209108690757301e-11
//0.01513671875	0.015625	5.604760708047016e-12	7.648404719407574e-12
//0.015625	0.0166015625	9.043980450940416e-05	6.523852872966603e-05
//0.0166015625	0.017578125	4.643880676226007e-05	3.503044942605007e-05
//0.017578125	0.0185546875	2.3268034057237832e-05	1.8342787790331136e-05
//0.0185546875	0.01953125	1.1339516007991902e-05	9.337207009722817e-06
//0.01953125	0.0205078125	5.354952932675803e-06	4.603833725792404e-06
//0.0205078125	0.021484375	2.439543207075979e-06	2.1891864265920792e-06
//0.021484375	0.0224609375	1.0663707466110702e-06	9.986234911932476e-07
//0.0224609375	0.0234375	4.442699458203363e-07	4.341164434183368e-07
//0.0234375	0.0244140625	1.7491358373800342e-07	1.7833233597676923e-07
//0.0244140625	0.025390625	6.435460774326606e-08	6.846180238039308e-08
//0.025390625	0.0263671875	2.179167627204356e-08	2.4191809941093e-08
//0.0263671875	0.02734375	6.644642638184942e-09	7.699029676550799e-09
//0.02734375	0.0283203125	1.7644845387782555e-09	2.134393014170651e-09
//0.0283203125	0.029296875	3.857890906232297e-10	4.8731473691853e-10
//0.029296875	0.0302734375	6.224587479925774e-11	8.2090419697573e-11
//0.0302734375	0.03125	5.604538658047016e-12	7.653052669407574e-12
//0.03125	0.033203125	9.043980450940416e-05	6.523852872992716e-05
//0.033203125	0.03515625	4.643880676226007e-05	3.503044942634922e-05
//0.03515625	0.037109375	2.3268034057237832e-05	1.8342787790714005e-05
//0.037109375	0.0390625	1.1339516007991902e-05	9.337207010218089e-06
//0.0390625	0.041015625	5.354952932675803e-06	4.603833726446957e-06
//0.041015625	0.04296875	2.439543207075979e-06	2.1891864274751213e-06
//0.04296875	0.044921875	1.0663707466110702e-06	9.986234924505986e-07
//0.044921875	0.046875	4.442699458203363e-07	4.341164427126018e-07
//0.046875	0.048828125	1.7491358373800342e-07	1.7833233508175923e-07
//0.048828125	0.05078125	6.435460774326606e-08	6.846180430127307e-08
//0.05078125	0.052734375	2.179167627204356e-08	2.4191812654226e-08
//0.052734375	0.0546875	6.644642638184942e-09	7.699033629820798e-09
//0.0546875	0.056640625	1.7644845387782555e-09	2.1343949925606507e-09
//0.056640625	0.05859375	3.857886465332297e-10	4.8731492003853e-10
//0.05859375	0.060546875	6.224587479925774e-11	8.2096243247573e-11
//0.060546875	0.0625	5.604538658047016e-12	7.660961989407575e-12
//0.0625	0.06640625	9.043980450940416e-05	6.52385287303171e-05
//0.06640625	0.0703125	4.643880676226007e-05	3.503044942680408e-05
//0.0703125	0.07421875	2.3268034057237832e-05	1.8342787791308873e-05
//0.07421875	0.078125	1.1339516007991902e-05	9.3372070110081e-06
//0.078125	0.08203125	5.354952932675803e-06	4.603833727526044e-06
//0.08203125	0.0859375	2.439543207075979e-06	2.1891864289944654e-06
//0.0859375	0.08984375	1.0663707466110702e-06	9.986234921335046e-07
//0.08984375	0.09375	4.442699458203363e-07	4.3411644423436977e-07
//0.09375	0.09765625	1.7491358373800342e-07	1.7833233744102024e-07
//0.09765625	0.1015625	6.435460774326606e-08	6.846180767286707e-08
//0.1015625	0.10546875	2.179167627204356e-08	2.4191817698496e-08
//0.10546875	0.109375	6.644642638184942e-09	7.699032765540798e-09
//0.109375	0.11328125	1.7644845387782555e-09	2.1343967979906507e-09
//0.11328125	0.1171875	3.857886465332297e-10	4.8732227669853e-10
//0.1171875	0.12109375	6.224543070925773e-11	8.210718242757301e-11
//0.12109375	0.125	5.604538658047016e-12	7.669602809407575e-12
//0.125	0.1328125	9.043980450907109e-05	6.523852873080503e-05
//0.1328125	0.140625	4.6438806761927e-05	3.503044942740998e-05
//0.140625	0.1484375	2.3268034056904766e-05	1.8342787792175256e-05
//0.1484375	0.15625	1.1339516007658836e-05	9.337207012263855e-06
//0.15625	0.1640625	5.354952932342736e-06	4.6038337294102915e-06
//0.1640625	0.171875	2.4395432067429092e-06	2.189186428956403e-06
//0.171875	0.1796875	1.066370746278e-06	9.986234942381437e-07
//0.1796875	0.1875	4.442699457093063e-07	4.3411644721931377e-07
//0.1875	0.1953125	1.7491358362698342e-07	1.7833234199189425e-07
//0.1953125	0.203125	6.435460763224606e-08	6.846181165554708e-08
//0.203125	0.2109375	2.179167616102356e-08	2.4191817559856e-08
//0.2109375	0.21875	6.644642527154942e-09	7.699039876690798e-09
//0.21875	0.2265625	1.7644844277582555e-09	2.134407718220651e-09
//0.2265625	0.234375	3.857885355132297e-10	4.8733533241853e-10
//0.234375	0.2421875	6.224531968925773e-11	8.210654948757301e-11
//0.2421875	0.25	5.603983548047016e-12	7.675758909407574e-12
//0.25	0.265625	9.043980450901558e-05	6.523852873196269e-05
//0.265625	0.28125	4.643880676187149e-05	3.503044942889108e-05
//0.28125	0.296875	2.3268034056849254e-05	1.8342787794364917e-05
//0.296875	0.3125	1.1339516007603324e-05	9.33720701268299e-06
//0.3125	0.328125	5.354952932287225e-06	4.603833729811735e-06
//0.328125	0.34375	2.4395432066873993e-06	2.1891864324038713e-06
//0.34375	0.359375	1.06637074622249e-06	9.986234993630697e-07
//0.359375	0.375	4.4426994543175626e-07	4.3411645233172777e-07
//0.375	0.390625	1.7491358334942343e-07	1.7833234434265422e-07
//0.390625	0.40625	6.435460735468606e-08	6.846181699917707e-08
//0.40625	0.421875	2.179167610551356e-08	2.4191830599745997e-08
//0.421875	0.4375	6.644642471644942e-09	7.699053282520799e-09
//0.4375	0.453125	1.7644843722482555e-09	2.134412610140651e-09
//0.453125	0.46875	3.8578848000322975e-10	4.8734627813853e-10
//0.46875	0.484375	6.224526417925773e-11	8.213699527757301e-11
//0.484375	0.5	5.603928038047016e-12	7.714990509407574e-12
//0.5	0.53125	9.043980450884904e-05	6.523852873235796e-05
//0.53125	0.5625	4.643880676170496e-05	3.503044942992863e-05
//0.5625	0.59375	2.3268034056793743e-05	1.8342787795756945e-05
//0.59375	0.625	1.1339516007547813e-05	9.337207017567795e-06
//0.625	0.65625	5.354952932231713e-06	4.603833735101326e-06
//0.65625	0.6875	2.4395432066318895e-06	2.1891864363121415e-06
//0.6875	0.71875	1.06637074616698e-06	9.986235048096697e-07
//0.71875	0.75	4.4426994537624627e-07	4.341164636280178e-07
//0.75	0.78125	1.7491358329391344e-07	1.7833235683211424e-07
//0.78125	0.8125	6.435460729917606e-08	6.846183008067708e-08
//0.8125	0.84375	2.1791675827953563e-08	2.4191850060186e-08
//0.84375	0.875	6.644642194094942e-09	7.699089327190799e-09
//0.875	0.90625	1.7644843167382555e-09	2.134442132410651e-09
//0.90625	0.9375	3.8578842449322974e-10	4.8739013164853e-10
//0.9375	0.96875	6.224520866925774e-11	8.2197390457573e-11
//0.96875	1.0	5.603872528047016e-12	7.798270409407575e-12
//1.0	1.0625	9.043980450884904e-05	6.523852873613125e-05
//1.0625	1.125	4.643880676170496e-05	3.50304494366151e-05
//1.125	1.1875	2.326803405668272e-05	1.8342787806618943e-05
//1.1875	1.25	1.1339516007436791e-05	9.337207033317157e-06
//1.25	1.3125	5.354952932120691e-06	4.603833751682726e-06
//1.3125	1.375	2.4395432065208693e-06	2.189186468515041e-06
//1.375	1.4375	1.0663707460559601e-06	9.986235420929997e-07
//1.4375	1.5	4.442699452652163e-07	4.341165139493778e-07
//1.5	1.5625	1.7491358329391344e-07	1.7833244895259424e-07
//1.5625	1.625	6.435460729917606e-08	6.846195129554708e-08
//1.625	1.6875	2.1791675827953563e-08	2.4192091594326e-08
//1.6875	1.75	6.644642194094942e-09	7.699377688100798e-09
//1.75	1.8125	1.7644840946882555e-09	2.134988733520651e-09
//1.8125	1.875	3.8578842449322974e-10	4.8864772036853e-10
//1.875	1.9375	6.224520866925774e-11	8.471406225757301e-11
//1.9375	2.0	5.603872528047016e-12	inf
//2.0	2.125	9.043980450879353e-05	6.523858656117601e-05
//2.125	2.25	4.643880676164945e-05	3.5030449515079505e-05
//2.25	2.375	2.326803405662721e-05	1.8342787853956135e-05
//2.375	2.5	1.1339516007436791e-05	9.337207054932336e-06
//2.5	2.625	5.354952932120691e-06	4.603833764896107e-06
//2.625	2.75	2.4395432065208693e-06	2.1891864635943713e-06
//2.75	2.875	1.0663707460559601e-06	9.986235294887297e-07
//2.875	3.0	4.4426994537624627e-07	4.341164840506878e-07
//3.0	3.125	1.7491358329391344e-07	1.7833238318875425e-07
//3.125	3.25	6.435460729917606e-08	6.846185780924708e-08
//3.25	3.375	2.1791675827953563e-08	2.4191872860806e-08
//3.375	3.5	6.644642194094942e-09	7.699103338660799e-09
//3.5	3.625	1.7644843167382555e-09	2.1344778956206507e-09
//3.625	3.75	3.8578842449322974e-10	4.8742437606853e-10
//3.75	3.875	6.224520866925774e-11	8.2220760257573e-11
//3.875	4.0	5.603872528047016e-12	7.796943609407575e-12
//4.0	4.25	9.043980450907109e-05	6.523852873854396e-05
//4.25	4.5	4.6438806761927e-05	3.503044943265005e-05
//4.5	4.75	2.3268034056904766e-05	1.8342787801233314e-05
//4.75	5.0	1.1339516007658836e-05	9.337207018174046e-06
//5.0	5.25	5.354952932453758e-06	4.603833735468076e-06
//5.25	5.5	2.4395432068539294e-06	2.1891864378988514e-06
//5.5	5.75	1.06637074638903e-06	9.986235045067296e-07
//5.75	6.0	4.4426994559828627e-07	4.341164596250078e-07
//6.0	6.25	1.7491358351596342e-07	1.7833235728765422e-07
//6.25	6.5	6.435460752122607e-08	6.846182817920708e-08
//6.5	6.75	2.179167605000356e-08	2.4191830615955998e-08
//6.75	7.0	6.644642638184942e-09	7.699054263490798e-09
//7.0	7.25	1.7644845387782555e-09	2.1344215282806507e-09
//7.25	7.5	3.857886465332297e-10	4.8735499358853e-10
//7.5	7.75	6.224543070925773e-11	8.214300400757301e-11
//7.75	8.0	5.604094568047016e-12	7.714523419407574e-12
//8.0	8.5	9.043980450896007e-05	6.523852873219606e-05
//8.5	9.0	4.643880676181598e-05	3.5030449428925196e-05
//9.0	9.5	2.3268034056793743e-05	1.834278779370359e-05
//9.5	10.0	1.1339516007547813e-05	9.337207013850337e-06
//10.0	10.5	5.354952932231713e-06	4.603833730779078e-06
//10.5	11.0	2.4395432066318895e-06	2.1891864329729063e-06
//11.0	11.5	1.06637074616698e-06	9.986234990736998e-07
//11.5	12.0	4.4426994537624627e-07	4.341164513171278e-07
//12.0	12.5	1.7491358329391344e-07	1.7833234195513423e-07
//12.5	13.0	6.435460752122607e-08	6.846181238802708e-08
//13.0	13.5	2.179167605000356e-08	2.4191822159785998e-08
//13.5	14.0	6.644642416134942e-09	7.699044949230798e-09
//14.0	14.5	1.7644843167382555e-09	2.134409376290651e-09
//14.5	15.0	3.8578842449322974e-10	4.8732713254853e-10
//15.0	15.5	6.224520866925774e-11	8.2108107677573e-11
//15.5	16.0	5.603872528047016e-12	7.675762169407574e-12
//16.0	17.0	9.043980450918211e-05	6.523852873188246e-05
//17.0	18.0	4.6438806762038026e-05	3.503044942842664e-05
//18.0	19.0	2.3268034057015788e-05	1.834278779321727e-05
//19.0	20.0	1.1339516007769858e-05	9.337207013292336e-06
//20.0	21.0	5.354952932453758e-06	4.603833727935529e-06
//21.0	22.0	2.4395432068539294e-06	2.189186429253748e-06
//22.0	23.0	1.06637074638903e-06	9.986234942220066e-07
//23.0	24.0	4.442699458203363e-07	4.3411644665717877e-07
//24.0	25.0	1.7491358373800342e-07	1.7833234035329424e-07
//25.0	26.0	6.435460774326606e-08	6.846181120506708e-08
//26.0	27.0	2.179167627204356e-08	2.4191814608795997e-08
//27.0	28.0	6.644642638184942e-09	7.699034948860799e-09
//28.0	29.0	1.7644845387782555e-09	2.1343991046306507e-09
//29.0	30.0	3.857886465332297e-10	4.8732442236853e-10
//30.0	31.0	6.224543070925773e-11	8.210861548757301e-11
//31.0	32.0	5.604538658047016e-12	7.670553929407574e-12
//32.0	34.0	9.043980450940416e-05	6.523852873086775e-05
//34.0	36.0	4.643880676226007e-05	3.503044942730641e-05
//36.0	38.0	2.3268034057237832e-05	1.8342787791802358e-05
//38.0	40.0	1.1339516007991902e-05	9.337207011468028e-06
//40.0	42.0	5.354952932897847e-06	4.6038337280246955e-06
//42.0	44.0	2.4395432072980195e-06	2.1891864293442765e-06
//44.0	46.0	1.06637074683311e-06	9.986234921850766e-07
//46.0	48.0	4.442699460423763e-07	4.341164441204508e-07
//48.0	50.0	1.7491358396005342e-07	1.7833233675079623e-07
//50.0	52.0	6.435460796531606e-08	6.846180620309708e-08
//52.0	54.0	2.1791676494093562e-08	2.4191814839885997e-08
//54.0	56.0	6.644642860224942e-09	7.699036136200798e-09
//56.0	58.0	1.7644847608182555e-09	2.134392944490651e-09
//58.0	60.0	3.857888685732297e-10	4.8731610697853e-10
//60.0	62.0	6.224609684925773e-11	8.209709660757301e-11
//62.0	64.0	5.604760708047016e-12	7.661105369407574e-12
//64.0	68.0	9.04398045096262e-05	6.523852873033977e-05
//68.0	72.0	4.6438806762482115e-05	3.5030449426728846e-05
//72.0	76.0	2.3268034057459877e-05	1.8342787791084206e-05
//76.0	80.0	1.1339516008213947e-05	9.337207010563943e-06
//80.0	84.0	5.354952932897847e-06	4.603833726745777e-06
//84.0	88.0	2.4395432072980195e-06	2.1891864276853125e-06
//88.0	92.0	1.06637074683311e-06	9.986234924970346e-07
//92.0	96.0	4.442699460423763e-07	4.341164426046048e-07
//96.0	100.0	1.7491358396005342e-07	1.7833233470872123e-07
//100.0	104.0	6.435460796531606e-08	6.846180352040008e-08
//104.0	108.0	2.1791676494093562e-08	2.4191811202075997e-08
//108.0	112.0	6.644642860224942e-09	7.699031049330798e-09
//112.0	116.0	1.7644847608182555e-09	2.1343945441006508e-09
//116.0	120.0	3.8578931266322973e-10	4.8731628770853e-10
//120.0	124.0	6.224609684925773e-11	8.2090935047573e-11
//124.0	128.0	5.604760708047016e-12	7.653153159407574e-12
//128.0	136.0	9.043980450918211e-05	6.523852872983016e-05
//136.0	144.0	4.6438806762038026e-05	3.503044942618913e-05
//144.0	152.0	2.3268034057015788e-05	1.8342787790459957e-05
//152.0	160.0	1.1339516007769858e-05	9.337207009830485e-06
//160.0	168.0	5.354952932453758e-06	4.603833725863337e-06
//168.0	176.0	2.4395432068539294e-06	2.1891864265997983e-06
//176.0	184.0	1.06637074638903e-06	9.986234910936798e-07
//184.0	192.0	4.4426994559828627e-07	4.341164431193928e-07
//192.0	200.0	1.7491358351596342e-07	1.7833233532132924e-07
//200.0	208.0	6.435460752122607e-08	6.846180177567607e-08
//208.0	216.0	2.179167605000356e-08	2.4191808938384998e-08
//216.0	224.0	6.644642416134942e-09	7.699028046070798e-09
//224.0	232.0	1.7644847608182555e-09	2.1343902098406507e-09
//232.0	240.0	3.857888685732297e-10	4.8731332965853e-10
//240.0	248.0	6.224565275925773e-11	8.208702849757301e-11
//248.0	256.0	5.604316618047016e-12	7.648287489407575e-12
//256.0	272.0	9.04398045096262e-05	6.523852872969345e-05
//272.0	288.0	4.6438806762482115e-05	3.503044942603463e-05
//288.0	304.0	2.3268034057459877e-05	1.834278779025308e-05
//304.0	320.0	1.1339516008213947e-05	9.337207009557766e-06
//320.0	336.0	5.354952932897847e-06	4.603833725502919e-06
//336.0	352.0	2.4395432072980195e-06	2.189186426123318e-06
//352.0	368.0	1.06637074683311e-06	9.986234904391507e-07
//368.0	384.0	4.442699460423763e-07	4.341164421696158e-07
//384.0	400.0	1.7491358396005342e-07	1.7833233398737723e-07
//400.0	416.0	6.435460796531606e-08	6.846180285204908e-08
//416.0	432.0	2.1791676494093562e-08	2.4191807671305997e-08
//432.0	448.0	6.644643304314942e-09	7.699026349990798e-09
//448.0	464.0	1.7644852049082553e-09	2.134387763220651e-09
//464.0	480.0	3.8578931266322973e-10	4.8730986963853e-10
//480.0	496.0	6.224609684925773e-11	8.2089787807573e-11
//496.0	512.0	5.604760708047016e-12	7.645274179407574e-12
//512.0	544.0	9.04398045096262e-05	6.52385287295055e-05
//544.0	576.0	4.6438806762482115e-05	3.50304494258336e-05
//576.0	608.0	2.3268034057459877e-05	1.8342787790014068e-05
//608.0	640.0	1.1339516008213947e-05	9.337207009271372e-06
//640.0	672.0	5.354952932897847e-06	4.603833725154227e-06
//672.0	704.0	2.4395432072980195e-06	2.1891864256936653e-06
//704.0	736.0	1.06637074683311e-06	9.986234898880957e-07
//736.0	768.0	4.442699460423763e-07	4.341164414228358e-07
//768.0	800.0	1.7491358396005342e-07	1.7833233299772323e-07
//800.0	832.0	6.435460840940606e-08	6.846180161109208e-08
//832.0	864.0	2.1791676938183562e-08	2.4191808942996997e-08
//864.0	896.0	6.644643304314942e-09	7.699025072370799e-09
//896.0	928.0	1.7644852049082553e-09	2.134385994729651e-09
//928.0	960.0	3.8578931266322973e-10	4.8730758081853e-10
//960.0	992.0	6.224609684925773e-11	8.2086537407573e-11
//992.0	1024.0	5.604760708047016e-12	7.647056139407574e-12
//1024.0	1088.0	9.04398045096262e-05	6.523852872936358e-05
//1088.0	1152.0	4.6438806762482115e-05	3.503044942568203e-05
//1152.0	1216.0	2.3268034057459877e-05	1.834278778983435e-05
//1216.0	1280.0	1.1339516008213947e-05	9.337207009056891e-06
//1280.0	1344.0	5.354952932897847e-06	4.603833724894539e-06
//1344.0	1408.0	2.4395432072980195e-06	2.1891864253760665e-06
//1408.0	1472.0	1.0663707472772002e-06	9.986234895706817e-07
//1472.0	1536.0	4.442699464864663e-07	4.341164409724188e-07
//1536.0	1600.0	1.7491358440414343e-07	1.7833233238843925e-07
//1600.0	1664.0	6.435460840940606e-08	6.846180065292908e-08
//1664.0	1728.0	2.1791676938183562e-08	2.4191807617962e-08
//1728.0	1792.0	6.644643304314942e-09	7.699024216639798e-09
//1792.0	1856.0	1.7644852049082553e-09	2.134384800799651e-09
//1856.0	1920.0	3.8578931266322973e-10	4.8730586186853e-10
//1920.0	1984.0	6.224609684925773e-11	8.208419145757301e-11
//1984.0	2048.0	5.604760708047016e-12	7.647129999407574e-12
//2048.0	2176.0	9.043980451007029e-05	6.523852872932248e-05
//2176.0	2304.0	4.6438806762926204e-05	3.503044942563385e-05
//2304.0	2432.0	2.3268034057903966e-05	1.834278778976501e-05
//2432.0	2560.0	1.1339516009102125e-05	9.337207009033193e-06
//2560.0	2688.0	5.354952933786027e-06	4.60383372483866e-06
//2688.0	2816.0	2.439543208186199e-06	2.1891864252795593e-06
//2816.0	2944.0	1.06637074772129e-06	9.986234893283117e-07
//2944.0	3072.0	4.442699469305563e-07	4.341164406318398e-07
//3072.0	3200.0	1.7491358484822343e-07	1.7833233193363923e-07
//3200.0	3328.0	6.435460885348606e-08	6.846180003520908e-08
//3328.0	3456.0	2.1791677382273563e-08	2.4191806759002997e-08
//3456.0	3584.0	6.6446437484049425e-09	7.699025786659798e-09
//3584.0	3712.0	1.7644856489982554e-09	2.1343838955716508e-09
//3712.0	3840.0	3.8578975675322974e-10	4.8730465862653e-10
//3840.0	3968.0	6.224654093925773e-11	8.2082558477573e-11
//3968.0	4096.0	5.605204798047016e-12	7.644727059407574e-12
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//4096.0	4096.0	9.043980450850035e-05	6.523852872895407e-05
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.043980450884904e-05,
//spec:     "domain": [
//spec:         0.5,
//spec:         2.0
//spec:     ],
//spec:     "epsilon": 7.798270409407575e-12,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.043980450901558e-05,
//spec:     "domain": [
//spec:         0.25,
//spec:         4.0
//spec:     ],
//spec:     "epsilon": 7.714990509407574e-12,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.043980450907109e-05,
//spec:     "domain": [
//spec:         0.125,
//spec:         8.0
//spec:     ],
//spec:     "epsilon": 7.675758909407574e-12,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.043980450940416e-05,
//spec:     "domain": [
//spec:         0.0625,
//spec:         16.0
//spec:     ],
//spec:     "epsilon": 7.669602809407575e-12,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.043980450940416e-05,
//spec:     "domain": [
//spec:         0.03125,
//spec:         32.0
//spec:     ],
//spec:     "epsilon": 7.660961989407575e-12,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.043980450940416e-05,
//spec:     "domain": [
//spec:         0.015625,
//spec:         64.0
//spec:     ],
//spec:     "epsilon": 7.653052669407574e-12,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.04398045096262e-05,
//spec:     "domain": [
//spec:         0.0078125,
//spec:         128.0
//spec:     ],
//spec:     "epsilon": 7.648404719407574e-12,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.04398045096262e-05,
//spec:     "domain": [
//spec:         0.001953125,
//spec:         512.0
//spec:     ],
//spec:     "epsilon": 7.645265649407574e-12,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.043980451007029e-05,
//spec:     "domain": [
//spec:         0.0009765625,
//spec:         1024.0
//spec:     ],
//spec:     "epsilon": 7.645265649407574e-12,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_16",
//spec:     "delta": 9.043980451007029e-05,
//spec:     "domain": [
//spec:         0.00048828125,
//spec:         2048.0
//spec:     ],
//spec:     "epsilon": 7.644654489407575e-12,
//spec:     "operation": "log"
//spec: }
