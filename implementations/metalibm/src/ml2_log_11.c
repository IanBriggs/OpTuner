/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_11.c --poly-degree 11 \
 *     --fname ml2_log_11 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>



double ml2_log_11(double);
double ml2_log_11(double x){
    double x_man;
    double r;
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
    pm_10 = r * 0x1.1be26b3952162p1;
    pa_10 = -0x1.4a1e6edbdc7ddp4 + pm_10;
    pm_9 = r * pa_10;
    pa_9 = 0x1.5eadec72b2f94p6 + pm_9;
    pm_8 = r * pa_9;
    pa_8 = -0x1.c236518273eccp7 + pm_8;
    pm_7 = r * pa_8;
    pa_7 = 0x1.8554442a5487ep8 + pm_7;
    pm_6 = r * pa_7;
    pa_6 = -0x1.de8518737a1fep8 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.adaef9125ea48p8 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = -0x1.1d7159b719f1dp8 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.198900252f19fp7 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = -0x1.9e16b41efed65p5 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.e45dbee9fe7bdp3 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.abc96e273281ep1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f08f8982790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f08f8982a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f08f8982b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f08f8982d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f08f897da30>
//Info: executing pass instantiate_abstract_prec on fct ml2_log_11
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f08f897da30>
//Info: executing pass instantiate_prec on fct ml2_log_11
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f08f897da30>
//Info: executing pass sub_expr_sharing on fct ml2_log_11
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f08f897da30>
//Info: executing pass check_processor_support on fct ml2_log_11
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f08f897da30>
//Info: executing pass debug_tag_node on fct ml2_log_11
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_log_11.c
//0.000244140625	0.0002593994140625	0.0011651551375903054	0.0008404817694320601
//0.0002593994140625	0.000274658203125	0.0007212726456305026	0.000544081700172848
//0.000274658203125	0.0002899169921875	0.0004392525309785316	0.0003462740317398492
//0.0002899169921875	0.00030517578125	0.0002625619400016817	0.00021619927923592416
//0.00030517578125	0.0003204345703125	0.0001536389592560371	0.00013208859759013594
//0.0003204345703125	0.000335693359375	8.773344063616908e-05	7.872984475572568e-05
//0.000335693359375	0.0003509521484375	4.8706245430052466e-05	4.5611905052154905e-05
//0.0003509521484375	0.0003662109375	2.616584540485254e-05	2.5567842521737253e-05
//0.0003662109375	0.0003814697265625	1.352211462369168e-05	1.3786410405228407e-05
//0.0003814697265625	0.000396728515625	6.670307361730912e-06	7.096016862515716e-06
//0.000396728515625	0.0004119873046875	3.107792402340692e-06	3.4500874967403205e-06
//0.0004119873046875	0.00042724609375	1.3471084114807044e-06	1.5608763225901613e-06
//0.00042724609375	0.0004425048828125	5.308473639160742e-07	6.421448127116372e-07
//0.0004425048828125	0.000457763671875	1.8293162214078854e-07	2.3109469495616594e-07
//0.000457763671875	0.0004730224609375	5.108898149582846e-08	6.742765945983434e-08
//0.0004730224609375	0.00048828125	9.468258692539703e-09	1.3061530804291447e-08
//0.00048828125	0.000518798828125	0.0011651551375903054	0.0008404817694320899
//0.000518798828125	0.00054931640625	0.0007212726456305026	0.0005440817001728783
//0.00054931640625	0.000579833984375	0.0004392525309785316	0.00034627403173988035
//0.000579833984375	0.0006103515625	0.0002625619400016817	0.0002161992792359576
//0.0006103515625	0.000640869140625	0.0001536389592560371	0.00013208859759017202
//0.000640869140625	0.00067138671875	8.773344063616908e-05	7.872984475576662e-05
//0.00067138671875	0.000701904296875	4.8706245430052466e-05	4.561190505219956e-05
//0.000701904296875	0.000732421875	2.616584540485254e-05	2.556784252178612e-05
//0.000732421875	0.000762939453125	1.352211462369168e-05	1.3786410405282068e-05
//0.000762939453125	0.00079345703125	6.670307361730912e-06	7.096016862574849e-06
//0.00079345703125	0.000823974609375	3.107792402340692e-06	3.450087496806139e-06
//0.000823974609375	0.0008544921875	1.3471084114807044e-06	1.5608763226631968e-06
//0.0008544921875	0.000885009765625	5.308473639160742e-07	6.421448127973182e-07
//0.000885009765625	0.00091552734375	1.8293162214078854e-07	2.3109469505590595e-07
//0.00091552734375	0.000946044921875	5.108898149582846e-08	6.742765957150935e-08
//0.000946044921875	0.0009765625	9.468258692539703e-09	1.3061530929617446e-08
//0.0009765625	0.00103759765625	0.0011651551375898613	0.0008404817694320653
//0.00103759765625	0.0010986328125	0.0007212726456300585	0.0005440817001728536
//0.0010986328125	0.00115966796875	0.0004392525309780875	0.0003462740317398561
//0.00115966796875	0.001220703125	0.0002625619400012376	0.0002161992792359356
//0.001220703125	0.00128173828125	0.000153638959255593	0.00013208859759015261
//0.00128173828125	0.0013427734375	8.773344063572499e-05	7.872984475575253e-05
//0.0013427734375	0.00140380859375	4.8706245429608376e-05	4.5611905052189376e-05
//0.00140380859375	0.00146484375	2.616584540440845e-05	2.5567842521780462e-05
//0.00146484375	0.00152587890625	1.352211462324759e-05	1.3786410405281631e-05
//0.00152587890625	0.0015869140625	6.6703073612868225e-06	7.096016862580455e-06
//0.0015869140625	0.00164794921875	3.107792401896603e-06	3.4500874968192547e-06
//0.00164794921875	0.001708984375	1.3471084110366154e-06	1.560876322684471e-06
//0.001708984375	0.00177001953125	5.308473634719852e-07	6.42144812833335e-07
//0.00177001953125	0.0018310546875	1.8293162169669954e-07	2.3109469510841294e-07
//0.0018310546875	0.00189208984375	5.1088981051739465e-08	6.742765963796034e-08
//0.00189208984375	0.001953125	9.468258248450702e-09	1.3061531012135447e-08
//0.001953125	0.0020751953125	0.0011651551375898613	0.0008404817694321019
//0.0020751953125	0.002197265625	0.0007212726456300585	0.0005440817001728909
//0.002197265625	0.0023193359375	0.0004392525309780875	0.00034627403173989455
//0.0023193359375	0.00244140625	0.0002625619400012376	0.00021619927923597742
//0.00244140625	0.0025634765625	0.000153638959255593	0.0001320885975901983
//0.0025634765625	0.002685546875	8.773344063572499e-05	7.872984475580536e-05
//0.002685546875	0.0028076171875	4.8706245429608376e-05	4.56119050522477e-05
//0.0028076171875	0.0029296875	2.616584540440845e-05	2.5567842521845063e-05
//0.0029296875	0.0030517578125	1.352211462324759e-05	1.3786410405353414e-05
//0.0030517578125	0.003173828125	6.6703073612868225e-06	7.096016862660479e-06
//0.003173828125	0.0032958984375	3.107792401896603e-06	3.4500874969093917e-06
//0.0032958984375	0.00341796875	1.3471084110366154e-06	1.5608763227856021e-06
//0.00341796875	0.0035400390625	5.308473634719852e-07	6.42144812953698e-07
//0.0035400390625	0.003662109375	1.8293162169669954e-07	2.3109469525032296e-07
//0.003662109375	0.0037841796875	5.1088981051739465e-08	6.742765979842934e-08
//0.0037841796875	0.00390625	9.468258248450702e-09	1.3061531193989447e-08
//0.00390625	0.004150390625	0.0011651551375898613	0.000840481769432147
//0.004150390625	0.00439453125	0.0007212726456300585	0.000544081700172937
//0.00439453125	0.004638671875	0.0004392525309780875	0.00034627403173994215
//0.004638671875	0.0048828125	0.0002625619400012376	0.0002161992792360293
//0.0048828125	0.005126953125	0.000153638959255593	0.00013208859759025507
//0.005126953125	0.00537109375	8.773344063572499e-05	7.872984475587114e-05
//0.00537109375	0.005615234375	4.8706245429608376e-05	4.56119050523205e-05
//0.005615234375	0.005859375	2.616584540440845e-05	2.5567842521925908e-05
//0.005859375	0.006103515625	1.352211462324759e-05	1.3786410405443465e-05
//0.006103515625	0.00634765625	6.6703073612868225e-06	7.0960168627611284e-06
//0.00634765625	0.006591796875	3.107792401896603e-06	3.450087497023066e-06
//0.006591796875	0.0068359375	1.3471084110366154e-06	1.560876322913503e-06
//0.0068359375	0.007080078125	5.308473634719852e-07	6.42144813106374e-07
//0.007080078125	0.00732421875	1.8293162169669954e-07	2.3109469543089595e-07
//0.00732421875	0.007568359375	5.1088981051739465e-08	6.742766000329834e-08
//0.007568359375	0.0078125	9.468258248450702e-09	1.3061531426989447e-08
//0.0078125	0.00830078125	0.0011651551375898613	0.000840481769432204
//0.00830078125	0.0087890625	0.0007212726456300585	0.0005440817001729951
//0.0087890625	0.00927734375	0.0004392525309780875	0.0003462740317400025
//0.00927734375	0.009765625	0.0002625619400012376	0.00021619927923609527
//0.009765625	0.01025390625	0.000153638959255593	0.0001320885975903275
//0.01025390625	0.0107421875	8.773344063572499e-05	7.872984475595532e-05
//0.0107421875	0.01123046875	4.8706245429608376e-05	4.561190505241395e-05
//0.01123046875	0.01171875	2.616584540440845e-05	2.5567842522029988e-05
//0.01171875	0.01220703125	1.352211462324759e-05	1.3786410405559775e-05
//0.01220703125	0.0126953125	6.6703073612868225e-06	7.096016862891558e-06
//0.0126953125	0.01318359375	3.107792401896603e-06	3.450087497170884e-06
//0.01318359375	0.013671875	1.3471084110366154e-06	1.560876323080423e-06
//0.013671875	0.01416015625	5.308473634719852e-07	6.42144813306391e-07
//0.01416015625	0.0146484375	1.8293162169669954e-07	2.3109469566842395e-07
//0.0146484375	0.01513671875	5.1088981051739465e-08	6.742766027395735e-08
//0.01513671875	0.015625	9.468258248450702e-09	1.3061531736245446e-08
//0.015625	0.0166015625	0.0011651551375896393	0.0008404817694322299
//0.0166015625	0.017578125	0.0007212726456298365	0.0005440817001730222
//0.017578125	0.0185546875	0.00043925253097786546	0.00034627403174003187
//0.0185546875	0.01953125	0.0002625619400010156	0.00021619927923613154
//0.01953125	0.0205078125	0.00015363895925537096	0.00013208859759037184
//0.0205078125	0.021484375	8.773344063550295e-05	7.87298447560148e-05
//0.021484375	0.0224609375	4.870624542938633e-05	4.5611905052485356e-05
//0.0224609375	0.0234375	2.6165845404186405e-05	2.556784252211524e-05
//0.0234375	0.0244140625	1.3522114623025546e-05	1.3786410405661112e-05
//0.0244140625	0.025390625	6.670307361064778e-06	7.09601686301166e-06
//0.025390625	0.0263671875	3.1077924016745592e-06	3.450087497314335e-06
//0.0263671875	0.02734375	1.3471084108145704e-06	1.560876323249772e-06
//0.02734375	0.0283203125	5.308473632499411e-07	6.42144813521031e-07
//0.0283203125	0.029296875	1.8293162147465454e-07	2.3109469593491995e-07
//0.029296875	0.0302734375	5.108898082969446e-08	6.742766058688234e-08
//0.0302734375	0.03125	9.468258026406702e-09	1.3061532103839446e-08
//0.03125	0.033203125	0.0011651551375896393	0.0008404817694323216
//0.033203125	0.03515625	0.0007212726456298365	0.0005440817001731167
//0.03515625	0.037109375	0.00043925253097786546	0.00034627403174013085
//0.037109375	0.0390625	0.0002625619400010156	0.00021619927923624132
//0.0390625	0.041015625	0.00015363895925537096	0.0001320885975904941
//0.041015625	0.04296875	8.773344063550295e-05	7.872984475615955e-05
//0.04296875	0.044921875	4.870624542938633e-05	4.561190505264839e-05
//0.044921875	0.046875	2.6165845404186405e-05	2.5567842522299507e-05
//0.046875	0.048828125	1.3522114623025546e-05	1.3786410405870085e-05
//0.048828125	0.05078125	6.670307361064778e-06	7.096016863249526e-06
//0.05078125	0.052734375	3.1077924016745592e-06	3.450087497588127e-06
//0.052734375	0.0546875	1.3471084108145704e-06	1.560876323563783e-06
//0.0546875	0.056640625	5.308473632499411e-07	6.4214481390413e-07
//0.056640625	0.05859375	1.8293162147465454e-07	2.3109469639799696e-07
//0.05859375	0.060546875	5.108898082969446e-08	6.742766112359435e-08
//0.060546875	0.0625	9.468258026406702e-09	1.3061532728188447e-08
//0.0625	0.06640625	0.0011651551375894173	0.0008404817694323838
//0.06640625	0.0703125	0.0007212726456296145	0.0005440817001731824
//0.0703125	0.07421875	0.0004392525309776434	0.0003462740317402023
//0.07421875	0.078125	0.00026256194000079353	0.00021619927923632792
//0.078125	0.08203125	0.00015363895925514891	0.00013208859759059852
//0.08203125	0.0859375	8.77334406352809e-05	7.872984475629688e-05
//0.0859375	0.08984375	4.870624542916429e-05	4.5611905052812846e-05
//0.08984375	0.09375	2.616584540396436e-05	2.5567842522495957e-05
//0.09375	0.09765625	1.3522114622803501e-05	1.3786410406104352e-05
//0.09765625	0.1015625	6.670307360842734e-06	7.096016863528723e-06
//0.1015625	0.10546875	3.107792401452514e-06	3.450087497924026e-06
//0.10546875	0.109375	1.3471084105925256e-06	1.560876323964325e-06
//0.109375	0.11328125	5.308473630278962e-07	6.42144814416464e-07
//0.11328125	0.1171875	1.8293162125261054e-07	2.3109469704240695e-07
//0.1171875	0.12109375	5.108898060765046e-08	6.742766189359534e-08
//0.12109375	0.125	9.468257804361702e-09	1.3061533650944446e-08
//0.125	0.1328125	0.0011651551375893062	0.000840481769432524
//0.1328125	0.140625	0.0007212726456295034	0.0005440817001733302
//0.140625	0.1484375	0.0004392525309775324	0.00034627403174036173
//0.1484375	0.15625	0.0002625619400006825	0.0002161992792365141
//0.15625	0.1640625	0.0001536389592550379	0.00013208859759081653
//0.1640625	0.171875	8.773344063516988e-05	7.872984475657219e-05
//0.171875	0.1796875	4.8706245429053265e-05	4.561190505313742e-05
//0.1796875	0.1875	2.6165845403853338e-05	2.5567842522879433e-05
//0.1875	0.1953125	1.3522114622692479e-05	1.3786410406558516e-05
//0.1953125	0.203125	6.670307360731711e-06	7.0960168640682875e-06
//0.203125	0.2109375	3.1077924013414923e-06	3.450087498572829e-06
//0.2109375	0.21875	1.3471084104815035e-06	1.560876324740984e-06
//0.21875	0.2265625	5.308473629168742e-07	6.42144815412426e-07
//0.2265625	0.234375	1.8293162114158755e-07	2.3109469830581395e-07
//0.234375	0.2421875	5.108898049662746e-08	6.742766342665535e-08
//0.2421875	0.25	9.468257693339702e-09	1.3061535523791447e-08
//0.25	0.265625	0.0011651551375892507	0.0008404817694328002
//0.265625	0.28125	0.0007212726456294479	0.0005440817001736255
//0.28125	0.296875	0.0004392525309774769	0.0003462740317406841
//0.296875	0.3125	0.000262561940000627	0.00021619927923689306
//0.3125	0.328125	0.00015363895925498238	0.000132088597591264
//0.328125	0.34375	8.773344063511437e-05	7.87298447571406e-05
//0.34375	0.359375	4.8706245428997754e-05	4.5611905053816946e-05
//0.359375	0.375	2.6165845403797827e-05	2.5567842523695712e-05
//0.375	0.390625	1.3522114622636967e-05	1.3786410407544349e-05
//0.390625	0.40625	6.6703073605651776e-06	7.096016865175545e-06
//0.40625	0.421875	3.107792401174958e-06	3.450087499955576e-06
//0.421875	0.4375	1.3471084103149705e-06	1.560876326464611e-06
//0.4375	0.453125	5.308473627503401e-07	6.4214481772698e-07
//0.453125	0.46875	1.8293162097505455e-07	2.3109470139394496e-07
//0.46875	0.484375	5.1088980441116464e-08	6.742766752155535e-08
//0.484375	0.5	9.468257637827702e-09	1.3061540840052447e-08
//0.5	0.53125	0.0011651551375890842	0.0008404817694333137
//0.53125	0.5625	0.0007212726456292814	0.0005440817001741991
//0.5625	0.59375	0.00043925253097731035	0.00034627403174134164
//0.59375	0.625	0.00026256194000046047	0.00021619927923771572
//0.625	0.65625	0.00015363895925481585	0.00013208859759229985
//0.65625	0.6875	8.773344063494784e-05	7.87298447585572e-05
//0.6875	0.71875	4.870624542883122e-05	4.561190505563345e-05
//0.71875	0.75	2.6165845403631294e-05	2.5567842526050335e-05
//0.75	0.78125	1.3522114622470434e-05	1.3786410410638845e-05
//0.78125	0.8125	6.670307360509667e-06	7.096016869408132e-06
//0.8125	0.84375	3.1077924011194473e-06	3.450087505778742e-06
//0.84375	0.875	1.3471084102594595e-06	1.56087632996947e-06
//0.875	0.90625	5.308473626948292e-07	6.42144821806231e-07
//0.90625	0.9375	1.8293162091954356e-07	2.3109470779964994e-07
//0.9375	0.96875	5.108898027458346e-08	6.742767575039835e-08
//0.96875	1.0	9.468257471294702e-09	1.3061551861292446e-08
//1.0	1.0625	0.0011651551375890287	0.0008404817694356489
//1.0625	1.125	0.0007212726456292259	0.000544081700177158
//1.125	1.1875	0.00043925253097725484	0.00034627403174530266
//1.1875	1.25	0.00026256194000040496	0.00021619927924104737
//1.25	1.3125	0.00015363895925476034	0.00013208859759698827
//1.3125	1.375	8.773344063489232e-05	7.872984476519569e-05
//1.375	1.4375	4.870624542877571e-05	4.561190506700118e-05
//1.4375	1.5	2.6165845403575782e-05	2.5567842536128905e-05
//1.5	1.5625	1.3522114622414923e-05	1.3786410426264202e-05
//1.5625	1.625	6.670307360454156e-06	7.096016896055663e-06
//1.625	1.6875	3.107792401063936e-06	3.450087534653801e-06
//1.6875	1.75	1.3471084102039475e-06	1.56087638333459e-06
//1.75	1.8125	5.308473626393182e-07	6.42144891698149e-07
//1.8125	1.875	1.8293162086403257e-07	2.3109485792295995e-07
//1.875	1.9375	5.108898021907246e-08	6.742802414740834e-08
//1.9375	2.0	9.468257415783703e-09	inf
//2.0	2.125	0.001165155137588987	0.0008404817708991056
//2.125	2.25	0.0007212726456291981	0.000544081700207024
//2.25	2.375	0.0004392525309772271	0.00034627403176126944
//2.375	2.5	0.0002625619400003772	0.0002161992792505329
//2.5	2.625	0.00015363895925476034	0.0001320885976016269
//2.625	2.75	8.773344063489232e-05	7.872984476981252e-05
//2.75	2.875	4.870624542877571e-05	4.561190506173149e-05
//2.875	3.0	2.6165845403575782e-05	2.5567842535328337e-05
//3.0	3.125	1.3522114622414923e-05	1.3786410418418363e-05
//3.125	3.25	6.670307360454156e-06	7.096016875804324e-06
//3.25	3.375	3.107792401063936e-06	3.450087510537641e-06
//3.375	3.5	1.3471084102594595e-06	1.56087633701878e-06
//3.5	3.625	5.308473626948292e-07	6.42144827953709e-07
//3.625	3.75	1.8293162091954356e-07	2.3109471062298995e-07
//3.75	3.875	5.108898027458346e-08	6.742767934929835e-08
//3.875	4.0	9.468257471294702e-09	1.3061552667042447e-08
//4.0	4.25	0.0011651551375892507	0.0008404817694355555
//4.25	4.5	0.0007212726456295034	0.0005440817001761176
//4.5	4.75	0.0004392525309775324	0.00034627403174291714
//4.75	5.0	0.0002625619400006825	0.00021619927923904585
//5.0	5.25	0.0001536389592550379	0.00013208859759335784
//5.25	5.5	8.773344063516988e-05	7.872984475932235e-05
//5.5	5.75	4.8706245429053265e-05	4.5611905055965516e-05
//5.75	6.0	2.6165845403853338e-05	2.5567842525812427e-05
//6.0	6.25	1.3522114622692479e-05	1.3786410409623949e-05
//6.25	6.5	6.670307360731711e-06	7.0960168672964215e-06
//6.5	6.75	3.1077924013414923e-06	3.45008750202429e-06
//6.75	7.0	1.3471084104815035e-06	1.560876328427822e-06
//7.0	7.25	5.308473629168742e-07	6.42144819628688e-07
//7.25	7.5	1.8293162114158755e-07	2.3109470309126796e-07
//7.5	7.75	5.108898049662746e-08	6.742766863928835e-08
//7.75	8.0	9.468257804361702e-09	1.3061541391792447e-08
//8.0	8.5	0.0011651551375890842	0.000840481769433223
//8.5	9.0	0.0007212726456292814	0.0005440817001739479
//9.0	9.5	0.00043925253097731035	0.0003462740317409195
//9.5	10.0	0.00026256194000046047	0.00021619927923706246
//10.0	10.5	0.00015363895925481585	0.00013208859759135676
//10.5	11.0	8.773344063494784e-05	7.872984475714988e-05
//11.0	11.5	4.870624542894224e-05	4.5611905053785125e-05
//11.5	12.0	2.6165845403742316e-05	2.556784252351434e-05
//12.0	12.5	1.3522114622581456e-05	1.3786410407175397e-05
//12.5	13.0	6.670307360620689e-06	7.096016864659676e-06
//13.0	13.5	3.107792401230469e-06	3.450087499133116e-06
//13.5	14.0	1.3471084103704814e-06	1.560876325249889e-06
//14.0	14.5	5.308473628058512e-07	6.42144815881686e-07
//14.5	15.0	1.8293162103056554e-07	2.3109469868940095e-07
//15.0	15.5	5.1088980385605465e-08	6.742766365474434e-08
//15.5	16.0	9.468257582316702e-09	1.3061535537288447e-08
//16.0	17.0	0.0011651551375894173	0.0008404817694328483
//17.0	18.0	0.0007212726456296145	0.0005440817001736035
//18.0	19.0	0.0004392525309776434	0.00034627403174059034
//19.0	20.0	0.00026256194000079353	0.00021619927923670804
//20.0	21.0	0.00015363895925514891	0.00013208859759097124
//21.0	22.0	8.77334406352809e-05	7.872984475668517e-05
//22.0	23.0	4.870624542916429e-05	4.5611905053193333e-05
//23.0	24.0	2.616584540396436e-05	2.5567842522866677e-05
//24.0	25.0	1.3522114622803501e-05	1.3786410406462368e-05
//25.0	26.0	6.670307360842734e-06	7.096016863870028e-06
//26.0	27.0	3.107792401452514e-06	3.450087498245626e-06
//27.0	28.0	1.3471084105925256e-06	1.560876324256152e-06
//28.0	29.0	5.308473630278962e-07	6.42144814684308e-07
//29.0	30.0	1.8293162125261054e-07	2.3109469726439896e-07
//30.0	31.0	5.108898060765046e-08	6.742766203792234e-08
//31.0	32.0	9.468257804361702e-09	1.3061533692947447e-08
//32.0	34.0	0.0011651551375896393	0.0008404817694326306
//34.0	36.0	0.0007212726456298365	0.0005440817001733976
//36.0	38.0	0.00043925253097786546	0.00034627403174038976
//38.0	40.0	0.0002625619400010156	0.0002161992792364933
//40.0	42.0	0.00015363895925537096	0.00013208859759073947
//42.0	44.0	8.773344063550295e-05	7.872984475641213e-05
//44.0	46.0	4.870624542938633e-05	4.5611905052893965e-05
//46.0	48.0	2.6165845404186405e-05	2.5567842522536808e-05
//48.0	50.0	1.3522114623025546e-05	1.378641040609728e-05
//50.0	52.0	6.670307361064778e-06	7.096016863464156e-06
//52.0	54.0	3.1077924016745592e-06	3.450087497788365e-06
//54.0	56.0	1.3471084108145704e-06	1.5608763237436519e-06
//56.0	58.0	5.308473632499411e-07	6.42144814067095e-07
//58.0	60.0	1.8293162147465454e-07	2.3109469653134594e-07
//60.0	62.0	5.1088981051739465e-08	6.742766128731935e-08
//62.0	64.0	9.468258248450702e-09	1.3061532831306447e-08
//64.0	68.0	0.0011651551375896393	0.0008404817694324372
//68.0	72.0	0.0007212726456298365	0.0005440817001732108
//72.0	76.0	0.00043925253097786546	0.0003462740317402057
//76.0	80.0	0.0002625619400010156	0.00021619927923630076
//80.0	84.0	0.00015363895925537096	0.0001320885975905365
//84.0	88.0	8.773344063572499e-05	7.872984475624802e-05
//88.0	92.0	4.8706245429608376e-05	4.5611905052713215e-05
//92.0	96.0	2.616584540440845e-05	2.5567842522336912e-05
//96.0	100.0	1.352211462324759e-05	1.3786410405875406e-05
//100.0	104.0	6.6703073612868225e-06	7.096016863216976e-06
//104.0	108.0	3.107792401896603e-06	3.450087497509523e-06
//108.0	112.0	1.3471084110366154e-06	1.56087632343096e-06
//112.0	116.0	5.308473634719852e-07	6.42144813690617e-07
//116.0	120.0	1.8293162169669954e-07	2.3109469608470994e-07
//120.0	124.0	5.1088981051739465e-08	6.742766070535034e-08
//124.0	128.0	9.468258248450702e-09	1.3061532182792446e-08
//128.0	136.0	0.0011651551375894173	0.0008404817694322553
//136.0	144.0	0.0007212726456296145	0.0005440817001730331
//144.0	152.0	0.0004392525309776434	0.0003462740317400298
//152.0	160.0	0.00026256194000079353	0.00021619927923611913
//160.0	168.0	0.00015363895925514891	0.00013208859759034785
//168.0	176.0	8.77334406352809e-05	7.872984475597868e-05
//176.0	184.0	4.870624542916429e-05	4.561190505243333e-05
//184.0	192.0	2.616584540396436e-05	2.5567842522044645e-05
//192.0	200.0	1.3522114622803501e-05	1.3786410405568709e-05
//200.0	208.0	6.670307360842734e-06	7.096016862893484e-06
//208.0	216.0	3.107792401452514e-06	3.450087497164836e-06
//216.0	224.0	1.3471084105925256e-06	1.560876323063513e-06
//224.0	232.0	5.308473630278962e-07	6.42144813280184e-07
//232.0	240.0	1.8293162125261054e-07	2.3109469562699994e-07
//240.0	248.0	5.108898060765046e-08	6.742766020912035e-08
//248.0	256.0	9.468257804361702e-09	1.3061531642236447e-08
//256.0	272.0	0.0011651551375898613	0.0008404817694322697
//272.0	288.0	0.0007212726456300585	0.0005440817001730485
//288.0	304.0	0.0004392525309780875	0.00034627403174004493
//304.0	320.0	0.0002625619400012376	0.00021619927923612867
//320.0	336.0	0.000153638959255593	0.00013208859759035113
//336.0	352.0	8.773344063572499e-05	7.872984475596886e-05
//352.0	368.0	4.8706245429608376e-05	4.561190505241469e-05
//368.0	384.0	2.616584540440845e-05	2.5567842522016076e-05
//384.0	400.0	1.352211462324759e-05	1.3786410405528936e-05
//400.0	416.0	6.6703073612868225e-06	7.096016862841012e-06
//416.0	432.0	3.107792401896603e-06	3.450087497096719e-06
//432.0	448.0	1.3471084110366154e-06	1.560876322978855e-06
//448.0	464.0	5.308473634719852e-07	6.42144813164688e-07
//464.0	480.0	1.8293162169669954e-07	2.3109469547787995e-07
//480.0	496.0	5.1088981051739465e-08	6.742766003301934e-08
//496.0	512.0	9.468258248450702e-09	1.3061531435382447e-08
//512.0	544.0	0.0011651551375898613	0.0008404817694321977
//544.0	576.0	0.0007212726456300585	0.000544081700172978
//576.0	608.0	0.0004392525309780875	0.0003462740317399748
//608.0	640.0	0.0002625619400012376	0.000216199279236055
//640.0	672.0	0.000153638959255593	0.00013208859759027323
//672.0	704.0	8.773344063572499e-05	7.872984475588154e-05
//704.0	736.0	4.8706245429608376e-05	4.561190505232107e-05
//736.0	768.0	2.616584540440845e-05	2.556784252191525e-05
//768.0	800.0	1.352211462324759e-05	1.3786410405419875e-05
//800.0	832.0	6.6703073612868225e-06	7.096016862722522e-06
//832.0	864.0	3.107792401896603e-06	3.4500874969665207e-06
//864.0	896.0	1.3471084110366154e-06	1.560876322836217e-06
//896.0	928.0	5.308473634719852e-07	6.42144812998786e-07
//928.0	960.0	1.8293162169669954e-07	2.3109469528658094e-07
//960.0	992.0	5.1088981051739465e-08	6.742765982131534e-08
//992.0	1024.0	9.468258248450702e-09	1.3061531200436446e-08
//1024.0	1088.0	0.0011651551375898613	0.0008404817694321422
//1088.0	1152.0	0.0007212726456300585	0.0005440817001729235
//1152.0	1216.0	0.0004392525309780875	0.00034627403173992046
//1216.0	1280.0	0.0002625619400012376	0.0002161992792359978
//1280.0	1344.0	0.000153638959255593	0.0001320885975902127
//1344.0	1408.0	8.773344063572499e-05	7.872984475581358e-05
//1408.0	1472.0	4.8706245429608376e-05	4.5611905052248146e-05
//1472.0	1536.0	2.616584540440845e-05	2.556784252183664e-05
//1536.0	1600.0	1.352211462324759e-05	1.3786410405334786e-05
//1600.0	1664.0	6.6703073612868225e-06	7.0960168626300315e-06
//1664.0	1728.0	3.107792401896603e-06	3.4500874968648572e-06
//1728.0	1792.0	1.3471084110366154e-06	1.560876322724825e-06
//1792.0	1856.0	5.308473634719852e-07	6.421448128692349e-07
//1856.0	1920.0	1.8293162169669954e-07	2.3109469513723895e-07
//1920.0	1984.0	5.1088981051739465e-08	6.742765965612535e-08
//1984.0	2048.0	9.468258248450702e-09	1.3061531017243446e-08
//2048.0	2176.0	0.0011651551375903054	0.0008404817694321637
//2176.0	2304.0	0.0007212726456305026	0.0005440817001729454
//2304.0	2432.0	0.0004392525309785316	0.00034627403173994204
//2432.0	2560.0	0.0002625619400016817	0.0002161992792360167
//2560.0	2688.0	0.0001536389592560371	0.00013208859759022856
//2688.0	2816.0	8.773344063616908e-05	7.872984475582319e-05
//2816.0	2944.0	4.8706245430052466e-05	4.5611905052253506e-05
//2944.0	3072.0	2.616584540485254e-05	2.556784252183722e-05
//3072.0	3200.0	1.352211462369168e-05	1.3786410405329993e-05
//3200.0	3328.0	6.670307361730912e-06	7.096016862619167e-06
//3328.0	3456.0	3.107792402340692e-06	3.450087496846547e-06
//3456.0	3584.0	1.3471084114807044e-06	1.5608763226986728e-06
//3584.0	3712.0	5.308473643601642e-07	6.42144812891788e-07
//3712.0	3840.0	1.8293162258487757e-07	2.3109469514404695e-07
//3840.0	3968.0	5.108898193991746e-08	6.742765965046834e-08
//3968.0	4096.0	9.468259136630703e-09	1.3061530997524446e-08
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//4096.0	4096.0	0.0011651551375898045	0.0008404817694320466
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375890842,
//spec:     "domain": [
//spec:         0.5,
//spec:         2.0
//spec:     ],
//spec:     "epsilon": 1.3061551861292446e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375892507,
//spec:     "domain": [
//spec:         0.25,
//spec:         4.0
//spec:     ],
//spec:     "epsilon": 1.3061540840052447e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375893062,
//spec:     "domain": [
//spec:         0.125,
//spec:         8.0
//spec:     ],
//spec:     "epsilon": 1.3061535523791447e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375894173,
//spec:     "domain": [
//spec:         0.0625,
//spec:         16.0
//spec:     ],
//spec:     "epsilon": 1.3061533650944446e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375896393,
//spec:     "domain": [
//spec:         0.03125,
//spec:         32.0
//spec:     ],
//spec:     "epsilon": 1.3061532728188447e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375896393,
//spec:     "domain": [
//spec:         0.015625,
//spec:         64.0
//spec:     ],
//spec:     "epsilon": 1.3061532103839446e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375898613,
//spec:     "domain": [
//spec:         0.0078125,
//spec:         128.0
//spec:     ],
//spec:     "epsilon": 1.3061531736245446e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375898613,
//spec:     "domain": [
//spec:         0.00390625,
//spec:         256.0
//spec:     ],
//spec:     "epsilon": 1.3061531426989447e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375898613,
//spec:     "domain": [
//spec:         0.001953125,
//spec:         512.0
//spec:     ],
//spec:     "epsilon": 1.3061531193989447e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375898613,
//spec:     "domain": [
//spec:         0.0009765625,
//spec:         1024.0
//spec:     ],
//spec:     "epsilon": 1.3061531012135447e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_11",
//spec:     "delta": 0.0011651551375903054,
//spec:     "domain": [
//spec:         0.00048828125,
//spec:         2048.0
//spec:     ],
//spec:     "epsilon": 1.3061530929617446e-08,
//spec:     "operation": "log"
//spec: }
