/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_8.c --poly-degree 8 --fname \
 *     ml2_log_8 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>



double ml2_log_8(double);
double ml2_log_8(double x){
    double x_man;
    double r;
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
    pm_7 = r * -0x1.302a79190d33ap0;
    pa_7 = 0x1.0d6b17e8e068p3 + pm_7;
    pm_6 = r * pa_7;
    pa_6 = -0x1.a745a541f27f4p4 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.83f65b688f3c7p5 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = -0x1.cb7f12b614347p5 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.709e1fc3fe3d8p5 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = -0x1.9c849f8c5b18ep4 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.5cdb98c6e7225p3 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.8409e727ba864p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f5e061947f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f5e06194ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f5e06194b80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f5e06194d60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5e061a61c0>
//Info: executing pass instantiate_abstract_prec on fct ml2_log_8
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5e061a61c0>
//Info: executing pass instantiate_prec on fct ml2_log_8
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5e061a61c0>
//Info: executing pass sub_expr_sharing on fct ml2_log_8
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5e061a61c0>
//Info: executing pass check_processor_support on fct ml2_log_8
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5e061a61c0>
//Info: executing pass debug_tag_node on fct ml2_log_8
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_log_8.c
//0.000244140625	0.0002593994140625	0.005783772886280146	0.004172110230330821
//0.0002593994140625	0.000274658203125	0.0040088653912605824	0.0030240302485632885
//0.000274658203125	0.0002899169921875	0.0027468341745806968	0.002165399803249712
//0.0002899169921875	0.00030517578125	0.0018573470308595346	0.0015293804172991023
//0.00030517578125	0.0003204345703125	0.0012369226312205742	0.0010634241241899447
//0.0003204345703125	0.000335693359375	0.0008094146852568978	0.0007263489503369938
//0.000335693359375	0.0003509521484375	0.0005189981387567064	0.0004860258395991409
//0.0003509521484375	0.0003662109375	0.0003249623537603367	0.00031753555671745927
//0.0003662109375	0.0003814697265625	0.00019782527005400376	0.0002016918535455008
//0.0003814697265625	0.000396728515625	0.00011642317852208316	0.00012385348886176484
//0.000396728515625	0.0004119873046875	6.57271338012863e-05	7.29663804802693e-05
//0.0004119873046875	0.00042724609375	3.5204241198886456e-05	4.0790678978957226e-05
//0.00042724609375	0.0004425048828125	1.7589636550456406e-05	2.1277479685835384e-05
//0.0004425048828125	0.000457763671875	7.96914224984063e-06	1.006729480919154e-05
//0.000457763671875	0.0004730224609375	3.0974267438821466e-06	4.088010020345678e-06
//0.0004730224609375	0.00048828125	8.947715871260369e-07	1.2343449728245722e-06
//0.00048828125	0.000518798828125	0.005783772886280146	0.004172110230330843
//0.000518798828125	0.00054931640625	0.0040088653912605824	0.0030240302485633106
//0.00054931640625	0.000579833984375	0.0027468341745806968	0.0021653998032497347
//0.000579833984375	0.0006103515625	0.0018573470308595346	0.0015293804172991261
//0.0006103515625	0.000640869140625	0.0012369226312205742	0.0010634241241899696
//0.000640869140625	0.00067138671875	0.0008094146852568978	0.0007263489503370192
//0.00067138671875	0.000701904296875	0.0005189981387567064	0.0004860258395991672
//0.000701904296875	0.000732421875	0.0003249623537603367	0.00031753555671748713
//0.000732421875	0.000762939453125	0.00019782527005400376	0.00020169185354552985
//0.000762939453125	0.00079345703125	0.00011642317852208316	0.00012385348886179544
//0.00079345703125	0.000823974609375	6.572713380084221e-05	7.296638048024329e-05
//0.000823974609375	0.0008544921875	3.520424119844237e-05	4.0790678978932425e-05
//0.0008544921875	0.000885009765625	1.7589636550012317e-05	2.127747968581131e-05
//0.000885009765625	0.00091552734375	7.969142249396538e-06	1.006729480916892e-05
//0.00091552734375	0.000946044921875	3.097426743438058e-06	4.0880100203246635e-06
//0.000946044921875	0.0009765625	8.947715866819468e-07	1.2343449728053168e-06
//0.0009765625	0.00103759765625	0.005783772886279702	0.004172110230330809
//0.00103759765625	0.0010986328125	0.004008865391260138	0.0030240302485632768
//0.0010986328125	0.00115966796875	0.0027468341745802527	0.0021653998032497017
//0.00115966796875	0.001220703125	0.0018573470308590905	0.0015293804172990938
//0.001220703125	0.00128173828125	0.00123692263122013	0.0010634241241899382
//0.00128173828125	0.0013427734375	0.0008094146852564537	0.0007263489503369877
//0.0013427734375	0.00140380859375	0.0005189981387562623	0.00048602583959913654
//0.00140380859375	0.00146484375	0.0003249623537598926	0.00031753555671745786
//0.00146484375	0.00152587890625	0.00019782527005355967	0.0002016918535455016
//0.00152587890625	0.0015869140625	0.00011642317852163907	0.0001238534888617687
//0.0015869140625	0.00164794921875	6.572713380084221e-05	7.296638048027591e-05
//0.00164794921875	0.001708984375	3.520424119844237e-05	4.079067897896687e-05
//0.001708984375	0.00177001953125	1.7589636550012317e-05	2.1277479685846975e-05
//0.00177001953125	0.0018310546875	7.969142249396538e-06	1.0067294809206712e-05
//0.0018310546875	0.00189208984375	3.097426743438058e-06	4.0880100203647536e-06
//0.00189208984375	0.001953125	8.947715866819468e-07	1.2343449728478955e-06
//0.001953125	0.0020751953125	0.005783772886279702	0.004172110230330834
//0.0020751953125	0.002197265625	0.004008865391260138	0.003024030248563302
//0.002197265625	0.0023193359375	0.0027468341745802527	0.002165399803249728
//0.0023193359375	0.00244140625	0.0018573470308590905	0.0015293804172991216
//0.00244140625	0.0025634765625	0.00123692263122013	0.0010634241241899679
//0.0025634765625	0.002685546875	0.0008094146852564537	0.0007263489503370178
//0.002685546875	0.0028076171875	0.0005189981387562623	0.00048602583959916803
//0.0028076171875	0.0029296875	0.0003249623537598926	0.0003175355567174916
//0.0029296875	0.0030517578125	0.00019782527005355967	0.00020169185354553708
//0.0030517578125	0.003173828125	0.00011642317852163907	0.00012385348886180642
//0.003173828125	0.0032958984375	6.572713380084221e-05	7.296638048031574e-05
//0.0032958984375	0.00341796875	3.520424119844237e-05	4.079067897900898e-05
//0.00341796875	0.0035400390625	1.7589636550012317e-05	2.1277479685890645e-05
//0.0035400390625	0.003662109375	7.969142249396538e-06	1.0067294809253038e-05
//0.003662109375	0.0037841796875	3.097426743438058e-06	4.088010020413958e-06
//0.0037841796875	0.00390625	8.947715866819468e-07	1.234344972900219e-06
//0.00390625	0.004150390625	0.005783772886279702	0.004172110230330864
//0.004150390625	0.00439453125	0.004008865391260138	0.003024030248563333
//0.00439453125	0.004638671875	0.0027468341745802527	0.002165399803249761
//0.004638671875	0.0048828125	0.0018573470308590905	0.0015293804172991563
//0.0048828125	0.005126953125	0.00123692263122013	0.0010634241241900045
//0.005126953125	0.00537109375	0.0008094146852564537	0.0007263489503370551
//0.00537109375	0.005615234375	0.0005189981387562623	0.00048602583959920706
//0.005615234375	0.005859375	0.0003249623537598926	0.0003175355567175335
//0.005859375	0.006103515625	0.00019782527005355967	0.00020169185354558124
//0.006103515625	0.00634765625	0.00011642317852163907	0.00012385348886185347
//0.00634765625	0.006591796875	6.572713380084221e-05	7.29663804803655e-05
//0.006591796875	0.0068359375	3.520424119844237e-05	4.079067897906164e-05
//0.0068359375	0.007080078125	1.7589636550012317e-05	2.1277479685945346e-05
//0.007080078125	0.00732421875	7.969142249396538e-06	1.0067294809311156e-05
//0.00732421875	0.007568359375	3.097426743438058e-06	4.088010020475783e-06
//0.007568359375	0.0078125	8.947715866819468e-07	1.2343449729660655e-06
//0.0078125	0.00830078125	0.005783772886279702	0.004172110230330903
//0.00830078125	0.0087890625	0.004008865391260138	0.003024030248563372
//0.0087890625	0.00927734375	0.0027468341745802527	0.0021653998032498023
//0.00927734375	0.009765625	0.0018573470308590905	0.0015293804172991999
//0.009765625	0.01025390625	0.00123692263122013	0.0010634241241900511
//0.01025390625	0.0107421875	0.0008094146852564537	0.0007263489503371023
//0.0107421875	0.01123046875	0.0005189981387562623	0.00048602583959925683
//0.01123046875	0.01171875	0.0003249623537598926	0.000317535556717587
//0.01171875	0.01220703125	0.00019782527005355967	0.0002016918535456377
//0.01220703125	0.0126953125	0.00011642317852163907	0.00012385348886191375
//0.0126953125	0.01318359375	6.572713380084221e-05	7.296638048042935e-05
//0.01318359375	0.013671875	3.520424119844237e-05	4.0790678979129404e-05
//0.013671875	0.01416015625	1.7589636550012317e-05	2.1277479686015863e-05
//0.01416015625	0.0146484375	7.969142249396538e-06	1.0067294809386227e-05
//0.0146484375	0.01513671875	3.097426743438058e-06	4.088010020555799e-06
//0.01513671875	0.015625	8.947715866819468e-07	1.2343449730514549e-06
//0.015625	0.0166015625	0.00578377288627948	0.004172110230330906
//0.0166015625	0.017578125	0.004008865391259916	0.003024030248563375
//0.017578125	0.0185546875	0.0027468341745800306	0.0021653998032498075
//0.0185546875	0.01953125	0.0018573470308588685	0.0015293804172992079
//0.01953125	0.0205078125	0.001236922631219908	0.0010634241241900624
//0.0205078125	0.021484375	0.0008094146852562317	0.0007263489503371144
//0.021484375	0.0224609375	0.0005189981387560403	0.0004860258395992716
//0.0224609375	0.0234375	0.0003249623537596706	0.0003175355567176063
//0.0234375	0.0244140625	0.00019782527005333763	0.00020169185354566055
//0.0244140625	0.025390625	0.00011642317852141703	0.00012385348886194132
//0.025390625	0.0263671875	6.572713380062016e-05	7.296638048046135e-05
//0.0263671875	0.02734375	3.520424119822032e-05	4.0790678979166254e-05
//0.02734375	0.0283203125	1.7589636549790272e-05	2.1277479686056077e-05
//0.0283203125	0.029296875	7.969142249174495e-06	1.0067294809432238e-05
//0.029296875	0.0302734375	3.0974267432160128e-06	4.088010020608163e-06
//0.0302734375	0.03125	8.947715864599028e-07	1.2343449731107815e-06
//0.03125	0.033203125	0.00578377288627948	0.004172110230330966
//0.033203125	0.03515625	0.004008865391259916	0.0030240302485634355
//0.03515625	0.037109375	0.0027468341745800306	0.002165399803249872
//0.037109375	0.0390625	0.0018573470308588685	0.0015293804172992766
//0.0390625	0.041015625	0.001236922631219908	0.0010634241241901366
//0.041015625	0.04296875	0.0008094146852560097	0.0007263489503371309
//0.04296875	0.044921875	0.0005189981387558183	0.00048602583959929196
//0.044921875	0.046875	0.00032496235375944853	0.00031753555671763296
//0.046875	0.048828125	0.00019782527005311558	0.00020169185354569223
//0.048828125	0.05078125	0.00011642317852119499	0.00012385348886197967
//0.05078125	0.052734375	6.572713380039812e-05	7.296638048050603e-05
//0.052734375	0.0546875	3.520424119799828e-05	4.07906789792179e-05
//0.0546875	0.056640625	1.7589636549568227e-05	2.1277479686112645e-05
//0.056640625	0.05859375	7.96914224895245e-06	1.0067294809497193e-05
//0.05859375	0.060546875	3.0974267429939678e-06	4.088010020682358e-06
//0.060546875	0.0625	8.947715862378578e-07	1.2343449731951477e-06
//0.0625	0.06640625	0.005783772886279258	0.004172110230330982
//0.06640625	0.0703125	0.004008865391259694	0.0030240302485634537
//0.0703125	0.07421875	0.0027468341745798086	0.002165399803249895
//0.07421875	0.078125	0.0018573470308586464	0.001529380417299305
//0.078125	0.08203125	0.001236922631219686	0.0010634241241901721
//0.08203125	0.0859375	0.0008094146852560097	0.0007263489503372279
//0.0859375	0.08984375	0.0005189981387558183	0.00048602583959939604
//0.08984375	0.09375	0.00032496235375944853	0.0003175355567177477
//0.09375	0.09765625	0.00019782527005311558	0.0002016918535458159
//0.09765625	0.1015625	0.00011642317852119499	0.00012385348886211474
//0.1015625	0.10546875	6.572713380039812e-05	7.296638048065209e-05
//0.10546875	0.109375	3.520424119799828e-05	4.0790678979376027e-05
//0.109375	0.11328125	1.7589636549568227e-05	2.127747968627988e-05
//0.11328125	0.1171875	7.96914224895245e-06	1.00672948096789e-05
//0.1171875	0.12109375	3.0974267429939678e-06	4.088010020879996e-06
//0.12109375	0.125	8.947715862378578e-07	1.2343449734103324e-06
//0.125	0.1328125	0.005783772886279147	0.004172110230331051
//0.1328125	0.140625	0.004008865391259583	0.0030240302485635244
//0.140625	0.1484375	0.0027468341745796976	0.002165399803249975
//0.1484375	0.15625	0.0018573470308585354	0.0015293804172993948
//0.15625	0.1640625	0.001236922631219575	0.0010634241241902745
//0.1640625	0.171875	0.0008094146852558986	0.000726348950337335
//0.171875	0.1796875	0.0005189981387557072	0.00048602583959951465
//0.1796875	0.1875	0.0003249623537593375	0.00031753555671788395
//0.1875	0.1953125	0.00019782527005300456	0.00020169185354596705
//0.1953125	0.203125	0.00011642317852108396	0.0001238534888622852
//0.203125	0.2109375	6.57271338002871e-05	7.296638048084151e-05
//0.2109375	0.21875	3.5204241197887255e-05	4.079067897958655e-05
//0.21875	0.2265625	1.7589636549457205e-05	2.1277479686506865e-05
//0.2265625	0.234375	7.969142248841429e-06	1.0067294809931755e-05
//0.234375	0.2421875	3.097426742882946e-06	4.0880100211616845e-06
//0.2421875	0.25	8.947715861268358e-07	1.2343449737241784e-06
//0.25	0.265625	0.005783772886279091	0.0041721102303311965
//0.265625	0.28125	0.004008865391259528	0.0030240302485636775
//0.28125	0.296875	0.002746834174579642	0.0021653998032501462
//0.296875	0.3125	0.00185734703085848	0.0015293804172995871
//0.3125	0.328125	0.0012369226312194084	0.0010634241241904276
//0.328125	0.34375	0.0008094146852557321	0.0007263489503374984
//0.34375	0.359375	0.0005189981387555407	0.00048602583959970124
//0.359375	0.375	0.000324962353759171	0.000317535556718106
//0.375	0.390625	0.00019782527005283803	0.0002016918535462205
//0.390625	0.40625	0.00011642317852091743	0.0001238534888625795
//0.40625	0.421875	6.572713380012056e-05	7.296638048117729e-05
//0.421875	0.4375	3.520424119772072e-05	4.079067897996938e-05
//0.4375	0.453125	1.758963654929067e-05	2.1277479686928877e-05
//0.453125	0.46875	7.969142248674893e-06	1.0067294810413854e-05
//0.46875	0.484375	3.097426742716413e-06	4.088010021712294e-06
//0.484375	0.5	8.947715859603018e-07	1.2343449743529945e-06
//0.5	0.53125	0.005783772886278925	0.004172110230331416
//0.53125	0.5625	0.004008865391259361	0.0030240302485639164
//0.5625	0.59375	0.0027468341745794755	0.002165399803250431
//0.59375	0.625	0.0018573470308583134	0.0015293804172999258
//0.625	0.65625	0.001236922631219353	0.001063424124190901
//0.65625	0.6875	0.0008094146852556766	0.0007263489503380139
//0.6875	0.71875	0.0005189981387554852	0.000486025839600295
//0.71875	0.75	0.00032496235375911546	0.00031753555671881534
//0.75	0.78125	0.00019782527005278252	0.000201691853547043
//0.78125	0.8125	0.00011642317852086192	0.00012385348886355074
//0.8125	0.84375	6.572713380006505e-05	7.296638048231146e-05
//0.84375	0.875	3.520424119766521e-05	4.079067898129818e-05
//0.875	0.90625	1.758963654917965e-05	2.1277479688358543e-05
//0.90625	0.9375	7.969142248563871e-06	1.0067294812115045e-05
//0.9375	0.96875	3.0974267426053897e-06	4.088010023744792e-06
//0.96875	1.0	8.947715858492799e-07	1.2343449767929574e-06
//1.0	1.0625	0.005783772886278869	0.004172110230332398
//1.0625	1.125	0.004008865391259306	0.0030240302485650674
//1.125	1.1875	0.00274683417457942	0.0021653998032519018
//1.1875	1.25	0.0018573470308582579	0.0015293804173018301
//1.25	1.3125	0.0012369226312192974	0.0010634241241934445
//1.3125	1.375	0.0008094146852556211	0.0007263489503412259
//1.375	1.4375	0.0005189981387554019	0.0004860258396045879
//1.4375	1.5	0.0003249623537590322	0.00031753555672526444
//1.5	1.5625	0.00019782527005269925	0.00020169185355297119
//1.5625	1.625	0.00011642317852077865	0.0001238534888718221
//1.625	1.6875	6.572713379998178e-05	7.296638049590299e-05
//1.6875	1.75	3.5204241197581944e-05	4.0790678999168036e-05
//1.75	1.8125	1.7589636549151894e-05	2.1277479715717626e-05
//1.8125	1.875	7.969142248536117e-06	1.0067294852240663e-05
//1.875	1.9375	3.0974267425637568e-06	4.088010117551436e-06
//1.9375	2.0	8.947715858076468e-07	inf
//2.0	2.125	0.005783772886278828	0.004172110230524221
//2.125	2.25	0.004008865391259264	0.0030240302485832894
//2.25	2.375	0.0027468341745793923	0.0021653998032621783
//2.375	2.5	0.0018573470308582301	0.0015293804173069645
//2.5	2.625	0.0012369226312192697	0.0010634241241955062
//2.625	2.75	0.0008094146852555933	0.0007263489503437284
//2.75	2.875	0.0005189981387554019	0.00048602583960480843
//2.875	3.0	0.00032496235375905995	0.00031753555672277116
//3.0	3.125	0.000197825270052727	0.0002016918535503713
//3.125	3.25	0.00011642317852080641	0.00012385348886641674
//3.25	3.375	6.572713380000954e-05	7.296638048473262e-05
//3.375	3.5	3.52042411976097e-05	4.0790678983304254e-05
//3.5	3.625	1.758963654917965e-05	2.1277479689991308e-05
//3.625	3.75	7.969142248563871e-06	1.0067294813338432e-05
//3.75	3.875	3.0974267426053897e-06	4.0880100245185566e-06
//3.875	4.0	8.947715858492799e-07	1.2343449770538664e-06
//4.0	4.25	0.005783772886279091	0.004172110230332538
//4.25	4.5	0.004008865391259528	0.0030240302485648276
//4.5	4.75	0.002746834174579642	0.0021653998032511996
//4.75	5.0	0.0018573470308585354	0.001529380417300629
//5.0	5.25	0.001236922631219575	0.0010634241241914662
//5.25	5.5	0.0008094146852558986	0.0007263489503384219
//5.5	5.75	0.0005189981387557072	0.00048602583960055445
//5.75	6.0	0.0003249623537593375	0.00031753555671891194
//6.0	6.25	0.00019782527005300456	0.00020169185354696072
//6.25	6.5	0.00011642317852108396	0.00012385348886326125
//6.5	6.75	6.57271338002871e-05	7.296638048179121e-05
//6.75	7.0	3.5204241197887255e-05	4.079067898051201e-05
//7.0	7.25	1.7589636549457205e-05	2.1277479687386522e-05
//7.25	7.5	7.969142248841429e-06	1.0067294810791153e-05
//7.5	7.75	3.097426742882946e-06	4.088010022000794e-06
//7.75	8.0	8.947715861268358e-07	1.2343449745423275e-06
//8.0	8.5	0.005783772886278925	0.004172110230331368
//8.5	9.0	0.004008865391259361	0.003024030248563794
//9.0	9.5	0.0027468341745794755	0.0021653998032502243
//9.5	10.0	0.0018573470308583134	0.001529380417299625
//10.0	10.5	0.001236922631219353	0.0010634241241904892
//10.5	11.0	0.0008094146852556766	0.0007263489503375128
//11.0	11.5	0.0005189981387554852	0.0004860258395996707
//11.5	12.0	0.00032496235375911546	0.00031753555671802566
//12.0	12.5	0.00019782527005278252	0.00020169185354608585
//12.5	13.0	0.00011642317852097294	0.00012385348886244808
//13.0	13.5	6.572713380017607e-05	7.296638048097742e-05
//13.5	14.0	3.520424119777623e-05	4.07906789796935e-05
//14.0	14.5	1.7589636549346183e-05	2.1277479686578917e-05
//14.5	15.0	7.969142248730406e-06	1.0067294809970515e-05
//15.0	15.5	3.0974267427719236e-06	4.088010021163642e-06
//15.5	16.0	8.947715860158138e-07	1.2343449736852265e-06
//16.0	17.0	0.005783772886279258	0.004172110230331256
//17.0	18.0	0.004008865391259694	0.003024030248563699
//18.0	19.0	0.0027468341745798086	0.0021653998032501267
//19.0	20.0	0.0018573470308586464	0.0015293804172995232
//20.0	21.0	0.001236922631219686	0.0010634241241903788
//21.0	22.0	0.0008094146852560097	0.000726348950337412
//22.0	23.0	0.0005189981387558183	0.00048602583959956555
//23.0	24.0	0.00032496235375944853	0.0003175355567179067
//24.0	25.0	0.00019782527005311558	0.00020169185354595987
//25.0	26.0	0.00011642317852119499	0.0001238534888622447
//26.0	27.0	6.572713380039812e-05	7.29663804807657e-05
//27.0	28.0	3.520424119799828e-05	4.0790678979472256e-05
//28.0	29.0	1.7589636549568227e-05	2.1277479686355598e-05
//29.0	30.0	7.96914224895245e-06	1.0067294809735055e-05
//30.0	31.0	3.0974267429939678e-06	4.088010020914807e-06
//31.0	32.0	8.947715862378578e-07	1.2343449734217294e-06
//32.0	34.0	0.00578377288627948	0.004172110230331161
//34.0	36.0	0.004008865391259916	0.0030240302485636116
//36.0	38.0	0.0027468341745800306	0.0021653998032500374
//38.0	40.0	0.0018573470308588685	0.0015293804172994319
//40.0	42.0	0.001236922631219908	0.001063424124190283
//42.0	44.0	0.0008094146852562317	0.0007263489503373209
//44.0	46.0	0.0005189981387560403	0.00048602583959947204
//46.0	48.0	0.0003249623537596706	0.0003175355567178056
//48.0	50.0	0.00019782527005333763	0.00020169185354585473
//50.0	52.0	0.00011642317852141703	0.00012385348886213263
//52.0	54.0	6.572713380062016e-05	7.296638048064804e-05
//54.0	56.0	3.520424119822032e-05	4.079067897934836e-05
//56.0	58.0	1.7589636549790272e-05	2.1277479686229655e-05
//58.0	60.0	7.969142249174495e-06	1.0067294809601397e-05
//60.0	62.0	3.0974267432160128e-06	4.088010020772707e-06
//62.0	64.0	8.947715864599028e-07	1.2343449732704229e-06
//64.0	68.0	0.00578377288627948	0.004172110230331039
//68.0	72.0	0.004008865391259916	0.003024030248563495
//72.0	76.0	0.0027468341745800306	0.0021653998032499203
//76.0	80.0	0.0018573470308588685	0.0015293804172993137
//80.0	84.0	0.001236922631219908	0.0010634241241901622
//84.0	88.0	0.0008094146852562317	0.0007263489503372035
//88.0	92.0	0.0005189981387560403	0.0004860258395993534
//92.0	96.0	0.0003249623537596706	0.00031753555671768245
//96.0	100.0	0.00019782527005355967	0.00020169185354578848
//100.0	104.0	0.00011642317852163907	0.00012385348886206164
//104.0	108.0	6.572713380084221e-05	7.296638048057316e-05
//108.0	112.0	3.520424119844237e-05	4.079067897926915e-05
//112.0	116.0	1.7589636550012317e-05	2.1277479686148797e-05
//116.0	120.0	7.969142249396538e-06	1.0067294809515254e-05
//120.0	124.0	3.097426743438058e-06	4.088010020680794e-06
//124.0	128.0	8.947715866819468e-07	1.2343449731722323e-06
//128.0	136.0	0.005783772886279258	0.004172110230330903
//136.0	144.0	0.004008865391259694	0.0030240302485633635
//144.0	152.0	0.0027468341745798086	0.002165399803249789
//152.0	160.0	0.0018573470308586464	0.0015293804172991816
//160.0	168.0	0.001236922631219686	0.0010634241241900288
//168.0	176.0	0.0008094146852560097	0.0007263489503370723
//176.0	184.0	0.0005189981387558183	0.00048602583959922154
//184.0	192.0	0.00032496235375944853	0.00031753555671754763
//192.0	200.0	0.00019782527005311558	0.0002016918535455929
//200.0	208.0	0.00011642317852119499	0.00012385348886186377
//208.0	216.0	6.572713380039812e-05	7.296638048037349e-05
//216.0	224.0	3.520424119799828e-05	4.0790678979067314e-05
//224.0	232.0	1.7589636549568227e-05	2.127747968594659e-05
//232.0	240.0	7.96914224895245e-06	1.0067294809310072e-05
//240.0	248.0	3.0974267429939678e-06	4.088010020472232e-06
//248.0	256.0	8.947715862378578e-07	1.2343449729598688e-06
//256.0	272.0	0.005783772886279702	0.004172110230330948
//272.0	288.0	0.004008865391260138	0.0030240302485634077
//288.0	304.0	0.0027468341745802527	0.0021653998032498314
//304.0	320.0	0.0018573470308590905	0.001529380417299222
//320.0	336.0	0.00123692263122013	0.0010634241241900663
//336.0	352.0	0.0008094146852564537	0.0007263489503371101
//352.0	368.0	0.0005189981387562623	0.0004860258395992575
//368.0	384.0	0.0003249623537598926	0.0003175355567175802
//384.0	400.0	0.00019782527005355967	0.00020169185354562314
//400.0	416.0	0.00011642317852163907	0.00012385348886189088
//416.0	432.0	6.572713380084221e-05	7.296638048039787e-05
//432.0	448.0	3.520424119844237e-05	4.07906789790888e-05
//448.0	464.0	1.7589636550012317e-05	2.127747968596658e-05
//464.0	480.0	7.969142249396538e-06	1.006729480932673e-05
//480.0	496.0	3.097426743438058e-06	4.088010020485328e-06
//496.0	512.0	8.947715866819468e-07	1.2343449729691548e-06
//512.0	544.0	0.005783772886279702	0.004172110230330899
//544.0	576.0	0.004008865391260138	0.0030240302485633605
//576.0	608.0	0.0027468341745802527	0.0021653998032497832
//608.0	640.0	0.0018573470308590905	0.0015293804172991732
//640.0	672.0	0.00123692263122013	0.0010634241241900164
//672.0	704.0	0.0008094146852564537	0.000726348950337061
//704.0	736.0	0.0005189981387562623	0.0004860258395992076
//736.0	768.0	0.0003249623537598926	0.0003175355567175282
//768.0	800.0	0.00019782527005355967	0.00020169185354557
//800.0	832.0	0.00011642317852163907	0.0001238534888618358
//832.0	864.0	6.572713380084221e-05	7.296638048034117e-05
//864.0	896.0	3.520424119844237e-05	4.079067897903029e-05
//896.0	928.0	1.7589636550012317e-05	2.12774796859073e-05
//928.0	960.0	7.969142249396538e-06	1.0067294809265252e-05
//960.0	992.0	3.097426743438058e-06	4.088010020421441e-06
//992.0	1024.0	8.947715866819468e-07	1.2343449729026403e-06
//1024.0	1088.0	0.005783772886279702	0.004172110230330861
//1088.0	1152.0	0.004008865391260138	0.003024030248563324
//1152.0	1216.0	0.0027468341745802527	0.002165399803249746
//1216.0	1280.0	0.0018573470308590905	0.0015293804172991352
//1280.0	1344.0	0.00123692263122013	0.0010634241241899774
//1344.0	1408.0	0.0008094146852564537	0.0007263489503370225
//1408.0	1472.0	0.0005189981387562623	0.0004860258395991684
//1472.0	1536.0	0.0003249623537598926	0.0003175355567174874
//1536.0	1600.0	0.00019782527005355967	0.0002016918535455281
//1600.0	1664.0	0.00011642317852163907	0.00012385348886179235
//1664.0	1728.0	6.572713380084221e-05	7.296638048029639e-05
//1728.0	1792.0	3.520424119844237e-05	4.079067897898403e-05
//1792.0	1856.0	1.7589636550012317e-05	2.1277479685860392e-05
//1856.0	1920.0	7.969142249396538e-06	1.0067294809216546e-05
//1920.0	1984.0	3.097426743438058e-06	4.088010020370778e-06
//1984.0	2048.0	8.947715866819468e-07	1.234344972849844e-06
//2048.0	2176.0	0.005783772886280146	0.0041721102303308956
//2176.0	2304.0	0.0040088653912605824	0.0030240302485633587
//2304.0	2432.0	0.0027468341745806968	0.0021653998032497798
//2432.0	2560.0	0.0018573470308595346	0.0015293804172991682
//2560.0	2688.0	0.0012369226312205742	0.0010634241241900089
//2688.0	2816.0	0.0008094146852568978	0.0007263489503370542
//2816.0	2944.0	0.0005189981387567064	0.00048602583959919904
//2944.0	3072.0	0.0003249623537603367	0.00031753555671751635
//3072.0	3200.0	0.00019782527005400376	0.00020169185354555587
//3200.0	3328.0	0.00011642317852208316	0.0001238534888618185
//3328.0	3456.0	6.57271338012863e-05	7.296638048032115e-05
//3456.0	3584.0	3.5204241198886456e-05	4.07906789790073e-05
//3584.0	3712.0	1.7589636550456406e-05	2.127747968588286e-05
//3712.0	3840.0	7.96914224984063e-06	1.0067294809237303e-05
//3840.0	3968.0	3.0974267438821466e-06	4.088010020389704e-06
//3968.0	4096.0	8.947715871260369e-07	1.2343449728668112e-06
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//4096.0	4096.0	0.00578377288628008	0.004172110230330854
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.005783772886278925,
//spec:     "domain": [
//spec:         0.5,
//spec:         2.0
//spec:     ],
//spec:     "epsilon": 1.2343449767929574e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.005783772886279091,
//spec:     "domain": [
//spec:         0.25,
//spec:         4.0
//spec:     ],
//spec:     "epsilon": 1.2343449743529945e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.005783772886279147,
//spec:     "domain": [
//spec:         0.125,
//spec:         8.0
//spec:     ],
//spec:     "epsilon": 1.2343449737241784e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.005783772886279258,
//spec:     "domain": [
//spec:         0.0625,
//spec:         16.0
//spec:     ],
//spec:     "epsilon": 1.2343449734103324e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.00578377288627948,
//spec:     "domain": [
//spec:         0.03125,
//spec:         32.0
//spec:     ],
//spec:     "epsilon": 1.2343449731951477e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.00578377288627948,
//spec:     "domain": [
//spec:         0.015625,
//spec:         64.0
//spec:     ],
//spec:     "epsilon": 1.2343449731107815e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.005783772886279702,
//spec:     "domain": [
//spec:         0.0078125,
//spec:         128.0
//spec:     ],
//spec:     "epsilon": 1.2343449730514549e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.005783772886279702,
//spec:     "domain": [
//spec:         0.00390625,
//spec:         256.0
//spec:     ],
//spec:     "epsilon": 1.2343449729598688e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.005783772886279702,
//spec:     "domain": [
//spec:         0.001953125,
//spec:         512.0
//spec:     ],
//spec:     "epsilon": 1.234344972900219e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.005783772886279702,
//spec:     "domain": [
//spec:         0.0009765625,
//spec:         1024.0
//spec:     ],
//spec:     "epsilon": 1.2343449728478955e-06,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_8",
//spec:     "delta": 0.005783772886280146,
//spec:     "domain": [
//spec:         0.00048828125,
//spec:         2048.0
//spec:     ],
//spec:     "epsilon": 1.2343449728053168e-06,
//spec:     "operation": "log"
//spec: }
