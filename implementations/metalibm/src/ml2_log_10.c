/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_10.c --poly-degree 10 \
 *     --fname ml2_log_10 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>


double ml2_log1p_10(double x) {
  return ml2_log_10(x + 1);
}

double ml2_log_10(double);
double ml2_log_10(double x){
    double x_man;
    double r;
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
    pm_9 = r * -0x1.c7eaf2ea6cb19p0;
    pa_9 = 0x1.e7ea78abec014p3 + pm_9;
    pm_8 = r * pa_9;
    pa_8 = -0x1.d919374ea6defp5 + pm_8;
    pm_7 = r * pa_8;
    pa_7 = 0x1.128a071689bc7p7 + pm_7;
    pm_6 = r * pa_7;
    pa_6 = -0x1.a85c100417c46p7 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.cbcfb4c280e22p7 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = -0x1.66295f230c6c4p7 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.95874a5b0e0abp6 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = -0x1.50cf7030248aap5 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.b72d180c89e28p3 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.9fdac95b47549p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f876429e7f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f876429eac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f876429eb80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f876429ed60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8764299d30>
//Info: executing pass instantiate_abstract_prec on fct ml2_log_10
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8764299d30>
//Info: executing pass instantiate_prec on fct ml2_log_10
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8764299d30>
//Info: executing pass sub_expr_sharing on fct ml2_log_10
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8764299d30>
//Info: executing pass check_processor_support on fct ml2_log_10
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8764299d30>
//Info: executing pass debug_tag_node on fct ml2_log_10
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_log_10.c
//0.000244140625	0.0002593994140625	0.0019723216794348248	0.0014227293529775512
//0.0002593994140625	0.000274658203125	0.001267686721128387	0.0009562613398659607
//0.000274658203125	0.0002899169921875	0.0008028757517334373	0.0006329275392457722
//0.0002899169921875	0.00030517578125	0.0005000023184528694	0.0004117129118779186
//0.00030517578125	0.0003204345703125	0.00030544196796613383	0.0002625987665474174
//0.0003204345703125	0.000335693359375	0.00018250565694491653	0.00016377611472275853
//0.000335693359375	0.0003509521484375	0.00010629626439852456	9.954319156742874e-05
//0.0003509521484375	0.0003662109375	6.0090467203990626e-05	5.8717139802132694e-05
//0.0003662109375	0.0003814697265625	3.279401162111851e-05	3.3434985260691466e-05
//0.0003814697265625	0.000396728515625	1.715595606312022e-05	1.8250876154944846e-05
//0.000396728515625	0.0004119873046875	8.520955182860057e-06	9.459460982254543e-06
//0.0004119873046875	0.00042724609375	3.963141644722658e-06	4.592038712245252e-06
//0.00042724609375	0.0004425048828125	1.6901998714470119e-06	2.0445671652779196e-06
//0.0004425048828125	0.000457763671875	6.380146221937475e-07	8.059940513987824e-07
//0.000457763671875	0.0004730224609375	1.9890953478352864e-07	2.625224801721413e-07
//0.0004730224609375	0.00048828125	4.271437736761882e-08	5.892483737411995e-08
//0.00048828125	0.000518798828125	0.0019723216794348248	0.0014227293529775775
//0.000518798828125	0.00054931640625	0.001267686721128387	0.0009562613398659875
//0.00054931640625	0.000579833984375	0.0008028757517334373	0.0006329275392458006
//0.000579833984375	0.0006103515625	0.0005000023184528694	0.0004117129118779482
//0.0006103515625	0.000640869140625	0.00030544196796613383	0.00026259876654744765
//0.000640869140625	0.00067138671875	0.00018250565694491653	0.00016377611472279065
//0.00067138671875	0.000701904296875	0.00010629626439852456	9.954319156746299e-05
//0.000701904296875	0.000732421875	6.0090467203990626e-05	5.8717139802171074e-05
//0.000732421875	0.000762939453125	3.279401162111851e-05	3.3434985260733804e-05
//0.000762939453125	0.00079345703125	1.715595606312022e-05	1.825087615499044e-05
//0.00079345703125	0.000823974609375	8.520955182860057e-06	9.459460982303764e-06
//0.000823974609375	0.0008544921875	3.963141644722658e-06	4.592038712298518e-06
//0.0008544921875	0.000885009765625	1.6901998714470119e-06	2.0445671653356987e-06
//0.000885009765625	0.00091552734375	6.380146221937475e-07	8.059940514616008e-07
//0.00091552734375	0.000946044921875	1.9890953478352864e-07	2.625224802405895e-07
//0.000946044921875	0.0009765625	4.271437736761882e-08	5.892483744886145e-08
//0.0009765625	0.00103759765625	0.0019723216794343807	0.001422729352977549
//0.00103759765625	0.0010986328125	0.0012676867211279428	0.000956261339865959
//0.0010986328125	0.00115966796875	0.0008028757517329932	0.0006329275392457735
//0.00115966796875	0.001220703125	0.0005000023184524253	0.000411712911877922
//0.001220703125	0.00128173828125	0.00030544196796568974	0.00026259876654742174
//0.00128173828125	0.0013427734375	0.00018250565694447244	0.00016377611472276655
//0.0013427734375	0.00140380859375	0.00010629626439808047	9.954319156744094e-05
//0.00140380859375	0.00146484375	6.009046720354654e-05	5.871713980215351e-05
//0.00146484375	0.00152587890625	3.279401162067441e-05	3.3434985260720536e-05
//0.00152587890625	0.0015869140625	1.7155956062676128e-05	1.8250876154980618e-05
//0.0015869140625	0.00164794921875	8.520955182415967e-06	9.459460982297843e-06
//0.00164794921875	0.001708984375	3.963141644278568e-06	4.592038712297004e-06
//0.001708984375	0.00177001953125	1.6901998710029229e-06	2.04456716533916e-06
//0.00177001953125	0.0018310546875	6.380146217496585e-07	8.059940514706765e-07
//0.0018310546875	0.00189208984375	1.9890953433943964e-07	2.6252248025599897e-07
//0.00189208984375	0.001953125	4.2714376923529825e-08	5.892483747141455e-08
//0.001953125	0.0020751953125	0.0019723216794343807	0.0014227293529775807
//0.0020751953125	0.002197265625	0.0012676867211279428	0.0009562613398659912
//0.002197265625	0.0023193359375	0.0008028757517329932	0.0006329275392458081
//0.0023193359375	0.00244140625	0.0005000023184524253	0.0004117129118779583
//0.00244140625	0.0025634765625	0.00030544196796568974	0.00026259876654745887
//0.0025634765625	0.002685546875	0.00018250565694447244	0.0001637761147228065
//0.002685546875	0.0028076171875	0.00010629626439808047	9.954319156748397e-05
//0.0028076171875	0.0029296875	6.009046720354654e-05	5.871713980220263e-05
//0.0029296875	0.0030517578125	3.279401162067441e-05	3.343498526077551e-05
//0.0030517578125	0.003173828125	1.7155956062676128e-05	1.8250876155040453e-05
//0.003173828125	0.0032958984375	8.520955182415967e-06	9.45946098236311e-06
//0.0032958984375	0.00341796875	3.963141644278568e-06	4.592038712368358e-06
//0.00341796875	0.0035400390625	1.6901998710029229e-06	2.0445671654173366e-06
//0.0035400390625	0.003662109375	6.380146217496585e-07	8.059940515565075e-07
//0.003662109375	0.0037841796875	1.9890953433943964e-07	2.6252248035042266e-07
//0.0037841796875	0.00390625	4.2714376923529825e-08	5.892483757549205e-08
//0.00390625	0.004150390625	0.0019723216794343807	0.0014227293529776195
//0.004150390625	0.00439453125	0.0012676867211279428	0.0009562613398660307
//0.00439453125	0.004638671875	0.0008028757517329932	0.0006329275392458508
//0.004638671875	0.0048828125	0.0005000023184524253	0.0004117129118780032
//0.0048828125	0.005126953125	0.00030544196796568974	0.00026259876654750495
//0.005126953125	0.00537109375	0.00018250565694447244	0.00016377611472285613
//0.00537109375	0.005615234375	0.00010629626439808047	9.954319156753755e-05
//0.005615234375	0.005859375	6.009046720354654e-05	5.87171398022639e-05
//0.005859375	0.006103515625	3.279401162067441e-05	3.3434985260844236e-05
//0.006103515625	0.00634765625	1.7155956062676128e-05	1.82508761551154e-05
//0.00634765625	0.006591796875	8.520955182415967e-06	9.45946098244504e-06
//0.006591796875	0.0068359375	3.963141644278568e-06	4.592038712458123e-06
//0.0068359375	0.007080078125	1.6901998710029229e-06	2.044567165515905e-06
//0.007080078125	0.00732421875	6.380146217496585e-07	8.059940516649744e-07
//0.00732421875	0.007568359375	1.9890953433943964e-07	2.6252248047003144e-07
//0.007568359375	0.0078125	4.2714376923529825e-08	5.892483770765325e-08
//0.0078125	0.00830078125	0.0019723216794343807	0.0014227293529776685
//0.00830078125	0.0087890625	0.0012676867211279428	0.0009562613398660808
//0.0087890625	0.00927734375	0.0008028757517329932	0.0006329275392459048
//0.00927734375	0.009765625	0.0005000023184524253	0.00041171291187806015
//0.009765625	0.01025390625	0.00030544196796568974	0.0002625987665475636
//0.01025390625	0.0107421875	0.00018250565694447244	0.00016377611472291942
//0.0107421875	0.01123046875	0.00010629626439808047	9.954319156760609e-05
//0.01123046875	0.01171875	6.009046720354654e-05	5.871713980234248e-05
//0.01171875	0.01220703125	3.279401162067441e-05	3.3434985260932606e-05
//0.01220703125	0.0126953125	1.7155956062676128e-05	1.8250876155212028e-05
//0.0126953125	0.01318359375	8.520955182415967e-06	9.45946098255095e-06
//0.01318359375	0.013671875	3.963141644278568e-06	4.592038712574482e-06
//0.013671875	0.01416015625	1.6901998710029229e-06	2.04456716564404e-06
//0.01416015625	0.0146484375	6.380146217496585e-07	8.059940518063926e-07
//0.0146484375	0.01513671875	1.9890953433943964e-07	2.625224806264505e-07
//0.01513671875	0.015625	4.2714376923529825e-08	5.892483788103625e-08
//0.015625	0.0166015625	0.0019723216794341586	0.0014227293529776846
//0.0166015625	0.017578125	0.0012676867211277208	0.0009562613398660975
//0.017578125	0.0185546875	0.0008028757517327712	0.0006329275392459263
//0.0185546875	0.01953125	0.0005000023184522032	0.000411712911878085
//0.01953125	0.0205078125	0.0003054419679654677	0.0002625987665475902
//0.0205078125	0.021484375	0.0001825056569442504	0.00016377611472295176
//0.021484375	0.0224609375	0.00010629626439785842	9.954319156764489e-05
//0.0224609375	0.0234375	6.009046720332449e-05	5.8717139802394224e-05
//0.0234375	0.0244140625	3.2794011620452374e-05	3.343498526099703e-05
//0.0244140625	0.025390625	1.7155956062454087e-05	1.825087615528717e-05
//0.025390625	0.0263671875	8.520955182193923e-06	9.459460982638255e-06
//0.0263671875	0.02734375	3.963141644056524e-06	4.592038712675605e-06
//0.02734375	0.0283203125	1.6901998707808779e-06	2.044567165760869e-06
//0.0283203125	0.029296875	6.380146215276135e-07	8.059940519410926e-07
//0.029296875	0.0302734375	1.9890953411739562e-07	2.6252248078150446e-07
//0.0302734375	0.03125	4.271437670148582e-08	5.8924838059301254e-08
//0.03125	0.033203125	0.0019723216794341586	0.001422729352977762
//0.033203125	0.03515625	0.0012676867211277208	0.0009562613398661773
//0.03515625	0.037109375	0.0008028757517327712	0.0006329275392460137
//0.037109375	0.0390625	0.0005000023184522032	0.000411712911878178
//0.0390625	0.041015625	0.0003054419679654677	0.00026259876654768677
//0.041015625	0.04296875	0.0001825056569442504	0.0001637761147230574
//0.04296875	0.044921875	0.00010629626439785842	9.954319156776074e-05
//0.044921875	0.046875	6.009046720332449e-05	5.871713980252936e-05
//0.046875	0.048828125	3.279401162023032e-05	3.3434985261087226e-05
//0.048828125	0.05078125	1.715595606223204e-05	1.825087615539288e-05
//0.05078125	0.052734375	8.520955181971878e-06	9.459460982761687e-06
//0.052734375	0.0546875	3.963141643834479e-06	4.592038712819299e-06
//0.0546875	0.056640625	1.6901998705588328e-06	2.0445671659277582e-06
//0.056640625	0.05859375	6.380146213055695e-07	8.059940521345676e-07
//0.05859375	0.060546875	1.9890953389535062e-07	2.625224810054945e-07
//0.060546875	0.0625	4.271437647944082e-08	5.892483831837325e-08
//0.0625	0.06640625	0.0019723216794339366	0.0014227293529778045
//0.06640625	0.0703125	0.0012676867211274987	0.0009562613398662222
//0.0703125	0.07421875	0.0008028757517325491	0.0006329275392460686
//0.07421875	0.078125	0.0005000023184519812	0.0004117129118782407
//0.078125	0.08203125	0.00030544196796524566	0.00026259876654775405
//0.08203125	0.0859375	0.00018250565694402835	0.00016377611472313735
//0.0859375	0.08984375	0.00010629626439763638	9.95431915678553e-05
//0.08984375	0.09375	6.009046720310245e-05	5.871713980265223e-05
//0.09375	0.09765625	3.279401162023032e-05	3.3434985261302644e-05
//0.09765625	0.1015625	1.715595606223204e-05	1.8250876155634372e-05
//0.1015625	0.10546875	8.520955181971878e-06	9.45946098303307e-06
//0.10546875	0.109375	3.963141643834479e-06	4.592038713125016e-06
//0.109375	0.11328125	1.6901998705588328e-06	2.0445671662729983e-06
//0.11328125	0.1171875	6.380146213055695e-07	8.059940525254116e-07
//0.1171875	0.12109375	1.9890953389535062e-07	2.6252248144909745e-07
//0.12109375	0.125	4.271437647944082e-08	5.892483882318525e-08
//0.125	0.1328125	0.0019723216794338256	0.001422729352977913
//0.1328125	0.140625	0.0012676867211273877	0.0009562613398663364
//0.140625	0.1484375	0.0008028757517324381	0.0006329275392462006
//0.1484375	0.15625	0.0005000023184518702	0.00041171291187838666
//0.15625	0.1640625	0.00030544196796513463	0.0002625987665479096
//0.1640625	0.171875	0.00018250565694391733	0.00016377611472331578
//0.171875	0.1796875	0.00010629626439752536	9.954319156806017e-05
//0.1796875	0.1875	6.0090467202991425e-05	5.87171398029068e-05
//0.1875	0.1953125	3.279401162011931e-05	3.343498526160831e-05
//0.1953125	0.203125	1.715595606212102e-05	1.8250876155986558e-05
//0.203125	0.2109375	8.520955181860856e-06	9.459460983439472e-06
//0.2109375	0.21875	3.963141643723457e-06	4.592038713594776e-06
//0.21875	0.2265625	1.690199870447811e-06	2.0445671668170323e-06
//0.2265625	0.234375	6.380146211945465e-07	8.059940531568186e-07
//0.234375	0.2421875	1.9890953378432863e-07	2.6252248218368645e-07
//0.2421875	0.25	4.271437636841882e-08	5.892483968015925e-08
//0.25	0.265625	0.00197232167943377	0.0014227293529781313
//0.265625	0.28125	0.0012676867211273322	0.0009562613398665686
//0.28125	0.296875	0.0008028757517323826	0.000632927539246469
//0.296875	0.3125	0.0005000023184518147	0.000411712911878686
//0.3125	0.328125	0.0003054419679650791	0.00026259876654823245
//0.328125	0.34375	0.00018250565694386182	0.00016377611472368828
//0.34375	0.359375	0.00010629626439735882	9.954319156841721e-05
//0.359375	0.375	6.009046720282489e-05	5.871713980336742e-05
//0.375	0.390625	3.2794011619952774e-05	3.343498526217973e-05
//0.390625	0.40625	1.7155956061954483e-05	1.825087615666453e-05
//0.40625	0.421875	8.520955181694322e-06	9.45946098424547e-06
//0.421875	0.4375	3.963141643556923e-06	4.592038714555399e-06
//0.4375	0.453125	1.690199870281278e-06	2.044567167965512e-06
//0.453125	0.46875	6.380146210280136e-07	8.059940545350846e-07
//0.46875	0.484375	1.9890953361779462e-07	2.6252248384524444e-07
//0.484375	0.5	4.2714376201884826e-08	5.8924841694178254e-08
//0.5	0.53125	0.0019723216794336035	0.0014227293529785114
//0.53125	0.5625	0.0012676867211271657	0.0009562613398669897
//0.5625	0.59375	0.0008028757517322161	0.0006329275392469859
//0.59375	0.625	0.0005000023184516481	0.00041171291187929273
//0.625	0.65625	0.0003054419679649126	0.0002625987665489181
//0.65625	0.6875	0.00018250565694369529	0.00016377611472452813
//0.6875	0.71875	0.00010629626439730331	9.95431915695239e-05
//0.71875	0.75	6.009046720276938e-05	5.8717139804827254e-05
//0.75	0.78125	3.2794011619897256e-05	3.3434985264055406e-05
//0.78125	0.8125	1.715595606189897e-05	1.8250876158997157e-05
//0.8125	0.84375	8.520955181638811e-06	9.459460987177266e-06
//0.84375	0.875	3.963141643501412e-06	4.5920387182880576e-06
//0.875	0.90625	1.690199870225766e-06	2.044567172794464e-06
//0.90625	0.9375	6.380146209725025e-07	8.059940609111376e-07
//0.9375	0.96875	1.9890953356228363e-07	2.6252248764243046e-07
//0.96875	1.0	4.271437614637382e-08	5.892484643625525e-08
//1.0	1.0625	0.001972321679433548	0.0014227293529801917
//1.0625	1.125	0.0012676867211271101	0.0009562613398690515
//1.125	1.1875	0.0008028757517321606	0.0006329275392498099
//1.1875	1.25	0.0005000023184515926	0.0004117129118831192
//1.25	1.3125	0.0003054419679648571	0.0002625987665541339
//1.3125	1.375	0.00018250565694363978	0.00016377611472878376
//1.375	1.4375	0.0001062962643972478	9.954319157561973e-05
//1.4375	1.5	6.009046720271387e-05	5.871713981380858e-05
//1.5	1.5625	3.279401161984175e-05	3.343498527521097e-05
//1.5625	1.625	1.715595606184346e-05	1.8250876173836026e-05
//1.625	1.6875	8.520955181555545e-06	9.459461012318757e-06
//1.6875	1.75	3.963141643418145e-06	4.592038752359837e-06
//1.75	1.8125	1.6901998701424998e-06	2.044567227790983e-06
//1.8125	1.875	6.380146208892355e-07	8.059941437438176e-07
//1.875	1.9375	1.9890953347901664e-07	2.6252269793373644e-07
//1.9375	2.0	4.271437606310682e-08	inf
//2.0	2.125	0.0019723216794335064	0.0014227293537708392
//2.125	2.25	0.0012676867211270824	0.0009562613398960374
//2.25	2.375	0.0008028757517321328	0.000632927539263016
//2.375	2.5	0.0005000023184515649	0.0004117129118908819
//2.5	2.625	0.0003054419679648293	0.0002625987665586306
//2.625	2.75	0.00018250565694363978	0.00016377611473193334
//2.75	2.875	0.0001062962643972478	9.954319157551521e-05
//2.875	3.0	6.009046720271387e-05	5.871713980958112e-05
//3.0	3.125	3.279401161984175e-05	3.3434985268740664e-05
//3.125	3.25	1.715595606184346e-05	1.8250876162904452e-05
//3.25	3.375	8.5209551815833e-06	9.45946099021494e-06
//3.375	3.5	3.963141643445901e-06	4.592038720236681e-06
//3.5	3.625	1.690199870170255e-06	2.044567173450201e-06
//3.625	3.75	6.380146209169916e-07	8.059940598831316e-07
//3.75	3.875	1.9890953356228363e-07	2.6252248905041146e-07
//3.875	4.0	4.271437614637382e-08	5.892484672923425e-08
//4.0	4.25	0.00197232167943377	0.0014227293529802253
//4.25	4.5	0.0012676867211273322	0.0009562613398683801
//4.5	4.75	0.0008028757517324381	0.0006329275392482603
//4.75	5.0	0.0005000023184518702	0.0004117129118803302
//5.0	5.25	0.00030544196796513463	0.00026259876654970306
//5.25	5.5	0.00018250565694391733	0.00016377611472508585
//5.5	5.75	0.00010629626439752536	9.954319156982057e-05
//5.75	6.0	6.0090467202991425e-05	5.871713980479179e-05
//6.0	6.25	3.279401162011931e-05	3.3434985263581095e-05
//6.25	6.5	1.715595606212102e-05	1.8250876157986003e-05
//6.5	6.75	8.520955181860856e-06	9.459460985474557e-06
//6.75	7.0	3.963141643723457e-06	4.592038715673705e-06
//7.0	7.25	1.690199870447811e-06	2.044567168947328e-06
//7.25	7.5	6.380146211945465e-07	8.059940553453526e-07
//7.5	7.75	1.9890953378432863e-07	2.6252248443663146e-07
//7.75	8.0	4.271437636841882e-08	5.8924842002869254e-08
//8.0	8.5	0.0019723216794336035	0.0014227293529784416
//8.5	9.0	0.0012676867211271657	0.0009562613398667989
//9.0	9.5	0.0008028757517322161	0.0006329275392466475
//9.5	10.0	0.0005000023184516481	0.00041171291187879877
//10.0	10.5	0.0003054419679649126	0.00026259876654827186
//10.5	11.0	0.00018250565694369529	0.0001637761147236604
//11.0	11.5	0.00010629626439730331	9.954319156838597e-05
//11.5	12.0	6.00904672028804e-05	5.871713980331603e-05
//12.0	12.5	3.2794011620008285e-05	3.343498526200868e-05
//12.5	13.0	1.7155956062009997e-05	1.8250876156355458e-05
//13.0	13.5	8.520955181749834e-06	9.459460983770986e-06
//13.5	14.0	3.963141643612434e-06	4.592038713881245e-06
//14.0	14.5	1.6901998703367889e-06	2.0445671670486852e-06
//14.5	15.0	6.380146210835245e-07	8.059940533213056e-07
//15.0	15.5	1.9890953367330564e-07	2.625224822654685e-07
//15.5	16.0	4.2714376257395825e-08	5.8924839659717254e-08
//16.0	17.0	0.0019723216794339366	0.0014227293529781853
//17.0	18.0	0.0012676867211274987	0.0009562613398665667
//18.0	19.0	0.0008028757517325491	0.0006329275392464021
//19.0	20.0	0.0005000023184519812	0.00041171291187855314
//20.0	21.0	0.00030544196796524566	0.0002625987665480377
//21.0	22.0	0.00018250565694402835	0.00016377611472340875
//22.0	23.0	0.00010629626439763638	9.954319156811388e-05
//23.0	24.0	6.009046720310245e-05	5.8717139802913265e-05
//24.0	25.0	3.279401162023032e-05	3.343498526155668e-05
//25.0	26.0	1.715595606223204e-05	1.8250876155869627e-05
//26.0	27.0	8.520955181971878e-06	9.459460983246496e-06
//27.0	28.0	3.963141643834479e-06	4.592038713312744e-06
//28.0	29.0	1.6901998705588328e-06	2.0445671664301902e-06
//29.0	30.0	6.380146213055695e-07	8.059940526460825e-07
//30.0	31.0	1.9890953389535062e-07	2.6252248152588347e-07
//31.0	32.0	4.271437647944082e-08	5.8924838847057254e-08
//32.0	34.0	0.0019723216794341586	0.0014227293529780218
//34.0	36.0	0.0012676867211277208	0.0009562613398664129
//36.0	38.0	0.0008028757517327712	0.0006329275392462406
//38.0	40.0	0.0005000023184522032	0.0004117129118783902
//40.0	42.0	0.0003054419679654677	0.00026259876654787943
//42.0	44.0	0.0001825056569442504	0.00016377611472324056
//44.0	46.0	0.00010629626439785842	9.954319156793416e-05
//46.0	48.0	6.009046720332449e-05	5.871713980270236e-05
//48.0	50.0	3.2794011620452374e-05	3.34349852613181e-05
//50.0	52.0	1.7155956062454087e-05	1.8250876155611424e-05
//52.0	54.0	8.520955182193923e-06	9.459460982966115e-06
//54.0	56.0	3.963141644056524e-06	4.5920387130073425e-06
//56.0	58.0	1.6901998707808779e-06	2.0445671660966083e-06
//58.0	60.0	6.380146215276135e-07	8.059940522807766e-07
//60.0	62.0	1.9890953411739562e-07	2.6252248112486647e-07
//62.0	64.0	4.271437670148582e-08	5.8924838405822254e-08
//64.0	68.0	0.0019723216794341586	0.0014227293529778594
//68.0	72.0	0.0012676867211277208	0.0009562613398662565
//72.0	76.0	0.0008028757517327712	0.0006329275392460796
//76.0	80.0	0.0005000023184522032	0.00041171291187822837
//80.0	84.0	0.0003054419679654677	0.0002625987665477204
//84.0	88.0	0.0001825056569442504	0.00016377611472307552
//88.0	92.0	0.00010629626439808047	9.954319156782414e-05
//92.0	96.0	6.009046720354654e-05	5.871713980257259e-05
//96.0	100.0	3.279401162067441e-05	3.3434985261170656e-05
//100.0	104.0	1.7155956062676128e-05	1.825087615545124e-05
//104.0	108.0	8.520955182415967e-06	9.459460982791592e-06
//108.0	112.0	3.963141644278568e-06	4.59203871281672e-06
//112.0	116.0	1.6901998710029229e-06	2.0445671658879252e-06
//116.0	120.0	6.380146217496585e-07	8.059940520518436e-07
//120.0	124.0	1.9890953433943964e-07	2.625224808732345e-07
//124.0	128.0	4.2714376923529825e-08	5.8924838128739255e-08
//128.0	136.0	0.0019723216794339366	0.001422729352977698
//136.0	144.0	0.0012676867211274987	0.0009562613398660988
//144.0	152.0	0.0008028757517325491	0.0006329275392459189
//152.0	160.0	0.0005000023184519812	0.0004117129118780671
//160.0	168.0	0.00030544196796524566	0.000262598766547561
//168.0	176.0	0.00018250565694402835	0.00016377611472291208
//176.0	184.0	0.00010629626439763638	9.954319156759376e-05
//184.0	192.0	6.009046720310245e-05	5.871713980232965e-05
//192.0	200.0	3.279401162023032e-05	3.343498526091638e-05
//200.0	208.0	1.715595606223204e-05	1.8250876155188853e-05
//208.0	216.0	8.520955181971878e-06	9.459460982519886e-06
//216.0	224.0	3.963141643834479e-06	4.592038712534383e-06
//224.0	232.0	1.6901998705588328e-06	2.0445671655935127e-06
//232.0	240.0	6.380146213055695e-07	8.059940517437656e-07
//240.0	248.0	1.9890953389535062e-07	2.6252248054972745e-07
//248.0	256.0	4.271437647944082e-08	5.8924837787844254e-08
//256.0	272.0	0.0019723216794343807	0.0014227293529777251
//272.0	288.0	0.0012676867211279428	0.0009562613398661267
//288.0	304.0	0.0008028757517329932	0.0006329275392459429
//304.0	320.0	0.0005000023184524253	0.00041171291187808905
//320.0	336.0	0.00030544196796568974	0.00026259876654758285
//336.0	352.0	0.00018250565694447244	0.00016377611472292975
//352.0	368.0	0.00010629626439808047	9.954319156760681e-05
//368.0	384.0	6.009046720354654e-05	5.8717139802332214e-05
//384.0	400.0	3.279401162067441e-05	3.3434985260909485e-05
//400.0	416.0	1.7155956062676128e-05	1.825087615517495e-05
//416.0	432.0	8.520955182415967e-06	9.459460982498248e-06
//432.0	448.0	3.963141644278568e-06	4.5920387125041846e-06
//448.0	464.0	1.6901998710029229e-06	2.0445671655538385e-06
//464.0	480.0	6.380146217496585e-07	8.059940516935925e-07
//480.0	496.0	1.9890953433943964e-07	2.6252248048791247e-07
//496.0	512.0	4.2714376923529825e-08	5.892483771310725e-08
//512.0	544.0	0.0019723216794343807	0.0014227293529776631
//544.0	576.0	0.0012676867211279428	0.0009562613398660662
//576.0	608.0	0.0008028757517329932	0.0006329275392458801
//608.0	640.0	0.0005000023184524253	0.00041171291187802546
//640.0	672.0	0.00030544196796568974	0.0002625987665475198
//672.0	704.0	0.00018250565694447244	0.00016377611472286407
//704.0	736.0	0.00010629626439808047	9.954319156753811e-05
//736.0	768.0	6.009046720354654e-05	5.871713980225601e-05
//768.0	800.0	3.279401162067441e-05	3.343498526082646e-05
//800.0	832.0	1.7155956062676128e-05	1.8250876155086928e-05
//832.0	864.0	8.520955182415967e-06	9.459460982404608e-06
//864.0	896.0	3.963141644278568e-06	4.5920387124042525e-06
//896.0	928.0	1.6901998710029229e-06	2.044567165446871e-06
//928.0	960.0	6.380146217496585e-07	8.059940515787662e-07
//960.0	992.0	1.9890953433943964e-07	2.6252248036431474e-07
//992.0	1024.0	4.2714376923529825e-08	5.892483757972385e-08
//1024.0	1088.0	0.0019723216794343807	0.0014227293529776154
//1088.0	1152.0	0.0012676867211279428	0.0009562613398660193
//1152.0	1216.0	0.0008028757517329932	0.0006329275392458314
//1216.0	1280.0	0.0005000023184524253	0.000411712911877976
//1280.0	1344.0	0.00030544196796568974	0.0002625987665474707
//1344.0	1408.0	0.00018250565694447244	0.00016377611472281282
//1408.0	1472.0	0.00010629626439808047	9.954319156748442e-05
//1472.0	1536.0	6.009046720354654e-05	5.871713980219637e-05
//1536.0	1600.0	3.279401162067441e-05	3.3434985260761424e-05
//1600.0	1664.0	1.7155956062676128e-05	1.8250876155017898e-05
//1664.0	1728.0	8.520955182415967e-06	9.459460982331111e-06
//1728.0	1792.0	3.963141644278568e-06	4.592038712325761e-06
//1792.0	1856.0	1.6901998710029229e-06	2.0445671653628046e-06
//1856.0	1920.0	6.380146217496585e-07	8.059940514884822e-07
//1920.0	1984.0	1.9890953433943964e-07	2.625224802671019e-07
//1984.0	2048.0	4.2714376923529825e-08	5.892483747479335e-08
//2048.0	2176.0	0.0019723216794348248	0.0014227293529776425
//2176.0	2304.0	0.001267686721128387	0.0009562613398660468
//2304.0	2432.0	0.0008028757517334373	0.0006329275392458569
//2432.0	2560.0	0.0005000023184528694	0.0004117129118780005
//2560.0	2688.0	0.00030544196796613383	0.000262598766547495
//2688.0	2816.0	0.00018250565694491653	0.00016377611472283504
//2816.0	2944.0	0.00010629626439852456	9.954319156750438e-05
//2944.0	3072.0	6.0090467203990626e-05	5.8717139802211244e-05
//3072.0	3200.0	3.279401162111851e-05	3.343498526077168e-05
//3200.0	3328.0	1.715595606312022e-05	1.8250876155024708e-05
//3328.0	3456.0	8.520955182860057e-06	9.45946098233411e-06
//3456.0	3584.0	3.963141644722658e-06	4.592038712324553e-06
//3584.0	3712.0	1.6901998714470119e-06	2.044567165356948e-06
//3712.0	3840.0	6.380146221937475e-07	8.059940514774892e-07
//3840.0	3968.0	1.9890953478352864e-07	2.62522480250429e-07
//3968.0	4096.0	4.271437781170882e-08	5.892483751358335e-08
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//4096.0	4096.0	0.001972321679434585	0.0014227293529775675
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794336035,
//spec:     "domain": [
//spec:         0.5,
//spec:         2.0
//spec:     ],
//spec:     "epsilon": 5.892484643625525e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.00197232167943377,
//spec:     "domain": [
//spec:         0.25,
//spec:         4.0
//spec:     ],
//spec:     "epsilon": 5.8924841694178254e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794338256,
//spec:     "domain": [
//spec:         0.125,
//spec:         8.0
//spec:     ],
//spec:     "epsilon": 5.892483968015925e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794339366,
//spec:     "domain": [
//spec:         0.0625,
//spec:         16.0
//spec:     ],
//spec:     "epsilon": 5.892483882318525e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794341586,
//spec:     "domain": [
//spec:         0.03125,
//spec:         32.0
//spec:     ],
//spec:     "epsilon": 5.892483831837325e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794341586,
//spec:     "domain": [
//spec:         0.015625,
//spec:         64.0
//spec:     ],
//spec:     "epsilon": 5.8924838059301254e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794343807,
//spec:     "domain": [
//spec:         0.0078125,
//spec:         128.0
//spec:     ],
//spec:     "epsilon": 5.892483788103625e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794343807,
//spec:     "domain": [
//spec:         0.00390625,
//spec:         256.0
//spec:     ],
//spec:     "epsilon": 5.892483770765325e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794343807,
//spec:     "domain": [
//spec:         0.001953125,
//spec:         512.0
//spec:     ],
//spec:     "epsilon": 5.892483757549205e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794343807,
//spec:     "domain": [
//spec:         0.0009765625,
//spec:         1024.0
//spec:     ],
//spec:     "epsilon": 5.892483747141455e-08,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_10",
//spec:     "delta": 0.0019723216794348248,
//spec:     "domain": [
//spec:         0.00048828125,
//spec:         2048.0
//spec:     ],
//spec:     "epsilon": 5.892483744886145e-08,
//spec:     "operation": "log"
//spec: }
