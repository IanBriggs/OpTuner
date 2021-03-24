/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_8.c --poly-degree 8 \
 *     --fname ml2_raw_log_8 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_8(double);
double ml2_raw_log_8(double x){
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
    
    pm_7 = x * -0x1.302a79190d33ap0;
    pa_7 = 0x1.0d6b17e8e068p3 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.a745a541f27f4p4 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.83f65b688f3c7p5 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.cb7f12b614347p5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.709e1fc3fe3d8p5 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.9c849f8c5b18ep4 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.5cdb98c6e7225p3 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.8409e727ba864p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fbef88c16d0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fbef88c19a0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fbef88c1a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fbef88c1c40> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbef88d0670>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_8
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbef88d0670>
//Info: executing pass instantiate_prec on fct ml2_raw_log_8
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbef88d0670>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_8
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbef88d0670>
//Info: executing pass check_processor_support on fct ml2_raw_log_8
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fbef88d0670>
//Info: executing pass debug_tag_node on fct ml2_raw_log_8
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_8.c
//0.5	0.501953125	7.913790689438932e-08	1.141718659739286e-07
//0.501953125	0.50390625	3.297793735381968e-08	4.784622023301044e-08
//0.50390625	0.505859375	3.4756379774526e-08	5.1000080889241564e-08
//0.505859375	0.5078125	5.813295322820123e-08	8.578699082574984e-08
//0.5078125	0.509765625	7.560075004747646e-08	1.1219987667733687e-07
//0.509765625	0.51171875	8.789219590684415e-08	1.3118627434190838e-07
//0.51171875	0.513671875	9.567932703786638e-08	1.4362586423342434e-07
//0.513671875	0.515625	9.957744620845568e-08	1.5033382576475069e-07
//0.515625	0.517578125	1.0029564568159952e-07	1.520957247262485e-07
//0.517578125	0.51953125	1.0014860785688366e-07	1.5206407355471135e-07
//0.51953125	0.521484375	9.790493862423404e-08	1.495123779848275e-07
//0.521484375	0.5234375	9.331179989144502e-08	1.4331937406104743e-07
//0.5234375	0.525390625	8.679079792083857e-08	1.340734603806048e-07
//0.525390625	0.52734375	7.872264775037688e-08	1.2231359193812667e-07
//0.52734375	0.529296875	6.94498963639423e-08	1.0853196926655673e-07
//0.529296875	0.53125	5.9279510619029077e-08	9.317662673661316e-08
//0.53125	0.533203125	4.8485335213486526e-08	7.665392272349074e-08
//0.533203125	0.53515625	3.731042579920894e-08	5.9330934291356665e-08
//0.53515625	0.537109375	2.596926218232518e-08	4.153775898935563e-08
//0.537109375	0.5390625	1.464984638624498e-08	2.3569726297267e-08
//0.5390625	0.541015625	7.29230872631832e-09	1.1870786812985883e-08
//0.541015625	0.54296875	1.7654065637811377e-08	2.8907752176923345e-08
//0.54296875	0.544921875	2.746865863359371e-08	4.524473343777443e-08
//0.544921875	0.546875	3.6652718632982e-08	6.073006110986486e-08
//0.546875	0.548828125	4.513893568679752e-08	7.523532701497548e-08
//0.548828125	0.55078125	5.287464582478177e-08	8.865373863305759e-08
//0.55078125	0.552734375	5.982050013209447e-08	1.0089854535498766e-07
//0.552734375	0.5546875	6.5949212539002e-08	1.1190153454691092e-07
//0.5546875	0.556640625	7.124438292740707e-08	1.2161159538028947e-07
//0.556640625	0.55859375	7.569939227377902e-08	1.299933484253128e-07
//0.55859375	0.560546875	7.931636666044952e-08	1.3702583904803262e-07
//0.560546875	0.5625	8.210520709621921e-08	1.4270129269335529e-07
//0.5625	0.564453125	8.408268219288048e-08	1.4702393017692844e-07
//0.564453125	0.56640625	8.527158084677562e-08	1.500088411490677e-07
//0.56640625	0.568359375	8.569992217385051e-08	1.5168091393311687e-07
//0.568359375	0.5703125	8.570227939972017e-08	1.520957769597331e-07
//0.5703125	0.572265625	8.540022006947662e-08	1.5207382006784305e-07
//0.572265625	0.57421875	8.440879967314768e-08	1.5122905130144315e-07
//0.57421875	0.576171875	8.276516366186994e-08	1.4919500867628922e-07
//0.576171875	0.578125	8.051140546338608e-08	1.4602614029634334e-07
//0.578125	0.580078125	7.769166748499611e-08	1.417821274804819e-07
//0.580078125	0.58203125	7.435164198549504e-08	1.3652711719880355e-07
//0.58203125	0.583984375	7.05381124813075e-08	1.3032899933529503e-07
//0.583984375	0.5859375	6.629853362951191e-08	1.232587272664182e-07
//0.5859375	0.587890625	6.16806476058187e-08	1.1538968027804409e-07
//0.587890625	0.58984375	5.673213506873136e-08	1.0679706637533882e-07
//0.58984375	0.591796875	5.15002988719951e-08	9.755736407180952e-08
//0.591796875	0.59375	4.603177875625313e-08	8.774780177471349e-08
//0.59375	0.595703125	4.037229531748833e-08	7.744587341445688e-08
//0.595703125	0.59765625	3.4566421614528946e-08	6.672888899547458e-08
//0.59765625	0.599609375	2.8657380840602265e-08	5.5673558775401744e-08
//0.599609375	0.6015625	2.268686854472407e-08	4.435560980810937e-08
//0.6015625	0.603515625	1.6694897947703404e-08	3.284943361445384e-08
//0.603515625	0.60546875	1.071966695469349e-08	2.1227763772338667e-08
//0.60546875	0.607421875	4.797445521664083e-09	9.56138224493506e-09
//0.607421875	0.609375	6.753079439497224e-09	1.3633731930750168e-08
//0.609375	0.611328125	1.2319229755634303e-08	2.503290682546845e-08
//0.611328125	0.61328125	1.770818119428431e-08	3.621811321649361e-08
//0.61328125	0.615234375	2.289436800870097e-08	4.7131805800899684e-08
//0.615234375	0.6171875	2.7854469387831088e-08	5.7719612248409067e-08
//0.6171875	0.619140625	3.25674128921121e-08	6.793045658672445e-08
//0.619140625	0.62109375	3.701436647354402e-08	7.77166623719832e-08
//0.62109375	0.623046875	4.117871999424911e-08	8.703403660048627e-08
//0.623046875	0.625	4.504605711714863e-08	9.58419352948957e-08
//0.625	0.626953125	4.8604118403096476e-08	1.0410331167555737e-07
//0.626953125	0.62890625	5.18427564107715e-08	1.1178474780537436e-07
//0.62890625	0.630859375	5.475388353096276e-08	1.1885647050967423e-07
//0.630859375	0.6328125	5.7331413445510314e-08	1.2529235280682825e-07
//0.6328125	0.634765625	5.957119648368475e-08	1.3106990069822903e-07
//0.634765625	0.63671875	6.147095008680323e-08	1.361702274196175e-07
//0.63671875	0.638671875	6.303018458796547e-08	1.4057801496356986e-07
//0.638671875	0.640625	6.425012506536761e-08	1.442814640243202e-07
//0.640625	0.642578125	6.513362980293845e-08	1.4727223304280462e-07
//0.642578125	0.64453125	6.568510589047165e-08	1.4954536707524034e-07
//0.64453125	0.646484375	6.591042246699043e-08	1.510992171887026e-07
//0.646484375	0.6484375	6.591696211852256e-08	1.519353510690463e-07
//0.6484375	0.650390625	6.581682212104358e-08	1.5209624659325775e-07
//0.650390625	0.65234375	6.541283067325185e-08	1.5205845569482296e-07
//0.65234375	0.654296875	6.470816632518335e-08	1.5147623160172028e-07
//0.654296875	0.65625	6.371364782794642e-08	1.5019928216661313e-07
//0.65625	0.658203125	6.244110260413366e-08	1.4824099480254123e-07
//0.658203125	0.66015625	6.090327495197289e-08	1.4561741744000561e-07
//0.66015625	0.662109375	5.911373469832646e-08	1.4234712976255283e-07
//0.662109375	0.6640625	5.708678660842355e-08	1.3845110994048252e-07
//0.6640625	0.666015625	5.483738083934244e-08	1.3395259740554863e-07
//0.666015625	0.66796875	5.2381024555747494e-08	1.2887695178547912e-07
//0.66796875	0.669921875	4.973369584476805e-08	1.2325151094700035e-07
//0.669921875	0.671875	4.691175793603173e-08	1.1710544255573317e-07
//0.671875	0.673828125	4.3931876899452567e-08	1.104695977283765e-07
//0.673828125	0.67578125	4.081094079344413e-08	1.0337636117750086e-07
//0.67578125	0.677734375	3.756598132764837e-08	9.585950071524122e-08
//0.677734375	0.6796875	3.4214098052442916e-08	8.795401614431255e-08
//0.6796875	0.681640625	3.077238521984696e-08	7.969598795237783e-08
//0.681640625	0.68359375	2.7257861445449634e-08	7.11224262105926e-08
//0.68359375	0.685546875	2.3687402286586264e-08	6.227112006270772e-08
//0.685546875	0.6875	2.0077675838181627e-08	5.318048817626983e-08
//0.6875	0.689453125	1.6445081434332057e-08	4.388943051343213e-08
//0.689453125	0.69140625	1.280569153100447e-08	3.443718176444243e-08
//0.69140625	0.693359375	9.175196832933333e-09	2.4863166772958502e-08
//0.693359375	0.6953125	5.5688547160924995e-09	1.520685826862704e-08
//0.6953125	0.697265625	2.0014409858681792e-09	5.507637208549898e-09
//0.697265625	0.69921875	4.960182279458088e-09	1.3863328437211402e-08
//0.69921875	0.701171875	8.327624653580816e-09	2.345795190363278e-08
//0.701171875	0.703125	1.1602697853795432e-08	3.294156792828589e-08
//0.703125	0.705078125	1.4773639314304408e-08	4.22772385505421e-08
//0.705078125	0.70703125	1.7829386492497716e-08	5.142888553054802e-08
//0.70703125	0.708984375	2.0759601484062588e-08	6.036140441065719e-08
//0.708984375	0.7109375	2.3554692331031966e-08	6.904077402651231e-08
//0.7109375	0.712890625	2.6205831063621593e-08	7.74341612819958e-08
//0.712890625	0.71484375	2.870496852366099e-08	8.551002101408606e-08
//0.71484375	0.716796875	3.104484602398992e-08	9.323819078595965e-08
//0.716796875	0.71875	3.3219003904414154e-08	1.0058998045827044e-07
//0.71875	0.720703125	3.522178705066553e-08	1.0753825640048601e-07
//0.720703125	0.72265625	3.704834744832808e-08	1.1405752021553305e-07
//0.72265625	0.724609375	3.869464384885557e-08	1.2012398186280008e-07
//0.724609375	0.7265625	4.015743862965179e-08	1.2571562707549817e-07
//0.7265625	0.728515625	4.1434291934722664e-08	1.3081227897997328e-07
//0.728515625	0.73046875	4.252355366049335e-08	1.353956556162577e-07
//0.73046875	0.732421875	4.342435054045058e-08	1.394494126344459e-07
//0.732421875	0.734375	4.413657552287859e-08	1.4295919767110487e-07
//0.734375	0.736328125	4.466087009019688e-08	1.4591268103588137e-07
//0.736328125	0.73828125	4.4998606707874174e-08	1.4829958908870162e-07
//0.73828125	0.740234375	4.5151868679348975e-08	1.501117297411149e-07
//0.740234375	0.7421875	4.516242748592504e-08	1.5134301181664338e-07
//0.7421875	0.744140625	4.512342804585654e-08	1.5198945826307683e-07
//0.744140625	0.74609375	4.491672129698902e-08	1.5209574584175063e-07
//0.74609375	0.748046875	4.453582387014436e-08	1.5204921381341693e-07
//0.748046875	0.75	4.39854224036379e-08	1.515225435669125e-07
//0.75	0.751953125	4.327078572253611e-08	1.504118313297143e-07
//0.751953125	0.75390625	4.2397734331140227e-08	1.4872156604606233e-07
//0.75390625	0.755859375	4.1372608588653246e-08	1.464583251022449e-07
//0.755859375	0.7578125	4.020223568803214e-08	1.4363075107612777e-07
//0.7578125	0.759765625	3.8893895558519166e-08	1.4024952257289414e-07
//0.759765625	0.76171875	3.745528581264723e-08	1.3632731921936554e-07
//0.76171875	0.763671875	3.589448585860103e-08	1.318787808989211e-07
//0.763671875	0.765625	3.421992029869605e-08	1.2692046131855658e-07
//0.765625	0.767578125	3.244032173439066e-08	1.2147077600871427e-07
//0.767578125	0.76953125	3.0564693097743414e-08	1.155499448659001e-07
//0.76953125	0.771484375	2.860226962846028e-08	1.0917992935733092e-07
//0.771484375	0.7734375	2.6562480614804764e-08	1.0238436451570887e-07
//0.7734375	0.775390625	2.4454911264454057e-08	9.518848711146795e-08
//0.775390625	0.77734375	2.2289263330647496e-08	8.761905268337706e-08
//0.77734375	0.779296875	2.0075318326471987e-08	7.970426016096891e-08
//0.779296875	0.78125	1.7822898492537672e-08	7.147365958263347e-08
//0.78125	0.783203125	1.554182933183304e-08	6.295806149456247e-08
//0.783203125	0.78515625	1.3241902342708289e-08	5.418944087915633e-08
//0.78515625	0.787109375	1.093283830264149e-08	4.520083701937989e-08
//0.787109375	0.7890625	8.624251207325825e-09	3.6026249497268874e-08
//0.7890625	0.791015625	6.325612271709121e-09	2.6700526591936653e-08
//0.791015625	0.79296875	4.046218258317961e-09	1.7259269835961187e-08
//0.79296875	0.794921875	1.7951538321507774e-09	7.738696349717095e-09
//0.794921875	0.796875	2.586904911456206e-09	1.1393186067710247e-08
//0.796875	0.798828125	4.701048606183078e-09	2.0929890400806687e-08
//0.798828125	0.80078125	6.75325286436455e-09	3.039714168675933e-08
//0.80078125	0.802734375	8.735945081361234e-09	3.975739388529039e-08
//0.802734375	0.8046875	1.0641938575641644e-08	4.897321380790219e-08
//0.8046875	0.806640625	1.2464456959158824e-08	5.8007411053834595e-08
//0.806640625	0.80859375	1.4197156896211285e-08	6.682316908947903e-08
//0.80859375	0.810546875	1.583414856357682e-08	7.538417298863359e-08
//0.810546875	0.8125	1.7370017471509574e-08	8.36547585228185e-08
//0.8125	0.814453125	1.8799838303577082e-08	9.16000201348613e-08
//0.814453125	0.81640625	2.0119193076613536e-08	9.918595992802433e-08
//0.81640625	0.818359375	2.1324184324742643e-08	1.0637961582076345e-07
//0.818359375	0.8203125	2.241144695469391e-08	1.131491930201558e-07
//0.8203125	0.822265625	2.337815811877149e-08	1.1946419441277338e-07
//0.822265625	0.82421875	2.4222045070581735e-08	1.2529554952509988e-07
//0.82421875	0.826171875	2.494139097344993e-08	1.3061574169822752e-07
//0.826171875	0.828125	2.553503863642342e-08	1.3539893311414897e-07
//0.828125	0.830078125	2.6002392157775913e-08	1.3962108730416593e-07
//0.830078125	0.83203125	2.6343416461057702e-08	1.432600887621701e-07
//0.83203125	0.833984375	2.655863471397414e-08	1.4629585927889115e-07
//0.833984375	0.8359375	2.664912361182362e-08	1.4871047048249405e-07
//0.8359375	0.837890625	2.6652453378061627e-08	1.5048825292432738e-07
//0.837890625	0.83984375	2.66165066811052e-08	1.5161589946960084e-07
//0.83984375	0.841796875	2.6462944990629035e-08	1.5208256517694874e-07
//0.841796875	0.84375	2.6191126528099387e-08	1.5209580811380584e-07
//0.84375	0.845703125	2.5804252877780854e-08	1.5187996371753803e-07
//0.845703125	0.84765625	2.530602404139445e-08	1.5100244373879416e-07
//0.84765625	0.849609375	2.470062123885796e-08	1.4944708917684384e-07
//0.849609375	0.8515625	2.3992687696535384e-08	1.4721378241182047e-07
//0.8515625	0.853515625	2.318730748059135e-08	1.4430527571831598e-07
//0.853515625	0.85546875	2.2289982422755594e-08	1.4072725214443918e-07
//0.85546875	0.857421875	2.1306607191942527e-08	1.364883784284472e-07
//0.857421875	0.859375	2.0243442571379647e-08	1.3160034948630158e-07
//0.859375	0.861328125	1.9107087007183205e-08	1.2607792399715255e-07
//0.861328125	0.86328125	1.7904446500677958e-08	1.199389506071957e-07
//0.86328125	0.865234375	1.6642702923189157e-08	1.1320438426612103e-07
//0.865234375	0.8671875	1.5329280838470385e-08	1.0589829220288792e-07
//0.8671875	0.869140625	1.3971812924617366e-08	9.804784904250738e-08
//0.869140625	0.87109375	1.257810409379478e-08	8.968332055909636e-08
//0.87109375	0.873046875	1.1156094414789488e-08	8.083803555148662e-08
//0.873046875	0.875	9.713820950373788e-09	7.154834532562208e-08
//0.875	0.876953125	8.259378627931383e-09	6.185357025776324e-08
//0.876953125	0.87890625	6.800880268906291e-09	5.17959329092345e-08
//0.87890625	0.880859375	5.3464159095498645e-09	4.142047715499973e-08
//0.880859375	0.8828125	3.9040115522430865e-09	3.077497278423186e-08
//0.8828125	0.884765625	2.481587493899515e-09	1.9909805024354e-08
//0.884765625	0.88671875	1.0869163849872022e-09	8.877848432770806e-09
//0.88671875	0.888671875	1.589088996153175e-09	1.3463937100545786e-08
//0.888671875	0.890625	2.8559722077761263e-09	2.4656403652592814e-08
//0.890625	0.892578125	4.066327382763307e-09	3.5782376128579585e-08
//0.892578125	0.89453125	5.213746994846571e-09	4.6779013556622916e-08
//0.89453125	0.896484375	6.2922189629190645e-09	5.7582102978236477e-08
//0.896484375	0.8984375	7.296165572141265e-09	6.812631124937623e-08
//0.8984375	0.900390625	8.220481174680524e-09	7.83454572499941e-08
//0.900390625	0.90234375	9.06056845039924e-09	8.817280520868854e-08
//0.90234375	0.904296875	9.812373000120779e-09	9.754137997094835e-08
//0.904296875	0.90625	1.0472416036751987e-08	1.0638430532577721e-07
//0.90625	0.908203125	1.1037824931617647e-08	1.1463516732456214e-07
//0.908203125	0.91015625	1.1506361365776266e-08	1.222284072005138e-07
//0.91015625	0.912109375	1.1876446828188884e-08	1.2909975944716265e-07
//0.912109375	0.9140625	1.2147185195144176e-08	1.3518681322444845e-07
//0.9140625	0.916015625	1.2318382116944553e-08	1.4043045950099422e-07
//0.916015625	0.91796875	1.2390560930640125e-08	inf
//0.91796875	0.919921875	1.2393274560121226e-08	inf
//0.919921875	0.921875	1.236497490611105e-08	inf
//0.921875	0.923828125	1.2243614946914563e-08	inf
//0.923828125	0.92578125	1.2029213891941759e-08	inf
//0.92578125	0.927734375	1.1725245171491557e-08	inf
//0.927734375	0.9296875	1.1335916944135902e-08	inf
//0.9296875	0.931640625	1.0866160806501932e-08	inf
//0.931640625	0.93359375	1.0321614834384164e-08	inf
//0.93359375	0.935546875	9.708600609273293e-09	inf
//0.935546875	0.9375	9.034093876368745e-09	inf
//0.9375	0.939453125	8.305688471580192e-09	inf
//0.939453125	0.94140625	7.53155314700946e-09	inf
//0.94140625	0.943359375	6.720380916039232e-09	inf
//0.943359375	0.9453125	5.8813305307892615e-09	inf
//0.9453125	0.947265625	5.023959696405035e-09	inf
//0.947265625	0.94921875	4.158149618148495e-09	inf
//0.94921875	0.951171875	3.2940204690461338e-09	inf
//0.951171875	0.953125	2.441837357206999e-09	inf
//0.953125	0.955078125	1.611906363572493e-09	inf
//0.955078125	0.95703125	8.144602122317177e-10	inf
//0.95703125	0.958984375	6.432048223840979e-10	inf
//0.958984375	0.9609375	1.2844791185271732e-09	inf
//0.9609375	0.962890625	1.855745928707781e-09	inf
//0.962890625	0.96484375	2.3492488359020556e-09	inf
//0.96484375	0.966796875	2.7582340652872125e-09	inf
//0.966796875	0.96875	3.0771503625102655e-09	inf
//0.96875	0.970703125	3.301863050630271e-09	inf
//0.970703125	0.97265625	3.4298827810768685e-09	inf
//0.97265625	0.974609375	3.462220402937811e-09	inf
//0.974609375	0.9765625	3.460609620813996e-09	inf
//0.9765625	0.978515625	3.395592301476173e-09	inf
//0.978515625	0.98046875	3.238804938075265e-09	inf
//0.98046875	0.982421875	2.9969394090477264e-09	inf
//0.982421875	0.984375	2.67971576046567e-09	inf
//0.984375	0.986328125	2.30021039465924e-09	inf
//0.986328125	0.98828125	1.8752028762523953e-09	inf
//0.98828125	0.990234375	1.425541837588915e-09	inf
//0.990234375	0.9921875	9.76530619949901e-10	inf
//0.9921875	0.994140625	5.583332476878808e-10	inf
//0.994140625	0.99609375	2.0640090717552436e-10	inf
//0.99609375	0.998046875	1.2780803070836388e-10	inf
//0.998046875	1.0	1.2774209631744213e-10	inf
//spec: {
//spec:     "cname": "ml2_raw_log_8",
//spec:     "delta": 1.0029564568159952e-07,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 5.507637208549898e-09,
//spec:     "operation": "log"
//spec: }