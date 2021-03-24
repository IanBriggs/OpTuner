/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_3.c --poly-degree 3 \
 *     --fname ml2_raw_tan_3 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_3(double);
double ml2_raw_tan_3(double x){
    double x2_;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    tmp = x2_ * 0x1.c20c821071907p-2;
    tmp1 = 0x1.fb95e455580fdp-1 + tmp;
    tmp2 = x * tmp1;
    return tmp2;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fadca3ca760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fadca3caa30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fadca3caaf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fadca3cacd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fadca3d44f0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_3
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fadca3d44f0>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_3
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fadca3d44f0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_3
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fadca3d44f0>
//Info: executing pass check_processor_support on fct ml2_raw_tan_3
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fadca3d44f0>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_3
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_3.c
//0.0	0.006135923151542564	5.2879651895430066e-05	inf
//0.006135923151542564	0.012271846303085128	0.00010561218101561346	0.008617935224420312
//0.012271846303085128	0.01840776945462769	0.00015805060377663984	0.00860562271443264
//0.01840776945462769	0.024543692606170255	0.0002100482150663767	0.008585111420434565
//0.024543692606170255	0.03067961575771282	0.00026145872770324066	0.00855641567719629
//0.03067961575771282	0.03681553890925538	0.00031213641216268123	0.008519555554992005
//0.03681553890925538	0.042951462060797946	0.00036193623666107554	0.00847455686119599
//0.042951462060797946	0.04908738521234051	0.00041071400768716824	0.008421451142336406
//0.04908738521234051	0.055223308363883075	0.0004583265110715746	0.008360275686604903
//0.055223308363883075	0.06135923151542564	0.000504631653685576	0.008291073526824495
//0.06135923151542564	0.0674951546669682	0.0005494886058610669	0.008213893443875612
//0.0674951546669682	0.07363107781851076	0.0005927579446242861	0.008128789970580433
//0.07363107781851076	0.07976700097005333	0.000634301797837006	0.00803582339604811
//0.07976700097005333	0.08590292412159589	0.0006739839893396203	0.007935059770479326
//0.08590292412159589	0.09203884727313846	0.0007116701851919262	0.007826570910433
//0.09203884727313846	0.09817477042468102	0.0007472280411084735	0.007710434404555486
//0.09817477042468102	0.10431069357622359	0.0007805273511867358	0.0075867336197735355
//0.10431069357622359	0.11044661672776615	0.0008114401980278021	0.0074555577079522825
//0.11044661672776615	0.11658253987930872	0.0008398411043508463	0.0073170016130196195
//0.11658253987930872	0.12271846303085128	0.0008656071862043176	0.00717116607855841
//0.12271846303085128	0.12885438618239384	0.0008886183078786098	0.007018157655868199
//0.12885438618239384	0.1349903093339364	0.0009087572386268013	0.006858088712497367
//0.1349903093339364	0.14112623248547898	0.0009259098113024096	0.006691077441249286
//0.14112623248547898	0.14726215563702152	0.0009399650830247548	0.006517247869661621
//0.14726215563702152	0.1533980787885641	0.0009508154979854959	0.00633672986996334
//0.1533980787885641	0.15953400194010667	0.0009583570525118074	0.006149659169509632
//0.15953400194010667	0.16566992509164924	0.0009624894625046343	0.0059561773616978245
//0.16566992509164924	0.17180584824319178	0.0009633028612162707	0.005756431917366216
//0.17180584824319178	0.17794177139473435	0.0009631163333730468	0.005550576196678219
//0.17794177139473435	0.18407769454627693	0.0009601453325886706	0.005338769461494237
//0.18407769454627693	0.19021361769781947	0.0009534883649872487	0.00512117688823386
//0.19021361769781947	0.19634954084936204	0.0009430617509475902	0.004897969581230984
//0.19634954084936204	0.2024854640009046	0.0009287864075815963	0.004669324586584655
//0.2024854640009046	0.20862138715244719	0.0009105880330726109	0.004435424906508462
//0.20862138715244719	0.21475731030398973	0.0008883972943031129	0.00419645951418147
//0.21475731030398973	0.2208932334555323	0.0008621500179167179	0.003952623369103759
//0.2208932334555323	0.22702915660707487	0.0008317873849636042	0.00370411743295977
//0.22702915660707487	0.23316507975861744	0.0007972561292828337	0.003451148685992733
//0.23316507975861744	0.23930100291016	0.0007585087397796029	0.003193930143893599
//0.23930100291016	0.24543692606170256	0.0007155036667602526	0.002932680875207997
//0.24543692606170256	0.25157284921324513	0.0006682055324929105	0.0026676260192649527
//0.25157284921324513	0.2577087723647877	0.0006165853461666989	0.002398996804630438
//0.2577087723647877	0.2638446955163303	0.000560620723428568	0.0021270305680913567
//0.2638446955163303	0.2699806186678728	0.0005002961106815645	0.0018519707741716089
//0.2699806186678728	0.27611654181941536	0.0004356030143354142	0.0015740670351860914
//0.27611654181941536	0.28225246497095796	0.000366540235206025	0.0012935751318361795
//0.28225246497095796	0.2883883881225005	0.0002931141082673374	0.0010107570343511128
//0.2883883881225005	0.29452431127404305	0.0002153387479658785	0.0007258809241797833
//0.29452431127404305	0.30066023442558565	0.00013323629931563191	0.0004392212162375097
//0.30066023442558565	0.3067961575771282	4.683719499845052e-05	0.00015105858171252144
//0.3067961575771282	0.31293208072867074	0.00013868622505503652	0.0004286213601729419
//0.31293208072867074	0.31906800388021334	0.00023770583438427614	0.0007195458305996155
//0.31906800388021334	0.3252039270317559	0.00034081212647698255	0.0010107875041322526
//0.3252039270317559	0.3313398501832985	0.0004479291468106416	0.00130203406618417
//0.3313398501832985	0.337475773334841	0.0005589709708114774	0.0015929667970221652
//0.337475773334841	0.34361169648638357	0.000673841397690713	0.0018832605448988451
//0.34361169648638357	0.34974761963792617	0.0007924336361531393	0.00217258369858269
//0.34974761963792617	0.3558835427894687	0.0009146299816660731	0.002460598159279913
//0.3558835427894687	0.36201946594101125	0.0010403014849647378	0.0027469593119420037
//0.36201946594101125	0.36815538909255385	0.0011693076114575145	0.0030313159959527575
//0.36815538909255385	0.3742913122440964	0.001301495891181264	0.0033133104751883443
//0.3742913122440964	0.38042723539563894	0.001436701558943119	0.0035925784074439145
//0.38042723539563894	0.38656315854718154	0.0015747471842706207	0.003868748813220009
//0.38656315854718154	0.3926990816987241	0.001715442290776899	0.004141444043861965
//0.3926990816987241	0.3988350048502667	0.0018585829645316357	0.0044102797490452265
//0.3988350048502667	0.4049709280018092	0.0020039514510118888	0.004674864843599447
//0.4049709280018092	0.41110685115335177	0.002151315740189321	0.004934801473663989
//0.41110685115335177	0.41724277430489437	0.0023004291392920264	0.005189684982167322
//0.41724277430489437	0.4233786974564369	0.002451029832759891	0.005439103873622639
//0.4233786974564369	0.42951462060797946	0.002602840428892213	0.005682639778231805
//0.42951462060797946	0.43565054375952206	0.002755567492665113	0.005919867415289617
//0.43565054375952206	0.4417864669110646	0.0029089010641740122	0.00615035455588015
//0.4417864669110646	0.44792239006260715	0.003062514162133097	0.006373661984856779
//0.44792239006260715	0.45405831321414974	0.0032160622718391697	0.006589343462097285
//0.45405831321414974	0.4601942363656923	0.003369182816981515	0.006796945683025282
//0.4601942363656923	0.4663301595172349	0.003521494614652403	0.0069960082383890105
//0.4663301595172349	0.47246608266877743	0.0036725973128842026	0.007186063573288029
//0.47246608266877743	0.47860200582032	0.0038220708100098074	0.007366636945439243
//0.47860200582032	0.4847379289718626	0.003969474655110682	0.007537246382671577
//0.4847379289718626	0.4908738521234051	0.004114347428784792	0.007697402639640366
//0.4908738521234051	0.49700977527494766	0.004256206103431362	0.007846609153751103
//0.49700977527494766	0.5031456984264903	0.004394545382213094	0.00798436200028248
//0.5031456984264903	0.5092816215780328	0.004528837015817744	0.008110149846697846
//0.5092816215780328	0.5154175447295753	0.00465852909610128	0.00822345390613551
//0.5154175447295753	0.5215534678811179	0.004783045325650887	0.008323747890065574
//0.5215534678811179	0.5276893910326605	0.0049017842622625495	0.008410497960103224
//0.5276893910326605	0.5338253141842031	0.005014118537279878	0.008483162678966736
//0.5338253141842031	0.5399612373357456	0.005119394046691259	0.008541192960568635
//0.5399612373357456	0.5460971604872882	0.005216929113829923	0.00858403201922821
//0.5460971604872882	0.5522330836388307	0.005306013622466072	0.008611115317993231
//0.5522330836388307	0.5583690067903734	0.005385908119021884	0.008621870516058562
//0.5583690067903734	0.5645049299419159	0.0054558428825785795	0.00862204035003066
//0.5645049299419159	0.5706408530934585	0.005515016961279711	0.008615717415269045
//0.5706408530934585	0.576776776245001	0.005562597173666211	0.00859206790569379
//0.576776776245001	0.5829126993965436	0.0055977170734062415	0.008550325910258673
//0.5829126993965436	0.5890486225480861	0.005619475875806344	0.008489887328423706
//0.5890486225480861	0.5951845456996288	0.005626937346703664	0.00841013997889147
//0.5951845456996288	0.6013204688511713	0.005626937344409449	0.008310463541332684
//0.6013204688511713	0.6074563920027138	0.005619128635899814	0.008190229497114586
//0.6074563920027138	0.6135923151542564	0.005595039101444505	0.008048801069017543
//0.6135923151542564	0.6197282383057989	0.005553619042505401	0.00788553315992499
//0.6197282383057989	0.6258641614573415	0.005493778419054451	0.0076997722904714825
//0.6258641614573415	0.6320000846088841	0.005414385508017823	0.0074908565356333464
//0.6320000846088841	0.6381360077604267	0.005314265509661084	0.00725811546024604
//0.6381360077604267	0.6442719309119692	0.005192199099507432	0.007000870053432074
//0.6442719309119692	0.6504078540635118	0.0050469209232536175	0.006718432661922927
//0.6504078540635118	0.6565437772150543	0.004877118032013234	0.0064101069222581054
//0.6565437772150543	0.662679700366597	0.004681428255073907	0.006075187691844101
//0.662679700366597	0.6688156235181395	0.004458438507203052	0.005712960978855664
//0.6688156235181395	0.674951546669682	0.004206683027375711	0.005322703870961416
//0.674951546669682	0.6810874698212246	0.003924641545626905	0.004903684462855485
//0.6810874698212246	0.6872233929727671	0.0036107373745491696	0.004455161782576413
//0.6872233929727671	0.6933593161243097	0.0032633354217629137	0.003976385716594236
//0.6933593161243097	0.6994952392758523	0.0028807401194819496	0.003466596933646197
//0.6994952392758523	0.7056311624273949	0.002461193267078316	0.0029250268073011823
//0.7056311624273949	0.7117670855789374	0.002002871782318321	0.0023508973372325112
//0.7117670855789374	0.71790300873048	0.0015038853566945517	0.0017434210691782558
//0.71790300873048	0.7240389318820225	0.0009622740100156426	0.0011018010135680108
//0.7240389318820225	0.7301748550335652	0.00037600553913501474	0.00042523056279424233
//0.7301748550335652	0.7363107781851077	0.0009390087949054672	0.001036036550896573
//0.7363107781851077	0.7424467013366502	0.0016722047332257193	0.0018223952831915447
//0.7424467013366502	0.7485826244881928	0.002458963880903814	0.0026470287247122113
//0.7485826244881928	0.7547185476397353	0.0033017219277202193	0.003510792863192666
//0.7547185476397353	0.7608544707912779	0.00420300464401738	0.004414553830510129
//0.7608544707912779	0.7669903939428205	0.005165431344097303	0.0053591879955474965
//0.7669903939428205	0.7731263170943631	0.006191718509044111	0.006345582058601868
//0.7731263170943631	0.7792622402459056	0.0072846835776301825	0.007374633147365414
//0.7792622402459056	0.7853981633974482	0.00844724891450526	0.00844724891450527
//spec: {
//spec:     "cname": "ml2_raw_tan_3",
//spec:     "delta": 0.00844724891450526,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 0.00015105858171252144,
//spec:     "operation": "tan"
//spec: }
