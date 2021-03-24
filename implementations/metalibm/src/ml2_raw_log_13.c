/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_13.c --poly-degree 13 \
 *     --fname ml2_raw_log_13 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_13(double);
double ml2_raw_log_13(double x){
    double pm_12;
    double pa_12;
    double pm_11;
    double pa_11;
    double pm_10;
    double pa_10;
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
    
    pm_12 = x * 0x1.c33ee0e81966ep1;
    pa_12 = -0x1.304f39196956p5 + pm_12;
    pm_11 = x * pa_12;
    pa_11 = 0x1.7bd778742e6cdp7 + pm_11;
    pm_10 = x * pa_11;
    pa_10 = -0x1.22da08e3e9c39p9 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.315f55fbaaf63p10 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = -0x1.d14ef89a0d726p10 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.0984af73a1148p11 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.cdcf727d20324p10 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.3453fcbdced09p10 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.3c23c43d91b25p9 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.ef755d6a1de8ep7 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.285527ce458ep6 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.1f64f4b967d56p4 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.c0c3648846bdfp1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fd2c67936d0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fd2c67939a0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fd2c6793a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fd2c6793c40> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2c678df70>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_13
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2c678df70>
//Info: executing pass instantiate_prec on fct ml2_raw_log_13
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2c678df70>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_13
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2c678df70>
//Info: executing pass check_processor_support on fct ml2_raw_log_13
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd2c678df70>
//Info: executing pass debug_tag_node on fct ml2_raw_log_13
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_13.c
//0.5	0.501953125	4.4055060277405225e-12	6.402785154306026e-12
//0.501953125	0.50390625	8.69542298795251e-12	1.269731798274282e-11
//0.50390625	0.505859375	1.0033120886511465e-11	1.4732731354843345e-11
//0.505859375	0.5078125	1.0042615487078545e-11	1.475669275162535e-11
//0.5078125	0.509765625	9.354728997253087e-12	1.3816613955190995e-11
//0.509765625	0.51171875	7.400007809646024e-12	1.0994846591330866e-11
//0.51171875	0.513671875	4.74271806075753e-12	7.091951277267942e-12
//0.513671875	0.515625	1.8166958039698774e-12	2.7408083693623063e-12
//0.515625	0.517578125	3.704320284292316e-12	5.638862253282296e-12
//0.517578125	0.51953125	5.891138560178136e-12	9.011526629081593e-12
//0.51953125	0.521484375	7.575461824301525e-12	1.1651160695111575e-11
//0.521484375	0.5234375	8.72157870054328e-12	1.3489710097986465e-11
//0.5234375	0.525390625	9.33097030078603e-12	1.4515401753649555e-11
//0.525390625	0.52734375	9.453092977965618e-12	1.4771178515686546e-11
//0.52734375	0.529296875	9.43322943918701e-12	1.4761437016601232e-11
//0.529296875	0.53125	9.076631442430233e-12	1.4287668400280597e-11
//0.53125	0.533203125	8.323942438246595e-12	1.3182089903467273e-11
//0.533203125	0.53515625	7.244809704961063e-12	1.1544080455323438e-11
//0.53515625	0.537109375	5.912858891382816e-12	9.482311236924847e-12
//0.537109375	0.5390625	4.401499906477603e-12	7.107550265335053e-12
//0.5390625	0.541015625	2.7814153846372873e-12	4.528808350659387e-12
//0.541015625	0.54296875	1.1185339531151656e-12	1.849963948056229e-12
//0.54296875	0.544921875	2.1552467652212654e-12	3.5805876817584603e-12
//0.544921875	0.546875	3.61848211537471e-12	6.027862945535822e-12
//0.546875	0.548828125	4.930851236047788e-12	8.252791326237871e-12
//0.548828125	0.55078125	6.0636608333480704e-12	1.0203143140937299e-11
//0.55078125	0.552734375	6.995998461898909e-12	1.1838595867953611e-11
//0.552734375	0.5546875	7.714331104979607e-12	1.3130420063207305e-11
//0.5546875	0.556640625	8.211975871567599e-12	1.4060931990510535e-11
//0.556640625	0.55859375	8.488478275974563e-12	1.4622763804824424e-11
//0.55859375	0.560546875	8.553839160725833e-12	1.4817996304296095e-11
//0.560546875	0.5625	8.549423700378253e-12	1.4822445411843452e-11
//0.5625	0.564453125	8.40374275529978e-12	1.4661754551000114e-11
//0.564453125	0.56640625	8.065925289776412e-12	1.4163229261854525e-11
//0.56640625	0.568359375	7.553329875786437e-12	1.3351121601635217e-11
//0.568359375	0.5703125	6.885956856769566e-12	1.2255157712164159e-11
//0.5703125	0.572265625	6.085764936331715e-12	1.0909320889656841e-11
//0.572265625	0.57421875	5.176025960900299e-12	9.35081872116204e-12
//0.57421875	0.576171875	4.180726771568815e-12	7.619097767469332e-12
//0.576171875	0.578125	3.1240227697915198e-12	5.754913831384358e-12
//0.578125	0.580078125	2.029746684809859e-12	3.799468785555967e-12
//0.580078125	0.58203125	9.209746551662003e-13	1.7936197428083177e-12
//0.58203125	0.583984375	1.325560257965116e-12	2.5743903953096005e-12
//0.583984375	0.5859375	2.353429846179842e-12	4.5213816063559706e-12
//0.5859375	0.587890625	3.3177363418691012e-12	6.373882492797107e-12
//0.587890625	0.58984375	4.203693848874533e-12	8.102103154688077e-12
//0.58984375	0.591796875	4.9986976189782955e-12	9.67969885581444e-12
//0.591796875	0.59375	5.692384833426069e-12	1.1084007629613281e-11
//0.59375	0.595703125	6.276653740792918e-12	1.2296218671538139e-11
//0.595703125	0.59765625	6.7456448424481664e-12	1.3301474524574436e-11
//0.59765625	0.599609375	7.095688133714151e-12	1.4088915632273417e-11
//0.599609375	0.6015625	7.325220528528236e-12	1.4651671992159696e-11
//0.6015625	0.603515625	7.434677406998534e-12	1.4986813902127302e-11
//0.603515625	0.60546875	7.44574228825808e-12	1.5098491685046785e-11
//0.60546875	0.607421875	7.427072686931303e-12	1.5132946463295494e-11
//0.607421875	0.609375	7.305019519736865e-12	1.5026475393974952e-11
//0.609375	0.611328125	7.0747972149648675e-12	1.4708563129552017e-11
//0.611328125	0.61328125	6.743368382332076e-12	1.4192224340338695e-11
//0.61328125	0.615234375	6.318897151159732e-12	1.3494844901340816e-11
//0.615234375	0.6171875	5.810563239762456e-12	1.2639089701543927e-11
//0.6171875	0.619140625	5.228374466148598e-12	1.1655049592304138e-11
//0.619140625	0.62109375	4.582980180550969e-12	1.0585474350897395e-11
//0.62109375	0.623046875	3.885488083512922e-12	9.499849781924225e-12
//0.623046875	0.625	3.1472864838024073e-12	8.539782201367555e-12
//0.625	0.626953125	2.3764218212275805e-12	7.906497850537626e-12
//0.626953125	0.62890625	1.5911808730382095e-12	1.021192927440767e-11
//0.62890625	0.630859375	7.994208812443639e-13	inf
//0.630859375	0.6328125	8.615288432800448e-13	inf
//0.6328125	0.634765625	1.6110479713258464e-12	inf
//0.634765625	0.63671875	2.3267493556773267e-12	inf
//0.63671875	0.638671875	3.0002321892686023e-12	inf
//0.638671875	0.640625	3.623936659265996e-12	inf
//0.640625	0.642578125	4.1912019591903996e-12	inf
//0.642578125	0.64453125	4.696310361953631e-12	inf
//0.64453125	0.646484375	5.134517838250715e-12	inf
//0.646484375	0.6484375	5.502071379796522e-12	inf
//0.6484375	0.650390625	5.796213908004921e-12	inf
//0.650390625	0.65234375	6.012603686030763e-12	inf
//0.65234375	0.654296875	6.15555919587656e-12	inf
//0.654296875	0.65625	6.222682052839843e-12	inf
//0.65625	0.658203125	6.2290809153877114e-12	inf
//0.658203125	0.66015625	6.215976377352717e-12	inf
//0.66015625	0.662109375	6.135451259716431e-12	inf
//0.662109375	0.6640625	5.984756956891566e-12	inf
//0.6640625	0.666015625	5.767344652946933e-12	inf
//0.666015625	0.66796875	5.487396766615157e-12	inf
//0.66796875	0.669921875	5.149533621299828e-12	inf
//0.669921875	0.671875	4.759071585502489e-12	inf
//0.671875	0.673828125	4.3217234156806535e-12	inf
//0.673828125	0.67578125	3.8435742197158846e-12	inf
//0.67578125	0.677734375	3.331001188176043e-12	inf
//0.677734375	0.6796875	2.7905931131125227e-12	inf
//0.6796875	0.681640625	2.2290709109529538e-12	inf
//0.681640625	0.68359375	1.6532095578371394e-12	inf
//0.68359375	0.685546875	1.0697624231924404e-12	inf
//0.685546875	0.6875	4.853885711338464e-13	inf
//0.6875	0.689453125	8.14050240704636e-13	inf
//0.689453125	0.69140625	1.36565248182488e-12	inf
//0.69140625	0.693359375	1.8938424311714057e-12	inf
//0.693359375	0.6953125	2.3933802714839834e-12	inf
//0.6953125	0.697265625	2.8594644273812237e-12	inf
//0.697265625	0.69921875	3.287769855356404e-12	inf
//0.69921875	0.701171875	3.674480333994873e-12	inf
//0.701171875	0.703125	4.0163144538993904e-12	inf
//0.703125	0.705078125	4.3105454672486244e-12	inf
//0.705078125	0.70703125	4.555014925166764e-12	inf
//0.70703125	0.708984375	4.748140186803087e-12	inf
//0.708984375	0.7109375	4.888915866897185e-12	inf
//0.7109375	0.712890625	4.9769095683602e-12	inf
//0.712890625	0.71484375	5.012251922790131e-12	inf
//0.71484375	0.716796875	5.014299501686491e-12	inf
//0.716796875	0.71875	4.997336954648797e-12	inf
//0.71875	0.720703125	4.929961253880869e-12	inf
//0.720703125	0.72265625	4.813527096905525e-12	inf
//0.72265625	0.724609375	4.65021600704423e-12	inf
//0.724609375	0.7265625	4.4426494724804846e-12	inf
//0.7265625	0.728515625	4.193852082725478e-12	inf
//0.728515625	0.73046875	3.907211893263132e-12	inf
//0.73046875	0.732421875	3.586438062572388e-12	inf
//0.732421875	0.734375	3.235516006104302e-12	inf
//0.734375	0.736328125	2.8586616780826235e-12	inf
//0.736328125	0.73828125	2.4602735542794403e-12	inf
//0.73828125	0.740234375	2.0448849872959648e-12	inf
//0.740234375	0.7421875	1.617115500477743e-12	inf
//0.7421875	0.744140625	1.181622677559411e-12	inf
//0.744140625	0.74609375	7.430547926310335e-13	inf
//0.74609375	0.748046875	3.707607415303984e-13	inf
//0.748046875	0.75	7.952436155897611e-13	inf
//0.75	0.751953125	1.2052646796262216e-12	inf
//0.751953125	0.75390625	1.596886266794069e-12	inf
//0.75390625	0.755859375	1.9664297565956688e-12	inf
//0.755859375	0.7578125	2.3105077018205554e-12	inf
//0.7578125	0.759765625	2.626053058050126e-12	inf
//0.759765625	0.76171875	2.9103442051599857e-12	inf
//0.76171875	0.763671875	3.161026385300856e-12	inf
//0.763671875	0.765625	3.3761299177283635e-12	inf
//0.765625	0.767578125	3.554082987308386e-12	inf
//0.767578125	0.76953125	3.693721940274985e-12	inf
//0.76953125	0.771484375	3.794295957591512e-12	inf
//0.771484375	0.7734375	3.855468612794949e-12	inf
//0.7734375	0.775390625	3.8773154572264995e-12	inf
//0.775390625	0.77734375	3.8796156662521804e-12	inf
//0.77734375	0.779296875	3.862649310811697e-12	inf
//0.779296875	0.78125	3.8077114708020864e-12	inf
//0.78125	0.783203125	3.716056083887832e-12	inf
//0.783203125	0.78515625	3.5892985586063082e-12	inf
//0.78515625	0.787109375	3.429394624786782e-12	inf
//0.787109375	0.7890625	3.238615874678676e-12	inf
//0.7890625	0.791015625	3.0202041462169864e-12	inf
//0.791015625	0.79296875	2.7756322324034273e-12	inf
//0.79296875	0.794921875	2.508610421861369e-12	inf
//0.794921875	0.796875	2.2223763941078903e-12	inf
//0.796875	0.798828125	1.920324608845398e-12	inf
//0.798828125	0.80078125	1.605969241493764e-12	inf
//0.80078125	0.802734375	1.2829063271654013e-12	inf
//0.802734375	0.8046875	9.547753822523947e-13	inf
//0.8046875	0.806640625	6.252208766882413e-13	inf
//0.806640625	0.80859375	4.1797779225930814e-13	inf
//0.80859375	0.810546875	7.363789309712835e-13	inf
//0.810546875	0.8125	1.0424141518992166e-12	inf
//0.8125	0.814453125	1.332972409826659e-12	inf
//0.814453125	0.81640625	1.5948433119802797e-12	inf
//0.81640625	0.818359375	1.8458551722865693e-12	inf
//0.818359375	0.8203125	2.0734236625754685e-12	inf
//0.8203125	0.822265625	2.2754387906489727e-12	inf
//0.822265625	0.82421875	2.45010056075483e-12	inf
//0.82421875	0.826171875	2.5959364000085387e-12	inf
//0.826171875	0.828125	2.7125504645077314e-12	inf
//0.828125	0.830078125	2.7976942710800105e-12	inf
//0.830078125	0.83203125	2.8516803345788416e-12	inf
//0.83203125	0.833984375	2.8744486261554984e-12	inf
//0.833984375	0.8359375	2.8780770558351305e-12	inf
//0.8359375	0.837890625	2.869733404735509e-12	inf
//0.837890625	0.83984375	2.831478311747333e-12	inf
//0.83984375	0.841796875	2.763848057706856e-12	inf
//0.841796875	0.84375	2.6682854682582098e-12	inf
//0.84375	0.845703125	2.5464380964022905e-12	inf
//0.845703125	0.84765625	2.4002491465914544e-12	inf
//0.84765625	0.849609375	2.2319332948055683e-12	inf
//0.849609375	0.8515625	2.043950326316862e-12	inf
//0.8515625	0.853515625	1.8389751492589923e-12	inf
//0.853515625	0.85546875	1.6198652769956073e-12	inf
//0.85546875	0.857421875	1.3896263052895269e-12	inf
//0.857421875	0.859375	1.1513752410594145e-12	inf
//0.859375	0.861328125	9.083018677323261e-13	inf
//0.861328125	0.86328125	6.636300575178964e-13	inf
//0.86328125	0.865234375	4.2057696300961e-13	inf
//0.865234375	0.8671875	6.345292396736986e-13	inf
//0.8671875	0.869140625	8.627144889773016e-13	inf
//0.869140625	0.87109375	1.0773964719199114e-12	inf
//0.87109375	0.873046875	1.275985918114487e-12	inf
//0.873046875	0.875	1.456129926242055e-12	inf
//0.875	0.876953125	1.6157437788554199e-12	inf
//0.876953125	0.87890625	1.7530398128759e-12	inf
//0.87890625	0.880859375	1.8665532088919567e-12	inf
//0.880859375	0.8828125	1.9551630877196557e-12	inf
//0.8828125	0.884765625	2.018110433746382e-12	inf
//0.884765625	0.88671875	2.0550105013870155e-12	inf
//0.88671875	0.888671875	2.0668145268107977e-12	inf
//0.888671875	0.890625	2.07083310352517e-12	inf
//0.890625	0.892578125	2.0560823290299597e-12	inf
//0.892578125	0.89453125	2.016427990215478e-12	inf
//0.89453125	0.896484375	1.9530076602715248e-12	inf
//0.896484375	0.8984375	1.8673186250030746e-12	inf
//0.8984375	0.900390625	1.7611987423683146e-12	inf
//0.900390625	0.90234375	1.6368009769249085e-12	inf
//0.90234375	0.904296875	1.4965636539293092e-12	inf
//0.904296875	0.90625	1.3431746589513502e-12	inf
//0.90625	0.908203125	1.179530792847033e-12	inf
//0.908203125	0.91015625	1.0086935780667597e-12	inf
//0.91015625	0.912109375	8.338402997586738e-13	inf
//0.912109375	0.9140625	6.582113530507486e-13	inf
//0.9140625	0.916015625	5.237094326630138e-13	inf
//0.916015625	0.91796875	6.944993480887312e-13	inf
//0.91796875	0.919921875	8.54460426958819e-13	inf
//0.919921875	0.921875	9.994850837628558e-13	inf
//0.921875	0.923828125	1.1278380281570294e-12	inf
//0.923828125	0.92578125	1.237422318803414e-12	inf
//0.92578125	0.927734375	1.3963872102184809e-12	inf
//0.927734375	0.9296875	1.4646653167016372e-12	inf
//0.9296875	0.931640625	1.510342901119157e-12	inf
//0.931640625	0.93359375	1.5330785978292747e-12	inf
//0.93359375	0.935546875	1.5411257948000667e-12	inf
//0.935546875	0.9375	1.5409153009189492e-12	inf
//0.9375	0.939453125	1.5189049939299425e-12	inf
//0.939453125	0.94140625	1.4760356683161256e-12	inf
//0.94140625	0.943359375	1.414036678123663e-12	inf
//0.943359375	0.9453125	1.3351250111500525e-12	inf
//0.9453125	0.947265625	1.2419679256541482e-12	inf
//0.947265625	0.94921875	1.1376315103099548e-12	inf
//0.94921875	0.951171875	1.0255152774979178e-12	inf
//0.951171875	0.953125	9.092732004150636e-13	inf
//0.953125	0.955078125	7.927211573046303e-13	inf
//0.955078125	0.95703125	7.318393156266632e-13	inf
//0.95703125	0.958984375	8.447095297785809e-13	inf
//0.958984375	0.9609375	9.435006511420896e-13	inf
//0.9609375	0.962890625	1.0253582761241786e-12	inf
//0.962890625	0.96484375	1.088238815642632e-12	inf
//0.96484375	0.966796875	1.130151893511675e-12	inf
//0.966796875	0.96875	1.1506120686933459e-12	inf
//0.96875	0.970703125	1.160405668502384e-12	inf
//0.970703125	0.97265625	1.1597711201103448e-12	inf
//0.97265625	0.974609375	1.1391666581663791e-12	inf
//0.974609375	0.9765625	1.1008978171091007e-12	inf
//0.9765625	0.978515625	1.048321069040222e-12	inf
//0.978515625	0.98046875	9.85780127293254e-13	inf
//0.98046875	0.982421875	9.189061054910125e-13	inf
//0.982421875	0.984375	8.560914369041519e-13	inf
//0.984375	0.986328125	8.634614121414262e-13	inf
//0.986328125	0.98828125	9.132094253611592e-13	inf
//0.98828125	0.990234375	9.412738277138276e-13	inf
//0.990234375	0.9921875	9.531686939357926e-13	inf
//0.9921875	0.994140625	9.579514208276343e-13	inf
//0.994140625	0.99609375	9.4318605816805e-13	inf
//0.99609375	0.998046875	9.16093175479777e-13	inf
//0.998046875	1.0	8.915224919942462e-13	inf
//spec: {
//spec:     "cname": "ml2_raw_log_13",
//spec:     "delta": 1.0042615487078545e-11,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 1.7936197428083177e-12,
//spec:     "operation": "log"
//spec: }
