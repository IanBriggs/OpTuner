/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_7.c --poly-degree 7 --fname \
 *     ml2_log_7 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>


double ml2_log1p_7(double x) {
  return ml2_log_7(x + 1);
}

double ml2_log_7(double);
double ml2_log_7(double x){
    double x_man;
    double r;
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
    pm_6 = r * 0x1.fc81e1d75f662p-1;
    pa_6 = -0x1.93ecfb17ed0b9p2 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.188fe5b29988fp4 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = -0x1.bf4498bbdb9a3p4 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.c4525c11800f8p4 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = -0x1.31f64ab6d2c2dp4 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.2fbeefa50e92ep3 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.737d3365b119cp1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f008a6fe7f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f008a6feac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f008a6feb80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f008a6fed60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f008a70beb0>
//Info: executing pass instantiate_abstract_prec on fct ml2_log_7
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f008a70beb0>
//Info: executing pass instantiate_prec on fct ml2_log_7
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f008a70beb0>
//Info: executing pass sub_expr_sharing on fct ml2_log_7
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f008a70beb0>
//Info: executing pass check_processor_support on fct ml2_log_7
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f008a70beb0>
//Info: executing pass debug_tag_node on fct ml2_log_7
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_log_7.c
//0.000244140625	0.0002593994140625	0.010054144068088624	0.007252531893706078
//0.0002593994140625	0.000274658203125	0.007238333193195815	0.00546013307733593
//0.000274658203125	0.0002899169921875	0.005159730891689148	0.00406754814727575
//0.0002899169921875	0.00030517578125	0.0036361514376021587	0.0029940871095222948
//0.00030517578125	0.0003204345703125	0.0025288308306031793	0.0021741211967378103
//0.0003204345703125	0.000335693359375	0.0017320774680420177	0.0015543239747587581
//0.000335693359375	0.0003509521484375	0.0011655049716900305	0.001091459660686009
//0.0003509521484375	0.0003662109375	0.0007681469244948239	0.0007505914407895427
//0.0003662109375	0.0003814697265625	0.0004939624953971489	0.0005036172135753105
//0.0003814697265625	0.000396728515625	0.0003083827317748671	0.0003280642026822249
//0.000396728515625	0.0004119873046875	0.0001856438662935367	0.0002060908516583774
//0.0004119873046875	0.00042724609375	0.00010672136266257874	0.00012365660206141684
//0.00042724609375	0.0004425048828125	5.772617870188889e-05	6.982904912725828e-05
//0.0004425048828125	0.000457763671875	2.865905988148573e-05	3.620454947541948e-05
//0.000457763671875	0.0004730224609375	1.2443690751502152e-05	1.6423288338302577e-05
//0.0004730224609375	0.00048828125	4.177978678849693e-06	5.7635569435519855e-06
//0.00048828125	0.000518798828125	0.010054144068088624	0.007252531893706097
//0.000518798828125	0.00054931640625	0.007238333193195815	0.00546013307733595
//0.00054931640625	0.000579833984375	0.005159730891689148	0.0040675481472757695
//0.000579833984375	0.0006103515625	0.0036361514376021587	0.0029940871095223164
//0.0006103515625	0.000640869140625	0.0025288308306031793	0.0021741211967378324
//0.000640869140625	0.00067138671875	0.0017320774680420177	0.0015543239747587809
//0.00067138671875	0.000701904296875	0.0011655049716900305	0.0010914596606860327
//0.000701904296875	0.000732421875	0.0007681469244948239	0.0007505914407895683
//0.000732421875	0.000762939453125	0.0004939624953967048	0.0005036172135752799
//0.000762939453125	0.00079345703125	0.000308382731774423	0.0003280642026821957
//0.00079345703125	0.000823974609375	0.0001856438662930926	0.00020609085165834834
//0.000823974609375	0.0008544921875	0.00010672136266213465	0.00012365660206138857
//0.0008544921875	0.000885009765625	5.77261787014448e-05	6.982904912723086e-05
//0.000885009765625	0.00091552734375	2.865905988104164e-05	3.620454947539297e-05
//0.00091552734375	0.000946044921875	1.2443690751058065e-05	1.6423288338277064e-05
//0.000946044921875	0.0009765625	4.177978678405604e-06	5.763556943527544e-06
//0.0009765625	0.00103759765625	0.01005414406808818	0.007252531893706062
//0.00103759765625	0.0010986328125	0.007238333193195371	0.0054601330773359135
//0.0010986328125	0.00115966796875	0.005159730891688704	0.004067548147275733
//0.00115966796875	0.001220703125	0.0036361514376017146	0.0029940871095222813
//0.001220703125	0.00128173828125	0.002528830830602735	0.0021741211967377977
//0.00128173828125	0.0013427734375	0.0017320774680415736	0.0015543239747587464
//0.0013427734375	0.00140380859375	0.0011655049716895864	0.001091459660685999
//0.00140380859375	0.00146484375	0.0007681469244943799	0.0007505914407895366
//0.00146484375	0.00152587890625	0.0004939624953967048	0.000503617213575306
//0.00152587890625	0.0015869140625	0.000308382731774423	0.0003280642026822238
//0.0015869140625	0.00164794921875	0.0001856438662930926	0.00020609085165837693
//0.00164794921875	0.001708984375	0.00010672136266213465	0.00012365660206141844
//0.001708984375	0.00177001953125	5.77261787014448e-05	6.982904912726208e-05
//0.00177001953125	0.0018310546875	2.865905988104164e-05	3.620454947542563e-05
//0.0018310546875	0.00189208984375	1.2443690751058065e-05	1.6423288338311244e-05
//0.00189208984375	0.001953125	4.177978678405604e-06	5.763556943563336e-06
//0.001953125	0.0020751953125	0.01005414406808818	0.0072525318937060835
//0.0020751953125	0.002197265625	0.007238333193195371	0.005460133077335935
//0.002197265625	0.0023193359375	0.005159730891688704	0.004067548147275756
//0.0023193359375	0.00244140625	0.0036361514376017146	0.0029940871095223056
//0.00244140625	0.0025634765625	0.002528830830602735	0.002174121196737823
//0.0025634765625	0.002685546875	0.0017320774680415736	0.0015543239747587729
//0.002685546875	0.0028076171875	0.0011655049716895864	0.0010914596606860269
//0.0028076171875	0.0029296875	0.0007681469244943799	0.0007505914407895672
//0.0029296875	0.0030517578125	0.0004939624953967048	0.0005036172135753378
//0.0030517578125	0.003173828125	0.000308382731774423	0.00032806420268225806
//0.003173828125	0.0032958984375	0.0001856438662930926	0.00020609085165841182
//0.0032958984375	0.00341796875	0.00010672136266213465	0.00012365660206145493
//0.00341796875	0.0035400390625	5.77261787014448e-05	6.982904912730025e-05
//0.0035400390625	0.003662109375	2.865905988104164e-05	3.62045494754656e-05
//0.003662109375	0.0037841796875	1.2443690751058065e-05	1.642328833835312e-05
//0.0037841796875	0.00390625	4.177978678405604e-06	5.7635569436072374e-06
//0.00390625	0.004150390625	0.01005414406808818	0.0072525318937061095
//0.004150390625	0.00439453125	0.007238333193195371	0.005460133077335962
//0.00439453125	0.004638671875	0.005159730891688704	0.004067548147275783
//0.004638671875	0.0048828125	0.0036361514376017146	0.0029940871095223355
//0.0048828125	0.005126953125	0.002528830830602735	0.002174121196737854
//0.005126953125	0.00537109375	0.0017320774680415736	0.0015543239747588054
//0.00537109375	0.005615234375	0.0011655049716895864	0.0010914596606860611
//0.005615234375	0.005859375	0.0007681469244943799	0.000750591440789605
//0.005859375	0.006103515625	0.0004939624953967048	0.0005036172135753774
//0.006103515625	0.00634765625	0.000308382731774423	0.00032806420268230067
//0.00634765625	0.006591796875	0.0001856438662930926	0.00020609085165845532
//0.006591796875	0.0068359375	0.00010672136266213465	0.0001236566020615005
//0.0068359375	0.007080078125	5.77261787014448e-05	6.9829049127348e-05
//0.007080078125	0.00732421875	2.865905988104164e-05	3.6204549475515646e-05
//0.00732421875	0.007568359375	1.2443690751058065e-05	1.642328833840563e-05
//0.007568359375	0.0078125	4.177978678405604e-06	5.76355694366236e-06
//0.0078125	0.00830078125	0.01005414406808818	0.007252531893706143
//0.00830078125	0.0087890625	0.007238333193195371	0.005460133077335996
//0.0087890625	0.00927734375	0.005159730891688704	0.004067548147275819
//0.00927734375	0.009765625	0.0036361514376017146	0.0029940871095223737
//0.009765625	0.01025390625	0.002528830830602735	0.002174121196737894
//0.01025390625	0.0107421875	0.0017320774680415736	0.0015543239747588468
//0.0107421875	0.01123046875	0.0011655049716895864	0.0010914596606861047
//0.01123046875	0.01171875	0.0007681469244943799	0.0007505914407896534
//0.01171875	0.01220703125	0.0004939624953967048	0.0005036172135754278
//0.01220703125	0.0126953125	0.000308382731774423	0.0003280642026823552
//0.0126953125	0.01318359375	0.0001856438662930926	0.00020609085165851108
//0.01318359375	0.013671875	0.00010672136266213465	0.00012365660206155896
//0.013671875	0.01416015625	5.77261787014448e-05	6.982904912740939e-05
//0.01416015625	0.0146484375	2.865905988104164e-05	3.6204549475580136e-05
//0.0146484375	0.01513671875	1.2443690751058065e-05	1.642328833847341e-05
//0.01513671875	0.015625	4.177978678405604e-06	5.763556943733634e-06
//0.015625	0.0166015625	0.010054144068087958	0.00725253189370614
//0.0166015625	0.017578125	0.007238333193195149	0.005460133077335992
//0.017578125	0.0185546875	0.005159730891688482	0.004067548147275816
//0.0185546875	0.01953125	0.0036361514376014926	0.0029940871095223746
//0.01953125	0.0205078125	0.002528830830602513	0.0021741211967378966
//0.0205078125	0.021484375	0.0017320774680413516	0.0015543239747588511
//0.021484375	0.0224609375	0.0011655049716893643	0.0010914596606861119
//0.0224609375	0.0234375	0.0007681469244941578	0.000750591440789666
//0.0234375	0.0244140625	0.0004939624953964828	0.000503617213575443
//0.0244140625	0.025390625	0.00030838273177420097	0.0003280642026823755
//0.025390625	0.0263671875	0.00018564386629287057	0.0002060908516585326
//0.0263671875	0.02734375	0.00010672136266191261	0.0001236566020615838
//0.02734375	0.0283203125	5.7726178701222754e-05	6.98290491274378e-05
//0.0283203125	0.029296875	2.8659059880819597e-05	3.620454947561237e-05
//0.029296875	0.0302734375	1.244369075083602e-05	1.642328833850975e-05
//0.0302734375	0.03125	4.177978678183558e-06	5.763556943774388e-06
//0.03125	0.033203125	0.010054144068087958	0.00725253189370619
//0.033203125	0.03515625	0.007238333193195149	0.005460133077336043
//0.03515625	0.037109375	0.005159730891688482	0.004067548147275869
//0.037109375	0.0390625	0.0036361514376014926	0.002994087109522433
//0.0390625	0.041015625	0.002528830830602513	0.002174121196737958
//0.041015625	0.04296875	0.0017320774680411296	0.001554323974758857
//0.04296875	0.044921875	0.0011655049716891423	0.0010914596606861214
//0.044921875	0.046875	0.0007681469244939358	0.0007505914407896835
//0.046875	0.048828125	0.0004939624953962607	0.000503617213575464
//0.048828125	0.05078125	0.0003083827317739789	0.00032806420268240356
//0.05078125	0.052734375	0.00018564386629264852	0.00020609085165856255
//0.052734375	0.0546875	0.00010672136266169057	0.0001236566020616185
//0.0546875	0.056640625	5.772617870100071e-05	6.982904912747758e-05
//0.056640625	0.05859375	2.8659059880597552e-05	3.620454947565767e-05
//0.05859375	0.060546875	1.2443690750613976e-05	1.6423288338560993e-05
//0.060546875	0.0625	4.177978677961514e-06	5.763556943832034e-06
//0.0625	0.06640625	0.010054144068087736	0.0072525318937061945
//0.06640625	0.0703125	0.007238333193194927	0.005460133077336047
//0.0703125	0.07421875	0.00515973089168826	0.004067548147275876
//0.07421875	0.078125	0.0036361514376012706	0.0029940871095224474
//0.078125	0.08203125	0.002528830830602291	0.002174121196737976
//0.08203125	0.0859375	0.0017320774680411296	0.001554323974758938
//0.0859375	0.08984375	0.0011655049716891423	0.0010914596606862088
//0.08984375	0.09375	0.0007681469244939358	0.0007505914407897839
//0.09375	0.09765625	0.0004939624953962607	0.0005036172135755707
//0.09765625	0.1015625	0.0003083827317739789	0.0003280642026825221
//0.1015625	0.10546875	0.00018564386629264852	0.0002060908516586852
//0.10546875	0.109375	0.00010672136266169057	0.00012365660206174953
//0.109375	0.11328125	5.772617870100071e-05	6.982904912761766e-05
//0.11328125	0.1171875	2.8659059880597552e-05	3.620454947580748e-05
//0.1171875	0.12109375	1.2443690750613976e-05	1.6423288338721262e-05
//0.12109375	0.125	4.177978677961514e-06	5.763556944003557e-06
//0.125	0.1328125	0.010054144068087625	0.007252531893706243
//0.1328125	0.140625	0.007238333193194816	0.0054601330773360966
//0.140625	0.1484375	0.005159730891688149	0.004067548147275932
//0.1484375	0.15625	0.0036361514376011595	0.002994087109522514
//0.15625	0.1640625	0.00252883083060218	0.00217412119673805
//0.1640625	0.171875	0.0017320774680410185	0.0015543239747590198
//0.171875	0.1796875	0.0011655049716890313	0.0010914596606863007
//0.1796875	0.1875	0.0007681469244938247	0.0007505914407898966
//0.1875	0.1953125	0.0004939624953961497	0.000503617213575694
//0.1953125	0.203125	0.0003083827317738679	0.00032806420268266496
//0.203125	0.2109375	0.0001856438662925375	0.00020609085165883525
//0.2109375	0.21875	0.00010672136266157954	0.00012365660206191406
//0.21875	0.2265625	5.772617870088969e-05	6.982904912779791e-05
//0.2265625	0.234375	2.865905988048653e-05	3.620454947600484e-05
//0.234375	0.2421875	1.2443690750502953e-05	1.6423288338937245e-05
//0.2421875	0.25	4.1779786778504915e-06	5.763556944239807e-06
//0.25	0.265625	0.01005414406808757	0.007252531893706356
//0.265625	0.28125	0.00723833319319476	0.005460133077336212
//0.28125	0.296875	0.0051597308916880935	0.004067548147276058
//0.296875	0.3125	0.003636151437600993	0.0029940871095226022
//0.3125	0.328125	0.0025288308306020135	0.002174121196738151
//0.328125	0.34375	0.001732077468040852	0.0015543239747591356
//0.34375	0.359375	0.0011655049716888647	0.0010914596606864367
//0.359375	0.375	0.0007681469244936582	0.0007505914407900726
//0.375	0.390625	0.0004939624953959832	0.000503617213575892
//0.390625	0.40625	0.00030838273177370137	0.0003280642026829029
//0.40625	0.421875	0.00018564386629237097	0.00020609085165908993
//0.421875	0.4375	0.00010672136266141301	0.00012365660206220032
//0.4375	0.453125	5.7726178700723153e-05	6.982904912811921e-05
//0.453125	0.46875	2.8659059880319996e-05	3.620454947636503e-05
//0.46875	0.484375	1.244369075033642e-05	1.6423288339340575e-05
//0.484375	0.5	4.177978677683959e-06	5.763556944691022e-06
//0.5	0.53125	0.010054144068087403	0.007252531893706503
//0.53125	0.5625	0.007238333193194594	0.005460133077336368
//0.5625	0.59375	0.005159730891687927	0.004067548147276242
//0.59375	0.625	0.0036361514376009375	0.0029940871095229045
//0.625	0.65625	0.002528830830601958	0.0021741211967384946
//0.65625	0.6875	0.0017320774680407965	0.0015543239747595268
//0.6875	0.71875	0.0011655049716888092	0.0010914596606868914
//0.71875	0.75	0.0007681469244936027	0.0007505914407906461
//0.75	0.78125	0.0004939624953959276	0.0005036172135765442
//0.78125	0.8125	0.00030838273177364586	0.0003280642026836875
//0.8125	0.84375	0.00018564386629225994	0.00020609085165987899
//0.84375	0.875	0.00010672136266130199	0.00012365660206311137
//0.875	0.90625	5.772617870061213e-05	6.982904912917223e-05
//0.90625	0.9375	2.8659059880208974e-05	3.6204549477583816e-05
//0.9375	0.96875	1.2443690750225398e-05	1.6423288340753592e-05
//0.96875	1.0	4.177978677572936e-06	5.763556946332538e-06
//1.0	1.0625	0.010054144068087347	0.00725253189370721
//1.0625	1.125	0.007238333193194538	0.005460133077337173
//1.125	1.1875	0.0051597308916878715	0.00406754814727724
//1.1875	1.25	0.003636151437600882	0.0029940871095242654
//1.25	1.3125	0.0025288308306019025	0.0021741211967402224
//1.3125	1.375	0.0017320774680407132	0.0015543239747616644
//1.375	1.4375	0.001165504971688726	0.0010914596606897875
//1.4375	1.5	0.0007681469244935194	0.00075059144079504
//1.5	1.5625	0.0004939624953958444	0.0005036172135828026
//1.5625	1.625	0.0003083827317735626	0.00032806420268949624
//1.625	1.6875	0.0001856438662922322	0.0002060908516692153
//1.6875	1.75	0.00010672136266127423	0.00012365660207837526
//1.75	1.8125	5.77261787005705e-05	6.982904914995339e-05
//1.8125	1.875	2.865905988016734e-05	3.620454951805667e-05
//1.875	1.9375	1.2443690750183764e-05	1.6423288434426447e-05
//1.9375	2.0	4.177978677531302e-06	inf
//2.0	2.125	0.010054144068087306	0.0072525318938123475
//2.125	2.25	0.007238333193194496	0.00546013307735429
//2.25	2.375	0.00515973089168783	0.004067548147283411
//2.375	2.5	0.0036361514376008542	0.0029940871095300663
//2.5	2.625	0.0025288308306018747	0.002174121196743385
//2.625	2.75	0.0017320774680407132	0.0015543239747632324
//2.75	2.875	0.001165504971688726	0.0010914596606899159
//2.875	3.0	0.0007681469244935194	0.0007505914407934101
//3.0	3.125	0.0004939624953958721	0.0005036172135789296
//3.125	3.25	0.00030838273177359035	0.00032806420268579597
//3.25	3.375	0.00018564386629225994	0.00020609085166163098
//3.375	3.5	0.00010672136266130199	0.00012365660206455138
//3.5	3.625	5.772617870061213e-05	6.982904913031013e-05
//3.625	3.75	2.8659059880208974e-05	3.620454947841689e-05
//3.75	3.875	1.2443690750225398e-05	1.642328834126825e-05
//3.875	4.0	4.177978677572936e-06	5.763556946504691e-06
//4.0	4.25	0.01005414406808757	0.007252531893707385
//4.25	4.5	0.00723833319319476	0.005460133077337084
//4.5	4.75	0.0051597308916880935	0.004067548147276844
//4.75	5.0	0.003636151437601104	0.002994087109523423
//5.0	5.25	0.00252883083060218	0.0021741211967389695
//5.25	5.5	0.0017320774680410185	0.001554323974759889
//5.5	5.75	0.0011655049716890313	0.001091459660687139
//5.75	6.0	0.0007681469244938247	0.0007505914407907615
//6.0	6.25	0.0004939624953961497	0.000503617213576519
//6.25	6.5	0.0003083827317738679	0.00032806420268349
//6.5	6.75	0.0001856438662925375	0.00020609085165960075
//6.75	7.0	0.00010672136266157954	0.00012365660206264947
//7.0	7.25	5.772617870088969e-05	6.982904912850444e-05
//7.25	7.5	2.865905988048653e-05	3.620454947668319e-05
//7.5	7.75	1.2443690750502953e-05	1.6423288339587644e-05
//7.75	8.0	4.1779786778504915e-06	5.76355694486207e-06
//8.0	8.5	0.010054144068087403	0.007252531893706463
//8.5	9.0	0.007238333193194594	0.005460133077336275
//9.0	9.5	0.005159730891687927	0.0040675481472760905
//9.5	10.0	0.0036361514376009375	0.002994087109522673
//10.0	10.5	0.002528830830601958	0.0021741211967381893
//10.5	11.0	0.0017320774680407965	0.00155432397475914
//11.0	11.5	0.0011655049716888092	0.001091459660686406
//11.5	12.0	0.0007681469244936027	0.0007505914407900006
//12.0	12.5	0.0004939624953959276	0.0005036172135757761
//12.5	13.0	0.00030838273177364586	0.00032806420268273337
//13.0	13.5	0.00018564386629242648	0.0002060908516589366
//13.5	14.0	0.00010672136266146852	0.0001236566020619901
//14.0	14.5	5.7726178700778665e-05	6.982904912784727e-05
//14.5	15.0	2.8659059880375507e-05	3.6204549476025946e-05
//15.0	15.5	1.244369075039193e-05	1.6423288338928243e-05
//15.5	16.0	4.17797867773947e-06	5.763556944198568e-06
//16.0	17.0	0.010054144068087736	0.0072525318937064175
//17.0	18.0	0.007238333193194927	0.005460133077336244
//18.0	19.0	0.00515973089168826	0.00406754814727606
//19.0	20.0	0.0036361514376012706	0.002994087109522627
//20.0	21.0	0.002528830830602291	0.002174121196738142
//21.0	22.0	0.0017320774680411296	0.001554323974759091
//22.0	23.0	0.0011655049716891423	0.0010914596606863506
//23.0	24.0	0.0007681469244939358	0.0007505914407899221
//24.0	25.0	0.0004939624953962607	0.0005036172135756944
//25.0	26.0	0.0003083827317739789	0.00032806420268263574
//26.0	27.0	0.00018564386629264852	0.00020609085165878026
//27.0	28.0	0.00010672136266169057	0.00012365660206182909
//28.0	29.0	5.772617870100071e-05	6.9829049127681e-05
//29.0	30.0	2.8659059880597552e-05	3.6204549475853795e-05
//30.0	31.0	1.2443690750613976e-05	1.6423288338749627e-05
//31.0	32.0	4.177978677961514e-06	5.763556944012898e-06
//32.0	34.0	0.010054144068087958	0.007252531893706354
//34.0	36.0	0.007238333193195149	0.0054601330773361885
//36.0	38.0	0.005159730891688482	0.004067548147276005
//38.0	40.0	0.0036361514376014926	0.0029940871095225645
//40.0	42.0	0.002528830830602513	0.0021741211967380796
//42.0	44.0	0.0017320774680413516	0.0015543239747590274
//44.0	46.0	0.0011655049716893643	0.0010914596606862838
//46.0	48.0	0.0007681469244941578	0.000750591440789843
//48.0	50.0	0.0004939624953964828	0.0005036172135756134
//50.0	52.0	0.00030838273177420097	0.00032806420268254586
//52.0	54.0	0.00018564386629287057	0.00020609085165869246
//54.0	56.0	0.00010672136266191261	0.00012365660206173793
//56.0	58.0	5.7726178701222754e-05	6.982904912758614e-05
//58.0	60.0	2.8659059880819597e-05	3.6204549475754896e-05
//60.0	62.0	1.244369075083602e-05	1.6423288338646337e-05
//62.0	64.0	4.177978678183558e-06	5.76355694390487e-06
//64.0	68.0	0.010054144068087958	0.007252531893706252
//68.0	72.0	0.007238333193195149	0.005460133077336091
//72.0	76.0	0.005159730891688482	0.004067548147275908
//76.0	80.0	0.0036361514376014926	0.0029940871095224643
//80.0	84.0	0.002528830830602513	0.0021741211967379794
//84.0	88.0	0.0017320774680413516	0.0015543239747589273
//88.0	92.0	0.0011655049716893643	0.0010914596606861821
//92.0	96.0	0.0007681469244941578	0.0007505914407897338
//96.0	100.0	0.0004939624953967048	0.0005036172135755621
//100.0	104.0	0.000308382731774423	0.0003280642026824886
//104.0	108.0	0.0001856438662930926	0.00020609085165863622
//108.0	112.0	0.00010672136266213465	0.00012365660206167925
//112.0	116.0	5.77261787014448e-05	6.982904912752483e-05
//116.0	120.0	2.865905988104164e-05	3.62045494756907e-05
//120.0	124.0	1.2443690751058065e-05	1.642328833857902e-05
//124.0	128.0	4.177978678405604e-06	5.763556943834203e-06
//128.0	136.0	0.010054144068087736	0.0072525318937061295
//136.0	144.0	0.007238333193194927	0.005460133077335973
//144.0	152.0	0.00515973089168826	0.004067548147275791
//152.0	160.0	0.0036361514376012706	0.0029940871095223446
//160.0	168.0	0.002528830830602291	0.00217412119673786
//168.0	176.0	0.0017320774680411296	0.001554323974758808
//176.0	184.0	0.0011655049716891423	0.001091459660686062
//184.0	192.0	0.0007681469244939358	0.0007505914407896087
//192.0	200.0	0.0004939624953962607	0.0005036172135753778
//200.0	208.0	0.0003083827317739789	0.00032806420268230137
//208.0	216.0	0.00018564386629264852	0.00020609085165845069
//216.0	224.0	0.00010672136266169057	0.00012365660206149296
//224.0	232.0	5.772617870100071e-05	6.982904912733755e-05
//232.0	240.0	2.8659059880597552e-05	3.620454947550223e-05
//240.0	248.0	1.2443690750613976e-05	1.642328833838914e-05
//248.0	256.0	4.177978677961514e-06	5.763556943642687e-06
//256.0	272.0	0.01005414406808818	0.0072525318937061815
//272.0	288.0	0.007238333193195371	0.005460133077336026
//288.0	304.0	0.005159730891688704	0.004067548147275843
//304.0	320.0	0.0036361514376017146	0.0029940871095223928
//320.0	336.0	0.002528830830602735	0.002174121196737907
//336.0	352.0	0.0017320774680415736	0.0015543239747588535
//352.0	368.0	0.0011655049716895864	0.0010914596606861054
//368.0	384.0	0.0007681469244943799	0.0007505914407896472
//384.0	400.0	0.0004939624953967048	0.0005036172135754148
//400.0	416.0	0.000308382731774423	0.0003280642026823346
//416.0	432.0	0.0001856438662930926	0.00020609085165848365
//432.0	448.0	0.00010672136266213465	0.000123656602061524
//448.0	464.0	5.77261787014448e-05	6.982904912736656e-05
//464.0	480.0	2.865905988104164e-05	3.620454947552912e-05
//480.0	496.0	1.2443690751058065e-05	1.6423288338413806e-05
//496.0	512.0	4.177978678405604e-06	5.763556943665029e-06
//512.0	544.0	0.01005414406808818	0.007252531893706139
//544.0	576.0	0.007238333193195371	0.0054601330773359855
//576.0	608.0	0.005159730891688704	0.0040675481472758025
//608.0	640.0	0.0036361514376017146	0.0029940871095223503
//640.0	672.0	0.002528830830602735	0.002174121196737864
//672.0	704.0	0.0017320774680415736	0.0015543239747588106
//704.0	736.0	0.0011655049716895864	0.0010914596606860616
//736.0	768.0	0.0007681469244943799	0.0007505914407896003
//768.0	800.0	0.0004939624953967048	0.0005036172135753673
//800.0	832.0	0.000308382731774423	0.0003280642026822847
//832.0	864.0	0.0001856438662930926	0.0002060908516584341
//864.0	896.0	0.00010672136266213465	0.0001236566020614734
//896.0	928.0	5.77261787014448e-05	6.982904912731486e-05
//928.0	960.0	2.865905988104164e-05	3.620454947547618e-05
//960.0	992.0	1.2443690751058065e-05	1.6423288338359545e-05
//992.0	1024.0	4.177978678405604e-06	5.763556943609335e-06
//1024.0	1088.0	0.01005414406808818	0.007252531893706107
//1088.0	1152.0	0.007238333193195371	0.0054601330773359534
//1152.0	1216.0	0.005159730891688704	0.00406754814727577
//1216.0	1280.0	0.0036361514376017146	0.0029940871095223173
//1280.0	1344.0	0.002528830830602735	0.002174121196737831
//1344.0	1408.0	0.0017320774680415736	0.001554323974758777
//1408.0	1472.0	0.0011655049716895864	0.001091459660686027
//1472.0	1536.0	0.0007681469244943799	0.0007505914407895634
//1536.0	1600.0	0.0004939624953967048	0.0005036172135753299
//1600.0	1664.0	0.000308382731774423	0.0003280642026822453
//1664.0	1728.0	0.0001856438662930926	0.0002060908516583949
//1728.0	1792.0	0.00010672136266213465	0.00012365660206143338
//1792.0	1856.0	5.77261787014448e-05	6.982904912727386e-05
//1856.0	1920.0	2.865905988104164e-05	3.620454947543417e-05
//1920.0	1984.0	1.2443690751058065e-05	1.6423288338316424e-05
//1984.0	2048.0	4.177978678405604e-06	5.763556943565026e-06
//2048.0	2176.0	0.010054144068088624	0.007252531893706145
//2176.0	2304.0	0.007238333193195815	0.0054601330773359925
//2304.0	2432.0	0.005159730891689148	0.0040675481472758086
//2432.0	2560.0	0.0036361514376021587	0.0029940871095223537
//2560.0	2688.0	0.0025288308306031793	0.0021741211967378667
//2688.0	2816.0	0.0017320774680420177	0.0015543239747588121
//2816.0	2944.0	0.0011655049716900305	0.0010914596606860613
//2944.0	3072.0	0.0007681469244948239	0.0007505914407895951
//3072.0	3200.0	0.0004939624953971489	0.0005036172135753608
//3200.0	3328.0	0.0003083827317748671	0.0003280642026822744
//3328.0	3456.0	0.0001856438662935367	0.0002060908516584238
//3456.0	3584.0	0.00010672136266257874	0.00012365660206146124
//3584.0	3712.0	5.772617870188889e-05	6.982904912730068e-05
//3712.0	3840.0	2.865905988148573e-05	3.620454947545988e-05
//3840.0	3968.0	1.2443690751502152e-05	1.642328833834097e-05
//3968.0	4096.0	4.177978678849693e-06	5.7635569435883545e-06
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//4096.0	4096.0	0.010054144068088586	0.007252531893706111
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.010054144068087403,
//spec:     "domain": [
//spec:         0.5,
//spec:         2.0
//spec:     ],
//spec:     "epsilon": 5.763556946332538e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.01005414406808757,
//spec:     "domain": [
//spec:         0.25,
//spec:         4.0
//spec:     ],
//spec:     "epsilon": 5.763556944691022e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.010054144068087625,
//spec:     "domain": [
//spec:         0.125,
//spec:         8.0
//spec:     ],
//spec:     "epsilon": 5.763556944239807e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.010054144068087736,
//spec:     "domain": [
//spec:         0.0625,
//spec:         16.0
//spec:     ],
//spec:     "epsilon": 5.763556944003557e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.010054144068087958,
//spec:     "domain": [
//spec:         0.03125,
//spec:         32.0
//spec:     ],
//spec:     "epsilon": 5.763556943832034e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.010054144068087958,
//spec:     "domain": [
//spec:         0.015625,
//spec:         64.0
//spec:     ],
//spec:     "epsilon": 5.763556943774388e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.01005414406808818,
//spec:     "domain": [
//spec:         0.0078125,
//spec:         128.0
//spec:     ],
//spec:     "epsilon": 5.763556943733634e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.01005414406808818,
//spec:     "domain": [
//spec:         0.00390625,
//spec:         256.0
//spec:     ],
//spec:     "epsilon": 5.763556943642687e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.01005414406808818,
//spec:     "domain": [
//spec:         0.001953125,
//spec:         512.0
//spec:     ],
//spec:     "epsilon": 5.7635569436072374e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.01005414406808818,
//spec:     "domain": [
//spec:         0.0009765625,
//spec:         1024.0
//spec:     ],
//spec:     "epsilon": 5.763556943563336e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_7",
//spec:     "delta": 0.010054144068088624,
//spec:     "domain": [
//spec:         0.00048828125,
//spec:         2048.0
//spec:     ],
//spec:     "epsilon": 5.763556943527544e-06,
//spec:     "operation": "log"
//spec: }
