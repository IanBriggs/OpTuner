/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_4.c --poly-degree 4 --fname \
 *     ml2_log_4 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>



double ml2_log_4(double);
double ml2_log_4(double x){
    double x_man;
    double r;
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
    pm_3 = r * -0x1.5fdbbcc27ac92p-1;
    pa_3 = 0x1.74c168a4c62a1p1 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = -0x1.48740d25232c1p2 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.51aeb1abf0849p2 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.2f3fc25ba6d31p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fd8d4742790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fd8d4742a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fd8d4742b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fd8d4742d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd8d47505e0>
//Info: executing pass instantiate_abstract_prec on fct ml2_log_4
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd8d47505e0>
//Info: executing pass instantiate_prec on fct ml2_log_4
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd8d47505e0>
//Info: executing pass sub_expr_sharing on fct ml2_log_4
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd8d47505e0>
//Info: executing pass check_processor_support on fct ml2_log_4
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd8d47505e0>
//Info: executing pass debug_tag_node on fct ml2_log_4
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_log_4.c
//0.000244140625	0.0002593994140625	0.05829566758134353	0.042051435262456784
//0.0002593994140625	0.000274658203125	0.04710502766600775	0.03553300363539753
//0.000274658203125	0.0002899169921875	0.03786567453855644	0.02985048204021272
//0.0002899169921875	0.00030517578125	0.03025204275497377	0.024910197719695736
//0.00030517578125	0.0003204345703125	0.02399533351023917	0.020629597905921015
//0.0003204345703125	0.000335693359375	0.018872233940802736	0.016935481358484238
//0.000335693359375	0.0003509521484375	0.014696263083271207	0.01376259965239471
//0.0003509521484375	0.0003662109375	0.01131104310648021	0.011052536788755422
//0.0003662109375	0.0003814697265625	0.008585003656853867	0.00875280139788983
//0.0003814697265625	0.000396728515625	0.006407167958470004	0.0068160834936005195
//0.000396728515625	0.0004119873046875	0.00468376587646598	0.005199640137504368
//0.0004119873046875	0.00042724609375	0.003335486530136152	0.0038647832098210573
//0.00042724609375	0.0004425048828125	0.0022952307959818517	0.0027764488767849788
//0.0004425048828125	0.000457763671875	0.001506258375728744	0.0019028330349035668
//0.000457763671875	0.0004730224609375	0.0009206491185833495	0.0012150804964632038
//0.0004730224609375	0.00048828125	0.0004980167339994888	0.0006870182994708605
//0.00048828125	0.000518798828125	0.05829566758134353	0.042051435262456804
//0.000518798828125	0.00054931640625	0.04710502766600775	0.03553300363539754
//0.00054931640625	0.000579833984375	0.03786567453855644	0.029850482040212737
//0.000579833984375	0.0006103515625	0.03025204275497377	0.024910197719695756
//0.0006103515625	0.000640869140625	0.02399533351023917	0.020629597905921032
//0.000640869140625	0.00067138671875	0.018872233940802736	0.01693548135848426
//0.00067138671875	0.000701904296875	0.014696263083271207	0.013762599652394727
//0.000701904296875	0.000732421875	0.011311043106479766	0.011052536788755386
//0.000732421875	0.000762939453125	0.008585003656853423	0.008752801397889792
//0.000762939453125	0.00079345703125	0.00640716795846956	0.006816083493600481
//0.00079345703125	0.000823974609375	0.004683765876465536	0.00519964013750433
//0.000823974609375	0.0008544921875	0.003335486530135708	0.003864783209821019
//0.0008544921875	0.000885009765625	0.0022952307959814076	0.0027764488767849406
//0.000885009765625	0.00091552734375	0.0015062583757283	0.0019028330349035285
//0.00091552734375	0.000946044921875	0.0009206491185829054	0.0012150804964631656
//0.000946044921875	0.0009765625	0.0004980167339990447	0.0006870182994708223
//0.0009765625	0.00103759765625	0.05829566758134309	0.04205143526245676
//0.00103759765625	0.0010986328125	0.047105027666007306	0.035533003635397506
//0.0010986328125	0.00115966796875	0.03786567453855599	0.0298504820402127
//0.00115966796875	0.001220703125	0.030252042754973327	0.024910197719695718
//0.001220703125	0.00128173828125	0.023995333510238727	0.020629597905920994
//0.00128173828125	0.0013427734375	0.018872233940802292	0.016935481358484217
//0.0013427734375	0.00140380859375	0.014696263083270763	0.013762599652394689
//0.00140380859375	0.00146484375	0.011311043106479766	0.011052536788755403
//0.00146484375	0.00152587890625	0.008585003656853423	0.008752801397889809
//0.00152587890625	0.0015869140625	0.00640716795846956	0.006816083493600499
//0.0015869140625	0.00164794921875	0.004683765876465536	0.0051996401375043475
//0.00164794921875	0.001708984375	0.003335486530135708	0.003864783209821037
//0.001708984375	0.00177001953125	0.0022952307959814076	0.002776448876784958
//0.00177001953125	0.0018310546875	0.0015062583757283	0.0019028330349035462
//0.0018310546875	0.00189208984375	0.0009206491185829054	0.0012150804964631836
//0.00189208984375	0.001953125	0.0004980167339990447	0.0006870182994708408
//0.001953125	0.0020751953125	0.05829566758134309	0.042051435262456784
//0.0020751953125	0.002197265625	0.047105027666007306	0.03553300363539752
//0.002197265625	0.0023193359375	0.03786567453855599	0.02985048204021272
//0.0023193359375	0.00244140625	0.030252042754973327	0.024910197719695736
//0.00244140625	0.0025634765625	0.023995333510238727	0.020629597905921015
//0.0025634765625	0.002685546875	0.018872233940802292	0.016935481358484238
//0.002685546875	0.0028076171875	0.014696263083270763	0.013762599652394708
//0.0028076171875	0.0029296875	0.011311043106479766	0.011052536788755424
//0.0029296875	0.0030517578125	0.008585003656853423	0.00875280139788983
//0.0030517578125	0.003173828125	0.00640716795846956	0.0068160834936005195
//0.003173828125	0.0032958984375	0.004683765876465536	0.005199640137504369
//0.0032958984375	0.00341796875	0.003335486530135708	0.0038647832098210586
//0.00341796875	0.0035400390625	0.0022952307959814076	0.002776448876784979
//0.0035400390625	0.003662109375	0.0015062583757283	0.0019028330349035681
//0.003662109375	0.0037841796875	0.0009206491185829054	0.0012150804964632057
//0.0037841796875	0.00390625	0.0004980167339990447	0.0006870182994708633
//0.00390625	0.004150390625	0.05829566758134309	0.04205143526245681
//0.004150390625	0.00439453125	0.047105027666007306	0.03553300363539755
//0.00439453125	0.004638671875	0.03786567453855599	0.029850482040212744
//0.004638671875	0.0048828125	0.030252042754973327	0.024910197719695763
//0.0048828125	0.005126953125	0.023995333510238727	0.02062959790592104
//0.005126953125	0.00537109375	0.018872233940802292	0.016935481358484262
//0.00537109375	0.005615234375	0.014696263083270763	0.013762599652394734
//0.005615234375	0.005859375	0.011311043106479766	0.011052536788755448
//0.005859375	0.006103515625	0.008585003656853423	0.008752801397889854
//0.006103515625	0.00634765625	0.00640716795846956	0.006816083493600545
//0.00634765625	0.006591796875	0.004683765876465536	0.005199640137504395
//0.006591796875	0.0068359375	0.003335486530135708	0.0038647832098210855
//0.0068359375	0.007080078125	0.0022952307959814076	0.002776448876785006
//0.007080078125	0.00732421875	0.0015062583757283	0.0019028330349035952
//0.00732421875	0.007568359375	0.0009206491185829054	0.0012150804964632335
//0.007568359375	0.0078125	0.0004980167339990447	0.0006870182994708915
//0.0078125	0.00830078125	0.05829566758134309	0.04205143526245684
//0.00830078125	0.0087890625	0.047105027666007306	0.035533003635397575
//0.0087890625	0.00927734375	0.03786567453855599	0.029850482040212775
//0.00927734375	0.009765625	0.030252042754973327	0.024910197719695795
//0.009765625	0.01025390625	0.023995333510238727	0.020629597905921067
//0.01025390625	0.0107421875	0.018872233940802292	0.016935481358484293
//0.0107421875	0.01123046875	0.014696263083270763	0.013762599652394765
//0.01123046875	0.01171875	0.011311043106479766	0.011052536788755481
//0.01171875	0.01220703125	0.008585003656853423	0.008752801397889887
//0.01220703125	0.0126953125	0.00640716795846956	0.006816083493600578
//0.0126953125	0.01318359375	0.004683765876465536	0.005199640137504429
//0.01318359375	0.013671875	0.003335486530135708	0.0038647832098211202
//0.013671875	0.01416015625	0.0022952307959814076	0.00277644887678504
//0.01416015625	0.0146484375	0.0015062583757283	0.0019028330349036302
//0.0146484375	0.01513671875	0.0009206491185829054	0.001215080496463269
//0.01513671875	0.015625	0.0004980167339990447	0.0006870182994709279
//0.015625	0.0166015625	0.058295667581342865	0.042051435262456825
//0.0166015625	0.017578125	0.047105027666007084	0.03553300363539757
//0.017578125	0.0185546875	0.03786567453855577	0.029850482040212765
//0.0185546875	0.01953125	0.030252042754973105	0.024910197719695784
//0.01953125	0.0205078125	0.023995333510238505	0.02062959790592106
//0.0205078125	0.021484375	0.01887223394080207	0.016935481358484286
//0.021484375	0.0224609375	0.01469626308327054	0.013762599652394757
//0.0224609375	0.0234375	0.011311043106479544	0.011052536788755474
//0.0234375	0.0244140625	0.008585003656853201	0.008752801397889878
//0.0244140625	0.025390625	0.006407167958469338	0.00681608349360057
//0.025390625	0.0263671875	0.004683765876465314	0.005199640137504422
//0.0263671875	0.02734375	0.0033354865301354858	0.0038647832098211137
//0.02734375	0.0283203125	0.0022952307959811856	0.002776448876785033
//0.0283203125	0.029296875	0.001506258375728078	0.0019028330349036234
//0.029296875	0.0302734375	0.0009206491185826833	0.0012150804964632632
//0.0302734375	0.03125	0.0004980167339988227	0.0006870182994709226
//0.03125	0.033203125	0.058295667581342865	0.042051435262456874
//0.033203125	0.03515625	0.047105027666007084	0.03553300363539761
//0.03515625	0.037109375	0.03786567453855577	0.02985048204021281
//0.037109375	0.0390625	0.030252042754972883	0.024910197719695774
//0.0390625	0.041015625	0.023995333510238283	0.020629597905921046
//0.041015625	0.04296875	0.01887223394080185	0.016935481358484272
//0.04296875	0.044921875	0.014696263083270319	0.013762599652394746
//0.044921875	0.046875	0.011311043106479322	0.011052536788755464
//0.046875	0.048828125	0.008585003656852979	0.008752801397889866
//0.048828125	0.05078125	0.006407167958469116	0.006816083493600559
//0.05078125	0.052734375	0.004683765876465092	0.0051996401375044125
//0.052734375	0.0546875	0.0033354865301352637	0.0038647832098211046
//0.0546875	0.056640625	0.0022952307959809635	0.002776448876785023
//0.056640625	0.05859375	0.0015062583757278558	0.0019028330349036143
//0.05859375	0.060546875	0.0009206491185824613	0.001215080496463255
//0.060546875	0.0625	0.0004980167339986006	0.0006870182994709154
//0.0625	0.06640625	0.05829566758134264	0.04205143526245687
//0.06640625	0.0703125	0.04710502766600686	0.0355330036353976
//0.0703125	0.07421875	0.03786567453855555	0.029850482040212806
//0.07421875	0.078125	0.030252042754972883	0.02491019771969583
//0.078125	0.08203125	0.023995333510238283	0.020629597905921098
//0.08203125	0.0859375	0.01887223394080185	0.016935481358484328
//0.0859375	0.08984375	0.014696263083270319	0.013762599652394802
//0.08984375	0.09375	0.011311043106479322	0.011052536788755521
//0.09375	0.09765625	0.008585003656852979	0.008752801397889925
//0.09765625	0.1015625	0.006407167958469116	0.006816083493600619
//0.1015625	0.10546875	0.004683765876465092	0.005199640137504474
//0.10546875	0.109375	0.0033354865301352637	0.003864783209821169
//0.109375	0.11328125	0.0022952307959809635	0.0027764488767850863
//0.11328125	0.1171875	0.0015062583757278558	0.0019028330349036798
//0.1171875	0.12109375	0.0009206491185824613	0.0012150804964633226
//0.12109375	0.125	0.0004980167339986006	0.0006870182994709853
//0.125	0.1328125	0.05829566758134253	0.0420514352624569
//0.1328125	0.140625	0.04710502766600675	0.03553300363539764
//0.140625	0.1484375	0.03786567453855544	0.029850482040212845
//0.1484375	0.15625	0.03025204275497277	0.02491019771969587
//0.15625	0.1640625	0.023995333510238172	0.020629597905921136
//0.1640625	0.171875	0.018872233940801737	0.016935481358484366
//0.171875	0.1796875	0.014696263083270208	0.013762599652394845
//0.1796875	0.1875	0.01131104310647921	0.011052536788755568
//0.1875	0.1953125	0.008585003656852868	0.008752801397889969
//0.1953125	0.203125	0.006407167958469005	0.006816083493600666
//0.203125	0.2109375	0.004683765876464981	0.005199640137504524
//0.2109375	0.21875	0.0033354865301351527	0.0038647832098212226
//0.21875	0.2265625	0.0022952307959808525	0.002776448876785139
//0.2265625	0.234375	0.0015062583757277448	0.0019028330349037355
//0.234375	0.2421875	0.0009206491185823503	0.001215080496463382
//0.2421875	0.25	0.0004980167339984896	0.0006870182994710484
//0.25	0.265625	0.05829566758134248	0.042051435262456985
//0.265625	0.28125	0.047105027666006584	0.03553300363539767
//0.28125	0.296875	0.03786567453855527	0.02985048204021288
//0.296875	0.3125	0.030252042754972605	0.02491019771969591
//0.3125	0.328125	0.023995333510238005	0.02062959790592117
//0.328125	0.34375	0.01887223394080157	0.016935481358484408
//0.34375	0.359375	0.014696263083270041	0.013762599652394888
//0.359375	0.375	0.011311043106479044	0.011052536788755616
//0.375	0.390625	0.008585003656852701	0.008752801397890015
//0.390625	0.40625	0.006407167958468838	0.006816083493600719
//0.40625	0.421875	0.004683765876464814	0.005199640137504584
//0.421875	0.4375	0.003335486530134986	0.0038647832098212894
//0.4375	0.453125	0.002295230795980686	0.002776448876785203
//0.453125	0.46875	0.0015062583757275783	0.0019028330349038069
//0.46875	0.484375	0.0009206491185821837	0.0012150804964634607
//0.484375	0.5	0.0004980167339983231	0.000687018299471135
//0.5	0.53125	0.05829566758134231	0.042051435262457075
//0.53125	0.5625	0.04710502766600653	0.035533003635397825
//0.5625	0.59375	0.037865674538555216	0.029850482040213053
//0.59375	0.625	0.03025204275497255	0.0249101977196961
//0.625	0.65625	0.02399533351023795	0.02062959790592135
//0.65625	0.6875	0.018872233940801515	0.016935481358484605
//0.6875	0.71875	0.014696263083269986	0.013762599652395109
//0.71875	0.75	0.011311043106478989	0.011052536788755857
//0.75	0.78125	0.00858500365685259	0.008752801397890196
//0.78125	0.8125	0.006407167958468727	0.006816083493600921
//0.8125	0.84375	0.004683765876464703	0.00519964013750481
//0.84375	0.875	0.003335486530134875	0.003864783209821542
//0.875	0.90625	0.002295230795980575	0.002776448876785457
//0.90625	0.9375	0.0015062583757274673	0.0019028330349040903
//0.9375	0.96875	0.0009206491185820727	0.0012150804964637767
//0.96875	1.0	0.000498016733998212	0.0006870182994714872
//1.0	1.0625	0.058295667581342255	0.04205143526245758
//1.0625	1.125	0.04710502766600647	0.03553300363539841
//1.125	1.1875	0.03786567453855516	0.029850482040213736
//1.1875	1.25	0.030252042754972494	0.02491019771969691
//1.25	1.3125	0.023995333510237866	0.020629597905922125
//1.3125	1.375	0.018872233940801432	0.016935481358485546
//1.375	1.4375	0.014696263083269902	0.01376259965239626
//1.4375	1.5	0.011311043106478905	0.011052536788757297
//1.5	1.5625	0.008585003656852563	0.008752801397891924
//1.5625	1.625	0.0064071679584686994	0.006816083493603178
//1.625	1.6875	0.004683765876464662	0.005199640137507782
//1.6875	1.75	0.0033354865301348335	0.003864783209825867
//1.75	1.8125	0.0022952307959805333	0.0027764488767919164
//1.8125	1.875	0.0015062583757274256	0.0019028330349180299
//1.875	1.9375	0.0009206491185820241	0.001215080496494075
//1.9375	2.0	0.00049801673399816	inf
//2.0	2.125	0.05829566758134221	0.04205143526246955
//2.125	2.25	0.04710502766600643	0.03553300363540319
//2.25	2.375	0.03786567453855512	0.029850482040216442
//2.375	2.5	0.030252042754972466	0.024910197719698615
//2.5	2.625	0.023995333510237866	0.020629597905923027
//2.625	2.75	0.018872233940801432	0.01693548135848593
//2.75	2.875	0.014696263083269902	0.013762599652396176
//2.875	3.0	0.011311043106478905	0.011052536788756725
//3.0	3.125	0.008585003656852563	0.008752801397890891
//3.125	3.25	0.006407167958468727	0.006816083493601558
//3.25	3.375	0.004683765876464703	0.005199640137505333
//3.375	3.5	0.003335486530134875	0.0038647832098219607
//3.5	3.625	0.002295230795980575	0.0027764488767857524
//3.625	3.75	0.0015062583757274673	0.0019028330349042991
//3.75	3.875	0.0009206491185820727	0.001215080496463901
//3.875	4.0	0.000498016733998212	0.0006870182994715279
//4.0	4.25	0.05829566758134248	0.04205143526245766
//4.25	4.5	0.047105027666006695	0.035533003635398325
//4.5	4.75	0.03786567453855538	0.029850482040213473
//4.75	5.0	0.030252042754972716	0.02491019771969645
//5.0	5.25	0.023995333510238172	0.020629597905921684
//5.25	5.5	0.018872233940801737	0.01693548135848488
//5.5	5.75	0.014696263083270208	0.01376259965239532
//5.75	6.0	0.01131104310647921	0.01105253678875601
//6.0	6.25	0.008585003656852868	0.008752801397890359
//6.25	6.5	0.006407167958469005	0.006816083493601031
//6.5	6.75	0.004683765876464981	0.005199640137504865
//6.75	7.0	0.0033354865301351527	0.0038647832098215413
//7.0	7.25	0.0022952307959808525	0.00277644887678542
//7.25	7.5	0.0015062583757277448	0.001902833034903997
//7.5	7.75	0.0009206491185823503	0.0012150804964636242
//7.75	8.0	0.0004980167339984896	0.0006870182994712721
//8.0	8.5	0.05829566758134231	0.04205143526245702
//8.5	9.0	0.04710502766600653	0.035533003635397735
//9.0	9.5	0.037865674538555216	0.029850482040212924
//9.5	10.0	0.03025204275497255	0.024910197719695933
//10.0	10.5	0.02399533351023795	0.02062959790592117
//10.5	11.0	0.018872233940801515	0.016935481358484387
//11.0	11.5	0.014696263083269986	0.013762599652394854
//11.5	12.0	0.011311043106478989	0.011052536788755563
//12.0	12.5	0.008585003656852646	0.008752801397889944
//12.5	13.0	0.006407167958468783	0.006816083493600631
//13.0	13.5	0.004683765876464759	0.0051996401375044785
//13.5	14.0	0.0033354865301349307	0.0038647832098211653
//14.0	14.5	0.0022952307959807415	0.0027764488767851253
//14.5	15.0	0.0015062583757276338	0.0019028330349037104
//15.0	15.5	0.0009206491185822392	0.001215080496463345
//15.5	16.0	0.0004980167339983786	0.0006870182994709995
//16.0	17.0	0.05829566758134264	0.04205143526245703
//17.0	18.0	0.04710502766600686	0.035533003635397756
//18.0	19.0	0.03786567453855555	0.029850482040212945
//19.0	20.0	0.030252042754972883	0.024910197719695958
//20.0	21.0	0.023995333510238283	0.020629597905921206
//21.0	22.0	0.01887223394080185	0.016935481358484425
//22.0	23.0	0.014696263083270319	0.013762599652394888
//23.0	24.0	0.011311043106479322	0.011052536788755599
//24.0	25.0	0.008585003656852979	0.008752801397889988
//25.0	26.0	0.006407167958469116	0.006816083493600675
//26.0	27.0	0.004683765876465092	0.005199640137504521
//27.0	28.0	0.0033354865301352637	0.003864783209821207
//28.0	29.0	0.0022952307959809635	0.002776448876785114
//29.0	30.0	0.0015062583757278558	0.0019028330349036998
//30.0	31.0	0.0009206491185824613	0.0012150804964633345
//31.0	32.0	0.0004980167339986006	0.0006870182994709892
//32.0	34.0	0.058295667581342865	0.042051435262457
//34.0	36.0	0.047105027666007084	0.03553300363539773
//36.0	38.0	0.03786567453855577	0.029850482040212917
//38.0	40.0	0.030252042754973105	0.02491019771969593
//40.0	42.0	0.023995333510238505	0.02062959790592119
//42.0	44.0	0.01887223394080207	0.016935481358484408
//44.0	46.0	0.01469626308327054	0.013762599652394873
//46.0	48.0	0.011311043106479544	0.011052536788755583
//48.0	50.0	0.008585003656853201	0.008752801397889977
//50.0	52.0	0.006407167958469338	0.006816083493600664
//52.0	54.0	0.004683765876465314	0.0051996401375045105
//54.0	56.0	0.0033354865301354858	0.003864783209821197
//56.0	58.0	0.0022952307959811856	0.002776448876785108
//58.0	60.0	0.001506258375728078	0.0019028330349036935
//60.0	62.0	0.0009206491185826833	0.0012150804964633282
//62.0	64.0	0.0004980167339988227	0.000687018299470983
//64.0	68.0	0.058295667581342865	0.042051435262456915
//68.0	72.0	0.047105027666007084	0.035533003635397645
//72.0	76.0	0.03786567453855577	0.02985048204021284
//76.0	80.0	0.030252042754973105	0.024910197719695854
//80.0	84.0	0.023995333510238505	0.020629597905921115
//84.0	88.0	0.01887223394080207	0.016935481358484338
//88.0	92.0	0.01469626308327054	0.013762599652394803
//92.0	96.0	0.011311043106479544	0.011052536788755516
//96.0	100.0	0.008585003656853201	0.008752801397889913
//100.0	104.0	0.006407167958469338	0.0068160834936006
//104.0	108.0	0.004683765876465536	0.005199640137504504
//108.0	112.0	0.003335486530135708	0.00386478320982119
//112.0	116.0	0.0022952307959814076	0.0027764488767851037
//116.0	120.0	0.0015062583757283	0.0019028330349036894
//120.0	124.0	0.0009206491185829054	0.0012150804964633243
//124.0	128.0	0.0004980167339990447	0.000687018299470979
//128.0	136.0	0.05829566758134264	0.042051435262456804
//136.0	144.0	0.04710502766600686	0.03553300363539754
//144.0	152.0	0.03786567453855555	0.029850482040212734
//152.0	160.0	0.030252042754972883	0.02491019771969575
//160.0	168.0	0.023995333510238283	0.02062959790592102
//168.0	176.0	0.01887223394080185	0.016935481358484238
//176.0	184.0	0.014696263083270319	0.013762599652394706
//184.0	192.0	0.011311043106479322	0.011052536788755419
//192.0	200.0	0.008585003656852979	0.00875280139788982
//200.0	208.0	0.006407167958469116	0.006816083493600507
//208.0	216.0	0.004683765876465092	0.005199640137504355
//216.0	224.0	0.0033354865301352637	0.0038647832098210426
//224.0	232.0	0.0022952307959809635	0.002776448876784959
//232.0	240.0	0.0015062583757278558	0.0019028330349035456
//240.0	248.0	0.0009206491185824613	0.0012150804964631814
//248.0	256.0	0.0004980167339986006	0.0006870182994708371
//256.0	272.0	0.05829566758134309	0.04205143526245687
//272.0	288.0	0.047105027666007306	0.035533003635397596
//288.0	304.0	0.03786567453855599	0.029850482040212793
//304.0	320.0	0.030252042754973327	0.024910197719695805
//320.0	336.0	0.023995333510238727	0.020629597905921077
//336.0	352.0	0.018872233940802292	0.016935481358484297
//352.0	368.0	0.014696263083270763	0.013762599652394765
//368.0	384.0	0.011311043106479766	0.011052536788755476
//384.0	400.0	0.008585003656853423	0.008752801397889878
//400.0	416.0	0.00640716795846956	0.006816083493600565
//416.0	432.0	0.004683765876465536	0.0051996401375044125
//432.0	448.0	0.003335486530135708	0.0038647832098210994
//448.0	464.0	0.0022952307959814076	0.002776448876785016
//464.0	480.0	0.0015062583757283	0.0019028330349036024
//480.0	496.0	0.0009206491185829054	0.0012150804964632378
//496.0	512.0	0.0004980167339990447	0.0006870182994708929
//512.0	544.0	0.05829566758134309	0.04205143526245683
//544.0	576.0	0.047105027666007306	0.03553300363539756
//576.0	608.0	0.03786567453855599	0.029850482040212758
//608.0	640.0	0.030252042754973327	0.02491019771969577
//640.0	672.0	0.023995333510238727	0.020629597905921043
//672.0	704.0	0.018872233940802292	0.016935481358484265
//704.0	736.0	0.014696263083270763	0.013762599652394732
//736.0	768.0	0.011311043106479766	0.011052536788755445
//768.0	800.0	0.008585003656853423	0.008752801397889847
//800.0	832.0	0.00640716795846956	0.006816083493600535
//832.0	864.0	0.004683765876465536	0.005199640137504382
//864.0	896.0	0.003335486530135708	0.0038647832098210695
//896.0	928.0	0.0022952307959814076	0.0027764488767849874
//928.0	960.0	0.0015062583757283	0.0019028330349035738
//960.0	992.0	0.0009206491185829054	0.0012150804964632092
//992.0	1024.0	0.0004980167339990447	0.0006870182994708644
//1024.0	1088.0	0.05829566758134309	0.042051435262456804
//1088.0	1152.0	0.047105027666007306	0.035533003635397534
//1152.0	1216.0	0.03786567453855599	0.02985048204021273
//1216.0	1280.0	0.030252042754973327	0.024910197719695746
//1280.0	1344.0	0.023995333510238727	0.02062959790592102
//1344.0	1408.0	0.018872233940802292	0.01693548135848424
//1408.0	1472.0	0.014696263083270763	0.013762599652394708
//1472.0	1536.0	0.011311043106479766	0.01105253678875542
//1536.0	1600.0	0.008585003656853423	0.008752801397889825
//1600.0	1664.0	0.00640716795846956	0.006816083493600511
//1664.0	1728.0	0.004683765876465536	0.005199640137504359
//1728.0	1792.0	0.003335486530135708	0.0038647832098210456
//1792.0	1856.0	0.0022952307959814076	0.0027764488767849644
//1856.0	1920.0	0.0015062583757283	0.001902833034903551
//1920.0	1984.0	0.0009206491185829054	0.0012150804964631864
//1984.0	2048.0	0.0004980167339990447	0.0006870182994708416
//2048.0	2176.0	0.05829566758134353	0.042051435262456846
//2176.0	2304.0	0.04710502766600775	0.035533003635397575
//2304.0	2432.0	0.03786567453855644	0.02985048204021277
//2432.0	2560.0	0.03025204275497377	0.024910197719695788
//2560.0	2688.0	0.02399533351023917	0.02062959790592106
//2688.0	2816.0	0.018872233940802736	0.016935481358484283
//2816.0	2944.0	0.014696263083271207	0.01376259965239475
//2944.0	3072.0	0.01131104310648021	0.01105253678875546
//3072.0	3200.0	0.008585003656853867	0.008752801397889864
//3200.0	3328.0	0.006407167958470004	0.0068160834936005525
//3328.0	3456.0	0.00468376587646598	0.0051996401375043995
//3456.0	3584.0	0.003335486530136152	0.0038647832098210864
//3584.0	3712.0	0.0022952307959818517	0.002776448876785005
//3712.0	3840.0	0.001506258375728744	0.0019028330349035916
//3840.0	3968.0	0.0009206491185833495	0.0012150804964632268
//3968.0	4096.0	0.0004980167339994888	0.0006870182994708818
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//4096.0	4096.0	0.05829566758134352	0.04205143526245682
//spec: {
//spec:     "cname": "ml2_log_4",
//spec:     "delta": 0.05829566758134231,
//spec:     "domain": [
//spec:         0.5,
//spec:         2.0
//spec:     ],
//spec:     "epsilon": 0.0006870182994714872,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_4",
//spec:     "delta": 0.05829566758134248,
//spec:     "domain": [
//spec:         0.25,
//spec:         4.0
//spec:     ],
//spec:     "epsilon": 0.000687018299471135,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_4",
//spec:     "delta": 0.05829566758134253,
//spec:     "domain": [
//spec:         0.125,
//spec:         8.0
//spec:     ],
//spec:     "epsilon": 0.0006870182994710484,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_4",
//spec:     "delta": 0.05829566758134264,
//spec:     "domain": [
//spec:         0.0625,
//spec:         16.0
//spec:     ],
//spec:     "epsilon": 0.0006870182994709853,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_4",
//spec:     "delta": 0.058295667581342865,
//spec:     "domain": [
//spec:         0.015625,
//spec:         64.0
//spec:     ],
//spec:     "epsilon": 0.0006870182994709154,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_4",
//spec:     "delta": 0.05829566758134309,
//spec:     "domain": [
//spec:         0.0078125,
//spec:         128.0
//spec:     ],
//spec:     "epsilon": 0.0006870182994709154,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_4",
//spec:     "delta": 0.05829566758134309,
//spec:     "domain": [
//spec:         0.0009765625,
//spec:         1024.0
//spec:     ],
//spec:     "epsilon": 0.0006870182994708371,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_4",
//spec:     "delta": 0.05829566758134353,
//spec:     "domain": [
//spec:         0.00048828125,
//spec:         2048.0
//spec:     ],
//spec:     "epsilon": 0.0006870182994708223,
//spec:     "operation": "log"
//spec: }
