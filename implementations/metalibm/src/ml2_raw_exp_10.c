/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_10.c --poly-degree 10 \
 *     --fname ml2_raw_exp_10 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_exp_10(double);
double ml2_raw_exp_10(double x){
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
    
    pm_9 = x * 0x1.a19a72400a25ap-22;
    pa_9 = 0x1.57bafa3b0c196p-19 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = 0x1.a32d1adba0108p-16 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.9fe14d92dea1fp-13 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = 0x1.6c195b8f87206p-10 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.1110fd8fcdafep-7 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = 0x1.5555560a8f42ap-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.5555555184dbap-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.000000000a797p-1 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.ffffffffffd36p-1 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.0000000000001p0 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f52a320c6a0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f52a320c970> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f52a320ca30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f52a320cc10> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f52a321bbe0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_10
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f52a321bbe0>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_10
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f52a321bbe0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_10
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f52a321bbe0>
//Info: executing pass check_processor_support on fct ml2_raw_exp_10
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f52a321bbe0>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_10
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_10.c
//0.0	0.0054152123481245725	3.345407049250313e-16	3.345407049250313e-16
//0.0054152123481245725	0.010830424696249145	3.1592861798181395e-16	3.131376322878163e-16
//0.010830424696249145	0.016245637044373717	3.2954929835103693e-16	3.2545900262118945e-16
//0.016245637044373717	0.02166084939249829	3.193434092014407e-16	3.141973417966608e-16
//0.02166084939249829	0.027076061740622864	2.552534522605779e-16	2.4978394119709117e-16
//0.027076061740622864	0.032491274088747434	1.713444754002974e-16	1.6650695098146406e-16
//0.032491274088747434	0.03790648643687201	2.528090027911075e-16	2.440453613284371e-16
//0.03790648643687201	0.04332169878499658	3.1135449852833635e-16	2.987942712979716e-16
//0.04332169878499658	0.048736911133121154	3.4330793935919826e-16	3.2761747235428324e-16
//0.048736911133121154	0.05415212348124573	3.500248307534254e-16	3.3260383406503606e-16
//0.05415212348124573	0.0595673358293703	3.4949844376948057e-16	3.310756293923194e-16
//0.0595673358293703	0.06498254817749487	3.3866339315637975e-16	3.1907918460683453e-16
//0.06498254817749487	0.07039776052561944	3.013373418256968e-16	2.823783237178599e-16
//0.07039776052561944	0.07581297287374401	2.500421389756423e-16	2.330450039828301e-16
//0.07581297287374401	0.08122818522186859	1.9030114874698891e-16	1.7640718042807986e-16
//0.08122818522186859	0.08664339756999316	2.0617255304410435e-16	1.8973771344579225e-16
//0.08664339756999316	0.09205860991811773	2.6294307872543505e-16	2.4049422891309025e-16
//0.09205860991811773	0.09747382226624231	3.1063722338938995e-16	2.8246351778424267e-16
//0.09747382226624231	0.10288903461436688	3.468989111409098e-16	3.1365793516670936e-16
//0.10288903461436688	0.10830424696249145	3.702599298866137e-16	3.329306760061443e-16
//0.10830424696249145	0.11371945931061603	3.800995977818311e-16	3.399182419616013e-16
//0.11371945931061603	0.1191346716587406	3.87979429082324e-16	3.461288609628184e-16
//0.1191346716587406	0.12454988400686517	3.846801327191259e-16	3.4147610266417176e-16
//0.12454988400686517	0.12996509635498973	3.765193070988933e-16	3.3242664369797903e-16
//0.12996509635498973	0.13538030870311432	3.493186405965591e-16	3.0674584622569176e-16
//0.13538030870311432	0.14079552105123888	3.127427799105986e-16	2.7314447599278393e-16
//0.14079552105123888	0.14621073339936347	2.6890633023348344e-16	2.335900592588489e-16
//0.14621073339936347	0.15162594574748803	2.201135322581591e-16	1.9017277744436887e-16
//0.15162594574748803	0.15704115809561262	2.059399086032558e-16	1.7675822513054961e-16
//0.15704115809561262	0.16245637044373717	2.571799995046199e-16	2.1936420785077904e-16
//0.16245637044373717	0.16787158279186176	3.043668838598862e-16	2.580782009670598e-16
//0.16787158279186176	0.17328679513998632	3.4571374135279584e-16	2.914566268914921e-16
//0.17328679513998632	0.17870200748811088	3.797387744337795e-16	3.1834348441166786e-16
//0.17870200748811088	0.18411721983623547	4.0536137823570824e-16	3.379421926210752e-16
//0.18411721983623547	0.18953243218436003	4.216791026284328e-16	3.496214490017658e-16
//0.18953243218436003	0.19494764453248462	4.283325046389254e-16	3.5322280542804627e-16
//0.19494764453248462	0.20036285688060917	4.292415288954051e-16	3.531784124302624e-16
//0.20036285688060917	0.20577806922873376	4.261357373838696e-16	3.487638867077319e-16
//0.20577806922873376	0.21119328157685832	4.1363781528561104e-16	3.3670689183143483e-16
//0.21119328157685832	0.2166084939249829	3.92310139205931e-16	3.1762117493708007e-16
//0.2166084939249829	0.22202370627310747	3.6304116362904274e-16	2.923371365535891e-16
//0.22202370627310747	0.22743891862123206	3.4084104540711424e-16	2.729783360328885e-16
//0.22743891862123206	0.23285413096935662	3.008989339569823e-16	2.396873978800985e-16
//0.23285413096935662	0.2382693433174812	2.5537745013016006e-16	2.0232767298331252e-16
//0.2382693433174812	0.24368455566560576	2.2356332490830204e-16	1.7602563503722274e-16
//0.24368455566560576	0.24909976801373035	2.7338815338640043e-16	2.139176178656231e-16
//0.24909976801373035	0.25451498036185494	3.387363378202825e-16	2.635056985376884e-16
//0.25451498036185494	0.25993019270997947	3.8243430626428987e-16	2.9578267721935717e-16
//0.25993019270997947	0.26534540505810406	4.209526413918521e-16	3.237310312974411e-16
//0.26534540505810406	0.27076061740622864	4.531320641161189e-16	3.4653352848846405e-16
//0.27076061740622864	0.2761758297543532	4.780172787556687e-16	3.6354635162629915e-16
//0.2761758297543532	0.28159104210247776	4.948802514747321e-16	3.7431191719242773e-16
//0.28159104210247776	0.28700625445060235	5.032375509744346e-16	3.7856700110044366e-16
//0.28700625445060235	0.29242146679872694	5.048097229788947e-16	3.785778796512037e-16
//0.29242146679872694	0.29783667914685147	5.039504368116153e-16	3.7617580996773544e-16
//0.29783667914685147	0.30325189149497606	4.948745340987776e-16	3.674060526823415e-16
//0.30325189149497606	0.30866710384310064	4.773786816710373e-16	3.525026742877889e-16
//0.30866710384310064	0.31408231619122523	4.519923822270653e-16	3.319546110452709e-16
//0.31408231619122523	0.31949752853934976	4.1947321575058597e-16	3.0640801115921335e-16
//0.31949752853934976	0.32491274088747435	3.807857001434471e-16	2.7664613941474806e-16
//0.32491274088747435	0.33032795323559894	3.370730940548461e-16	2.435658453877594e-16
//0.33032795323559894	0.3357431655837235	2.896267351367961e-16	2.081512236234568e-16
//0.3357431655837235	0.34115837793184806	2.67787927774205e-16	1.912627580079137e-16
//0.34115837793184806	0.34657359027997264	3.204627980504733e-16	2.274825409836477e-16
//0.34657359027997264	0.35198880262809723	3.706213079508171e-16	2.615344597952477e-16
//0.35198880262809723	0.35740401497622176	4.1713772486154887e-16	2.9266424195861312e-16
//0.35740401497622176	0.36281922732434635	4.586813363548875e-16	3.19990476477258e-16
//0.36281922732434635	0.36823443967247094	4.940120141295132e-16	3.427140006926279e-16
//0.36823443967247094	0.3736496520205955	5.220522779887739e-16	3.6016543012447247e-16
//0.3736496520205955	0.37906486436872006	5.419191832923749e-16	3.7182362002901996e-16
//0.37906486436872006	0.38448007671684464	5.529515176840458e-16	3.7733091398145957e-16
//0.38448007671684464	0.38989528906496923	5.556347571922921e-16	3.777295783564156e-16
//0.38989528906496923	0.3953105014130938	5.559411709642079e-16	3.7644320933337316e-16
//0.3953105014130938	0.40072571376121835	5.4831933500852485e-16	3.6927715090313656e-16
//0.40072571376121835	0.40614092610934294	5.591578977257153e-16	3.745428516570111e-16
//0.40614092610934294	0.4115561384574675	5.333321151253385e-16	3.55314531296398e-16
//0.4115561384574675	0.4169713508055921	4.992534773806258e-16	3.308144593902013e-16
//0.4169713508055921	0.42238656315371664	4.578357269020594e-16	3.0173198773514973e-16
//0.42238656315371664	0.42780177550184123	4.1023203728963026e-16	2.6889915569791323e-16
//0.42780177550184123	0.4332169878499658	3.638216198360515e-16	2.3719015105424346e-16
//0.4332169878499658	0.43863220019809035	3.1819853152051317e-16	2.062062986754739e-16
//0.43863220019809035	0.44404741254621494	3.7787256000613975e-16	2.4337425648544276e-16
//0.44404741254621494	0.4494626248943395	4.355081071239479e-16	2.7883444165883286e-16
//0.4494626248943395	0.4548778372424641	4.892682720935516e-16	3.11445373733348e-16
//0.4548778372424641	0.46029304959058864	5.373740871284137e-16	3.4012765269179506e-16
//0.46029304959058864	0.46570826193871323	5.781617164354849e-16	3.6389741822898067e-16
//0.46570826193871323	0.4711234742868378	6.101388031179879e-16	3.81900043007104e-16
//0.4711234742868378	0.4765386866349624	6.320395439665822e-16	3.934411388690896e-16
//0.4765386866349624	0.48195389898308694	6.428770812704968e-16	3.9801393930974066e-16
//0.48195389898308694	0.4873691113312115	6.448398811614179e-16	3.979690746892927e-16
//0.4873691113312115	0.4927843236793361	6.433904342533751e-16	3.951963225179372e-16
//0.4927843236793361	0.4981995360274607	6.304893544816198e-16	3.8518045854546153e-16
//0.4981995360274607	0.5036147483755853	6.515974837366293e-16	3.9592610317152235e-16
//0.5036147483755853	0.5090299607237099	6.156334237057595e-16	3.7205332135217794e-16
//0.5090299607237099	0.5144451730718343	5.692299989390311e-16	3.4215190629694457e-16
//0.5144451730718343	0.5198603854199589	5.137696125391104e-16	3.0714806771561947e-16
//0.5198603854199589	0.5252755977680835	4.510458628921776e-16	2.68193496127513e-16
//0.5252755977680835	0.5306908101162081	3.9854109817358906e-16	2.3555453157521636e-16
//0.5306908101162081	0.5361060224643327	4.721971020969621e-16	2.773782508422002e-16
//0.5361060224643327	0.5415212348124573	5.427427961644722e-16	3.169335515355383e-16
//0.5415212348124573	0.5469364471605819	6.071472809274571e-16	3.5249951284589317e-16
//0.5469364471605819	0.5523516595087063	6.624112608642984e-16	3.8241096868329225e-16
//0.5523516595087063	0.5577668718568309	7.056955943836155e-16	4.051308116336046e-16
//0.5577668718568309	0.5631820842049555	7.344599919947814e-16	4.193265827332742e-16
//0.5631820842049555	0.5685972965530801	7.466100845979236e-16	4.239527208322841e-16
//0.5685972965530801	0.5740125089012047	7.484453466539897e-16	4.2382313878676248e-16
//0.5740125089012047	0.5794277212493293	7.424287948651892e-16	4.181811190887965e-16
//0.5794277212493293	0.5848429335974539	7.176105381274289e-16	4.0201902267304847e-16
//0.5848429335974539	0.5902581459455785	6.740582477711038e-16	3.755807544004156e-16
//0.5902581459455785	0.5956733582937029	6.129097564090448e-16	3.3966500216880224e-16
//0.5956733582937029	0.6010885706418275	5.364064603287562e-16	2.9566256715352114e-16
//0.6010885706418275	0.6065037829899521	4.479511430484119e-16	2.455732831914545e-16
//0.6065037829899521	0.6119189953380767	5.100747567061975e-16	2.777413415393793e-16
//0.6119189953380767	0.6173342076862013	6.063365107117466e-16	3.2816855843329037e-16
//0.6173342076862013	0.6227494200343259	6.902702320839203e-16	3.714292599841546e-16
//0.6227494200343259	0.6281646323824505	7.541296526795202e-16	4.035022975005753e-16
//0.6281646323824505	0.6335798447305749	7.903234866769126e-16	4.205361052151881e-16
//0.6335798447305749	0.6389950570786995	7.996561354116863e-16	4.238163388468093e-16
//0.6389950570786995	0.6444102694268241	7.968832139331279e-16	4.2061305553823756e-16
//0.6444102694268241	0.6498254817749487	7.593196793876792e-16	3.986216019185073e-16
//0.6498254817749487	0.6552406941230733	6.807317608883188e-16	3.55435148527459e-16
//0.6552406941230733	0.6606559064711979	5.623592693967437e-16	2.9204277680905567e-16
//0.6606559064711979	0.6660711188193225	5.608115807965576e-16	2.892283470270078e-16
//0.6660711188193225	0.671486331167447	7.164073021635153e-16	3.6717324290161305e-16
//0.671486331167447	0.6769015435155715	8.187645988969293e-16	4.172127388860911e-16
//0.6769015435155715	0.6823167558636961	8.338453674409019e-16	4.232396360793909e-16
//0.6823167558636961	0.6877319682118207	8.119109045653319e-16	4.103759819316149e-16
//0.6877319682118207	0.6931471805599453	8.239838622391549e-16	4.1341718111957746e-16
//spec: {
//spec:     "cname": "ml2_raw_exp_10",
//spec:     "delta": 8.338453674409019e-16,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 1.6650695098146406e-16,
//spec:     "operation": "exp"
//spec: }