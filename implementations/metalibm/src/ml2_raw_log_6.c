/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_6.c --poly-degree 6 \
 *     --fname ml2_raw_log_6 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_6(double);
double ml2_raw_log_6(double x){
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
    
    pm_5 = x * -0x1.b2757934aee7dp-1;
    pa_5 = 0x1.31ccaa740b136p2 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.721ee1ad853fp3 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.f89854bfa21d3p3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.aec8316b3d986p3 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.02af41c29cef8p3 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.607e044006632p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f8ee2d05730> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f8ee2d05a00> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f8ee2d05ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f8ee2d05ca0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8ee2d15130>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_6
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8ee2d15130>
//Info: executing pass instantiate_prec on fct ml2_raw_log_6
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8ee2d15130>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_6
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8ee2d15130>
//Info: executing pass check_processor_support on fct ml2_raw_log_6
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f8ee2d15130>
//Info: executing pass debug_tag_node on fct ml2_raw_log_6
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_6.c
//0.5	0.501953125	3.930345972777669e-06	5.6702906439443255e-06
//0.501953125	0.50390625	2.682512308266041e-06	3.891937598779126e-06
//0.50390625	0.505859375	1.5681842727024129e-06	2.2881007651894896e-06
//0.505859375	0.5078125	5.787312141073458e-07	8.492063574014038e-07
//0.5078125	0.509765625	1.058133667113197e-06	1.5703874201314046e-06
//0.509765625	0.51171875	1.7209073068957462e-06	2.5685945780497313e-06
//0.51171875	0.513671875	2.2895550582917265e-06	3.436890014129306e-06
//0.513671875	0.515625	2.7708844529804393e-06	4.183253096494958e-06
//0.515625	0.517578125	3.171375365560945e-06	4.815366550330745e-06
//0.517578125	0.51953125	3.497191548892075e-06	5.340623583445639e-06
//0.51953125	0.521484375	3.754191848841797e-06	5.766134892435059e-06
//0.521484375	0.5234375	3.947941106397526e-06	6.098735551360088e-06
//0.5234375	0.525390625	4.083720754881686e-06	6.344991784822713e-06
//0.525390625	0.52734375	4.1665391198156326e-06	6.511207627273064e-06
//0.52734375	0.529296875	4.201141428779892e-06	6.603431470343423e-06
//0.529296875	0.53125	4.202807606072877e-06	6.6279965302228e-06
//0.53125	0.533203125	4.192019538436267e-06	6.627462499988788e-06
//0.533203125	0.53515625	4.143421385525088e-06	6.588857024805612e-06
//0.53515625	0.537109375	4.059360169452363e-06	6.492934698740556e-06
//0.537109375	0.5390625	3.943623271167967e-06	6.344784636438141e-06
//0.5390625	0.541015625	3.799780917267521e-06	6.149271427055547e-06
//0.541015625	0.54296875	3.631194593788639e-06	5.91104104508206e-06
//0.54296875	0.544921875	3.4410252165517883e-06	5.634526660874472e-06
//0.544921875	0.546875	3.2322410639056304e-06	5.323954352218801e-06
//0.546875	0.548828125	3.007625477705367e-06	4.983348718387879e-06
//0.548828125	0.55078125	2.769784338207184e-06	4.616538398132712e-06
//0.55078125	0.552734375	2.5211533184205395e-06	4.2271614930147595e-06
//0.552734375	0.5546875	2.2640049233227446e-06	3.818670897456263e-06
//0.5546875	0.556640625	2.000455319206818e-06	3.3943395368565186e-06
//0.556640625	0.55859375	1.732470958303938e-06	2.957265515093501e-06
//0.55859375	0.560546875	1.4618750036957145e-06	2.510377172702451e-06
//0.560546875	0.5625	1.1903535594090153e-06	2.056438056995998e-06
//0.5625	0.564453125	9.194617104668972e-07	1.5980518053639357e-06
//0.564453125	0.56640625	6.506293775534244e-07	1.137666942965093e-06
//0.56640625	0.568359375	3.8516699083749254e-07	6.775815959985856e-07
//0.568359375	0.5703125	1.3097086635367575e-07	2.332223489424061e-07
//0.5703125	0.572265625	3.7957430558617057e-07	6.800554234707621e-07
//0.572265625	0.57421875	6.206535906206175e-07	1.1188090922094773e-06
//0.57421875	0.576171875	8.534166613326399e-07	1.5478693993326066e-06
//0.576171875	0.578125	1.0771604617322067e-06	1.9657462176990973e-06
//0.578125	0.580078125	1.2912664135955608e-06	2.3710690952631175e-06
//0.580078125	0.58203125	1.4951960382786657e-06	2.7625831772390093e-06
//0.58203125	0.583984375	1.6884867230518977e-06	3.1391452030334687e-06
//0.583984375	0.5859375	1.8707476283812926e-06	3.4997195769771694e-06
//0.5859375	0.587890625	2.041655732664905e-06	3.843374511907187e-06
//0.587890625	0.58984375	2.2009520110158906e-06	4.169278244674121e-06
//0.58984375	0.591796875	2.3484377447490053e-06	4.476695322639235e-06
//0.591796875	0.59375	2.4839709583454587e-06	4.764982960324927e-06
//0.59375	0.595703125	2.6074629806770266e-06	5.033587465266075e-06
//0.595703125	0.59765625	2.7188751274118838e-06	5.282040732259501e-06
//0.59765625	0.599609375	2.8182155015544417e-06	5.509956805146042e-06
//0.599609375	0.6015625	2.9055359091542905e-06	5.7170285053022595e-06
//0.6015625	0.603515625	2.980928887284687e-06	5.9030241260309545e-06
//0.603515625	0.60546875	3.0445248414566266e-06	6.067784192055024e-06
//0.60546875	0.607421875	3.0964892896984286e-06	6.211218283334424e-06
//0.607421875	0.609375	3.137020210592992e-06	6.3333019224406655e-06
//0.609375	0.611328125	3.1663454926255736e-06	6.4340735247377446e-06
//0.611328125	0.61328125	3.1847204822540054e-06	6.513631410632522e-06
//0.61328125	0.615234375	3.192425628170905e-06	6.572130879171284e-06
//0.615234375	0.6171875	3.192720439570747e-06	6.6097813422136675e-06
//0.6171875	0.619140625	3.1897642192647125e-06	6.626843518841451e-06
//0.619140625	0.62109375	3.177060213973092e-06	6.6280082327351925e-06
//0.62109375	0.623046875	3.154656158379503e-06	6.623626688478178e-06
//0.623046875	0.625	3.12291119111615e-06	6.600486002962926e-06
//0.625	0.626953125	3.0821991325265463e-06	6.5578198566935855e-06
//0.626953125	0.62890625	3.0329066559869576e-06	6.496067313672166e-06
//0.62890625	0.630859375	2.975431539201908e-06	6.415705591411659e-06
//0.630859375	0.6328125	2.9101809933548904e-06	6.3172476008202135e-06
//0.6328125	0.634765625	2.8375700680412497e-06	6.2012395414936705e-06
//0.634765625	0.63671875	2.758020129954921e-06	6.068258551815136e-06
//0.63671875	0.638671875	2.671957413344345e-06	5.918910413271051e-06
//0.638671875	0.640625	2.5798116402954016e-06	5.7538273084037495e-06
//0.640625	0.642578125	2.482014708940762e-06	5.573665631830777e-06
//0.642578125	0.64453125	2.378999447735514e-06	5.379103853771356e-06
//0.64453125	0.646484375	2.2711984339784472e-06	5.170840435530193e-06
//0.646484375	0.6484375	2.1590428747969702e-06	4.949591796398534e-06
//0.6484375	0.650390625	2.0429615488512207e-06	4.7160903314417686e-06
//0.650390625	0.65234375	1.9233798070496867e-06	4.471082479652159e-06
//0.65234375	0.654296875	1.8007186306044904e-06	4.215326841954299e-06
//0.654296875	0.65625	1.6753937447894564e-06	3.949592348559768e-06
//0.65625	0.658203125	1.5478147867982785e-06	3.674656475176122e-06
//0.658203125	0.66015625	1.418384526133392e-06	3.391303507583838e-06
//0.66015625	0.662109375	1.2874981359887454e-06	3.100322854103154e-06
//0.662109375	0.6640625	1.1555425141214226e-06	2.8025074054808605e-06
//0.6640625	0.666015625	1.0228956517381212e-06	2.498651941735083e-06
//0.666015625	0.66796875	8.899260489527629e-07	2.1895515855039022e-06
//0.66796875	0.669921875	7.569921754011472e-07	1.8760003014512782e-06
//0.669921875	0.671875	6.244419746274189e-07	1.5587894412912444e-06
//0.671875	0.673828125	4.926124108853779e-07	1.2387063339986655e-06
//0.673828125	0.67578125	3.618290570252278e-07	9.165329207820269e-07
//0.67578125	0.677734375	2.324057221632686e-07	5.930444344007666e-07
//0.677734375	0.6796875	1.046441178584037e-07	2.6900812241654207e-07
//0.6796875	0.681640625	1.4474928788609814e-07	3.776862808566775e-07
//0.681640625	0.68359375	2.658406402842269e-07	6.98860676275633e-07
//0.68359375	0.685546875	3.841897895225949e-07	1.017617778749552e-06
//0.685546875	0.6875	4.99559257585094e-07	1.33324790815176e-06
//0.6875	0.689453125	6.117249266102887e-07	1.6450561295930418e-06
//0.689453125	0.69140625	7.204761368129303e-07	1.9523632335793223e-06
//0.69140625	0.693359375	8.256157552302083e-07	2.25450667528823e-06
//0.693359375	0.6953125	9.26960216357582e-07	2.550841473319014e-06
//0.6953125	0.697265625	1.0243395357180745e-06	2.840741068264673e-06
//0.697265625	0.69921875	1.1175972973885196e-06	3.123598141449616e-06
//0.69921875	0.701171875	1.2065906164862463e-06	3.398825394170766e-06
//0.701171875	0.703125	1.291190077600132e-06	3.6658562877747152e-06
//0.703125	0.705078125	1.371279650130884e-06	3.924145744898302e-06
//0.705078125	0.70703125	1.4467565814866986e-06	4.173170812194917e-06
//0.70703125	0.708984375	1.5175312690621846e-06	4.412431284863804e-06
//0.708984375	0.7109375	1.5835271119105659e-06	4.641450293294718e-06
//0.7109375	0.712890625	1.644680343001721e-06	4.859774852135492e-06
//0.712890625	0.71484375	1.700939842941482e-06	5.066976372085332e-06
//0.71484375	0.716796875	1.7522669360109471e-06	5.262651134712013e-06
//0.716796875	0.71875	1.798635169368161e-06	5.4464207305866284e-06
//0.71875	0.720703125	1.8400300762385294e-06	5.617932461025047e-06
//0.720703125	0.72265625	1.8764489239046973e-06	5.776859703720883e-06
//0.72265625	0.724609375	1.907900447291274e-06	5.922902242550471e-06
//0.724609375	0.7265625	1.9344045689248144e-06	6.055786561826126e-06
//0.7265625	0.728515625	1.9559921060348075e-06	6.175266105269837e-06
//0.728515625	0.73046875	1.9727044655470585e-06	6.2811214999754745e-06
//0.73046875	0.732421875	1.984593327706817e-06	6.37316074562361e-06
//0.732421875	0.734375	1.9917203190552427e-06	6.451219369209137e-06
//0.734375	0.736328125	1.994156675469369e-06	6.51516054553804e-06
//0.736328125	0.73828125	1.994158163124914e-06	6.564875183745887e-06
//0.73828125	0.740234375	1.9919828959754453e-06	6.600281980086933e-06
//0.740234375	0.7421875	1.9852883879423947e-06	6.6213274372390724e-06
//0.7421875	0.744140625	1.9741711045200455e-06	6.627995862078963e-06
//0.744140625	0.74609375	1.958737174723926e-06	6.627985850494546e-06
//0.74609375	0.748046875	1.939100527006458e-06	6.620259260307825e-06
//0.748046875	0.75	1.9153825068726872e-06	6.598177373345932e-06
//0.75	0.751953125	1.8877114891769547e-06	6.561797449733605e-06
//0.751953125	0.75390625	1.8562224857127643e-06	6.5112041586193425e-06
//0.75390625	0.755859375	1.821056748696959e-06	6.4465094015303745e-06
//0.755859375	0.7578125	1.7823613707384263e-06	6.367852103863896e-06
//0.7578125	0.759765625	1.7402888818709302e-06	6.275397974732985e-06
//0.759765625	0.76171875	1.694996844219163e-06	6.169339235382592e-06
//0.76171875	0.763671875	1.646647444856949e-06	6.049894316387926e-06
//0.763671875	0.765625	1.595407087406461e-06	5.917307523844602e-06
//0.765625	0.767578125	1.5414459829175134e-06	5.771848674756958e-06
//0.767578125	0.76953125	1.484937740556405e-06	5.613812701828128e-06
//0.76953125	0.771484375	1.4260589586243209e-06	5.443519227852565e-06
//0.771484375	0.7734375	1.3649888164161157e-06	5.261312109909073e-06
//0.7734375	0.775390625	1.3019086674212443e-06	5.067558953549348e-06
//0.775390625	0.77734375	1.2370016343597315e-06	4.862650597174913e-06
//0.77734375	0.779296875	1.1704522065374305e-06	4.647000566792013e-06
//0.779296875	0.78125	1.1024458399962676e-06	4.421044501332093e-06
//0.78125	0.783203125	1.0331685609268808e-06	4.18523954872243e-06
//0.783203125	0.78515625	9.62806572802855e-07	3.940063732889292e-06
//0.78515625	0.787109375	8.9154586768776e-07	3.6860152918734837e-06
//0.787109375	0.7890625	8.195718421583752e-07	3.423611987235623e-06
//0.7890625	0.791015625	7.470689182797468e-07	3.1533903849261056e-06
//0.791015625	0.79296875	6.742201700602286e-07	2.875905107792691e-06
//0.79296875	0.794921875	6.012069558072392e-07	2.5917280598958313e-06
//0.794921875	0.796875	5.282085567833531e-07	2.3014476227335583e-06
//0.796875	0.798828125	4.5540182265238716e-07	2.0056678239399e-06
//0.798828125	0.80078125	3.829608239067533e-07	1.7050074776273057e-06
//0.80078125	0.802734375	3.1105651194621095e-07	1.4000992978563622e-06
//0.802734375	0.8046875	2.3985638698578774e-07	1.0915889844029472e-06
//0.8046875	0.806640625	1.6952417425545704e-07	7.801342813751264e-07
//0.806640625	0.80859375	1.002195088506046e-07	4.664040087695185e-07
//0.80859375	0.810546875	3.469092329428636e-08	1.6515861410777658e-07
//0.810546875	0.8125	1.000005728893226e-07	4.81607007789869e-07
//0.8125	0.814453125	1.636910159796846e-07	7.975652396547224e-07
//0.814453125	0.81640625	2.2562746729025417e-07	1.1123245734155048e-06
//0.81640625	0.818359375	2.8568092080875924e-07	1.4251715673813738e-06
//0.818359375	0.8203125	3.4372839445370215e-07	1.735389228140655e-06
//0.8203125	0.822265625	3.99653163325631e-07	2.0422581901317345e-06
//0.822265625	0.82421875	4.533449812214576e-07	2.3450579209633115e-06
//0.82421875	0.826171875	5.047002900968993e-07	2.6430679523473237e-06
//0.826171875	0.828125	5.536224171672773e-07	2.935569136509863e-06
//0.828125	0.830078125	6.000217593420257e-07	3.2218449279467285e-06
//0.830078125	0.83203125	6.438159546933046e-07	3.5011826903922497e-06
//0.83203125	0.833984375	6.849300406639704e-07	3.772875028871436e-06
//0.833984375	0.8359375	7.232965987250548e-07	4.036221146707305e-06
//0.8359375	0.837890625	7.588558851975676e-07	4.290528227356708e-06
//0.837890625	0.83984375	7.915559479581419e-07	4.535112840949569e-06
//0.83984375	0.841796875	8.213527287525763e-07	4.769302375408186e-06
//0.841796875	0.84375	8.482101508457905e-07	4.992436492024466e-06
//0.84375	0.845703125	8.72100191741153e-07	5.203868605374783e-06
//0.845703125	0.84765625	8.930029407063886e-07	5.402967387453497e-06
//0.84765625	0.849609375	9.109066408475659e-07	5.589118295907682e-06
//0.849609375	0.8515625	9.258077154767763e-07	5.7617251262570975e-06
//0.8515625	0.853515625	9.377107785232191e-07	5.920211587984842e-06
//0.853515625	0.85546875	9.466286287414077e-07	6.0640229043856735e-06
//0.85546875	0.857421875	9.525822274741382e-07	6.192627436060324e-06
//0.857421875	0.859375	9.556006597317289e-07	6.305518327945531e-06
//0.859375	0.861328125	9.56022927834996e-07	6.402215179771027e-06
//0.861328125	0.86328125	9.557210783710329e-07	6.4822657398360885e-06
//0.86328125	0.865234375	9.529886310340374e-07	6.545247621999481e-06
//0.865234375	0.8671875	9.474563698915223e-07	6.590770045778489e-06
//0.8671875	0.869140625	9.391851436045938e-07	6.618475599453438e-06
//0.869140625	0.87109375	9.282434715562319e-07	6.62804202607627e-06
//0.87109375	0.873046875	9.147074000272431e-07	6.62804633718308e-06
//0.873046875	0.875	8.986603401213701e-07	6.619184033052206e-06
//0.875	0.876953125	8.801928872295623e-07	6.591655120609775e-06
//0.876953125	0.87890625	8.594026218266423e-07	6.545249440448337e-06
//0.87890625	0.880859375	8.363938913968436e-07	6.479803669386384e-06
//0.880859375	0.8828125	8.112775732878776e-07	6.3951989091523545e-06
//0.8828125	0.884765625	7.841708182962396e-07	6.2913626077594345e-06
//0.884765625	0.88671875	7.551967747895833e-07	6.168270503112651e-06
//0.88671875	0.888671875	7.244842928979644e-07	6.025948585879004e-06
//0.888671875	0.890625	6.921676102450841e-07	5.864475098713882e-06
//0.890625	0.892578125	6.583860148917831e-07	5.683982529039497e-06
//0.892578125	0.89453125	6.232834908243411e-07	5.48465965194182e-06
//0.89453125	0.896484375	5.870083416775848e-07	5.2667535808418185e-06
//0.896484375	0.8984375	5.497127941655151e-07	5.030571842677561e-06
//0.8984375	0.900390625	5.115525807706046e-07	4.776484474731467e-06
//0.900390625	0.90234375	4.7268650152011554e-07	4.504926143028314e-06
//0.90234375	0.904296875	4.332759646804148e-07	4.216398282232315e-06
//0.904296875	0.90625	3.9348450619585153e-07	3.911471256883752e-06
//0.90625	0.908203125	3.5347728774986203e-07	3.5907865444568022e-06
//0.908203125	0.91015625	3.1342057318273415e-07	3.2550589388202357e-06
//0.91015625	0.912109375	2.7348118324572695e-07	2.9050787758485387e-06
//0.912109375	0.9140625	2.3382592843079084e-07	2.5417141797889604e-06
//0.9140625	0.916015625	1.9462101976317777e-07	2.165913330877998e-06
//0.916015625	0.91796875	1.5603145739798552e-07	1.7787067540844434e-06
//0.91796875	0.919921875	1.1822039672457167e-07	1.3812096265280194e-06
//0.919921875	0.921875	8.134849270746285e-08	9.746241179999318e-07
//0.921875	0.923828125	4.55732201319389e-08	5.602417287771686e-07
//0.923828125	0.92578125	2.2077669423611075e-08	2.862868636865084e-07
//0.92578125	0.927734375	5.366065819011972e-08	7.153817864790459e-07
//0.927734375	0.9296875	8.356329117257772e-08	1.1461664245173913e-06
//0.9296875	0.931640625	1.1165497764007706e-07	1.576866566501164e-06
//0.931640625	0.93359375	1.3781286317901885e-07	2.005604105783122e-06
//0.93359375	0.935546875	1.6192267093876043e-07	2.4303945386159936e-06
//0.935546875	0.9375	1.8387956660419137e-07	2.849144440187973e-06
//0.9375	0.939453125	2.0358904722244334e-07	3.259648918010932e-06
//0.939453125	0.94140625	2.2096785400911314e-07	3.659589042090083e-06
//0.94140625	0.943359375	2.3594490925754564e-07	4.0465292511257095e-06
//0.943359375	0.9453125	2.484622774729353e-07	4.417914733763481e-06
//0.9453125	0.947265625	2.584761508512489e-07	4.771068783597614e-06
//0.947265625	0.94921875	2.659578592212537e-07	5.103190126210751e-06
//0.94921875	0.951171875	2.70894904566197e-07	5.4113502159650415e-06
//0.951171875	0.953125	2.732920202400562e-07	5.692490499472297e-06
//0.953125	0.955078125	2.735475149096122e-07	5.943419641586128e-06
//0.955078125	0.95703125	2.731722550100555e-07	6.160810708223613e-06
//0.95703125	0.958984375	2.7057808192641905e-07	6.3411982981422e-06
//0.958984375	0.9609375	2.655725328159214e-07	6.480975640352271e-06
//0.9609375	0.962890625	2.5824035568061213e-07	6.576391480096793e-06
//0.962890625	0.96484375	2.486892015274339e-07	6.623547124601808e-06
//0.96484375	0.966796875	2.3705083243555527e-07	6.6279964310397455e-06
//0.966796875	0.96875	2.2348235713896413e-07	6.618393272248143e-06
//0.96875	0.970703125	2.0816749172261783e-07	6.556726113702006e-06
//0.970703125	0.97265625	1.9131784601095424e-07	6.434184693776431e-06
//0.97265625	0.974609375	1.731742356963114e-07	6.246426892273189e-06
//0.974609375	0.9765625	1.5400802032625375e-07	inf
//0.9765625	0.978515625	1.3412246724315387e-07	inf
//0.978515625	0.98046875	1.1385414157148333e-07	inf
//0.98046875	0.982421875	9.357432234693431e-08	inf
//0.982421875	0.984375	7.369044488019761e-08	inf
//0.984375	0.986328125	5.46475694469012e-08	inf
//0.986328125	0.98828125	3.6929876393984135e-08	inf
//0.98828125	0.990234375	2.106218775149645e-08	inf
//0.990234375	0.9921875	7.611515437595594e-09	inf
//0.9921875	0.994140625	9.550316026821238e-09	inf
//0.994140625	0.99609375	1.1902941973967998e-08	inf
//0.99609375	0.998046875	1.1902185082522343e-08	inf
//0.998046875	1.0	9.11519155948685e-09	inf
//spec: {
//spec:     "cname": "ml2_raw_log_6",
//spec:     "delta": 4.202807606072877e-06,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 1.6515861410777658e-07,
//spec:     "operation": "log"
//spec: }