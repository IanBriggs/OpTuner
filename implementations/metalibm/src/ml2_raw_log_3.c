/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_3.c --poly-degree 3 \
 *     --fname ml2_raw_log_3 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_3(double);
double ml2_raw_log_3(double x){
    double pm_2;
    double pa_2;
    double pm_1;
    double pa_1;
    double tmp;
    double tmp1;
    
    pm_2 = x * 0x1.5ad1a37b68146p-1;
    pa_2 = -0x1.3a44ea0838443p1 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.f0b8768efdb72p1 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.0d27f6012b73fp1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f68b6c066d0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f68b6c069a0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f68b6c06a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f68b6c06c40> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68b6c10820>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_3
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68b6c10820>
//Info: executing pass instantiate_prec on fct ml2_raw_log_3
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68b6c10820>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_3
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68b6c10820>
//Info: executing pass check_processor_support on fct ml2_raw_log_3
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f68b6c10820>
//Info: executing pass debug_tag_node on fct ml2_raw_log_3
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_3.c
//0.5	0.501953125	0.0015454124832034748	0.0022295589256455597
//0.501953125	0.50390625	0.0014175308625535273	0.0020566323756837923
//0.50390625	0.505859375	0.0012938400151631432	0.001887811515656815
//0.505859375	0.5078125	0.00117425308152536	0.0017230506281211862
//0.5078125	0.509765625	0.001058684556368685	0.0015623042895817586
//0.509765625	0.51171875	0.0009470502678625357	0.0014055273667944982
//0.51171875	0.513671875	0.0008392673572203131	0.001252675013131561
//0.513671875	0.515625	0.0007352542586909894	0.0011037026650072932
//0.515625	0.517578125	0.0006349306799303665	0.0009585660383638912
//0.517578125	0.51953125	0.0005382175827433903	0.0008172211252154897
//0.51953125	0.521484375	0.0004450371641891359	0.0006796241902494757
//0.521484375	0.5234375	0.0003553128380402976	0.000545731767483856
//0.5234375	0.525390625	0.0002689692165892344	0.000415500656979535
//0.525390625	0.52734375	0.0001859320927928242	0.0002888879216063862
//0.52734375	0.529296875	0.0001061284227485849	0.00016585088386202745
//0.529296875	0.53125	4.4065018874145796e-05	6.966552933966743e-05
//0.53125	0.533203125	0.00011459521577618492	0.00018222898957565665
//0.533203125	0.53515625	0.00018217284241905368	0.00029138492775360636
//0.53515625	0.537109375	0.0002468653787697877	0.0003971747691839071
//0.537109375	0.5390625	0.00030873924023998664	0.0004996396975875554
//0.5390625	0.541015625	0.00036785979308633917	0.0005988206579368402
//0.541015625	0.54296875	0.0004242913695336589	0.0006947583592511548
//0.54296875	0.544921875	0.00047809728262641015	0.0007874932773488144
//0.544921875	0.546875	0.0005293398408145514	0.0008770656575557351
//0.546875	0.548828125	0.0005780803622793805	0.0009635155173718144
//0.548828125	0.55078125	0.0006243791890049213	0.0010468826490958295
//0.55078125	0.552734375	0.0006682957006002601	0.0011272066224096544
//0.552734375	0.5546875	0.0007098883278780974	0.0012045267869225775
//0.5546875	0.556640625	0.0007492145661946621	0.0012788822746764837
//0.556640625	0.55859375	0.0007863309885559983	0.0013503120026126443
//0.55859375	0.560546875	0.0008212932584955208	0.0014188546750008493
//0.560546875	0.5625	0.0008541561427276123	0.0014845487858315897
//0.5625	0.564453125	0.0008849735235819177	0.0015474326211719917
//0.564453125	0.56640625	0.0009137984112228841	0.0016075442614861789
//0.56640625	0.568359375	0.00094068295565898	0.0016649215839207338
//0.568359375	0.5703125	0.0009656784585459226	0.0017196022645559065
//0.5703125	0.572265625	0.0009888353847881401	0.0017716237806232082
//0.572265625	0.57421875	0.0010102033739425931	0.0018210234126900134
//0.57421875	0.576171875	0.0010298312514289802	0.0018678382468117786
//0.576171875	0.578125	0.0010477670395502622	0.0019121051766524738
//0.578125	0.580078125	0.0010640579683273413	0.0019538609055738095
//0.580078125	0.58203125	0.0010787504861516422	0.001993141948693831
//0.58203125	0.583984375	0.0010918902702592595	0.0020299846349154313
//0.583984375	0.5859375	0.0011035222370302422	0.00206442510892534
//0.5859375	0.587890625	0.0011136905521165073	0.0020964993331641086
//0.587890625	0.58984375	0.0011224386404017957	0.0021262430897676238
//0.58984375	0.591796875	0.0011298091957969978	0.002153691982480657
//0.591796875	0.59375	0.0011358441908741078	0.0021788814385429504
//0.59375	0.595703125	0.001140584886341981	0.002201846710548331
//0.595703125	0.59765625	0.0011440718403670073	0.002222622878277327
//0.59765625	0.599609375	0.0011463449177417327	0.00224124485050376
//0.599609375	0.6015625	0.0011474432989043947	0.002257747366775777
//0.6015625	0.603515625	0.001147564731400201	0.0022721649991717563
//0.603515625	0.60546875	0.0011474054888122778	0.0022845321540315476
//0.60546875	0.607421875	0.0011462693256717106	0.0022948830736634605
//0.607421875	0.609375	0.001144071989527494	0.0023032518380274327
//0.609375	0.611328125	0.0011408500107144175	0.0023096723663947358
//0.611328125	0.61328125	0.0011366392781736957	0.002314178418984953
//0.61328125	0.615234375	0.0011314750476364877	0.002316803598579792
//0.615234375	0.6171875	0.0011253919496775862	0.0023175863617198554
//0.6171875	0.619140625	0.0011184239976413375	0.002317581352115246
//0.619140625	0.62109375	0.0011106045954423743	0.0023165449722515894
//0.62109375	0.623046875	0.0011019665452435023	0.002313727598922062
//0.623046875	0.625	0.001092542055013054	0.0023091622208603526
//0.625	0.626953125	0.0010823627459639747	0.002302881677107391
//0.626953125	0.62890625	0.001071459659876851	0.002294918658497736
//0.62890625	0.630859375	0.0010598632663090532	0.002285305709125917
//0.630859375	0.6328125	0.0010476034696921053	0.002274075227793063
//0.6328125	0.634765625	0.001034709616319359	0.0022612594694341502
//0.634765625	0.63671875	0.0010212105012259987	0.0022468905465261894
//0.63671875	0.638671875	0.0010071343749633618	0.002231000430477675
//0.638671875	0.640625	0.0009925089502695178	0.002213620952999602
//0.640625	0.642578125	0.0009773614086380055	0.002194783807458356
//0.642578125	0.64453125	0.0009617184067865891	0.0021745205502107776
//0.64453125	0.646484375	0.0009456060830278538	0.0021528626019216932
//0.646484375	0.6484375	0.0009290500635434222	0.002129841248864194
//0.6484375	0.650390625	0.0009120754685635377	0.0021054876442029545
//0.650390625	0.65234375	0.0008947069184537203	0.002079832809260857
//0.65234375	0.654296875	0.0008769685397101679	0.0020529076347692
//0.654296875	0.65625	0.000858883970865541	0.002024742882101752
//0.65625	0.658203125	0.0008404763683067304	0.0019953691844929104
//0.658203125	0.66015625	0.0008217684120061813	0.001964817048240225
//0.66015625	0.662109375	0.0008027823111683065	0.0019331168538915334
//0.662109375	0.6640625	0.0007835398097924977	0.0019002988574169553
//0.6640625	0.666015625	0.0007640621921542054	0.0018663931913659854
//0.666015625	0.66796875	0.0007443702882055339	0.0018314298660099247
//0.66796875	0.669921875	0.0007244844788967632	0.0017954387704698777
//0.669921875	0.671875	0.0007044247014201852	0.0017584496738305483
//0.671875	0.673828125	0.000684210454377609	0.0017204922262400537
//0.673828125	0.67578125	0.0006638608028728161	0.0016815959599958488
//0.67578125	0.677734375	0.0006433943835305703	0.0016417902906177512
//0.677734375	0.6796875	0.0006228294094426999	0.0016011045179063412
//0.6796875	0.681640625	0.0006021836750435144	0.0015595678269895226
//0.681640625	0.68359375	0.0005814745609150221	0.0015172092893555188
//0.68359375	0.685546875	0.0005607190385234541	0.0014740578638732706
//0.685546875	0.6875	0.0005399336748882182	0.001430142397800311
//0.6875	0.689453125	0.0005191346371844396	0.001385491627778301
//0.689453125	0.69140625	0.0004983376972802163	0.0013401341808164226
//0.69140625	0.693359375	0.00047755823620969725	0.0012940985752628105
//0.693359375	0.6953125	0.0004568112485830722	0.0012474132217642079
//0.6953125	0.697265625	0.00043611134693453404	0.0012001064242140203
//0.697265625	0.69921875	0.00041547276600926135	0.001152206380688951
//0.69921875	0.701171875	0.0003949093669904417	0.0011037411843743848
//0.701171875	0.703125	0.00037443464166734137	0.0010547388244786901
//0.703125	0.705078125	0.0003540617165454036	0.0010052271871366096
//0.705078125	0.70703125	0.00033380335689934187	0.0009552340563019013
//0.70703125	0.708984375	0.0003136719707701731	0.0009047871146293888
//0.708984375	0.7109375	0.0002936796129071192	0.000853913944346582
//0.7109375	0.712890625	0.0002738379886552872	0.0008026420281150228
//0.712890625	0.71484375	0.00025415845779001996	0.0007509987498815059
//0.71484375	0.716796875	0.00023465203829879314	0.0006990113957193288
//0.716796875	0.71875	0.00021532941011151763	0.0006467071546597149
//0.71875	0.720703125	0.00019620091878008882	0.0005941131195135562
//0.720703125	0.72265625	0.00017727657910801006	0.000541256287683618
//0.72265625	0.724609375	0.00015856607873090034	0.00048816356196734436
//0.724609375	0.7265625	0.0001400787816486821	0.00043486175135040446
//0.7265625	0.728515625	0.00012182373171022907	0.000381377571791112
//0.728515625	0.73046875	0.00010380965605124022	0.00032773764699585336
//0.73046875	0.732421875	8.604496848609135e-05	0.00027396850918565374
//0.732421875	0.734375	6.853777285440111e-05	0.0002200965998540108
//0.734375	0.736328125	5.129586632303563e-05	0.00016614827051612222
//0.736328125	0.73828125	3.4326742644276746e-05	0.00011214978344968166
//0.73828125	0.740234375	1.763759537076009e-05	5.81273124270651e-05
//0.740234375	0.7421875	1.4873477755579855e-05	4.9885324589479936e-05
//0.7421875	0.744140625	3.068248915555208e-05	0.00010382357908371692
//0.744140625	0.74609375	4.618568910809027e-05	0.0001576819931339901
//0.74609375	0.748046875	6.137733829677456e-05	0.00021143482479209737
//0.748046875	0.75	7.625197918359845e-05	0.00026505641638960645
//0.75	0.751953125	9.080443307758559e-05	0.00031852119386071085
//0.751953125	0.75390625	0.00010502979724142724	0.000371803666072532
//0.75390625	0.755859375	0.00011892344203555018	0.0004248784241627607
//0.755859375	0.7578125	0.0001324810080990354	0.0004777201408845332
//0.7578125	0.759765625	0.00014569840356681857	0.0005303035699584387
//0.759765625	0.76171875	0.00015857180132261334	0.0005826035454315557
//0.76171875	0.763671875	0.0001710976362870087	0.0006345949810434178
//0.763671875	0.765625	0.000183272602740201	0.0006862528695988082
//0.765625	0.767578125	0.0001950936516788315	0.0007375522823472877
//0.767578125	0.76953125	0.0002065579882064096	0.0007884683683693565
//0.76953125	0.771484375	0.00021766306895681006	0.0008389763539691567
//0.771484375	0.7734375	0.00022840659955034373	0.000889051542073622
//0.7734375	0.775390625	0.0002387865320819076	0.0009386693116379784
//0.775390625	0.77734375	0.00024880106264073103	0.0009878051170575085
//0.77734375	0.779296875	0.0002584486288612416	0.001036434487585484
//0.779296875	0.78125	0.0002677279075045838	0.0010845330267571813
//0.78125	0.783203125	0.00027663781207031696	0.0011320764118198285
//0.783203125	0.78515625	0.000285177490437925	0.0011790403931687464
//0.78515625	0.787109375	0.000293346322537486	0.0012254007937887287
//0.787109375	0.7890625	0.00030114391804934393	0.001271133508701728
//0.7890625	0.791015625	0.00030857011413214534	0.0013162145044198974
//0.791015625	0.79296875	0.0003156249731789051	0.0013606198184042493
//0.79296875	0.794921875	0.0003223087806006723	0.0014043255585287871
//0.794921875	0.796875	0.0003286220426373906	0.0014473079025500268
//0.796875	0.798828125	0.0003345654841955536	0.0014895430975818238
//0.798828125	0.80078125	0.0003401400467122625	0.0015310074595754214
//0.80078125	0.802734375	0.0003453468860453001	0.0015716773728046377
//0.802734375	0.8046875	0.0003501873703888422	0.0016115292893561068
//0.8046875	0.806640625	0.00035466307821443294	0.00165053972862449
//0.806640625	0.80859375	0.00035877579623685746	0.001688685276812576
//0.80859375	0.810546875	0.00036252751740455244	0.001725942586436181
//0.810546875	0.8125	0.00036592043891419876	0.0017622883758337702
//0.8125	0.814453125	0.0003689569602491493	0.00179769942868071
//0.814453125	0.81640625	0.0003716396812413481	0.0018321525935080666
//0.81640625	0.818359375	0.00037397140015640526	0.0018656247832258663
//0.818359375	0.8203125	0.0003759551118014952	0.0018980929746507259
//0.8203125	0.822265625	0.00037759400565575373	0.0019295342080377633
//0.822265625	0.82421875	0.00037889146402285287	0.0019599255866167013
//0.82421875	0.826171875	0.0003798510602054389	0.0019892442761320645
//0.826171875	0.828125	0.0003804765567011235	0.002017467504387379
//0.828125	0.830078125	0.0003807719034197239	0.0020445725607932744
//0.830078125	0.83203125	0.0003807985241051182	0.002070536795919386
//0.83203125	0.833984375	0.0003807412359214531	0.002095337621049953
//0.833984375	0.8359375	0.0003803888736757587	0.0021189525077430055
//0.8359375	0.837890625	0.00037971931834053746	0.0021413589873930227
//0.837890625	0.83984375	0.000378737252061418	0.002162534650796951
//0.83984375	0.841796875	0.00037744753579084804	0.0021824571477234473
//0.841796875	0.84375	0.0003758552076267031	0.0022011041864852332
//0.84375	0.845703125	0.0003739654811701467	0.002218453533514403
//0.845703125	0.84765625	0.0003717837439024753	0.0022344830129405547
//0.84765625	0.849609375	0.0003693155555806839	0.0022491705061715855
//0.849609375	0.8515625	0.0003665666466514955	0.002262493951476977
//0.8515625	0.853515625	0.00036354291668359905	0.0022744313435734075
//0.853515625	0.85546875	0.0003602504328178455	0.002284960733212487
//0.85546875	0.857421875	0.0003566954282351561	0.002294060226770418
//0.857421875	0.859375	0.00035288430064190046	0.002301707985839355
//0.859375	0.861328125	0.0003488236107725061	0.0023078822268202195
//0.861328125	0.86328125	0.0003445200809090637	0.0023125612205167085
//0.86328125	0.865234375	0.00033998059341769913	0.0023157232917302077
//0.865234375	0.8671875	0.0003352121893014825	0.0023173468188552875
//0.8671875	0.869140625	0.00033022206676965255	0.0023175762023743486
//0.869140625	0.87109375	0.00032501757982293476	0.0023174102334755186
//0.87109375	0.873046875	0.0003196062368547373	0.0023158920199587304
//0.873046875	0.875	0.0003139956992680111	0.0023127707150524964
//0.875	0.876953125	0.0003081937801075635	0.0023080249074777636
//0.876953125	0.87890625	0.0003022084427076203	0.0023016332375212943
//0.87890625	0.880859375	0.0002960477993544305	0.0022935743966258485
//0.880859375	0.8828125	0.00028972010996371547	0.0022838271269775214
//0.8828125	0.884765625	0.00028323378077276386	0.0022723702210894854
//0.884765625	0.88671875	0.0002765973630469785	0.0022591825213812925
//0.88671875	0.888671875	0.00026981955180067744	0.0022442429197527237
//0.888671875	0.890625	0.0002629091845320022	0.002227530357151458
//0.890625	0.892578125	0.00025587523997164344	0.0022090238231324308
//0.892578125	0.89453125	0.00024872683684534134	0.0021887023554086732
//0.89453125	0.896484375	0.00024147323264987568	0.0021665450393911216
//0.896484375	0.8984375	0.00023412382244241076	0.002142531007715918
//0.8984375	0.900390625	0.00022668813764312553	0.0021166394397580993
//0.900390625	0.90234375	0.00021917584485029007	0.002088849561122697
//0.90234375	0.904296875	0.00021159674466928537	0.002059140643126686
//0.904296875	0.90625	0.00020396077055317966	0.0020274920022468525
//0.90625	0.908203125	0.00019627798765636196	0.0019938829995459133
//0.908203125	0.91015625	0.0001885585917004058	0.0019582930400659495
//0.91015625	0.912109375	0.00018081290785211497	0.0019207015721849703
//0.912109375	0.9140625	0.00017305138961359436	0.0018810880869304081
//0.9140625	0.916015625	0.00016528461772419186	0.0018394321172422404
//0.916015625	0.91796875	0.00015752329907415904	0.0017957132371770699
//0.91796875	0.919921875	0.0001497782656298811	0.001749911061042857
//0.919921875	0.921875	0.00014206047337052822	0.0017020052424519887
//0.921875	0.923828125	0.0001343810012359835	0.0016519754732779138
//0.923828125	0.92578125	0.00012675105008590358	0.001599801482497549
//0.92578125	0.927734375	0.00011918194166977145	0.0015454630348979252
//0.927734375	0.9296875	0.00011168511760780235	0.0014889399296208867
//0.9296875	0.931640625	0.00010427213838256548	0.0014302119985138485
//0.931640625	0.93359375	9.695468234118702e-05	0.001369259104247312
//0.93359375	0.935546875	8.974454470800124e-05	0.0013060611381505935
//0.935546875	0.9375	8.265363660751872e-05	0.001240598017705462
//0.9375	0.939453125	7.569398409758273e-05	0.001172849683622312
//0.939453125	0.94140625	6.887772721258633e-05	0.0011027960964040567
//0.94140625	0.943359375	6.221711901662494e-05	0.0010304172322776416
//0.943359375	0.9453125	5.5724524666457467e-05	0.0009556930783399013
//0.9453125	0.947265625	4.941242048417477e-05	0.0008786036267211595
//0.947265625	0.94921875	4.3293393039403683e-05	0.0007991288675102572
//0.94921875	0.951171875	3.73801382409976e-05	0.0007172487801083925
//0.951171875	0.953125	3.168546043804497e-05	0.0006329433225700637
//0.953125	0.955078125	2.622227153010171e-05	0.0005461924183438459
//0.955078125	0.95703125	2.1003590086530764e-05	0.0004569759396208877
//0.95703125	0.958984375	1.60425404748372e-05	0.00036527368621107564
//0.958984375	0.9609375	1.1352351997888784e-05	0.00027106535845536903
//0.9609375	0.962890625	6.946358039913592e-06	0.0001743305220862204
//0.962890625	0.96484375	2.8379952211676987e-06	7.50485620688125e-05
//0.96484375	0.966796875	4.431579351139663e-06	0.00013124048333050309
//0.966796875	0.96875	7.565409171235735e-06	0.0002382903732419376
//0.96875	0.970703125	1.0346845619852457e-05	0.00034797326978673837
//0.970703125	0.97265625	1.2761948280420959e-05	0.00046031222127372167
//0.97265625	0.974609375	1.479667839606444e-05	0.0005753314363543766
//0.974609375	0.9765625	1.643689965711639e-05	0.0006930567836709959
//0.9765625	0.978515625	1.7668378980754186e-05	0.0008135165639154606
//0.978515625	0.98046875	1.847678728287694e-05	0.0009367427449894604
//0.98046875	0.982421875	1.884770024229429e-05	0.001062773020455939
//0.982421875	0.984375	1.8871628798230592e-05	0.0011916544116639465
//0.984375	0.986328125	1.8766599057329383e-05	0.001323449957222007
//0.986328125	0.98828125	1.8218871194917304e-05	0.0014582520917287502
//0.98828125	0.990234375	1.7189811132305038e-05	0.0015962120787236217
//0.990234375	0.9921875	1.566462109142208e-05	0.0017376135927484548
//0.9921875	0.994140625	1.362841176601311e-05	0.0018830934651287274
//0.994140625	0.99609375	1.1066203041628353e-05	0.0020345246673559737
//0.99609375	0.998046875	7.96292470854348e-06	inf
//0.998046875	1.0	4.303417167699997e-06	inf
//spec: {
//spec:     "cname": "ml2_raw_log_3",
//spec:     "delta": 0.0015454124832034748,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 4.9885324589479936e-05,
//spec:     "operation": "log"
//spec: }
