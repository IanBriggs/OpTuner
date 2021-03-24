/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_exp.py --output src/ml2_raw_exp_5.c --poly-degree 5 \
 *     --fname ml2_raw_exp_5 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_exp_5(double);
double ml2_raw_exp_5(double x){
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
    
    pm_4 = x * 0x1.80830c5a77396p-7;
    pa_4 = 0x1.3f09e9fd443c3p-5 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.574f0ecb63e0cp-3 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = 0x1.ffd88c57c1164p-2 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.00008b8fda91cp0 + pm_1;
    tmp = x * pa_1;
    tmp1 = 0x1.fffffdb903da7p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f6f84b716a0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f6f84b71970> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f6f84b71a30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f6f84b71c10> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;0.69412374305994528622676398299518041312694549560546875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6f84b7cd90>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_exp_5
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6f84b7cd90>
//Info: executing pass instantiate_prec on fct ml2_raw_exp_5
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6f84b7cd90>
//Info: executing pass sub_expr_sharing on fct ml2_raw_exp_5
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6f84b7cd90>
//Info: executing pass check_processor_support on fct ml2_raw_exp_5
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f6f84b7cd90>
//Info: executing pass debug_tag_node on fct ml2_raw_exp_5
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_exp_5.c
//0.0	0.0054152123481245725	6.786838047259933e-08	6.786838047259933e-08
//0.0054152123481245725	0.010830424696249145	2.7084114752904256e-08	2.6937844918803094e-08
//0.010830424696249145	0.016245637044373717	3.150241995949761e-08	3.0994777729874565e-08
//0.016245637044373717	0.02166084939249829	5.092659038210682e-08	4.983533856593544e-08
//0.02166084939249829	0.027076061740622864	6.476709923787867e-08	6.303698923925663e-08
//0.027076061740622864	0.032491274088747434	7.370933005442307e-08	7.135290887178111e-08
//0.032491274088747434	0.03790648643687201	7.839167926766545e-08	7.54757417653568e-08
//0.03790648643687201	0.04332169878499658	7.947052961162965e-08	7.621077005180712e-08
//0.04332169878499658	0.048736911133121154	7.940731594566759e-08	7.604070626103939e-08
//0.048736911133121154	0.05415212348124573	7.730591542374014e-08	7.36286021981701e-08
//0.05415212348124573	0.0595673358293703	7.259536677245401e-08	6.876871913079388e-08
//0.0595673358293703	0.06498254817749487	6.57434539292048e-08	6.194164736048874e-08
//0.06498254817749487	0.07039776052561944	5.71795103200623e-08	5.35819937880683e-08
//0.07039776052561944	0.07581297287374401	4.729604693332074e-08	4.4081004695446426e-08
//0.07581297287374401	0.08122818522186859	3.6450353555463205e-08	3.378909729686887e-08
//0.08122818522186859	0.08664339756999316	2.4966073133183815e-08	2.301830210788351e-08
//0.08664339756999316	0.09205860991811773	1.313474907179404e-08	1.204461800531395e-08
//0.09205860991811773	0.09747382226624231	1.055426110974879e-08	9.574045590256888e-09
//0.09747382226624231	0.10288903461436688	2.1975813899720317e-08	1.9827174491822873e-08
//0.10288903461436688	0.10830424696249145	3.286924137590265e-08	2.949536289357629e-08
//0.10830424696249145	0.11371945931061603	4.308124566555137e-08	3.8450369575336726e-08
//0.11371945931061603	0.1191346716587406	5.248192112080997e-08	4.658758452096803e-08
//0.1191346716587406	0.12454988400686517	6.096340054611284e-08	5.3824233850458366e-08
//0.12454988400686517	0.12996509635498973	6.843852975499283e-08	6.009765786823802e-08
//0.12996509635498973	0.13538030870311432	7.483957042995217e-08	6.536366041284666e-08
//0.13538030870311432	0.14079552105123888	8.011693165359151e-08	6.959492807079606e-08
//0.14079552105123888	0.14621073339936347	8.423793007313485e-08	7.277951748252346e-08
//0.14621073339936347	0.15162594574748803	8.718557897682389e-08	7.491940927452348e-08
//0.15162594574748803	0.15704115809561262	8.895740639217245e-08	7.602912702755522e-08
//0.15704115809561262	0.16245637044373717	8.956430237156979e-08	7.621077013892523e-08
//0.16245637044373717	0.16787158279186176	8.956472771892346e-08	7.613441976484753e-08
//0.16787158279186176	0.17328679513998632	8.902939562455804e-08	7.527100646276175e-08
//0.17328679513998632	0.17870200748811088	8.738695965114337e-08	7.348338111056741e-08
//0.17870200748811088	0.18411721983623547	8.468134854861271e-08	7.082367687152128e-08
//0.18411721983623547	0.18953243218436003	8.096596263697715e-08	6.735058792137421e-08
//0.18953243218436003	0.19494764453248462	7.630224407649479e-08	6.31283475635348e-08
//0.19494764453248462	0.20036285688060917	7.075870263586189e-08	5.822576124501856e-08
//0.20036285688060917	0.20577806922873376	6.440997177535942e-08	5.271529311974739e-08
//0.20577806922873376	0.21119328157685832	5.733589520955185e-08	4.66722048289449e-08
//0.21119328157685832	0.2166084939249829	4.9620644115084617e-08	4.017374519107268e-08
//0.2166084939249829	0.22202370627310747	4.135186514996352e-08	3.329838951604283e-08
//0.22202370627310747	0.22743891862123206	3.261985946549838e-08	2.6125127291611475e-08
//0.22743891862123206	0.23285413096935662	2.3516792797472965e-08	1.873279693501819e-08
//0.23285413096935662	0.2382693433174812	1.4135937004175138e-08	1.119946654915716e-08
//0.2382693433174812	0.24368455566560576	5.084855175651877e-09	3.985178056539313e-09
//0.24368455566560576	0.24909976801373035	1.4739102074439714e-08	1.1489162495614024e-08
//0.24909976801373035	0.25451498036185494	2.430105503114903e-08	1.884042422243121e-08
//0.25451498036185494	0.25993019270997947	3.368218179699582e-08	2.597251269622818e-08
//0.25993019270997947	0.26534540505810406	4.279672809793209e-08	3.282256539884134e-08
//0.26534540505810406	0.27076061740622864	5.156225207600171e-08	3.9331638208570774e-08
//0.27076061740622864	0.2761758297543532	5.990012611720388e-08	4.54449989673107e-08
//0.2761758297543532	0.28159104210247776	6.773600578137233e-08	5.1112385197138853e-08
//0.28159104210247776	0.28700625445060235	7.500026567334022e-08	5.6288227001585385e-08
//0.28700625445060235	0.29242146679872694	8.162840207588336e-08	6.093183615445975e-08
//0.29242146679872694	0.29783667914685147	8.75614021639624e-08	6.50075623609827e-08
//0.29783667914685147	0.30325189149497606	9.274607961880352e-08	6.84849176581003e-08
//0.30325189149497606	0.30866710384310064	9.713537645937216e-08	7.133866990323203e-08
//0.30866710384310064	0.31408231619122523	1.0068863090780321e-07	7.354890628333041e-08
//0.31408231619122523	0.31949752853934976	1.03371811104356e-07	7.510106775900598e-08
//0.31949752853934976	0.32491274088747435	1.0515771448645951e-07	7.59859553415827e-08
//0.32491274088747435	0.33032795323559894	1.060261326454088e-07	7.621076928661634e-08
//0.33032795323559894	0.3357431655837235	1.0611396452842019e-07	7.619970908423917e-08
//0.3357431655837235	0.34115837793184806	1.059639814743944e-07	7.574376065245692e-08
//0.34115837793184806	0.34657359027997264	1.0496539641299691e-07	7.462476032169709e-08
//0.34657359027997264	0.35198880262809723	1.030317926131888e-07	7.28544792345918e-08
//0.35198880262809723	0.35740401497622176	1.0017188981982614e-07	7.044968773802549e-08
//0.35740401497622176	0.36281922732434635	9.640170178290607e-08	6.7432010596193e-08
//0.36281922732434635	0.36823443967247094	9.174449000807242e-08	6.382775986999794e-08
//0.36823443967247094	0.3736496520205955	8.623068165103489e-08	5.966774623267227e-08
//0.3736496520205955	0.37906486436872006	7.989775136080116e-08	5.4987069477704215e-08
//0.37906486436872006	0.38448007671684464	7.279006687656992e-08	4.9824888961253324e-08
//0.38448007671684464	0.38989528906496923	6.495869818123402e-08	4.4224174706242124e-08
//0.38989528906496923	0.3953105014130938	5.6461190013646633e-08	3.82314398813194e-08
//0.3953105014130938	0.40072571376121835	4.736129754069321e-08	3.189645535388567e-08
//0.40072571376121835	0.40614092610934294	3.772868501688656e-08	2.5271947021179678e-08
//0.40614092610934294	0.4115561384574675	2.7638587063826484e-08	1.8413276479617047e-08
//0.4115561384574675	0.4169713508055921	1.7171432783640013e-08	1.1378105970217112e-08
//0.4169713508055921	0.42238656315371664	6.412431947977223e-09	4.226047872567867e-09
//0.42238656315371664	0.42780177550184123	1.561911473326205e-08	1.0182735540766499e-08
//0.42780177550184123	0.4332169878499658	2.6701591458218697e-08	1.7313839988569728e-08
//0.4332169878499658	0.43863220019809035	3.7696871792702916e-08	2.4311388777714348e-08
//0.43863220019809035	0.44404741254621494	4.8503379997122625e-08	3.11117659393854e-08
//0.44404741254621494	0.4494626248943395	5.901804393873615e-08	3.765179397132658e-08
//0.4494626248943395	0.4548778372424641	6.913697811210853e-08	4.3869174126249834e-08
//0.4548778372424641	0.46029304959058864	7.875620596729072e-08	4.9702937250500546e-08
//0.46029304959058864	0.46570826193871323	8.777242176512686e-08	5.509390464168849e-08
//0.46570826193871323	0.4711234742868378	9.608379217432035e-08	5.998515840144045e-08
//0.4711234742868378	0.4765386866349624	1.0359079782604941e-07	6.432252077059155e-08
//0.4765386866349624	0.48195389898308694	1.101971150431008e-07	6.805504194512193e-08
//0.48195389898308694	0.4873691113312115	1.1581053796166238e-07	7.113549588197204e-08
//0.4873691113312115	0.4927843236793361	1.2034394126510573e-07	7.352088361452533e-08
//0.4927843236793361	0.4981995360274607	1.2371628375027488e-07	7.517294360804469e-08
//0.4981995360274607	0.5036147483755853	1.25853652993927e-07	7.605866872358615e-08
//0.5036147483755853	0.5090299607237099	1.2669035106693157e-07	7.621077437902954e-08
//0.5090299607237099	0.5144451730718343	1.267005726788843e-07	7.615082917361697e-08
//0.5144451730718343	0.5198603854199589	1.261700222097037e-07	7.542850144950846e-08
//0.5198603854199589	0.5252755977680835	1.242468217680655e-07	7.387760223152928e-08
//0.5252755977680835	0.5306908101162081	1.208866273277616e-07	7.149142728286916e-08
//0.5306908101162081	0.5361060224643327	1.1606829196748986e-07	6.827119474827082e-08
//0.5361060224643327	0.5415212348124573	1.0978493993036031e-07	6.422659248528403e-08
//0.5415212348124573	0.5469364471605819	1.0204530493399328e-07	5.9376329036613076e-08
//0.5469364471605819	0.5523516595087063	9.287511135246823e-08	5.374868786127189e-08
//0.5523516595087063	0.5577668718568309	8.231849850291221e-08	4.7382084451226654e-08
//0.5577668718568309	0.5631820842049555	7.043948827078079e-08	4.032562596903746e-08
//0.5631820842049555	0.5685972965530801	5.732349630915962e-08	3.2639673050694106e-08
//0.5685972965530801	0.5740125089012047	4.3078887048684885e-08	2.4396403426391464e-08
//0.5740125089012047	0.5794277212493293	2.7838572755973697e-08	1.5680377020401483e-08
//0.5794277212493293	0.5848429335974539	1.176165687974128e-08	6.589102199475158e-09
//0.5848429335974539	0.5902581459455785	2.212443865221199e-08	1.2261014465740693e-08
//0.5902581459455785	0.5956733582937029	3.946903979232446e-08	2.1754991024596277e-08
//0.5956733582937029	0.6010885706418275	5.671748640535308e-08	3.1093350772301307e-08
//0.6010885706418275	0.6065037829899521	7.355350196450555e-08	4.0105331329574885e-08
//0.6065037829899521	0.6119189953380767	8.962381508419372e-08	4.8603817767086246e-08
//0.6119189953380767	0.6173342076862013	1.0453619935310515e-07	5.638477690544868e-08
//0.6173342076862013	0.6227494200343259	1.1785746691880335e-07	6.32266928288582e-08
//0.6227494200343259	0.6281646323824505	1.2911141557273273e-07	6.889000387423983e-08
//0.6281646323824505	0.6335798447305749	1.377767290831403e-07	7.311654135074383e-08
//0.6335798447305749	0.6389950570786995	1.432848305248863e-07	7.562897023903057e-08
//0.6389950570786995	0.6444102694268241	1.4503347318285535e-07	7.621076914697548e-08
//0.6444102694268241	0.6498254817749487	1.4501768833589903e-07	7.613023210238226e-08
//0.6498254817749487	0.6552406941230733	1.423055748742682e-07	7.430299046722978e-08
//0.6552406941230733	0.6606559064711979	1.3442477719084687e-07	6.980907886948682e-08
//0.6606559064711979	0.6660711188193225	1.2059525976131963e-07	6.228895181273542e-08
//0.6660711188193225	0.671486331167447	9.997827892918853e-08	5.136113884283027e-08
//0.671486331167447	0.6769015435155715	7.167394878674844e-08	3.662170194897969e-08
//0.6769015435155715	0.6823167558636961	3.4718758238450743e-08	1.7643696497098664e-08
//0.6823167558636961	0.6877319682118207	6.933161674476233e-08	3.4854040284962724e-08
//0.6877319682118207	0.6931471805599453	1.3869498377119346e-07	6.934749188672044e-08
//spec: {
//spec:     "cname": "ml2_raw_exp_5",
//spec:     "delta": 1.4503347318285535e-07,
//spec:     "domain": [
//spec:         0.0,
//spec:         0.6931471805599453
//spec:     ],
//spec:     "epsilon": 3.985178056539313e-09,
//spec:     "operation": "exp"
//spec: }
