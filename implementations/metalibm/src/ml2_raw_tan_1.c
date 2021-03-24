/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_tan.py --output src/ml2_raw_tan_1.c --poly-degree 1 \
 *     --fname ml2_raw_tan_1 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_tan_1(double);
double ml2_raw_tan_1(double x){
    double pm_1;
    
    pm_1 = x * 0x1.1edc460f0d5ecp0;
    return pm_1;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f559f249700> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f559f2499d0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f559f249a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f559f249c70> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.78637472589744827899949086713604629039764404296875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f559f2530d0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_tan_1
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f559f2530d0>
//Info: executing pass instantiate_prec on fct ml2_raw_tan_1
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f559f2530d0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_tan_1
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f559f2530d0>
//Info: executing pass check_processor_support on fct ml2_raw_tan_1
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f559f2530d0>
//Info: executing pass debug_tag_node on fct ml2_raw_tan_1
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_tan_1.c
//0.0	0.006135923151542564	0.000739599997367104	inf
//0.006135923151542564	0.012271846303085128	0.0014787379304147367	0.12053454667014987
//0.012271846303085128	0.01840776945462769	0.0022169515956320923	0.12049235798651509
//0.01840776945462769	0.024543692606170255	0.00295377851103658	0.12042204210183936
//0.024543692606170255	0.03067961575771282	0.0036887557767150705	0.1203235968980369
//0.03067961575771282	0.03681553890925538	0.004421419935097397	0.12019701940946817
//0.03681553890925538	0.042951462060797946	0.005151306830872458	0.12004230582262122
//0.042951462060797946	0.04908738521234051	0.005877951470456794	0.11985945147570135
//0.04908738521234051	0.055223308363883075	0.006600887880925073	0.11964845085812911
//0.055223308363883075	0.06135923151542564	0.007319648968311298	0.11940929760994734
//0.06135923151542564	0.0674951546669682	0.00803376637518886	0.11914198452113606
//0.0674951546669682	0.07363107781851076	0.008742770337436787	0.11884650353083602
//0.07363107781851076	0.07976700097005333	0.009446189540098597	0.11852284572648043
//0.07976700097005333	0.08590292412159589	0.01014355097223918	0.11817100134283408
//0.08590292412159589	0.09203884727313846	0.010834379780704017	0.11779095976094063
//0.09203884727313846	0.09817477042468102	0.011518199122683844	0.11738270950697713
//0.09817477042468102	0.10431069357622359	0.012194530016986468	0.11694623825101595
//0.10431069357622359	0.11044661672776615	0.012862891193916082	0.11648153280569357
//0.11044661672776615	0.11658253987930872	0.013522798943658801	0.11598857912478608
//0.11658253987930872	0.12271846303085128	0.014173766963071446	0.11546736230169097
//0.12271846303085128	0.12885438618239384	0.014815306200768931	0.11491786656781548
//0.12885438618239384	0.1349903093339364	0.015446924700403418	0.11434007529086979
//0.1349903093339364	0.14112623248547898	0.0160681274420267	0.11373397097306653
//0.14112623248547898	0.14726215563702152	0.016678416181424724	0.11309953524922463
//0.14726215563702152	0.1533980787885641	0.01727728928731112	0.11243674888477796
//0.1533980787885641	0.15953400194010667	0.017864241576263998	0.11174559177368816
//0.15953400194010667	0.16566992509164924	0.01843876414528769	0.11102604293626109
//0.16566992509164924	0.17180584824319178	0.019000344201878412	0.11027808051686662
//0.17180584824319178	0.17794177139473435	0.01954846489146982	0.1095016817815611
//0.17794177139473435	0.18407769454627693	0.02008260512213145	0.1086968231156121
//0.18407769454627693	0.19021361769781947	0.02060223938638978	0.10786348002092493
//0.19021361769781947	0.19634954084936204	0.021106837580038187	0.10700162711337015
//0.19634954084936204	0.2024854640009046	0.02159586481779861	0.10611123812001194
//0.2024854640009046	0.20862138715244719	0.02206878124569385	0.10519228587623625
//0.20862138715244719	0.21475731030398973	0.022525041849985578	0.10424474232277837
//0.21475731030398973	0.2208932334555323	0.022964096262528894	0.10326857850264934
//0.2208932334555323	0.22702915660707487	0.023385388562390034	0.10226376455796038
//0.22702915660707487	0.23316507975861744	0.023788357073569057	0.1012302697266445
//0.23316507975861744	0.23930100291016	0.02417243415866491	0.1001680623390753
//0.23930100291016	0.24543692606170256	0.02453704600831479	0.09907710981458119
//0.24543692606170256	0.25157284921324513	0.024881612426234802	0.09795737865785517
//0.25157284921324513	0.2577087723647877	0.025205546609683282	0.09680883445525856
//0.2577087723647877	0.2638446955163303	0.02550825492516248	0.09563144187101909
//0.2638446955163303	0.2699806186678728	0.02578913667916795	0.09442516464332101
//0.2699806186678728	0.27611654181941536	0.026047583883789065	0.09318996558028754
//0.27611654181941536	0.28225246497095796	0.026282981016957172	0.09192580655585425
//0.28225246497095796	0.2883883881225005	0.026494704777131024	0.09063264850553258
//0.2883883881225005	0.29452431127404305	0.026682123832201917	0.08931045142206262
//0.29452431127404305	0.30066023442558565	0.026844598562393282	0.08795917435095402
//0.30066023442558565	0.3067961575771282	0.026981480796921534	0.08657877538591435
//0.3067961575771282	0.31293208072867074	0.02709211354417668	0.08516921166416355
//0.31293208072867074	0.31906800388021334	0.027175830715172405	0.08373043936163369
//0.31906800388021334	0.3252039270317559	0.02723195684000626	0.08226241368805287
//0.3252039270317559	0.3313398501832985	0.027259806777061014	0.08076508888191218
//0.3313398501832985	0.337475773334841	0.027262931689677212	0.07923841820531463
//0.337475773334841	0.34361169648638357	0.027258685414668176	0.07768235393870482
//0.34361169648638357	0.34974761963792617	0.027227887364944248	0.07609684737547825
//0.34974761963792617	0.3558835427894687	0.027166696649499302	0.07448184881646912
//0.3558835427894687	0.36201946594101125	0.027074386376705936	0.0728373075643151
//0.36201946594101125	0.36815538909255385	0.026950218410204663	0.07116317191769822
//0.36815538909255385	0.3742913122440964	0.026793443028309136	0.06945938916546023
//0.3742913122440964	0.38042723539563894	0.026603298573961508	0.0677259055805912
//0.38042723539563894	0.38656315854718154	0.026379011094874186	0.06596266641409021
//0.38656315854718154	0.3926990816987241	0.026119793973479993	0.06416961588869628
//0.3926990816987241	0.3988350048502667	0.025824847546297346	0.0623466971924886
//0.3988350048502667	0.4049709280018092	0.02549335871230121	0.06049385247235426
//0.4049709280018092	0.41110685115335177	0.025124500529873917	0.05861102282732215
//0.41110685115335177	0.41724277430489437	0.024717431801892415	0.05669814830176141
//0.41724277430489437	0.4233786974564369	0.024271296648490086	0.05475516787844297
//0.4233786974564369	0.42951462060797946	0.023785224067012087	0.0527820194714624
//0.42951462060797946	0.43565054375952206	0.02325832747866301	0.05077863991902266
//0.43565054375952206	0.4417864669110646	0.022689704261324252	0.04874496497607485
//0.4417864669110646	0.44792239006260715	0.022078435267996542	0.0466809293068155
//0.44792239006260715	0.45405831321414974	0.021423584330299294	0.04458646647703815
//0.45405831321414974	0.4601942363656923	0.020724197746434622	0.04246150894633837
//0.4601942363656923	0.4663301595172349	0.019979303752997092	0.040305988060169246
//0.4663301595172349	0.47246608266877743	0.01918791197998423	0.03811983404174626
//0.47246608266877743	0.47860200582032	0.018349012888333738	0.03590297598379936
//0.47860200582032	0.4847379289718626	0.017461577189283768	0.033655341840170355
//0.4847379289718626	0.4908738521234051	0.016524555244821063	0.031376858417253524
//0.4908738521234051	0.49700977527494766	0.015536876448448875	0.029067451365277518
//0.49700977527494766	0.5031456984264903	0.014497448585471738	0.02672704516942643
//0.5031456984264903	0.5092816215780328	0.013405157171957536	0.024355563140797672
//0.5092816215780328	0.5154175447295753	0.012258864771499416	0.021952927407195223
//0.5154175447295753	0.5215534678811179	0.01105741028885859	0.019519058903754938
//0.5215534678811179	0.5276893910326605	0.009799608239527524	0.017053877363400537
//0.5276893910326605	0.5338253141842031	0.008484247994207486	0.014557301307127554
//0.5338253141842031	0.5399612373357456	0.007110092997147362	0.01202924803411294
//0.5399612373357456	0.5460971604872882	0.00567587995724083	0.009469633611647951
//0.5460971604872882	0.5522330836388307	0.004180318010726399	0.0068783728648918
//0.5522330836388307	0.5583690067903734	0.002622087854279552	0.0042553793664435735
//0.5583690067903734	0.5645049299419159	0.0009998408472277494	0.0016005654257298177
//0.5645049299419159	0.5706408530934585	0.0024422505816826157	0.003804880925636909
//0.5706408530934585	0.576776776245001	0.004264947511045895	0.006555695131444223
//0.576776776245001	0.5829126993965436	0.006157368339959133	0.00933869339238443
//0.5829126993965436	0.5890486225480861	0.008121023040210508	0.012153969880718263
//0.5890486225480861	0.5951845456996288	0.010157457035351806	0.015001620099575437
//0.5951845456996288	0.6013204688511713	0.01226825235579349	0.017881740894934182
//0.6013204688511713	0.6074563920027138	0.01445502883746321	0.02079443046780776
//0.6074563920027138	0.6135923151542564	0.016719445365993804	0.02373978838664107
//0.6135923151542564	0.6197282383057989	0.019063201168508046	0.026717915599920573
//0.6197282383057989	0.6258641614573415	0.02148803715517448	0.029728914449000693
//0.6258641614573415	0.6320000846088841	0.023995737312822257	0.0327728886811501
//0.6320000846088841	0.6381360077604267	0.026588130153022905	0.035849943462821186
//0.6381360077604267	0.6442719309119692	0.02926709021717438	0.038960185393146184
//0.6442719309119692	0.6504078540635118	0.03203453964125782	0.04210372251766355
//0.6504078540635118	0.6565437772150543	0.0348924497830803	0.04528066434227803
//0.6565437772150543	0.662679700366597	0.03784284291496914	0.04849112184745831
//0.662679700366597	0.6688156235181395	0.040887793985044	0.05173520750267576
//0.6688156235181395	0.674951546669682	0.04402943245036459	0.05501303528108835
//0.674951546669682	0.6810874698212246	0.047269944185433094	0.0583247206744734
//0.6810874698212246	0.6872233929727671	0.05061157346972381	0.06167038070841337
//0.6872233929727671	0.6933593161243097	0.05405662505811765	0.06505013395773866
//0.6933593161243097	0.6994952392758523	0.057607466338337285	0.0684641005622316
//0.6994952392758523	0.7056311624273949	0.06126652957971114	0.07191240224259579
//0.7056311624273949	0.7117670855789374	0.06503631427784133	0.07539516231669552
//0.7117670855789374	0.71790300873048	0.06891938960001395	0.078912505716069
//0.71790300873048	0.7240389318820225	0.0729183969364703	0.08246455900272072
//0.7240389318820225	0.7301748550335652	0.07703605256295638	0.08605145038619694
//0.7301748550335652	0.7363107781851077	0.08127515042028657	0.0896733097409494
//0.7363107781851077	0.7424467013366502	0.08563856501699686	0.09333026862399196
//0.7424467013366502	0.7485826244881928	0.09012925446152587	0.09702246029285497
//0.7485826244881928	0.7547185476397353	0.09475026363074876	0.10075001972384269
//0.7547185476397353	0.7608544707912779	0.09950472748210273	0.10451308363059861
//0.7608544707912779	0.7669903939428205	0.1043958745169845	0.10831179048298403
//0.7669903939428205	0.7731263170943631	0.10942703040357289	0.11214628052627544
//0.7731263170943631	0.7792622402459056	0.11460162176773503	0.11601669580068574
//0.7792622402459056	0.7853981633974482	0.11992318016121535	0.11992318016121539
//spec: {
//spec:     "cname": "ml2_raw_tan_1",
//spec:     "delta": 0.11992318016121535,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.7853981633974483
//spec:     ],
//spec:     "epsilon": 0.0016005654257298177,
//spec:     "operation": "tan"
//spec: }