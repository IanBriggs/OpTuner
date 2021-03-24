/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_2.c --poly-degree 2 \
 *     --fname ml2_raw_log_2 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_2(double);
double ml2_raw_log_2(double x){
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_1 = x * -0x1.84cb20f4ed1c1p-1;
    pa_1 = 0x1.4010615ae692ap1 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.bdbb2e0da2f5fp0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fa7df31c6d0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fa7df31c9a0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fa7df31ca60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fa7df31cc40> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa7df327550>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_2
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa7df327550>
//Info: executing pass instantiate_prec on fct ml2_raw_log_2
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa7df327550>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_2
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa7df327550>
//Info: executing pass check_processor_support on fct ml2_raw_log_2
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fa7df327550>
//Info: executing pass debug_tag_node on fct ml2_raw_log_2
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_2.c
//0.5	0.501953125	0.012419173137263212	0.01791707949707108
//0.501953125	0.50390625	0.011918295432952692	0.01729172386851587
//0.50390625	0.505859375	0.011426764643710006	0.016672523363234992
//0.505859375	0.5078125	0.010944463628752746	0.01605945534796926
//0.5078125	0.509765625	0.010471276601533956	0.015452497397417811
//0.509765625	0.51171875	0.010007089108947593	0.014851627291465498
//0.51171875	0.513671875	0.009551788010931591	0.014256823012458222
//0.513671875	0.515625	0.009105261460459462	0.013668062742525132
//0.515625	0.517578125	0.008667398883911544	0.013085324860946742
//0.517578125	0.51953125	0.00823809096181732	0.012508587941567999
//0.51953125	0.521484375	0.0078172296099604	0.011937830750255356
//0.521484375	0.5234375	0.007404707960838018	0.011373032242396918
//0.5234375	0.525390625	0.007000420345467067	0.010814171560444815
//0.525390625	0.52734375	0.006604262275528963	0.010261228031498874
//0.52734375	0.529296875	0.006216130425845761	0.009714181164930783
//0.529296875	0.53125	0.005835922617180195	0.009173010650047907
//0.53125	0.533203125	0.005463537799352479	0.008637696353795918
//0.533203125	0.53515625	0.005098876034666891	0.008108218318499503
//0.53515625	0.537109375	0.004741838481641353	0.007584556759640324
//0.537109375	0.5390625	0.004392327379033363	0.00706669206367152
//0.5390625	0.541015625	0.004050246030155861	0.00655460478586799
//0.541015625	0.54296875	0.0037154987874766935	0.006048275648211753
//0.54296875	0.544921875	0.0033879910374955834	0.005547685537311678
//0.544921875	0.546875	0.0030676291858926044	0.00505281550235691
//0.546875	0.548828125	0.0027543206429423337	0.004563646753103309
//0.548828125	0.55078125	0.0024479738091880113	0.004080160657892266
//0.55078125	0.552734375	0.0021484980613701494	0.00360233874170125
//0.552734375	0.5546875	0.0018558037386041987	0.0031301626842254655
//0.5546875	0.556640625	0.0015698021288019955	0.0026636143179900153
//0.556640625	0.55859375	0.0012904054553318479	0.0022026756264919727
//0.55859375	0.560546875	0.0010175268639122483	0.0017473287423717839
//0.560546875	0.5625	0.0007510804097343188	0.0012975559456134347
//0.5625	0.564453125	0.0004909810448082137	0.0008533396617728264
//0.564453125	0.56640625	0.00023714460552882484	0.00041466246023382115
//0.56640625	0.568359375	0.0002520718016942665	0.0004461437095398116
//0.568359375	0.5703125	0.0004876157838522822	0.0008683068351842212
//0.5703125	0.572265625	0.0007172248921984956	0.001284999196651938
//0.572265625	0.57421875	0.0009409790475653301	0.0016962375306465661
//0.57421875	0.576171875	0.001158957356647948	0.0021020384399552277
//0.576171875	0.578125	0.001371238123024773	0.002502418395012997
//0.578125	0.580078125	0.0015778988579921705	0.002897393735443576
//0.580078125	0.58203125	0.0017790162912170286	0.003286980671576661
//0.58203125	0.583984375	0.001974666381210905	0.00367119528594242
//0.583984375	0.5859375	0.0021649243256293116	0.004050053534743515
//0.5859375	0.587890625	0.002349864571399629	0.004423571249305076
//0.587890625	0.58984375	0.0025295608246810614	0.004791764137503035
//0.58984375	0.591796875	0.002704086060659962	0.005154647785171202
//0.591796875	0.59375	0.002873512533183788	0.0055122376574875025
//0.59375	0.595703125	0.003037911784236858	0.005864549100339703
//0.595703125	0.59765625	0.0031973546532610263	0.006211597341671054
//0.59765625	0.599609375	0.0033519112863243	0.006553397492806165
//0.599609375	0.6015625	0.0035016511451403816	0.00688996454975749
//0.6015625	0.603515625	0.003646643015942017	0.007221313394512772
//0.603515625	0.60546875	0.0037869550182110003	0.007547458796303773
//0.60546875	0.607421875	0.003922654613267594	0.007868415412856626
//0.607421875	0.609375	0.004053808612722079	0.008184197791624154
//0.609375	0.611328125	0.004180483186791077	0.008494820371000437
//0.611328125	0.61328125	0.004302743872481212	0.008800297481517925
//0.61328125	0.615234375	0.004420655581642793	0.0091006433470277
//0.615234375	0.6171875	0.004534282608895604	0.009395872085862386
//0.6171875	0.619140625	0.004643688639429738	0.009685997711983077
//0.619140625	0.62109375	0.004748936756683467	0.009971034136109764
//0.62109375	0.623046875	0.0048500894499005865	0.010250995166835869
//0.623046875	0.625	0.004947208621569502	0.010525894511727085
//0.625	0.626953125	0.005040355594746267	0.010795745778404836
//0.626953125	0.62890625	0.0051295911202637115	0.011060562475614566
//0.62890625	0.630859375	0.005214975383828826	0.011320358014279164
//0.630859375	0.6328125	0.005296568013010422	0.011575145708537746
//0.6328125	0.634765625	0.0053744280841191506	0.011824938776770063
//0.634765625	0.63671875	0.00544861412898181	0.012069750342606763
//0.63671875	0.638671875	0.005519184141611933	0.012309593435925756
//0.638671875	0.640625	0.005586195584778523	0.012544480993834917
//0.640625	0.642578125	0.005649705396474806	0.012774425861641342
//0.642578125	0.64453125	0.005709769996288831	0.012999440793807396
//0.64453125	0.646484375	0.005766445291677684	0.013219538454893763
//0.646484375	0.6484375	0.005819786684147071	0.013434731420489728
//0.6484375	0.650390625	0.005869849075337976	0.01364503217813088
//0.650390625	0.65234375	0.005916686873022059	0.013850453128204465
//0.65234375	0.654296875	0.005960353997007445	0.014051006584842575
//0.654296875	0.65625	0.006000903884956488	0.014246704776803393
//0.65625	0.658203125	0.006038389498117094	0.01443755984834065
//0.658203125	0.66015625	0.00607286332696916	0.01462358386006159
//0.66015625	0.662109375	0.0061043773967874295	0.014804788789773123
//0.662109375	0.6640625	0.0061329832731229815	0.014981186533318118
//0.6640625	0.666015625	0.006158732067203311	0.01515278890539847
//0.666015625	0.66796875	0.006181674441254159	0.015319607640389313
//0.66796875	0.669921875	0.006201860613743284	0.015481654393141624
//0.669921875	0.671875	0.006219340364547955	0.015638940739774516
//0.671875	0.673828125	0.006234163040047469	0.0157914781784572
//0.673828125	0.67578125	0.006246377558141951	0.015939278130180777
//0.67578125	0.677734375	0.006256032413198745	0.01608235193952001
//0.677734375	0.6796875	0.006263175680927621	0.016220710875385264
//0.6796875	0.681640625	0.006267855023186052	0.01635436613176474
//0.681640625	0.68359375	0.006270117692715732	0.016483328828457166
//0.68359375	0.685546875	0.006270359966011877	0.01660761001179508
//0.685546875	0.6875	0.006270010537811533	0.01672722065535889
//0.6875	0.689453125	0.006267580006924042	0.01684217166068179
//0.689453125	0.69140625	0.00626287215319682	0.016952473857945738
//0.69140625	0.693359375	0.00625593263893948	0.017058138006668583
//0.693359375	0.6953125	0.006246806740037675	0.017159174796382515
//0.6953125	0.697265625	0.00623553935030106	0.017255594847303924
//0.697265625	0.69921875	0.006222174985750278	0.017347408710994862
//0.69921875	0.701171875	0.00620675778884398	0.017434626871016153
//0.701171875	0.703125	0.006189331532646894	0.01751725974357237
//0.703125	0.705078125	0.006169939624939927	0.017595317678148707
//0.705078125	0.70703125	0.006148625112273256	0.017668810958139946
//0.70703125	0.708984375	0.006125430683963361	0.01773774980147158
//0.708984375	0.7109375	0.006100398676034928	0.01780214436121324
//0.7109375	0.712890625	0.006073571075108525	0.017862004726184516
//0.712890625	0.71484375	0.006044989522234961	0.01791734092155333
//0.71484375	0.716796875	0.006014695316677172	0.01796816290942688
//0.716796875	0.71875	0.005982729419640533	0.018014480589435364
//0.71875	0.720703125	0.005949132457952404	0.01805630379930853
//0.720703125	0.72265625	0.00591394472769175	0.018093642315445135
//0.72265625	0.724609375	0.005877206197769653	0.01812650585347551
//0.724609375	0.7265625	0.0058389565134615	0.018154904068817188
//0.7265625	0.728515625	0.005799234999891627	0.018178846557223828
//0.728515625	0.73046875	0.005758080665471197	0.018198342855327433
//0.73046875	0.732421875	0.005715532205290047	0.018213402441174004
//0.732421875	0.734375	0.005671628004463261	0.018224034734752717
//0.734375	0.736328125	0.005626406141433168	0.018230249098518673
//0.736328125	0.73828125	0.005579904391227497	0.01823207261302744
//0.73828125	0.740234375	0.005532160228674377	0.01823205483790938
//0.740234375	0.7421875	0.005483210831574864	0.018229461201854927
//0.7421875	0.744140625	0.0054330930838336735	0.018222477383282153
//0.744140625	0.74609375	0.005381843578548761	0.0182111125196126
//0.74609375	0.748046875	0.00532949862106043	0.018195375693254603
//0.748046875	0.75	0.005276094231960563	0.018175275932089383
//0.75	0.751953125	0.00522166615006263	0.018150822209951383
//0.751953125	0.75390625	0.0051662498353330704	0.01812202344710281
//0.75390625	0.755859375	0.005109880471784655	0.0180888885107025
//0.755859375	0.7578125	0.005052592970332422	0.018051426215269152
//0.7578125	0.759765625	0.004994421971612753	0.018009645323139062
//0.759765625	0.76171875	0.004935401848766174	0.017963554544918322
//0.76171875	0.763671875	0.004875566710184437	0.017913162539929653
//0.763671875	0.765625	0.004814950402222415	0.017858477916653827
//0.765625	0.767578125	0.004753586511875374	0.017799509233165867
//0.767578125	0.76953125	0.004691508369422138	0.017736264997565938
//0.76953125	0.771484375	0.00462874905103466	0.017668753668405132
//0.771484375	0.7734375	0.004565341381354527	0.017596983655106067
//0.7734375	0.775390625	0.004501317936036892	0.01752096331837845
//0.775390625	0.77734375	0.004436711044262322	0.01744070097062961
//0.77734375	0.779296875	0.004371552791217052	0.017356204876370067
//0.779296875	0.78125	0.004305875020542114	0.017267483252614124
//0.78125	0.783203125	0.00423970933675183	0.01717454426927566
//0.783203125	0.78515625	0.004173087107622074	0.01707739604955893
//0.78515625	0.787109375	0.0041060394665488826	0.01697604667034491
//0.787109375	0.7890625	0.0040385973148776115	0.016870504162572256
//0.7890625	0.791015625	0.003970791324203381	0.016760776511614124
//0.791015625	0.79296875	0.003902651938643007	0.016646871657649963
//0.79296875	0.794921875	0.0038342093770789387	0.01652879749603272
//0.794921875	0.796875	0.0037654936353755893	0.016406561877651347
//0.796875	0.798828125	0.0036965344885684787	0.016280172609288684
//0.798828125	0.80078125	0.003627361493026577	0.016149637453974717
//0.80078125	0.802734375	0.0035580039885882452	0.016014964131335217
//0.802734375	0.8046875	0.003488491100671165	0.01587616031793576
//0.8046875	0.806640625	0.003418851742356622	0.015733233647621185
//0.806640625	0.80859375	0.003349114616448537	0.015586191711850389
//0.80859375	0.810546875	0.003279308217507587	0.015435042060026558
//0.810546875	0.8125	0.003209460833860799	0.015279792199822754
//0.8125	0.814453125	0.003139600549586955	0.015120449597502857
//0.814453125	0.81640625	0.003069755246478166	0.014957021678237854
//0.81640625	0.818359375	0.00299995260597795	0.014789515826417413
//0.818359375	0.8203125	0.002930220111096161	0.01461793938595674
//0.8203125	0.822265625	0.002860585048301087	0.014442299660598637
//0.822265625	0.82421875	0.0027910745093890563	0.01426260391421072
//0.82421875	0.826171875	0.0027217153933318597	0.014078859371077739
//0.826171875	0.828125	0.002652534408102314	0.01389107321618892
//0.828125	0.830078125	0.002583558072478271	0.013699252595520212
//0.830078125	0.83203125	0.002514812717825376	0.013503404616311398
//0.83203125	0.833984375	0.0024463244898588806	0.01330353634733789
//0.833984375	0.8359375	0.0023781193503847986	0.01309965481917713
//0.8359375	0.837890625	0.0023102230790206972	0.012891767024469411
//0.837890625	0.83984375	0.002242661274896411	0.012679879918172985
//0.83984375	0.841796875	0.0021754593583349557	0.01246400041781325
//0.841796875	0.84375	0.0021086425725139186	0.01224413540372581
//0.84375	0.845703125	0.0020422359851075995	0.012020291719293176
//0.845703125	0.84765625	0.0019762644899101655	0.01179247617117486
//0.84765625	0.849609375	0.0019107528084400841	0.011560695529530537
//0.849609375	0.8515625	0.0018457254915260962	0.011324956528235968
//0.8515625	0.853515625	0.0017812069208749755	0.011085265865091315
//0.853515625	0.85546875	0.0017172213106213343	0.010841630202021427
//0.85546875	0.857421875	0.001653792708859715	0.010594056165267639
//0.857421875	0.859375	0.0015909449991592106	0.010342550345570578
//0.859375	0.861328125	0.0015287019020608574	0.010087119298343382
//0.861328125	0.86328125	0.0014670869765580272	0.009827769543834701
//0.86328125	0.865234375	0.001406123621560058	0.009564507567280752
//0.865234375	0.8671875	0.0013458350773393423	0.009297339819045597
//0.8671875	0.869140625	0.001286244426962105	0.009026272714748772
//0.869140625	0.87109375	0.0012273745977030837	0.008751312635379184
//0.87109375	0.873046875	0.0011692483624443331	0.00847246592739418
//0.873046875	0.875	0.001111888341058366	0.008189738902802442
//0.875	0.876953125	0.0010553170017758378	0.007903137839229265
//0.876953125	0.87890625	0.0009995566625379862	0.007612668979962546
//0.87890625	0.880859375	0.0009446294923340252	0.007318338533977618
//0.880859375	0.8828125	0.0008905575125236967	0.007020152675938788
//0.8828125	0.884765625	0.0008373625981451752	0.006718117546175175
//0.884765625	0.88671875	0.0007850664792085143	0.006412239250628046
//0.88671875	0.888671875	0.0007336907419748658	0.006102523860766842
//0.888671875	0.890625	0.0006832568302215585	0.005788977413469486
//0.890625	0.892578125	0.000633786046493358	0.005471605910864019
//0.892578125	0.89453125	0.0005852995533399872	0.00515041532012601
//0.89453125	0.896484375	0.0005378183745401296	0.004825411573226711
//0.896484375	0.8984375	0.000491363396312084	0.004496600566625685
//0.8984375	0.900390625	0.00044595536851124576	0.0041639881609007445
//0.900390625	0.90234375	0.000401614905814586	0.0038275801803069214
//0.90234375	0.904296875	0.00035836248889229783	0.0034873824122548264
//0.904296875	0.90625	0.0003162184655667762	0.00314340060669722
//0.90625	0.908203125	0.0002752030519590954	0.0027956404754107163
//0.908203125	0.91015625	0.000235336333623145	0.0024441076911573267
//0.91015625	0.912109375	0.00019663826666758445	0.0020888078867078845
//0.912109375	0.9140625	0.00015912867886577203	0.0017297466537061854
//0.9140625	0.916015625	0.00012282727075382303	0.001366929541348842
//0.916015625	0.91796875	8.775361671694911e-05	0.0010003620548511818
//0.91796875	0.919921875	5.3927166064228274e-05	0.0006300496536638613
//0.919921875	0.921875	2.1367244091953464e-05	0.0002559977493979835
//0.921875	0.923828125	3.987632638937702e-05	0.0005033031760370239
//0.923828125	0.92578125	6.852193495598034e-05	0.0008885416370168593
//0.92578125	0.927734375	9.582493290952278e-05	0.0012774984878755064
//0.927734375	0.9296875	0.00012176659945711036	0.0016701686017289552
//0.9296875	0.931640625	0.00014632833167040605	0.002066546921827097
//0.931640625	0.93359375	0.00016949164349828094	0.002466628467886064
//0.93359375	0.935546875	0.00019123816478978242	0.0028704083436066276
//0.935546875	0.9375	0.00021154964032729054	0.003277881745637726
//0.9375	0.939453125	0.00023040792886973522	0.003689043974311045
//0.939453125	0.94140625	0.00024779500220574864	0.004103890446559495
//0.94140625	0.943359375	0.0002636929442166265	0.004522416711546256
//0.943359375	0.9453125	0.0002780839499489965	0.004944618469682008
//0.9453125	0.947265625	0.0002909503246970223	0.005370491595907326
//0.947265625	0.94921875	0.000302274483094094	0.005800032168389503
//0.94921875	0.951171875	0.00031203894821383703	0.0062332365041483035
//0.951171875	0.953125	0.00032022635068034393	0.006670101203631583
//0.953125	0.955078125	0.00032681942778751456	0.00711062320696407
//0.955078125	0.95703125	0.0003318010226273908	0.007554799865583025
//0.95703125	0.958984375	0.00033515408322737714	0.008002629034389204
//0.958984375	0.9609375	0.00033686166169623853	0.008454109191592977
//0.9609375	0.962890625	0.00033709375897331405	0.008909239596458502
//0.962890625	0.96484375	0.000336906913378768	0.009368020499683528
//0.96484375	0.966796875	0.0003352730960190185	0.009830453428087745
//0.966796875	0.96875	0.00033194356893199696	0.010296541576118977
//0.96875	0.970703125	0.0003269017921837151	0.01076629035402495
//0.970703125	0.97265625	0.0003201313257794967	0.011239708171022622
//0.97265625	0.974609375	0.00031161582886045093	0.011716807580001907
//0.974609375	0.9765625	0.00030133905890798794	0.012197606994656893
//0.9765625	0.978515625	0.00028928487095631445	0.012682133343317454
//0.978515625	0.98046875	0.00027543721681278817	0.013170426315169176
//0.98046875	0.982421875	0.0002597801442860468	0.013662545437385426
//0.982421875	0.984375	0.00024229779642181753	0.01415858246021849
//0.984375	0.986328125	0.0002229744107463152	0.0146586843580075
//0.986328125	0.98828125	0.0002017943185171383	0.015163099331337894
//0.98828125	0.990234375	0.0001787419439815787	0.015672278011963383
//0.990234375	0.9921875	0.00015380180364224453	0.01618712647532086
//0.9921875	0.994140625	0.00012695850552992712	0.016709765278356003
//0.994140625	0.99609375	9.819674848361258e-05	0.017246565611243485
//0.99609375	0.998046875	6.750132143756248e-05	0.017829402360594868
//0.998046875	1.0	3.4857102715372356e-05	inf
//spec: {
//spec:     "cname": "ml2_raw_log_2",
//spec:     "delta": 0.012419173137263212,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 0.0002559977493979835,
//spec:     "operation": "log"
//spec: }