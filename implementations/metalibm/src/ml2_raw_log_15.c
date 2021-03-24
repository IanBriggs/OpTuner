/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_raw_log_15.c --poly-degree 15 \
 *     --fname ml2_raw_log_15 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_log_15(double);
double ml2_raw_log_15(double x){
    double pm_14;
    double pa_14;
    double pm_13;
    double pa_13;
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
    
    pm_14 = x * 0x1.6fcc2148331e6p2;
    pa_14 = -0x1.1a4ba021b32e9p6 + pm_14;
    pm_13 = x * pa_14;
    pa_13 = 0x1.94fb457709c31p8 + pm_13;
    pm_12 = x * pa_13;
    pa_12 = -0x1.6867ff9154cdp10 + pm_12;
    pm_11 = x * pa_12;
    pa_11 = 0x1.bd7519dae94dbp11 + pm_11;
    pm_10 = x * pa_11;
    pa_10 = -0x1.95834e5e7cfdep12 + pm_10;
    pm_9 = x * pa_10;
    pa_9 = 0x1.195a6cd12c12bp13 + pm_9;
    pm_8 = x * pa_9;
    pa_8 = -0x1.2fb57cb37ce83p13 + pm_8;
    pm_7 = x * pa_8;
    pa_7 = 0x1.01f98096cce99p13 + pm_7;
    pm_6 = x * pa_7;
    pa_6 = -0x1.5a87141f0353cp12 + pm_6;
    pm_5 = x * pa_6;
    pa_5 = 0x1.6fcd43de2c92fp11 + pm_5;
    pm_4 = x * pa_5;
    pa_4 = -0x1.32c577b6d1633p10 + pm_4;
    pm_3 = x * pa_4;
    pa_3 = 0x1.8e988e4eea572p8 + pm_3;
    pm_2 = x * pa_3;
    pa_2 = -0x1.91a67646e61f8p6 + pm_2;
    pm_1 = x * pa_2;
    pa_1 = 0x1.4ca157174239bp4 + pm_1;
    tmp = x * pa_1;
    tmp1 = -0x1.d2c9c0fb31804p1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f5b886336d0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f5b886339a0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f5b88633a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f5b88633c40> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5b8862e7c0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_log_15
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5b8862e7c0>
//Info: executing pass instantiate_prec on fct ml2_raw_log_15
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5b8862e7c0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_log_15
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5b8862e7c0>
//Info: executing pass check_processor_support on fct ml2_raw_log_15
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5b8862e7c0>
//Info: executing pass debug_tag_node on fct ml2_raw_log_15
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_log_15.c
//0.5	0.501953125	2.2742907207067016e-13	4.718883700651186e-13
//0.501953125	0.50390625	3.006421076322243e-13	5.733758349835145e-13
//0.50390625	0.505859375	3.036747062905852e-13	5.927456282966856e-13
//0.505859375	0.5078125	2.815424033737642e-13	5.785488369458038e-13
//0.5078125	0.509765625	2.0678675604981183e-13	4.894608565795654e-13
//0.509765625	0.51171875	1.0919562467849405e-13	3.6850164149196685e-13
//0.51171875	0.513671875	1.689267558288517e-13	4.858743692720496e-13
//0.513671875	0.515625	2.339461939883312e-13	6.057981927275404e-13
//0.515625	0.517578125	2.7732502521860873e-13	7.13459846827807e-13
//0.517578125	0.51953125	2.9593014103401215e-13	7.905775482889813e-13
//0.51953125	0.521484375	2.9769949570005294e-13	8.533142674169516e-13
//0.521484375	0.5234375	2.931378498014891e-13	9.256261629974837e-13
//0.5234375	0.525390625	2.703345023085677e-13	9.986251016730018e-13
//0.525390625	0.52734375	2.325596858914647e-13	1.0946068857537544e-12
//0.52734375	0.529296875	1.8418362483595359e-13	1.2586469267418866e-12
//0.529296875	0.53125	1.295178565469511e-13	1.5948289538488613e-12
//0.53125	0.533203125	9.363970665875893e-14	2.4811310108376607e-12
//0.533203125	0.53515625	1.473278345439964e-13	6.539593513409919e-12
//0.53515625	0.537109375	1.9448377302189413e-13	inf
//0.537109375	0.5390625	2.33377044455864e-13	inf
//0.5390625	0.541015625	2.6287622868151936e-13	inf
//0.541015625	0.54296875	2.8240429637567204e-13	inf
//0.54296875	0.544921875	2.9187927557243347e-13	inf
//0.544921875	0.546875	2.9367487955234896e-13	inf
//0.546875	0.548828125	2.928987692220729e-13	inf
//0.548828125	0.55078125	2.8367907309306887e-13	inf
//0.55078125	0.552734375	2.6642744347743843e-13	inf
//0.552734375	0.5546875	2.423294173155932e-13	inf
//0.5546875	0.556640625	2.1271008910035455e-13	inf
//0.556640625	0.55859375	1.7897157609415949e-13	inf
//0.55859375	0.560546875	1.4253702400566518e-13	inf
//0.560546875	0.5625	1.0480182840703307e-13	inf
//0.5625	0.564453125	1.2089432548149356e-13	inf
//0.564453125	0.56640625	1.580103087343423e-13	inf
//0.56640625	0.568359375	1.9189401949488091e-13	inf
//0.568359375	0.5703125	2.2176238965818298e-13	inf
//0.5703125	0.572265625	2.470009329727565e-13	inf
//0.572265625	0.57421875	2.6716540872072017e-13	inf
//0.57421875	0.576171875	2.819787677187235e-13	inf
//0.576171875	0.578125	2.9132420490820316e-13	inf
//0.578125	0.580078125	2.9547774038331526e-13	inf
//0.580078125	0.58203125	2.971828483579853e-13	inf
//0.58203125	0.583984375	2.95861295921943e-13	inf
//0.583984375	0.5859375	2.8956768100982946e-13	inf
//0.5859375	0.587890625	2.7869958050768696e-13	inf
//0.587890625	0.58984375	2.6374268306209496e-13	inf
//0.58984375	0.591796875	2.452529966566827e-13	inf
//0.591796875	0.59375	2.2383904232484249e-13	inf
//0.59375	0.595703125	2.001443573790349e-13	inf
//0.595703125	0.59765625	1.74831017892931e-13	inf
//0.59765625	0.599609375	1.4856354734769843e-13	inf
//0.599609375	0.6015625	1.2399858399071033e-13	inf
//0.6015625	0.603515625	1.5359490144900466e-13	inf
//0.603515625	0.60546875	1.8180704817051746e-13	inf
//0.60546875	0.607421875	2.065534223079452e-13	inf
//0.607421875	0.609375	2.305753455529383e-13	inf
//0.609375	0.611328125	2.5193399107256353e-13	inf
//0.611328125	0.61328125	2.7033709775682096e-13	inf
//0.61328125	0.615234375	2.85563441640647e-13	inf
//0.615234375	0.6171875	2.9746355575900566e-13	inf
//0.6171875	0.619140625	3.0595850646905073e-13	inf
//0.619140625	0.62109375	3.1103744758690433e-13	inf
//0.62109375	0.623046875	3.1367818109982774e-13	inf
//0.623046875	0.625	3.153285837251795e-13	inf
//0.625	0.626953125	3.1384698119042466e-13	inf
//0.626953125	0.62890625	3.092899689335964e-13	inf
//0.62890625	0.630859375	3.018781735798278e-13	inf
//0.630859375	0.6328125	2.9187523174202296e-13	inf
//0.6328125	0.634765625	2.795821198956287e-13	inf
//0.634765625	0.63671875	2.6532933730892276e-13	inf
//0.63671875	0.638671875	2.4947057113110495e-13	inf
//0.638671875	0.640625	2.323751649807913e-13	inf
//0.640625	0.642578125	2.144216034840023e-13	inf
//0.642578125	0.64453125	1.959905154078293e-13	inf
//0.64453125	0.646484375	1.7787252955202423e-13	inf
//0.646484375	0.6484375	2.0198365396784714e-13	inf
//0.6484375	0.650390625	2.2526608480612073e-13	inf
//0.650390625	0.65234375	2.474168472630916e-13	inf
//0.65234375	0.654296875	2.681619347720997e-13	inf
//0.654296875	0.65625	2.87259623305284e-13	inf
//0.65625	0.658203125	3.0450274349048e-13	inf
//0.658203125	0.66015625	3.197210061819124e-13	inf
//0.66015625	0.662109375	3.327821865050816e-13	inf
//0.662109375	0.6640625	3.435924800987061e-13	inf
//0.6640625	0.666015625	3.5209675324062906e-13	inf
//0.666015625	0.66796875	3.582784157240963e-13	inf
//0.66796875	0.669921875	3.624618371890734e-13	inf
//0.669921875	0.671875	3.6612745171199535e-13	inf
//0.671875	0.673828125	3.6783104931740394e-13	inf
//0.673828125	0.67578125	3.6737837432798776e-13	inf
//0.67578125	0.677734375	3.648895373084757e-13	inf
//0.677734375	0.6796875	3.605134062881003e-13	inf
//0.6796875	0.681640625	3.544236193856427e-13	inf
//0.681640625	0.68359375	3.468158530684959e-13	inf
//0.68359375	0.685546875	3.3790420231590276e-13	inf
//0.685546875	0.6875	3.2791722879839963e-13	inf
//0.6875	0.689453125	3.174007323390542e-13	inf
//0.689453125	0.69140625	3.059901994355257e-13	inf
//0.69140625	0.693359375	2.9424108054733706e-13	inf
//0.693359375	0.6953125	2.8240374524520265e-13	inf
//0.6953125	0.697265625	2.902724602192087e-13	inf
//0.697265625	0.69921875	3.1118881384123725e-13	inf
//0.69921875	0.701171875	3.314435103002254e-13	inf
//0.701171875	0.703125	3.508390165004404e-13	inf
//0.703125	0.705078125	3.6919600060752685e-13	inf
//0.705078125	0.70703125	3.86355360927684e-13	inf
//0.70703125	0.708984375	4.166953224789448e-13	inf
//0.708984375	0.7109375	4.313936898326247e-13	inf
//0.7109375	0.712890625	4.445593494922598e-13	inf
//0.712890625	0.71484375	4.561273196688373e-13	inf
//0.71484375	0.716796875	4.663192497585168e-13	inf
//0.716796875	0.71875	4.746062760894753e-13	inf
//0.71875	0.720703125	4.81413509114442e-13	inf
//0.720703125	0.72265625	4.878916445387665e-13	inf
//0.72265625	0.724609375	4.930458143927918e-13	inf
//0.724609375	0.7265625	4.966513613047778e-13	inf
//0.7265625	0.728515625	4.987872003622694e-13	inf
//0.728515625	0.73046875	4.995525530940165e-13	inf
//0.73046875	0.732421875	4.99065084699884e-13	inf
//0.732421875	0.734375	4.974589398649327e-13	inf
//0.734375	0.736328125	4.948826072091616e-13	inf
//0.736328125	0.73828125	4.914968437212887e-13	inf
//0.73828125	0.740234375	4.874718914261322e-13	inf
//0.740234375	0.7421875	5.111911190423332e-13	inf
//0.7421875	0.744140625	5.069493215058357e-13	inf
//0.744140625	0.74609375	5.026213099738192e-13	inf
//0.74609375	0.748046875	4.983915242962361e-13	inf
//0.748046875	0.75	5.173152877716835e-13	inf
//0.75	0.751953125	5.386592535226557e-13	inf
//0.751953125	0.75390625	5.597554139779469e-13	inf
//0.75390625	0.755859375	5.800158236922624e-13	inf
//0.755859375	0.7578125	5.99531733858891e-13	inf
//0.7578125	0.759765625	6.18187248066218e-13	inf
//0.759765625	0.76171875	6.358823598136974e-13	inf
//0.76171875	0.763671875	6.525341584738288e-13	inf
//0.763671875	0.765625	6.680776934028707e-13	inf
//0.765625	0.767578125	6.905379889905492e-13	inf
//0.767578125	0.76953125	7.039532065640023e-13	inf
//0.76953125	0.771484375	7.161833521898766e-13	inf
//0.771484375	0.7734375	6.898735407883958e-13	inf
//0.7734375	0.775390625	7.003644325174882e-13	inf
//0.775390625	0.77734375	7.097894638425996e-13	inf
//0.77734375	0.779296875	7.181096425139348e-13	inf
//0.779296875	0.78125	7.258334876225524e-13	inf
//0.78125	0.783203125	7.321529695786235e-13	inf
//0.783203125	0.78515625	7.376074406637294e-13	inf
//0.78515625	0.787109375	7.423049859241579e-13	inf
//0.787109375	0.7890625	7.46365614818676e-13	inf
//0.7890625	0.791015625	7.499193158320577e-13	inf
//0.791015625	0.79296875	7.531039977949636e-13	inf
//0.79296875	0.794921875	7.560638428960038e-13	inf
//0.794921875	0.796875	7.589468973201879e-13	inf
//0.796875	0.798828125	7.619035260896325e-13	inf
//0.798828125	0.80078125	7.666948453583778e-13	inf
//0.80078125	0.802734375	7.90132991108372e-13	inf
//0.802734375	0.8046875	8.13379865766857e-13	inf
//0.8046875	0.806640625	8.363120654132181e-13	inf
//0.806640625	0.80859375	8.588161003002937e-13	inf
//0.80859375	0.810546875	8.80789158678255e-13	inf
//0.810546875	0.8125	9.021412083105761e-13	inf
//0.8125	0.814453125	9.22796017220183e-13	inf
//0.814453125	0.81640625	9.42691977486649e-13	inf
//0.81640625	0.818359375	9.61783218408966e-13	inf
//0.818359375	0.8203125	9.800398980270091e-13	inf
//0.8203125	0.822265625	9.974488648300423e-13	inf
//0.822265625	0.82421875	1.014073307097447e-12	inf
//0.82421875	0.826171875	1.030660784442119e-12	inf
//0.826171875	0.828125	1.0466781291298136e-12	inf
//0.828125	0.830078125	1.0619117310935636e-12	inf
//0.830078125	0.83203125	1.076413903644933e-12	inf
//0.83203125	0.833984375	1.0902506375021587e-12	inf
//0.833984375	0.8359375	1.1035037825186306e-12	inf
//0.8359375	0.837890625	1.1162650281562641e-12	inf
//0.837890625	0.83984375	1.1286401988908233e-12	inf
//0.83984375	0.841796875	1.1407426834522601e-12	inf
//0.841796875	0.84375	1.1526937193238228e-12	inf
//0.84375	0.845703125	1.1646225562139266e-12	inf
//0.845703125	0.84765625	1.1766615242408673e-12	inf
//0.84765625	0.849609375	1.1893880343005402e-12	inf
//0.849609375	0.8515625	1.2073445124745779e-12	inf
//0.8515625	0.853515625	1.2357457052809611e-12	inf
//0.853515625	0.85546875	1.2640746275448728e-12	inf
//0.85546875	0.857421875	1.2922277631541445e-12	inf
//0.857421875	0.859375	1.3201102682183655e-12	inf
//0.859375	0.861328125	1.3476396054581649e-12	inf
//0.861328125	0.86328125	1.3747440082935396e-12	inf
//0.86328125	0.865234375	1.4013687487697494e-12	inf
//0.865234375	0.8671875	1.4274721857681458e-12	inf
//0.8671875	0.869140625	1.4530285726774694e-12	inf
//0.869140625	0.87109375	1.4495206068307002e-12	inf
//0.87109375	0.873046875	1.4738577163327557e-12	inf
//0.873046875	0.875	1.498332706519665e-12	inf
//0.875	0.876953125	1.522343005254428e-12	inf
//0.876953125	0.87890625	1.545877057101033e-12	inf
//0.87890625	0.880859375	1.5689912513673413e-12	inf
//0.880859375	0.8828125	1.593142939564303e-12	inf
//0.8828125	0.884765625	1.6156562823948407e-12	inf
//0.884765625	0.88671875	1.6380078294545637e-12	inf
//0.88671875	0.888671875	1.6603078493021647e-12	inf
//0.888671875	0.890625	1.6834654325016786e-12	inf
//0.890625	0.892578125	1.7060263950780157e-12	inf
//0.892578125	0.89453125	1.728910014481168e-12	inf
//0.89453125	0.896484375	1.7522486345392376e-12	inf
//0.896484375	0.8984375	1.7858393758858018e-12	inf
//0.8984375	0.900390625	1.8216445416879998e-12	inf
//0.900390625	0.90234375	1.8574757896620824e-12	inf
//0.90234375	0.904296875	1.893241934710164e-12	inf
//0.904296875	0.90625	1.9288643602034066e-12	inf
//0.90625	0.908203125	1.983990037877801e-12	inf
//0.908203125	0.91015625	2.019622290714574e-12	inf
//0.91015625	0.912109375	2.0558702496400803e-12	inf
//0.912109375	0.9140625	2.090946958003951e-12	inf
//0.9140625	0.916015625	2.1259774537062703e-12	inf
//0.916015625	0.91796875	2.1613130820807916e-12	inf
//0.91796875	0.919921875	2.196439191330624e-12	inf
//0.919921875	0.921875	2.2313795788716147e-12	inf
//0.921875	0.923828125	2.2662026005725868e-12	inf
//0.923828125	0.92578125	2.302640520348514e-12	inf
//0.92578125	0.927734375	2.3375108596018906e-12	inf
//0.927734375	0.9296875	2.3725712602315272e-12	inf
//0.9296875	0.931640625	2.4079528831322425e-12	inf
//0.931640625	0.93359375	2.443791377503906e-12	inf
//0.93359375	0.935546875	2.4802304704076872e-12	inf
//0.935546875	0.9375	2.522483844118746e-12	inf
//0.9375	0.939453125	2.568614033090182e-12	inf
//0.939453125	0.94140625	2.6149374329242532e-12	inf
//0.94140625	0.943359375	2.6613650612115373e-12	inf
//0.943359375	0.9453125	2.7087116790277587e-12	inf
//0.9453125	0.947265625	2.755154258274407e-12	inf
//0.947265625	0.94921875	2.8015549318753664e-12	inf
//0.94921875	0.951171875	2.8480425688675983e-12	inf
//0.951171875	0.953125	2.895065270499982e-12	inf
//0.953125	0.955078125	2.942160729242243e-12	inf
//0.955078125	0.95703125	2.9893261125285962e-12	inf
//0.95703125	0.958984375	3.0366509164973125e-12	inf
//0.958984375	0.9609375	3.084254426351567e-12	inf
//0.9609375	0.962890625	2.9764994730235656e-12	inf
//0.962890625	0.96484375	3.021915790319702e-12	inf
//0.96484375	0.966796875	3.068028962112698e-12	inf
//0.966796875	0.96875	3.118165244705314e-12	inf
//0.96875	0.970703125	3.171288839824003e-12	inf
//0.970703125	0.97265625	3.224622987420818e-12	inf
//0.97265625	0.974609375	3.278082602919925e-12	inf
//0.974609375	0.9765625	3.331627399749181e-12	inf
//0.9765625	0.978515625	3.3855997400125073e-12	inf
//0.978515625	0.98046875	3.440063736707672e-12	inf
//0.98046875	0.982421875	3.4947091806718055e-12	inf
//0.982421875	0.984375	3.5496714962074635e-12	inf
//0.984375	0.986328125	3.6081154842669496e-12	inf
//0.986328125	0.98828125	3.664422761347763e-12	inf
//0.98828125	0.990234375	3.723016722255339e-12	inf
//0.990234375	0.9921875	3.783810734359222e-12	inf
//0.9921875	0.994140625	3.955250944722824e-12	inf
//0.994140625	0.99609375	4.0181136850100965e-12	inf
//0.99609375	0.998046875	4.081330692459351e-12	inf
//0.998046875	1.0	4.145223675344412e-12	inf
//spec: {
//spec:     "cname": "ml2_raw_log_15",
//spec:     "delta": 4.145223675344412e-12,
//spec:     "domain": [
//spec:         0.5,
//spec:         1.0
//spec:     ],
//spec:     "epsilon": 3.6850164149196685e-13,
//spec:     "operation": "log"
//spec: }