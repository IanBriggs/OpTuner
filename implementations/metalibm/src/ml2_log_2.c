/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_2.c --poly-degree 2 --fname \
 *     ml2_log_2 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>



double ml2_log_2(double);
double ml2_log_2(double x){
    double x_man;
    double r;
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
    pm_1 = r * -0x1.84cb20f4ed1c1p-1;
    pa_1 = 0x1.4010615ae692ap1 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.bdbb2e0da2f5fp0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f1e087af7f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f1e087afac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f1e087afb80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f1e087afd60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1e087be0a0>
//Info: executing pass instantiate_abstract_prec on fct ml2_log_2
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1e087be0a0>
//Info: executing pass instantiate_prec on fct ml2_log_2
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1e087be0a0>
//Info: executing pass sub_expr_sharing on fct ml2_log_2
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1e087be0a0>
//Info: executing pass check_processor_support on fct ml2_log_2
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f1e087be0a0>
//Info: executing pass debug_tag_node on fct ml2_log_2
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_log_2.c
//0.000244140625	0.0002593994140625	0.222821803716705	0.16073195561201117
//0.0002593994140625	0.000274658203125	0.19514958388615128	0.14720829638058042
//0.000274658203125	0.0002899169921875	0.17057278968380385	0.134466903258807
//0.0002899169921875	0.00030517578125	0.14871640570284933	0.1224563610538847
//0.00030517578125	0.0003204345703125	0.12926316625634007	0.11113190582563728
//0.0003204345703125	0.000335693359375	0.11194227467966944	0.10045426058253708
//0.000335693359375	0.0003509521484375	0.09652074928925793	0.09038872147909748
//0.0003509521484375	0.0003662109375	0.08279669461462556	0.0809044315896325
//0.0003662109375	0.0003814697265625	0.07059400574375115	0.07197379719964955
//0.0003814697265625	0.000396728515625	0.059758154423137595	0.06357201381512351
//0.000396728515625	0.0004119873046875	0.050152802121217935	0.055676677655511854
//0.0004119873046875	0.00042724609375	0.0416570526414526	0.04826746448075754
//0.00042724609375	0.0004425048828125	0.034163204625379494	0.04132586198983865
//0.0004425048828125	0.000457763671875	0.027574898620631255	0.03483494523582155
//0.000457763671875	0.0004730224609375	0.021805578403191767	0.02877918687700864
//0.0004730224609375	0.00048828125	0.016777204690162816	0.02314429586247559
//0.00048828125	0.000518798828125	0.222821803716705	0.1607319556120112
//0.000518798828125	0.00054931640625	0.19514958388615128	0.14720829638058044
//0.00054931640625	0.000579833984375	0.17057278968380385	0.13446690325880703
//0.000579833984375	0.0006103515625	0.14871640570284933	0.12245636105388473
//0.0006103515625	0.000640869140625	0.12926316625633963	0.11113190582563724
//0.000640869140625	0.00067138671875	0.111942274679669	0.10045426058253705
//0.00067138671875	0.000701904296875	0.09652074928925748	0.09038872147909743
//0.000701904296875	0.000732421875	0.08279669461462512	0.08090443158963245
//0.000732421875	0.000762939453125	0.0705940057437507	0.07197379719964951
//0.000762939453125	0.00079345703125	0.05975815442313715	0.06357201381512347
//0.00079345703125	0.000823974609375	0.05015280212121749	0.05567667765551181
//0.000823974609375	0.0008544921875	0.041657052641452155	0.0482674644807575
//0.0008544921875	0.000885009765625	0.03416320462537905	0.041325861989838605
//0.000885009765625	0.00091552734375	0.02757489862063081	0.034834945235821514
//0.00091552734375	0.000946044921875	0.021805578403191323	0.0287791868770086
//0.000946044921875	0.0009765625	0.016777204690162372	0.023144295862475548
//0.0009765625	0.00103759765625	0.22282180371670457	0.16073195561201115
//0.00103759765625	0.0010986328125	0.19514958388615083	0.14720829638058042
//0.0010986328125	0.00115966796875	0.1705727896838034	0.13446690325880697
//0.00115966796875	0.001220703125	0.1487164057028489	0.12245636105388469
//0.001220703125	0.00128173828125	0.12926316625633963	0.11113190582563726
//0.00128173828125	0.0013427734375	0.111942274679669	0.10045426058253706
//0.0013427734375	0.00140380859375	0.09652074928925748	0.09038872147909745
//0.00140380859375	0.00146484375	0.08279669461462512	0.08090443158963247
//0.00146484375	0.00152587890625	0.0705940057437507	0.07197379719964953
//0.00152587890625	0.0015869140625	0.05975815442313715	0.06357201381512348
//0.0015869140625	0.00164794921875	0.05015280212121749	0.055676677655511826
//0.00164794921875	0.001708984375	0.041657052641452155	0.04826746448075751
//0.001708984375	0.00177001953125	0.03416320462537905	0.04132586198983862
//0.00177001953125	0.0018310546875	0.02757489862063081	0.03483494523582153
//0.0018310546875	0.00189208984375	0.021805578403191323	0.028779186877008617
//0.00189208984375	0.001953125	0.016777204690162372	0.023144295862475565
//0.001953125	0.0020751953125	0.22282180371670457	0.16073195561201117
//0.0020751953125	0.002197265625	0.19514958388615083	0.14720829638058042
//0.002197265625	0.0023193359375	0.1705727896838034	0.134466903258807
//0.0023193359375	0.00244140625	0.1487164057028489	0.1224563610538847
//0.00244140625	0.0025634765625	0.12926316625633963	0.11113190582563728
//0.0025634765625	0.002685546875	0.111942274679669	0.10045426058253708
//0.002685546875	0.0028076171875	0.09652074928925748	0.09038872147909746
//0.0028076171875	0.0029296875	0.08279669461462512	0.08090443158963248
//0.0029296875	0.0030517578125	0.0705940057437507	0.07197379719964954
//0.0030517578125	0.003173828125	0.05975815442313715	0.06357201381512351
//0.003173828125	0.0032958984375	0.05015280212121749	0.05567667765551184
//0.0032958984375	0.00341796875	0.041657052641452155	0.048267464480757534
//0.00341796875	0.0035400390625	0.03416320462537905	0.04132586198983864
//0.0035400390625	0.003662109375	0.02757489862063081	0.03483494523582155
//0.003662109375	0.0037841796875	0.021805578403191323	0.028779186877008638
//0.0037841796875	0.00390625	0.016777204690162372	0.023144295862475586
//0.00390625	0.004150390625	0.22282180371670457	0.16073195561201117
//0.004150390625	0.00439453125	0.19514958388615083	0.14720829638058044
//0.00439453125	0.004638671875	0.1705727896838034	0.13446690325880703
//0.004638671875	0.0048828125	0.1487164057028489	0.12245636105388472
//0.0048828125	0.005126953125	0.12926316625633963	0.1111319058256373
//0.005126953125	0.00537109375	0.111942274679669	0.10045426058253709
//0.00537109375	0.005615234375	0.09652074928925748	0.09038872147909748
//0.005615234375	0.005859375	0.08279669461462512	0.08090443158963251
//0.005859375	0.006103515625	0.0705940057437507	0.07197379719964957
//0.006103515625	0.00634765625	0.05975815442313715	0.06357201381512352
//0.00634765625	0.006591796875	0.05015280212121749	0.05567667765551187
//0.006591796875	0.0068359375	0.041657052641452155	0.048267464480757555
//0.0068359375	0.007080078125	0.03416320462537905	0.04132586198983866
//0.007080078125	0.00732421875	0.02757489862063081	0.03483494523582157
//0.00732421875	0.007568359375	0.021805578403191323	0.028779186877008662
//0.007568359375	0.0078125	0.016777204690162372	0.02314429586247561
//0.0078125	0.00830078125	0.22282180371670457	0.1607319556120112
//0.00830078125	0.0087890625	0.19514958388615083	0.14720829638058047
//0.0087890625	0.00927734375	0.1705727896838034	0.13446690325880706
//0.00927734375	0.009765625	0.1487164057028489	0.12245636105388474
//0.009765625	0.01025390625	0.12926316625633963	0.11113190582563733
//0.01025390625	0.0107421875	0.111942274679669	0.10045426058253712
//0.0107421875	0.01123046875	0.09652074928925748	0.0903887214790975
//0.01123046875	0.01171875	0.08279669461462512	0.08090443158963254
//0.01171875	0.01220703125	0.0705940057437507	0.0719737971996496
//0.01220703125	0.0126953125	0.05975815442313715	0.06357201381512355
//0.0126953125	0.01318359375	0.05015280212121749	0.055676677655511896
//0.01318359375	0.013671875	0.041657052641452155	0.04826746448075758
//0.013671875	0.01416015625	0.03416320462537905	0.04132586198983869
//0.01416015625	0.0146484375	0.02757489862063081	0.034834945235821604
//0.0146484375	0.01513671875	0.021805578403191323	0.028779186877008693
//0.01513671875	0.015625	0.016777204690162372	0.023144295862475642
//0.015625	0.0166015625	0.22282180371670435	0.1607319556120112
//0.0166015625	0.017578125	0.1951495838861506	0.14720829638058044
//0.017578125	0.0185546875	0.17057278968380318	0.13446690325880703
//0.0185546875	0.01953125	0.14871640570284866	0.12245636105388473
//0.01953125	0.0205078125	0.1292631662563394	0.11113190582563731
//0.0205078125	0.021484375	0.11194227467966877	0.10045426058253712
//0.021484375	0.0224609375	0.09652074928925726	0.09038872147909749
//0.0224609375	0.0234375	0.0827966946146249	0.08090443158963252
//0.0234375	0.0244140625	0.07059400574375048	0.07197379719964957
//0.0244140625	0.025390625	0.05975815442313693	0.06357201381512353
//0.025390625	0.0263671875	0.05015280212121727	0.05567667765551188
//0.0263671875	0.02734375	0.04165705264145193	0.04826746448075757
//0.02734375	0.0283203125	0.03416320462537883	0.041325861989838675
//0.0283203125	0.029296875	0.02757489862063059	0.03483494523582159
//0.029296875	0.0302734375	0.0218055784031911	0.02877918687700868
//0.0302734375	0.03125	0.01677720469016215	0.02314429586247563
//0.03125	0.033203125	0.22282180371670413	0.16073195561201117
//0.033203125	0.03515625	0.1951495838861504	0.14720829638058044
//0.03515625	0.037109375	0.17057278968380296	0.134466903258807
//0.037109375	0.0390625	0.14871640570284844	0.12245636105388472
//0.0390625	0.041015625	0.12926316625633918	0.1111319058256373
//0.041015625	0.04296875	0.11194227467966855	0.10045426058253709
//0.04296875	0.044921875	0.09652074928925704	0.09038872147909748
//0.044921875	0.046875	0.08279669461462467	0.0809044315896325
//0.046875	0.048828125	0.07059400574375026	0.07197379719964955
//0.048828125	0.05078125	0.05975815442313671	0.06357201381512352
//0.05078125	0.052734375	0.05015280212121705	0.05567667765551186
//0.052734375	0.0546875	0.04165705264145171	0.04826746448075755
//0.0546875	0.056640625	0.034163204625378606	0.041325861989838654
//0.056640625	0.05859375	0.027574898620630367	0.03483494523582158
//0.05859375	0.060546875	0.02180557840319088	0.028779186877008665
//0.060546875	0.0625	0.016777204690161928	0.023144295862475614
//0.0625	0.06640625	0.22282180371670413	0.16073195561201123
//0.06640625	0.0703125	0.1951495838861504	0.14720829638058047
//0.0703125	0.07421875	0.17057278968380296	0.13446690325880706
//0.07421875	0.078125	0.14871640570284844	0.12245636105388476
//0.078125	0.08203125	0.12926316625633918	0.11113190582563734
//0.08203125	0.0859375	0.11194227467966855	0.10045426058253713
//0.0859375	0.08984375	0.09652074928925704	0.09038872147909752
//0.08984375	0.09375	0.08279669461462467	0.08090443158963254
//0.09375	0.09765625	0.07059400574375026	0.0719737971996496
//0.09765625	0.1015625	0.05975815442313671	0.06357201381512356
//0.1015625	0.10546875	0.05015280212121705	0.05567667765551191
//0.10546875	0.109375	0.04165705264145171	0.048267464480757596
//0.109375	0.11328125	0.034163204625378606	0.04132586198983871
//0.11328125	0.1171875	0.027574898620630367	0.03483494523582163
//0.1171875	0.12109375	0.02180557840319088	0.02877918687700872
//0.12109375	0.125	0.016777204690161928	0.023144295862475673
//0.125	0.1328125	0.22282180371670401	0.16073195561201123
//0.1328125	0.140625	0.19514958388615028	0.1472082963805805
//0.140625	0.1484375	0.17057278968380285	0.13446690325880709
//0.1484375	0.15625	0.14871640570284833	0.12245636105388479
//0.15625	0.1640625	0.12926316625633907	0.11113190582563737
//0.1640625	0.171875	0.11194227467966844	0.10045426058253716
//0.171875	0.1796875	0.09652074928925693	0.09038872147909754
//0.1796875	0.1875	0.08279669461462456	0.08090443158963256
//0.1875	0.1953125	0.07059400574375015	0.07197379719964962
//0.1953125	0.203125	0.059758154423136596	0.06357201381512359
//0.203125	0.2109375	0.050152802121216936	0.05567667765551194
//0.2109375	0.21875	0.0416570526414516	0.048267464480757624
//0.21875	0.2265625	0.034163204625378495	0.04132586198983874
//0.2265625	0.234375	0.027574898620630256	0.03483494523582167
//0.234375	0.2421875	0.021805578403190768	0.028779186877008762
//0.2421875	0.25	0.016777204690161817	0.023144295862475715
//0.25	0.265625	0.22282180371670385	0.16073195561201123
//0.265625	0.28125	0.1951495838861501	0.1472082963805805
//0.28125	0.296875	0.17057278968380268	0.13446690325880709
//0.296875	0.3125	0.14871640570284816	0.12245636105388479
//0.3125	0.328125	0.1292631662563389	0.11113190582563737
//0.328125	0.34375	0.11194227467966827	0.10045426058253717
//0.34375	0.359375	0.09652074928925676	0.09038872147909754
//0.359375	0.375	0.0827966946146244	0.08090443158963258
//0.375	0.390625	0.07059400574374998	0.07197379719964964
//0.390625	0.40625	0.05975815442313643	0.0635720138151236
//0.40625	0.421875	0.05015280212121677	0.05567667765551195
//0.421875	0.4375	0.041657052641451434	0.048267464480757645
//0.4375	0.453125	0.03416320462537833	0.04132586198983876
//0.453125	0.46875	0.02757489862063009	0.0348349452358217
//0.46875	0.484375	0.0218055784031906	0.0287791868770088
//0.484375	0.5	0.01677720469016165	0.023144295862475756
//0.5	0.53125	0.2228218037167038	0.16073195561201134
//0.53125	0.5625	0.19514958388615006	0.1472082963805806
//0.5625	0.59375	0.17057278968380263	0.1344669032588072
//0.59375	0.625	0.1487164057028481	0.12245636105388491
//0.625	0.65625	0.12926316625633885	0.1111319058256375
//0.65625	0.6875	0.11194227467966822	0.10045426058253733
//0.6875	0.71875	0.09652074928925665	0.09038872147909761
//0.71875	0.75	0.08279669461462429	0.08090443158963265
//0.75	0.78125	0.07059400574374987	0.07197379719964972
//0.78125	0.8125	0.05975815442313632	0.0635720138151237
//0.8125	0.84375	0.05015280212121666	0.05567667765551206
//0.84375	0.875	0.04165705264145132	0.04826746448075776
//0.875	0.90625	0.03416320462537822	0.04132586198983889
//0.90625	0.9375	0.02757489862062998	0.03483494523582189
//0.9375	0.96875	0.02180557840319049	0.028779186877009
//0.96875	1.0	0.01677720469016154	0.023144295862475975
//1.0	1.0625	0.2228218037167037	0.16073195561201173
//1.0625	1.125	0.19514958388614997	0.14720829638058103
//1.125	1.1875	0.17057278968380254	0.1344669032588077
//1.1875	1.25	0.14871640570284803	0.12245636105388548
//1.25	1.3125	0.12926316625633877	0.11113190582563817
//1.3125	1.375	0.11194227467966814	0.10045426058253812
//1.375	1.4375	0.09652074928925662	0.09038872147909845
//1.4375	1.5	0.08279669461462426	0.08090443158963366
//1.5	1.5625	0.07059400574374983	0.07197379719965087
//1.5625	1.625	0.05975815442313628	0.06357201381512514
//1.625	1.6875	0.050152802121216616	0.055676677655513956
//1.6875	1.75	0.04165705264145128	0.048267464480760386
//1.75	1.8125	0.03416320462537817	0.04132586198984276
//1.8125	1.875	0.02757489862062993	0.03483494523583052
//1.875	1.9375	0.02180557840319044	0.02877918687704537
//1.9375	2.0	0.016777204690161484	inf
//2.0	2.125	0.2228218037167037	0.16073195561201242
//2.125	2.25	0.19514958388614997	0.1472082963805815
//2.25	2.375	0.17057278968380254	0.13446690325880795
//2.375	2.5	0.14871640570284803	0.12245636105388555
//2.5	2.625	0.12926316625633877	0.11113190582563803
//2.625	2.75	0.11194227467966814	0.10045426058253777
//2.75	2.875	0.09652074928925662	0.09038872147909797
//2.875	3.0	0.08279669461462426	0.08090443158963295
//3.0	3.125	0.07059400574374987	0.07197379719965004
//3.125	3.25	0.05975815442313632	0.06357201381512396
//3.25	3.375	0.05015280212121666	0.05567667765551227
//3.375	3.5	0.04165705264145132	0.048267464480757936
//3.5	3.625	0.03416320462537822	0.041325861989839015
//3.625	3.75	0.02757489862062998	0.034834945235821986
//3.75	3.875	0.02180557840319049	0.02877918687700905
//3.875	4.0	0.01677720469016154	0.023144295862475975
//4.0	4.25	0.22282180371670396	0.16073195561201162
//4.25	4.5	0.19514958388615022	0.14720829638058083
//4.5	4.75	0.17057278968380285	0.13446690325880747
//4.75	5.0	0.14871640570284833	0.12245636105388515
//5.0	5.25	0.12926316625633907	0.1111319058256377
//5.25	5.5	0.11194227467966844	0.1004542605825375
//5.5	5.75	0.09652074928925693	0.09038872147909782
//5.75	6.0	0.08279669461462456	0.08090443158963283
//6.0	6.25	0.07059400574375015	0.07197379719964987
//6.25	6.5	0.059758154423136596	0.06357201381512383
//6.5	6.75	0.050152802121216936	0.05567667765551215
//6.75	7.0	0.0416570526414516	0.04826746448075783
//7.0	7.25	0.034163204625378495	0.041325861989838925
//7.25	7.5	0.027574898620630256	0.03483494523582186
//7.5	7.75	0.021805578403190768	0.02877918687700894
//7.75	8.0	0.016777204690161817	0.02314429586247588
//8.0	8.5	0.2228218037167038	0.16073195561201123
//8.5	9.0	0.19514958388615006	0.1472082963805805
//9.0	9.5	0.17057278968380263	0.13446690325880706
//9.5	10.0	0.1487164057028481	0.12245636105388476
//10.0	10.5	0.12926316625633885	0.11113190582563734
//10.5	11.0	0.11194227467966822	0.10045426058253713
//11.0	11.5	0.0965207492892567	0.09038872147909749
//11.5	12.0	0.08279669461462434	0.08090443158963251
//12.0	12.5	0.07059400574374992	0.07197379719964957
//12.5	13.0	0.059758154423136374	0.06357201381512352
//13.0	13.5	0.050152802121216714	0.05567667765551186
//13.5	14.0	0.04165705264145138	0.04826746448075755
//14.0	14.5	0.034163204625378384	0.0413258619898387
//14.5	15.0	0.027574898620630145	0.03483494523582163
//15.0	15.5	0.021805578403190657	0.028779186877008714
//15.5	16.0	0.016777204690161706	0.02314429586247566
//16.0	17.0	0.22282180371670413	0.1607319556120113
//17.0	18.0	0.1951495838861504	0.14720829638058056
//18.0	19.0	0.17057278968380296	0.13446690325880714
//19.0	20.0	0.14871640570284844	0.12245636105388483
//20.0	21.0	0.12926316625633918	0.11113190582563741
//21.0	22.0	0.11194227467966855	0.1004542605825372
//22.0	23.0	0.09652074928925704	0.09038872147909756
//23.0	24.0	0.08279669461462467	0.08090443158963259
//24.0	25.0	0.07059400574375026	0.07197379719964964
//25.0	26.0	0.05975815442313671	0.06357201381512359
//26.0	27.0	0.05015280212121705	0.05567667765551194
//27.0	28.0	0.04165705264145171	0.04826746448075762
//28.0	29.0	0.034163204625378606	0.04132586198983872
//29.0	30.0	0.027574898620630367	0.03483494523582164
//30.0	31.0	0.02180557840319088	0.028779186877008728
//31.0	32.0	0.016777204690161928	0.023144295862475673
//32.0	34.0	0.22282180371670435	0.1607319556120113
//34.0	36.0	0.1951495838861506	0.14720829638058056
//36.0	38.0	0.17057278968380318	0.13446690325880714
//38.0	40.0	0.14871640570284866	0.12245636105388483
//40.0	42.0	0.1292631662563394	0.11113190582563741
//42.0	44.0	0.11194227467966877	0.1004542605825372
//44.0	46.0	0.09652074928925726	0.09038872147909757
//46.0	48.0	0.0827966946146249	0.08090443158963259
//48.0	50.0	0.07059400574375048	0.07197379719964965
//50.0	52.0	0.05975815442313693	0.0635720138151236
//52.0	54.0	0.05015280212121727	0.055676677655511944
//54.0	56.0	0.04165705264145193	0.04826746448075763
//56.0	58.0	0.03416320462537883	0.04132586198983873
//58.0	60.0	0.02757489862063059	0.034834945235821646
//60.0	62.0	0.0218055784031911	0.028779186877008735
//62.0	64.0	0.01677720469016215	0.02314429586247568
//64.0	68.0	0.22282180371670435	0.16073195561201126
//68.0	72.0	0.1951495838861506	0.1472082963805805
//72.0	76.0	0.17057278968380318	0.13446690325880709
//76.0	80.0	0.14871640570284866	0.12245636105388477
//80.0	84.0	0.1292631662563394	0.11113190582563735
//84.0	88.0	0.11194227467966877	0.10045426058253715
//88.0	92.0	0.09652074928925726	0.09038872147909752
//92.0	96.0	0.0827966946146249	0.08090443158963255
//96.0	100.0	0.07059400574375048	0.0719737971996496
//100.0	104.0	0.05975815442313715	0.06357201381512362
//104.0	108.0	0.05015280212121749	0.05567667765551195
//108.0	112.0	0.041657052641452155	0.04826746448075764
//112.0	116.0	0.03416320462537905	0.04132586198983874
//116.0	120.0	0.02757489862063081	0.03483494523582165
//120.0	124.0	0.021805578403191323	0.028779186877008738
//124.0	128.0	0.016777204690162372	0.023144295862475683
//128.0	136.0	0.22282180371670413	0.16073195561201115
//136.0	144.0	0.1951495838861504	0.14720829638058042
//144.0	152.0	0.17057278968380296	0.13446690325880697
//152.0	160.0	0.14871640570284844	0.12245636105388469
//160.0	168.0	0.12926316625633918	0.11113190582563726
//168.0	176.0	0.11194227467966855	0.10045426058253706
//176.0	184.0	0.09652074928925704	0.09038872147909743
//184.0	192.0	0.08279669461462467	0.08090443158963245
//192.0	200.0	0.07059400574375026	0.07197379719964951
//200.0	208.0	0.05975815442313671	0.06357201381512348
//208.0	216.0	0.05015280212121705	0.05567667765551181
//216.0	224.0	0.04165705264145171	0.0482674644807575
//224.0	232.0	0.034163204625378606	0.041325861989838605
//232.0	240.0	0.027574898620630367	0.034834945235821514
//240.0	248.0	0.02180557840319088	0.028779186877008603
//248.0	256.0	0.016777204690161928	0.023144295862475548
//256.0	272.0	0.22282180371670457	0.16073195561201123
//272.0	288.0	0.19514958388615083	0.14720829638058047
//288.0	304.0	0.1705727896838034	0.13446690325880706
//304.0	320.0	0.1487164057028489	0.12245636105388474
//320.0	336.0	0.12926316625633963	0.11113190582563733
//336.0	352.0	0.111942274679669	0.10045426058253712
//352.0	368.0	0.09652074928925748	0.0903887214790975
//368.0	384.0	0.08279669461462512	0.08090443158963252
//384.0	400.0	0.0705940057437507	0.07197379719964958
//400.0	416.0	0.05975815442313715	0.06357201381512353
//416.0	432.0	0.05015280212121749	0.055676677655511875
//432.0	448.0	0.041657052641452155	0.04826746448075756
//448.0	464.0	0.03416320462537905	0.04132586198983867
//464.0	480.0	0.02757489862063081	0.03483494523582158
//480.0	496.0	0.021805578403191323	0.028779186877008662
//496.0	512.0	0.016777204690162372	0.02314429586247561
//512.0	544.0	0.22282180371670457	0.1607319556120112
//544.0	576.0	0.19514958388615083	0.14720829638058044
//576.0	608.0	0.1705727896838034	0.13446690325880703
//608.0	640.0	0.1487164057028489	0.12245636105388472
//640.0	672.0	0.12926316625633963	0.1111319058256373
//672.0	704.0	0.111942274679669	0.10045426058253709
//704.0	736.0	0.09652074928925748	0.09038872147909748
//736.0	768.0	0.08279669461462512	0.0809044315896325
//768.0	800.0	0.0705940057437507	0.07197379719964955
//800.0	832.0	0.05975815442313715	0.06357201381512351
//832.0	864.0	0.05015280212121749	0.055676677655511854
//864.0	896.0	0.041657052641452155	0.04826746448075754
//896.0	928.0	0.03416320462537905	0.04132586198983864
//928.0	960.0	0.02757489862063081	0.03483494523582155
//960.0	992.0	0.021805578403191323	0.028779186877008638
//992.0	1024.0	0.016777204690162372	0.023144295862475586
//1024.0	1088.0	0.22282180371670457	0.16073195561201117
//1088.0	1152.0	0.19514958388615083	0.14720829638058042
//1152.0	1216.0	0.1705727896838034	0.134466903258807
//1216.0	1280.0	0.1487164057028489	0.1224563610538847
//1280.0	1344.0	0.12926316625633963	0.11113190582563728
//1344.0	1408.0	0.111942274679669	0.10045426058253708
//1408.0	1472.0	0.09652074928925748	0.09038872147909746
//1472.0	1536.0	0.08279669461462512	0.08090443158963248
//1536.0	1600.0	0.0705940057437507	0.07197379719964953
//1600.0	1664.0	0.05975815442313715	0.0635720138151235
//1664.0	1728.0	0.05015280212121749	0.05567667765551183
//1728.0	1792.0	0.041657052641452155	0.04826746448075752
//1792.0	1856.0	0.03416320462537905	0.041325861989838626
//1856.0	1920.0	0.02757489862063081	0.03483494523582153
//1920.0	1984.0	0.021805578403191323	0.028779186877008617
//1984.0	2048.0	0.016777204690162372	0.023144295862475565
//2048.0	2176.0	0.222821803716705	0.1607319556120112
//2176.0	2304.0	0.19514958388615128	0.14720829638058047
//2304.0	2432.0	0.17057278968380385	0.13446690325880706
//2432.0	2560.0	0.14871640570284933	0.12245636105388474
//2560.0	2688.0	0.12926316625634007	0.11113190582563733
//2688.0	2816.0	0.11194227467966944	0.10045426058253712
//2816.0	2944.0	0.09652074928925793	0.0903887214790975
//2944.0	3072.0	0.08279669461462556	0.08090443158963252
//3072.0	3200.0	0.07059400574375115	0.07197379719964958
//3200.0	3328.0	0.059758154423137595	0.06357201381512353
//3328.0	3456.0	0.050152802121217935	0.055676677655511875
//3456.0	3584.0	0.0416570526414526	0.04826746448075756
//3584.0	3712.0	0.034163204625379494	0.04132586198983867
//3712.0	3840.0	0.027574898620631255	0.03483494523582158
//3840.0	3968.0	0.021805578403191767	0.028779186877008662
//3968.0	4096.0	0.016777204690162816	0.023144295862475607
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//4096.0	4096.0	0.222821803716705	0.1607319556120112
//spec: {
//spec:     "cname": "ml2_log_2",
//spec:     "delta": 0.2228218037167038,
//spec:     "domain": [
//spec:         0.5,
//spec:         2.0
//spec:     ],
//spec:     "epsilon": 0.023144295862475975,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_2",
//spec:     "delta": 0.22282180371670385,
//spec:     "domain": [
//spec:         0.25,
//spec:         4.0
//spec:     ],
//spec:     "epsilon": 0.023144295862475756,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_2",
//spec:     "delta": 0.22282180371670401,
//spec:     "domain": [
//spec:         0.125,
//spec:         8.0
//spec:     ],
//spec:     "epsilon": 0.023144295862475715,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_2",
//spec:     "delta": 0.22282180371670413,
//spec:     "domain": [
//spec:         0.0625,
//spec:         16.0
//spec:     ],
//spec:     "epsilon": 0.02314429586247566,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_2",
//spec:     "delta": 0.22282180371670413,
//spec:     "domain": [
//spec:         0.03125,
//spec:         32.0
//spec:     ],
//spec:     "epsilon": 0.023144295862475614,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_2",
//spec:     "delta": 0.22282180371670435,
//spec:     "domain": [
//spec:         0.015625,
//spec:         64.0
//spec:     ],
//spec:     "epsilon": 0.023144295862475614,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_2",
//spec:     "delta": 0.22282180371670457,
//spec:     "domain": [
//spec:         0.0078125,
//spec:         128.0
//spec:     ],
//spec:     "epsilon": 0.023144295862475614,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_2",
//spec:     "delta": 0.22282180371670457,
//spec:     "domain": [
//spec:         0.0009765625,
//spec:         1024.0
//spec:     ],
//spec:     "epsilon": 0.023144295862475548,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_2",
//spec:     "delta": 0.222821803716705,
//spec:     "domain": [
//spec:         0.00048828125,
//spec:         2048.0
//spec:     ],
//spec:     "epsilon": 0.023144295862475548,
//spec:     "operation": "log"
//spec: }
