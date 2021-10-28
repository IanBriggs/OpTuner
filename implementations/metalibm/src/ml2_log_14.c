/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_log.py --output src/ml2_log_14.c --poly-degree 14 \
 *     --fname ml2_log_14 --verbose Info
 * 
**/
#include <stdint.h>
#include <ml_support_lib.h>


double ml2_log1p_14(double x) {
  return ml2_log_14(x + 1);
}

double ml2_log_14(double);
double ml2_log_14(double x){
    double x_man;
    double r;
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
    int32_t x_exp_int;
    double x_exp;
    double x_mul;
    double offset;
    double retval;
    
    x_man = ml_mantissa_extraction_fp64(x);
    r = x_man * 0.5;
    pm_13 = r * -0x1.1f534e3a2b067p2;
    pa_13 = 0x1.9e4809b57617ep5 + pm_13;
    pm_12 = r * pa_13;
    pa_12 = -0x1.15d9366cdd798p8 + pm_12;
    pm_11 = r * pa_12;
    pa_11 = 0x1.cbff13a3549afp9 + pm_11;
    pm_10 = r * pa_11;
    pa_10 = -0x1.06dbb271e37c1p11 + pm_10;
    pm_9 = r * pa_10;
    pa_9 = 0x1.b77ffa25971f2p11 + pm_9;
    pm_8 = r * pa_9;
    pa_8 = -0x1.15cf08b497c4cp12 + pm_8;
    pm_7 = r * pa_8;
    pa_7 = 0x1.0ea5a8dcacc1ap12 + pm_7;
    pm_6 = r * pa_7;
    pa_6 = -0x1.9a563711865aep11 + pm_6;
    pm_5 = r * pa_6;
    pa_5 = 0x1.e55e390a92996p10 + pm_5;
    pm_4 = r * pa_5;
    pa_4 = -0x1.be82d7aae1217p9 + pm_4;
    pm_3 = r * pa_4;
    pa_3 = 0x1.3d35188e8f41ap8 + pm_3;
    pm_2 = r * pa_3;
    pa_2 = -0x1.5afde98086db5p6 + pm_2;
    pm_1 = r * pa_2;
    pa_1 = 0x1.360300d355382p4 + pm_1;
    tmp = r * pa_1;
    tmp1 = -0x1.ca17bd3b71d82p1 + tmp;
    x_exp_int = ml_exp_extraction_dirty_fp64(x);
    x_exp = x_exp_int;
    x_mul = x_exp + 1.0;
    offset = x_mul * 0x1.62e42fefa39efp-1;
    retval = offset + tmp1;
    return retval;
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f2ace9867f0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f2ace986ac0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f2ace986b80> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f2ace986d60> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [0.4990234375;1.0009765625]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2ace9edfa0>
//Info: executing pass instantiate_abstract_prec on fct ml2_log_14
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2ace9edfa0>
//Info: executing pass instantiate_prec on fct ml2_log_14
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2ace9edfa0>
//Info: executing pass sub_expr_sharing on fct ml2_log_14
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2ace9edfa0>
//Info: executing pass check_processor_support on fct ml2_log_14
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f2ace9edfa0>
//Info: executing pass debug_tag_node on fct ml2_log_14
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_log_14.c
//0.000244140625	0.0002593994140625	0.0002482968936138202	0.00017910834853968402
//0.0002593994140625	0.000274658203125	0.00013737576142007095	0.00010362744003522018
//0.000274658203125	0.0002899169921875	7.440931334642185e-05	5.865876941609099e-05
//0.0002899169921875	0.00030517578125	3.9344426104708776e-05	3.239706624941809e-05
//0.00030517578125	0.0003204345703125	2.0241342408832616e-05	1.740216507833371e-05
//0.0003204345703125	0.000335693359375	1.0092327844474547e-05	9.056608269482739e-06
//0.000335693359375	0.0003509521484375	4.8537421797320444e-06	4.545380683694624e-06
//0.0003509521484375	0.0003662109375	2.2384138190988224e-06	2.1872563621741865e-06
//0.0003662109375	0.0003814697265625	9.825012290761417e-07	1.0017046464376636e-06
//0.0003814697265625	0.000396728515625	4.0643609044946637e-07	4.3237546994990037e-07
//0.000396728515625	0.0004119873046875	1.563537052237412e-07	1.7357463217154427e-07
//0.0004119873046875	0.00042724609375	5.487378387323514e-08	6.358149595748271e-08
//0.00042724609375	0.0004425048828125	1.7062609355006573e-08	2.0639936402942703e-08
//0.0004425048828125	0.000457763671875	4.474619598429425e-09	5.652694774602559e-09
//0.000457763671875	0.0004730224609375	8.986362889800079e-10	1.1859999302228364e-09
//0.0004730224609375	0.00048828125	1.0721146229617813e-10	1.478636904457361e-10
//0.00048828125	0.000518798828125	0.0002482968936138202	0.00017910834853972993
//0.000518798828125	0.00054931640625	0.00013737576142007095	0.00010362744003526867
//0.00054931640625	0.000579833984375	7.440931334642185e-05	5.8658769416146335e-05
//0.000579833984375	0.0006103515625	3.9344426104708776e-05	3.2397066249482295e-05
//0.0006103515625	0.000640869140625	2.0241342408832616e-05	1.740216507840814e-05
//0.000640869140625	0.00067138671875	1.0092327844474547e-05	9.056608269564946e-06
//0.00067138671875	0.000701904296875	4.8537421797320444e-06	4.545380683791122e-06
//0.000701904296875	0.000732421875	2.2384138190988224e-06	2.1872563622880824e-06
//0.000732421875	0.000762939453125	9.825012290761417e-07	1.0017046465730587e-06
//0.000762939453125	0.00079345703125	4.0643609044946637e-07	4.323754701120344e-07
//0.00079345703125	0.000823974609375	1.563537052237412e-07	1.735746323687993e-07
//0.000823974609375	0.0008544921875	5.487378387323514e-08	6.358149620657071e-08
//0.0008544921875	0.000885009765625	1.7062609355006573e-08	2.06399367030467e-08
//0.000885009765625	0.00091552734375	4.474619598429425e-09	5.652695142757559e-09
//0.00091552734375	0.000946044921875	8.986362889800079e-10	1.1860003875748364e-09
//0.000946044921875	0.0009765625	1.0721146229617813e-10	1.4786430443173609e-10
//0.0009765625	0.00103759765625	0.0002482968936133761	0.000179108348539723
//0.00103759765625	0.0010986328125	0.00013737576141962686	0.00010362744003526402
//0.0010986328125	0.00115966796875	7.440931334597776e-05	5.8658769416149106e-05
//0.00115966796875	0.001220703125	3.934442610426469e-05	3.239706624949488e-05
//0.001220703125	0.00128173828125	2.0241342408388527e-05	1.7402165078432176e-05
//0.00128173828125	0.0013427734375	1.0092327844030458e-05	9.056608269597473e-06
//0.0013427734375	0.00140380859375	4.8537421797320444e-06	4.54538068390815e-06
//0.00140380859375	0.00146484375	2.2384138190988224e-06	2.1872563624267345e-06
//0.00146484375	0.00152587890625	9.825012290761417e-07	1.0017046467385837e-06
//0.00152587890625	0.0015869140625	4.0643609044946637e-07	4.3237547031120937e-07
//0.0015869140625	0.00164794921875	1.563537052237412e-07	1.7357463261246528e-07
//0.00164794921875	0.001708984375	5.487378387323514e-08	6.35814965162487e-08
//0.001708984375	0.00177001953125	1.7062609355006573e-08	2.06399370789737e-08
//0.00177001953125	0.0018310546875	4.474619598429425e-09	5.652695608072558e-09
//0.0018310546875	0.00189208984375	8.986362889800079e-10	1.1860009718808363e-09
//0.00189208984375	0.001953125	1.0721146229617813e-10	1.478627973477361e-10
//0.001953125	0.0020751953125	0.0002482968936133761	0.00017910834853978287
//0.0020751953125	0.002197265625	0.00013737576141962686	0.00010362744003532776
//0.002197265625	0.0023193359375	7.440931334597776e-05	5.8658769416223036e-05
//0.0023193359375	0.00244140625	3.934442610426469e-05	3.239706624958207e-05
//0.00244140625	0.0025634765625	2.0241342408388527e-05	1.740216507853484e-05
//0.0025634765625	0.002685546875	1.0092327844030458e-05	9.056608269712193e-06
//0.002685546875	0.0028076171875	4.853742179287955e-06	4.545380683976775e-06
//0.0028076171875	0.0029296875	2.2384138186547323e-06	2.1872563625210816e-06
//0.0029296875	0.0030517578125	9.825012286320436e-07	1.0017046468653426e-06
//0.0030517578125	0.003173828125	4.0643609000537637e-07	4.323754704791324e-07
//0.003173828125	0.0032958984375	1.563537047796512e-07	1.7357463283568528e-07
//0.0032958984375	0.00341796875	5.4873783429145146e-08	6.358149682297371e-08
//0.00341796875	0.0035400390625	1.7062608910916572e-08	2.0639937470974702e-08
//0.0035400390625	0.003662109375	4.474619598429425e-09	5.6526962148555585e-09
//0.003662109375	0.0037841796875	8.986362889800079e-10	1.1860017445208365e-09
//0.0037841796875	0.00390625	1.0721146229617813e-10	1.478632393957361e-10
//0.00390625	0.004150390625	0.0002482968936133761	0.00017910834853985703
//0.004150390625	0.00439453125	0.00013737576141962686	0.00010362744003540697
//0.00439453125	0.004638671875	7.440931334597776e-05	5.865876941631527e-05
//0.004638671875	0.0048828125	3.934442610426469e-05	3.239706624969127e-05
//0.0048828125	0.005126953125	2.0241342408388527e-05	1.7402165078663962e-05
//0.005126953125	0.00537109375	1.0092327844030458e-05	9.056608269857158e-06
//0.00537109375	0.005615234375	4.853742179287955e-06	4.545380684150515e-06
//0.005615234375	0.005859375	2.2384138186547323e-06	2.1872563627305885e-06
//0.005859375	0.006103515625	9.825012286320436e-07	1.0017046471200746e-06
//0.006103515625	0.00634765625	4.0643609000537637e-07	4.3237547079163036e-07
//0.00634765625	0.006591796875	1.563537047796512e-07	1.7357463322614327e-07
//0.006591796875	0.0068359375	5.4873783429145146e-08	6.358149733126172e-08
//0.0068359375	0.007080078125	1.7062608910916572e-08	2.0639938103797702e-08
//0.007080078125	0.00732421875	4.474619154339425e-09	5.652696924337558e-09
//0.00732421875	0.007568359375	8.986358448900078e-10	1.1860026909548363e-09
//0.007568359375	0.0078125	1.0721101821617814e-10	1.478639214917361e-10
//0.0078125	0.00830078125	0.0002482968936133761	0.0001791083485399513
//0.00830078125	0.0087890625	0.00013737576141962686	0.0001036274400355081
//0.0087890625	0.00927734375	7.440931334597776e-05	5.865876941643354e-05
//0.00927734375	0.009765625	3.934442610426469e-05	3.2397066249832004e-05
//0.009765625	0.01025390625	2.0241342408388527e-05	1.7402165078831285e-05
//0.01025390625	0.0107421875	1.0092327844030458e-05	9.056608270046144e-06
//0.0107421875	0.01123046875	4.853742179287955e-06	4.545380684378542e-06
//0.01123046875	0.01171875	2.2384138186547323e-06	2.1872563630076563e-06
//0.01171875	0.01220703125	9.825012286320436e-07	1.0017046474598958e-06
//0.01220703125	0.0126953125	4.0643609000537637e-07	4.323754712127364e-07
//0.0126953125	0.01318359375	1.563537047796512e-07	1.7357463375857627e-07
//0.01318359375	0.013671875	5.4873783429145146e-08	6.35814980342197e-08
//0.013671875	0.01416015625	1.7062608910916572e-08	2.0639938994077703e-08
//0.01416015625	0.0146484375	4.474619154339425e-09	5.652698083687558e-09
//0.0146484375	0.01513671875	8.986358448900078e-10	1.1860017091158364e-09
//0.01513671875	0.015625	1.0721101821617814e-10	1.478648584837361e-10
//0.015625	0.0166015625	0.0002482968936131541	0.0001791083485400249
//0.0166015625	0.017578125	0.0001373757614194048	0.00010362744003559028
//0.017578125	0.0185546875	7.440931334575571e-05	5.865876941653803e-05
//0.0185546875	0.01953125	3.934442610404264e-05	3.239706624996618e-05
//0.01953125	0.0205078125	2.0241342408166482e-05	1.740216507900109e-05
//0.0205078125	0.021484375	1.0092327843808412e-05	9.05660827024545e-06
//0.021484375	0.0224609375	4.8537421790659115e-06	4.545380684631696e-06
//0.0224609375	0.0234375	2.2384138184326885e-06	2.1872563633296673e-06
//0.0234375	0.0244140625	9.825012284099986e-07	1.0017046478717577e-06
//0.0244140625	0.025390625	4.0643608978333637e-07	4.323754717436064e-07
//0.025390625	0.0263671875	1.563537045576112e-07	1.7357463445644227e-07
//0.0263671875	0.02734375	5.4873783207105147e-08	6.358149899429771e-08
//0.02734375	0.0283203125	1.7062608688866574e-08	2.06399402572467e-08
//0.0283203125	0.029296875	4.474618932299425e-09	5.652697122525559e-09
//0.029296875	0.0302734375	8.986356228400078e-10	1.1860028452088364e-09
//0.0302734375	0.03125	1.0721079616617813e-10	1.478661524717361e-10
//0.03125	0.033203125	0.0002482968936131541	0.00017910834854018538
//0.033203125	0.03515625	0.0001373757614194048	0.00010362744003576508
//0.03515625	0.037109375	7.440931334575571e-05	5.865876941674669e-05
//0.037109375	0.0390625	3.934442610404264e-05	3.23970662502199e-05
//0.0390625	0.041015625	2.0241342408166482e-05	1.740216507930954e-05
//0.041015625	0.04296875	1.0092327843808412e-05	9.056608270601522e-06
//0.04296875	0.044921875	4.8537421790659115e-06	4.545380685072695e-06
//0.044921875	0.046875	2.2384138184326885e-06	2.1872563638811785e-06
//0.046875	0.048828125	9.825012284099986e-07	1.0017046485705366e-06
//0.048828125	0.05078125	4.0643608978333637e-07	4.3237547264258836e-07
//0.05078125	0.052734375	1.563537045576112e-07	1.7357463564455628e-07
//0.052734375	0.0546875	5.4873783207105147e-08	6.358150064974072e-08
//0.0546875	0.056640625	1.7062608688866574e-08	2.06399394437627e-08
//0.056640625	0.05859375	4.474618932299425e-09	5.652698570824558e-09
//0.05859375	0.060546875	8.986356228400078e-10	1.1860047040848363e-09
//0.060546875	0.0625	1.0721079616617813e-10	1.478683141017361e-10
//0.0625	0.06640625	0.00024829689361293203	0.00017910834854034603
//0.06640625	0.0703125	0.00013737576141918277	0.00010362744003594681
//0.0703125	0.07421875	7.440931334553367e-05	5.8658769416979104e-05
//0.07421875	0.078125	3.93444261038206e-05	3.2397066250521286e-05
//0.078125	0.08203125	2.0241342407944437e-05	1.740216507969686e-05
//0.08203125	0.0859375	1.0092327843586369e-05	9.056608271066851e-06
//0.0859375	0.08984375	4.853742178843866e-06	4.545380685678847e-06
//0.08984375	0.09375	2.2384138182106435e-06	2.1872563646771223e-06
//0.09375	0.09765625	9.825012281879546e-07	1.0017046496298947e-06
//0.09765625	0.1015625	4.0643608978333637e-07	4.323754741942994e-07
//0.1015625	0.10546875	1.563537045576112e-07	1.7357463778299829e-07
//0.10546875	0.109375	5.4873783207105147e-08	6.358149977674972e-08
//0.109375	0.11328125	1.7062608688866574e-08	2.0639941243047703e-08
//0.11328125	0.1171875	4.474618932299425e-09	5.652700938636558e-09
//0.1171875	0.12109375	8.986356228400078e-10	1.1860078762988364e-09
//0.12109375	0.125	1.0721079616617813e-10	1.478721776737361e-10
//0.125	0.1328125	0.000248296893612821	0.00017910834854064912
//0.1328125	0.140625	0.00013737576141907175	0.00010362744003629048
//0.140625	0.1484375	7.440931334542265e-05	5.8658769417414337e-05
//0.1484375	0.15625	3.9344426103709576e-05	3.2397066251083546e-05
//0.15625	0.1640625	2.0241342407833415e-05	1.7402165080422883e-05
//0.1640625	0.171875	1.0092327843475347e-05	9.05660827195399e-06
//0.171875	0.1796875	4.8537421787328446e-06	4.545380686856679e-06
//0.1796875	0.1875	2.238413818099621e-06	2.1872563662687294e-06
//0.1875	0.1953125	9.825012280769317e-07	1.0017046518358937e-06
//0.1953125	0.203125	4.0643608945026634e-07	4.323754743885894e-07
//0.203125	0.2109375	1.563537042245412e-07	1.7357463777258428e-07
//0.2109375	0.21875	5.487378287403514e-08	6.358150250764471e-08
//0.21875	0.2265625	1.7062608355806575e-08	2.0639944922577702e-08
//0.2265625	0.234375	4.4746185992294246e-09	5.6527060236875584e-09
//0.234375	0.2421875	8.986355118200078e-10	1.1860077514988364e-09
//0.2421875	0.25	1.0721068514617814e-10	1.4787285181373608e-10
//0.25	0.265625	0.0002482968936127655	0.00017910834854124058
//0.265625	0.28125	0.00013737576141901624	0.00010362744003697785
//0.28125	0.296875	7.440931334536714e-05	5.865876941830619e-05
//0.296875	0.3125	3.9344426103654065e-05	3.239706625227169e-05
//0.3125	0.328125	2.0241342407777904e-05	1.740216508201941e-05
//0.328125	0.34375	1.0092327843419834e-05	9.056608274010285e-06
//0.34375	0.359375	4.853742178677333e-06	4.545380689773366e-06
//0.359375	0.375	2.2384138180441105e-06	2.1872563673282736e-06
//0.375	0.390625	9.825012280214207e-07	1.0017046530323326e-06
//0.390625	0.40625	4.0643608939475635e-07	4.323754783308684e-07
//0.40625	0.421875	1.563537041690312e-07	1.7357464325168628e-07
//0.421875	0.4375	5.487378281852514e-08	6.358150993090171e-08
//0.4375	0.453125	1.7062608300286573e-08	2.06399474556077e-08
//0.453125	0.46875	4.474618543719425e-09	5.652708976927559e-09
//0.46875	0.484375	8.986352342600078e-10	1.1860162064888363e-09
//0.484375	0.5	1.0721040758617814e-10	1.478846163937361e-10
//0.5	0.53125	0.00024829689361259897	0.0001791083485425731
//0.53125	0.5625	0.0001373757614188497	0.0001036274400386503
//0.5625	0.59375	7.44093133452006e-05	5.865876942069894e-05
//0.59375	0.625	3.934442610348753e-05	3.239706625368316e-05
//0.625	0.65625	2.024134240761137e-05	1.740216508355031e-05
//0.65625	0.6875	1.0092327843253302e-05	9.056608276398536e-06
//0.6875	0.71875	4.853742178510799e-06	4.545380692992624e-06
//0.71875	0.75	2.238413817877576e-06	2.1872563749900093e-06
//0.75	0.78125	9.825012278548877e-07	1.0017046576337127e-06
//0.78125	0.8125	4.0643608922822634e-07	4.323754846937984e-07
//0.8125	0.84375	1.563537041135212e-07	1.7357465192572627e-07
//0.84375	0.875	5.487378276301514e-08	6.358152063253171e-08
//0.875	0.90625	1.7062608244776573e-08	2.06399655474177e-08
//0.90625	0.9375	4.474618488209425e-09	5.652722505797559e-09
//0.9375	0.96875	8.986351787500078e-10	1.1860338355388363e-09
//0.96875	1.0	1.0721035207617813e-10	1.479099646337361e-10
//1.0	1.0625	0.00024829689361259897	0.00017910834854556286
//1.0625	1.125	0.0001373757614188497	0.00010362744004367491
//1.125	1.1875	7.44093133452006e-05	5.865876942885168e-05
//1.1875	1.25	3.934442610348753e-05	3.2397066261724475e-05
//1.25	1.3125	2.024134240761137e-05	1.7402165094822874e-05
//1.3125	1.375	1.0092327843253302e-05	9.056608295286566e-06
//1.375	1.4375	4.853742178510799e-06	4.5453807128633435e-06
//1.4375	1.5	2.238413817877576e-06	2.1872564022923693e-06
//1.5	1.5625	9.825012278548877e-07	1.0017047099749727e-06
//1.5625	1.625	4.0643608922822634e-07	4.323755387616584e-07
//1.625	1.6875	1.563537040025012e-07	1.7357474853413628e-07
//1.6875	1.75	5.487378265199514e-08	6.358163445318171e-08
//1.75	1.8125	1.7062608133756574e-08	2.0640199778827702e-08
//1.8125	1.875	4.4746183771894246e-09	5.653145009847559e-09
//1.875	1.9375	8.986351787500078e-10	1.1870618396588363e-09
//1.9375	2.0	1.0721035207617813e-10	inf
//2.0	2.125	0.0002482968936125157	0.0001791083647813514
//2.125	2.25	0.0001373757614187942	0.00010362744011020975
//2.25	2.375	7.440931334514509e-05	5.8658769466536664e-05
//2.375	2.5	3.934442610343202e-05	3.239706628272706e-05
//2.5	2.625	2.024134240755586e-05	1.7402165103253474e-05
//2.625	2.75	1.0092327843197791e-05	9.056608292727205e-06
//2.75	2.875	4.853742178510799e-06	4.545380706809694e-06
//2.875	3.0	2.238413817877576e-06	2.1872563863619696e-06
//3.0	3.125	9.825012278548877e-07	1.0017046722043726e-06
//3.125	3.25	4.0643608922822634e-07	4.323754978935484e-07
//3.25	3.375	1.563537040025012e-07	1.7357466161390627e-07
//3.375	3.5	5.487378265199514e-08	6.358152713292172e-08
//3.5	3.625	1.7062608244776573e-08	2.06399714080977e-08
//3.625	3.75	4.474618488209425e-09	5.652732845437558e-09
//3.75	3.875	8.986351787500078e-10	1.1860401448088364e-09
//3.875	4.0	1.0721035207617813e-10	1.479103926737361e-10
//4.0	4.25	0.000248296893612821	0.0001791083485452965
//4.25	4.5	0.00013737576141907175	0.00010362744004085707
//4.5	4.75	7.440931334542265e-05	5.865876942221626e-05
//4.75	5.0	3.9344426103709576e-05	3.239706625616399e-05
//5.0	5.25	2.0241342407833415e-05	1.7402165085501063e-05
//5.25	5.5	1.0092327843475347e-05	9.05660827763415e-06
//5.5	5.75	4.8537421787328446e-06	4.545380693095714e-06
//5.75	6.0	2.238413818099621e-06	2.1872563731548993e-06
//6.0	6.25	9.825012281879546e-07	1.0017046594628827e-06
//6.25	6.5	4.0643608956128636e-07	4.323754838232584e-07
//6.5	6.75	1.563537043355712e-07	1.7357464381650627e-07
//6.75	7.0	5.487378298505514e-08	6.35815081948517e-08
//7.0	7.25	1.7062608466826575e-08	2.0639950825597702e-08
//7.25	7.5	4.474618710259425e-09	5.652711900487559e-09
//7.5	7.75	8.986354008000078e-10	1.1860184420288363e-09
//7.75	8.0	1.0721057412617814e-10	1.478850023937361e-10
//8.0	8.5	0.00024829689361259897	0.00017910834854233145
//8.5	9.0	0.0001373757614188497	0.000103627440037924
//9.0	9.5	7.440931334531162e-05	5.865876941930219e-05
//9.5	10.0	3.9344426103598553e-05	3.239706625318127e-05
//10.0	10.5	2.0241342407722393e-05	1.7402165082759132e-05
//10.5	11.0	1.0092327843364324e-05	9.056608274419318e-06
//11.0	11.5	4.853742178621821e-06	4.5453806896795155e-06
//11.5	12.0	2.2384138179885993e-06	2.1872563668107144e-06
//12.0	12.5	9.825012279659096e-07	1.0017046518904856e-06
//12.5	13.0	4.0643608933924636e-07	4.3237547627918837e-07
//13.0	13.5	1.563537041135212e-07	1.735746397512883e-07
//13.5	14.0	5.487378276301514e-08	6.358150441736171e-08
//14.0	14.5	1.7062608244776573e-08	2.0639946798297703e-08
//14.5	15.0	4.474618488209425e-09	5.652707718187558e-09
//15.0	15.5	8.986354008000078e-10	1.1860083256588363e-09
//15.5	16.0	1.0721057412617814e-10	1.4787282943373608e-10
//16.0	17.0	0.00024829689361293203	0.00017910834854124923
//17.0	18.0	0.00013737576141918277	0.00010362744003682062
//18.0	19.0	7.440931334553367e-05	5.8658769417910894e-05
//19.0	20.0	3.93444261038206e-05	3.23970662515332e-05
//20.0	21.0	2.0241342407944437e-05	1.7402165080793294e-05
//21.0	22.0	1.0092327843586369e-05	9.056608272189537e-06
//22.0	23.0	4.853742178843866e-06	4.545380686910473e-06
//23.0	24.0	2.2384138182106435e-06	2.1872563660342296e-06
//24.0	25.0	9.825012281879546e-07	1.0017046511341098e-06
//25.0	26.0	4.0643608956128636e-07	4.323754757542614e-07
//26.0	27.0	1.563537043355712e-07	1.7357463653635327e-07
//27.0	28.0	5.4873783207105147e-08	6.358150066174971e-08
//28.0	29.0	1.7062608688866574e-08	2.06399420757167e-08
//29.0	30.0	4.474618932299425e-09	5.652701653547559e-09
//30.0	31.0	8.986356228400078e-10	1.1860083621788364e-09
//31.0	32.0	1.0721079616617813e-10	1.478722326637361e-10
//32.0	34.0	0.0002482968936131541	0.0001791083485407421
//34.0	36.0	0.0001373757614194048	0.00010362744003630056
//36.0	38.0	7.440931334575571e-05	5.8658769417310416e-05
//38.0	40.0	3.934442610404264e-05	3.239706625082297e-05
//40.0	42.0	2.0241342408166482e-05	1.7402165079952207e-05
//42.0	44.0	1.0092327843808412e-05	9.056608271248441e-06
//44.0	46.0	4.8537421790659115e-06	4.545380685766396e-06
//46.0	48.0	2.2384138186547323e-06	2.1872563647211676e-06
//48.0	50.0	9.825012286320436e-07	1.0017046494672946e-06
//50.0	52.0	4.0643609000537637e-07	4.3237547359881037e-07
//52.0	54.0	1.563537047796512e-07	1.7357463666688227e-07
//54.0	56.0	5.4873783429145146e-08	6.35814989785597e-08
//56.0	58.0	1.7062608910916572e-08	2.06399399924987e-08
//58.0	60.0	4.474619154339425e-09	5.652699045019558e-09
//60.0	62.0	8.986358448900078e-10	1.1860050485198364e-09
//62.0	64.0	1.0721101821617814e-10	1.478684372637361e-10
//64.0	68.0	0.0002482968936131541	0.00017910834854038967
//68.0	72.0	0.0001373757614194048	0.00010362744003594013
//72.0	76.0	7.440931334597776e-05	5.8658769416975716e-05
//76.0	80.0	3.934442610426469e-05	3.239706625042739e-05
//80.0	84.0	2.0241342408388527e-05	1.7402165079485303e-05
//84.0	88.0	1.0092327844030458e-05	9.056608270729308e-06
//88.0	92.0	4.853742179287955e-06	4.545380685141393e-06
//92.0	96.0	2.2384138186547323e-06	2.1872563638659243e-06
//96.0	100.0	9.825012286320436e-07	1.0017046484349328e-06
//100.0	104.0	4.0643609000537637e-07	4.323754723321654e-07
//104.0	108.0	1.563537047796512e-07	1.735746350701063e-07
//108.0	112.0	5.4873783429145146e-08	6.358149963911572e-08
//112.0	116.0	1.7062608910916572e-08	2.06399408787197e-08
//116.0	120.0	4.474619154339425e-09	5.652697430884559e-09
//120.0	124.0	8.986358448900078e-10	1.1860030700568363e-09
//124.0	128.0	1.0721101821617814e-10	1.478662424387361e-10
//128.0	136.0	0.00024829689361293203	0.00017910834854010735
//136.0	144.0	0.00013737576141918277	0.00010362744003565241
//144.0	152.0	7.440931334553367e-05	5.8658769416588174e-05
//152.0	160.0	3.93444261038206e-05	3.2397066250001e-05
//160.0	168.0	2.0241342407944437e-05	1.7402165079013448e-05
//168.0	176.0	1.0092327843586369e-05	9.05660827022432e-06
//176.0	184.0	4.853742178843866e-06	4.545380684569826e-06
//184.0	192.0	2.2384138182106435e-06	2.1872563632111416e-06
//192.0	200.0	9.825012281879546e-07	1.0017046476740996e-06
//200.0	208.0	4.0643608956128636e-07	4.323754714344944e-07
//208.0	216.0	1.563537043355712e-07	1.7357463398504128e-07
//216.0	224.0	5.487378298505514e-08	6.358149826586972e-08
//224.0	232.0	1.7062608466826575e-08	2.06399391922627e-08
//232.0	240.0	4.474618710259425e-09	5.652698221385559e-09
//240.0	248.0	8.986354008000078e-10	1.1860016963368364e-09
//248.0	256.0	1.0721057412617814e-10	1.478647493687361e-10
//256.0	272.0	0.0002482968936133761	0.00017910834854006026
//272.0	288.0	0.00013737576141962686	0.00010362744003560076
//288.0	304.0	7.440931334597776e-05	5.86587694165161e-05
//304.0	320.0	3.934442610426469e-05	3.2397066249902206e-05
//320.0	336.0	2.0241342408388527e-05	1.7402165078884143e-05
//336.0	352.0	1.0092327844030458e-05	9.056608270073998e-06
//352.0	368.0	4.853742179287955e-06	4.545380684376606e-06
//368.0	384.0	2.2384138186547323e-06	2.1872563629652344e-06
//384.0	400.0	9.825012286320436e-07	1.0017046473621457e-06
//400.0	416.0	4.0643609000537637e-07	4.3237547103878537e-07
//416.0	432.0	1.563537047796512e-07	1.735746334762953e-07
//432.0	448.0	5.4873783429145146e-08	6.35814975846637e-08
//448.0	464.0	1.7062608910916572e-08	2.06399383339047e-08
//464.0	480.0	4.474619154339425e-09	5.652697113999558e-09
//480.0	496.0	8.986358448900078e-10	1.1860028085838363e-09
//496.0	512.0	1.0721101821617814e-10	1.4786392916573609e-10
//512.0	544.0	0.0002482968936133761	0.0001791083485399402
//544.0	576.0	0.00013737576141962686	0.00010362744003547754
//576.0	608.0	7.440931334597776e-05	5.865876941637799e-05
//608.0	640.0	3.934442610426469e-05	3.239706624974445e-05
//640.0	672.0	2.0241342408388527e-05	1.7402165078703867e-05
//672.0	704.0	1.0092327844030458e-05	9.056608269878098e-06
//704.0	736.0	4.853742179287955e-06	4.545380684149066e-06
//736.0	768.0	2.2384138186547323e-06	2.1872563626990365e-06
//768.0	800.0	9.825012286320436e-07	1.0017046470478757e-06
//800.0	832.0	4.0643609000537637e-07	4.323754706642184e-07
//832.0	864.0	1.563537047796512e-07	1.7357463302146427e-07
//864.0	896.0	5.4873783429145146e-08	6.358149700927871e-08
//896.0	928.0	1.7062608910916572e-08	2.0639937638078702e-08
//928.0	960.0	4.474619154339425e-09	5.652696253108558e-09
//960.0	992.0	8.986362889800079e-10	1.1860018286098365e-09
//992.0	1024.0	1.0721146229617813e-10	1.478632451227361e-10
//1024.0	1088.0	0.0002482968936133761	0.0001791083485398484
//1088.0	1152.0	0.00013737576141962686	0.00010362744003538328
//1152.0	1216.0	7.440931334597776e-05	5.8658769416272306e-05
//1216.0	1280.0	3.934442610426469e-05	3.239706624962374e-05
//1280.0	1344.0	2.0241342408388527e-05	1.7402165078566028e-05
//1344.0	1408.0	1.0092327844030458e-05	9.056608269728507e-06
//1408.0	1472.0	4.853742179287955e-06	4.545380683975651e-06
//1472.0	1536.0	2.2384138186547323e-06	2.1872563624966994e-06
//1536.0	1600.0	9.825012286320436e-07	1.0017046468098437e-06
//1600.0	1664.0	4.0643609000537637e-07	4.3237547038180337e-07
//1664.0	1728.0	1.563537047796512e-07	1.735746326804993e-07
//1728.0	1792.0	5.487378387323514e-08	6.35814966629727e-08
//1792.0	1856.0	1.7062609355006573e-08	2.0639937208948703e-08
//1856.0	1920.0	4.474619598429425e-09	5.652695712079558e-09
//1920.0	1984.0	8.986362889800079e-10	1.1860010341168364e-09
//1984.0	2048.0	1.0721146229617813e-10	1.478628018737361e-10
//2048.0	2176.0	0.0002482968936138202	0.00017910834853984353
//2176.0	2304.0	0.00013737576142007095	0.00010362744003537624
//2304.0	2432.0	7.440931334642185e-05	5.865876941625613e-05
//2432.0	2560.0	3.9344426104708776e-05	3.239706624959575e-05
//2560.0	2688.0	2.0241342408832616e-05	1.7402165078524693e-05
//2688.0	2816.0	1.0092327844474547e-05	9.056608269678263e-06
//2816.0	2944.0	4.8537421801761345e-06	4.5453806839752975e-06
//2944.0	3072.0	2.2384138195429116e-06	2.1872563624749446e-06
//3072.0	3200.0	9.825012295202216e-07	1.0017046467619167e-06
//3200.0	3328.0	4.064360908935564e-07	4.323754703016144e-07
//3328.0	3456.0	1.563537056678312e-07	1.7357463255794828e-07
//3456.0	3584.0	5.487378431732515e-08	6.358149639519072e-08
//3584.0	3712.0	1.7062609799096573e-08	2.06399368793787e-08
//3712.0	3840.0	4.474620042519424e-09	5.652695300083558e-09
//3840.0	3968.0	8.986367330600079e-10	1.1860005144628363e-09
//3968.0	4096.0	1.0721190638617813e-10	1.4786438308373609e-10
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//4096.0	4096.0	0.00024829689361334024	0.00017910834853968662
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.00024829689361259897,
//spec:     "domain": [
//spec:         0.5,
//spec:         2.0
//spec:     ],
//spec:     "epsilon": 1.479099646337361e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.0002482968936127655,
//spec:     "domain": [
//spec:         0.25,
//spec:         4.0
//spec:     ],
//spec:     "epsilon": 1.478846163937361e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.000248296893612821,
//spec:     "domain": [
//spec:         0.125,
//spec:         8.0
//spec:     ],
//spec:     "epsilon": 1.4787285181373608e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.00024829689361293203,
//spec:     "domain": [
//spec:         0.0625,
//spec:         16.0
//spec:     ],
//spec:     "epsilon": 1.478721776737361e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.0002482968936131541,
//spec:     "domain": [
//spec:         0.03125,
//spec:         32.0
//spec:     ],
//spec:     "epsilon": 1.478683141017361e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.0002482968936131541,
//spec:     "domain": [
//spec:         0.015625,
//spec:         64.0
//spec:     ],
//spec:     "epsilon": 1.478661524717361e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.0002482968936133761,
//spec:     "domain": [
//spec:         0.0078125,
//spec:         128.0
//spec:     ],
//spec:     "epsilon": 1.478648584837361e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.0002482968936133761,
//spec:     "domain": [
//spec:         0.00390625,
//spec:         256.0
//spec:     ],
//spec:     "epsilon": 1.478639214917361e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.0002482968936133761,
//spec:     "domain": [
//spec:         0.001953125,
//spec:         512.0
//spec:     ],
//spec:     "epsilon": 1.478632393957361e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.0002482968936133761,
//spec:     "domain": [
//spec:         0.0009765625,
//spec:         1024.0
//spec:     ],
//spec:     "epsilon": 1.478627973477361e-10,
//spec:     "operation": "log"
//spec: }
//spec: {
//spec:     "cname": "ml2_log_14",
//spec:     "delta": 0.0002482968936138202,
//spec:     "domain": [
//spec:         0.00048828125,
//spec:         2048.0
//spec:     ],
//spec:     "epsilon": 1.478627973477361e-10,
//spec:     "operation": "log"
//spec: }
