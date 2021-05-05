/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_5.c \
 *     --poly-degree 5 --fname ml2_raw_wide_sin_5 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_5(double);
double ml2_raw_wide_sin_5(double x){
    double x2_;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_3 = x2_ * 0x1.48526f3da159bp-8;
    pa_3 = -0x1.2fe6bd895f8f5p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.f3fd619b5ee98p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7ff628c84ee0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7ff628c8b1f0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7ff628c8b2b0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7ff628c8b490> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff628c8bf40>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_5
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff628c8bf40>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_5
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff628c8bf40>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_5
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff628c8bf40>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_5
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff628c8bf40>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_5
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_5.c
//-3.149405153589793	-3.148916872339793	0.00018325969257650877	0.02345747927090274
//-3.148916872339793	-3.148428591089793	0.00017091413060457984	0.02333568460195268
//-3.148428591089793	-3.147940309839793	0.00015864428178822052	0.02320757282681001
//-3.147940309839793	-3.147452028589793	0.0001464500192628455	0.023071665663433837
//-3.147452028589793	-3.146963747339793	0.00013433121627184945	0.0229259920937833
//-3.146963747339793	-3.146475466089793	0.0001222877461665615	0.022767864392880845
//-3.146475466089793	-3.145987184839793	0.00011031948240620256	0.022593519775314038
//-3.145987184839793	-3.145498903589793	9.842629855783844e-05	0.022397523139404393
//-3.145498903589793	-3.145010622339793	8.660806829633706e-05	0.022171721869504
//-3.145010622339793	-3.144522341089793	7.486466540432332e-05	0.021903304754545962
//-3.144522341089793	-3.144034059839793	6.319596377213555e-05	0.02157091982514672
//-3.144034059839793	-3.143545778589793	5.160183739777958e-05	0.021136133595232573
//-3.143545778589793	-3.143057497339793	4.008216038688591e-05	0.020522079166124023
//-3.143057497339793	-3.142569216089793	2.863680695266383e-05	0.019549400538950185
//-3.142569216089793	-3.142080934839793	1.7265651415858092e-05	0.017680030016567833
//-3.142080934839793	-3.141592653589793	5.9685682047038846e-06	inf
//-3.1415926535897927	-2.945243112740431	0.0009403178106607912	inf
//-2.945243112740431	-2.7488935718910685	0.005756029134778839	0.015041228984521699
//-2.7488935718910685	-2.5525440310417067	0.012085047927803185	0.021752511580975513
//-2.5525440310417067	-2.3561944901923444	0.01658123878447653	0.02345747927078807
//-2.3561944901923444	-2.1598449493429825	0.018080712568464077	0.02344941276995361
//-2.1598449493429825	-1.9634954084936205	0.01807893285110258	0.021743347662505227
//-1.9634954084936205	-1.7671458676442584	0.01647357791791445	0.017830872249259687
//-1.7671458676442584	-1.5707963267948963	0.012362627733463609	0.012604825929260493
//-1.5707963267948963	-1.3744467859455343	0.006733620074303826	0.006733620074303882
//-1.3744467859455343	-1.1780972450961722	0.0046792650583647915	0.005064800002274822
//-1.1780972450961722	-0.9817477042468102	0.008593639029670733	0.010335481781315907
//-0.9817477042468102	-0.7853981633974482	0.010525544997550365	0.014885368486904032
//-0.7853981633974482	-0.5890486225480861	0.01069503803123344	0.018562517032267415
//-0.5890486225480861	-0.3926990816987241	0.010312781913047114	0.02125940911611622
//-0.3926990816987241	-0.19634954084936204	0.008135623650608957	0.02290464965403008
//-0.19634954084936204	0.0	0.0044684754766712844	inf
//0.0	0.19634954084936204	0.0044684754766712844	inf
//0.19634954084936204	0.3926990816987241	0.008135623650608957	0.02290464965403008
//0.3926990816987241	0.5890486225480861	0.010312781913047114	0.02125940911611622
//0.5890486225480861	0.7853981633974482	0.01069503803123344	0.018562517032267415
//0.7853981633974482	0.9817477042468102	0.010525544997550365	0.014885368486904032
//0.9817477042468102	1.1780972450961722	0.008593639029670733	0.010335481781315907
//1.1780972450961722	1.3744467859455343	0.0046792650583647915	0.005064800002274822
//1.3744467859455343	1.5707963267948963	0.006733620074303826	0.006733620074303882
//1.5707963267948963	1.7671458676442584	0.012362627733463609	0.012604825929260493
//1.7671458676442584	1.9634954084936205	0.01647357791791445	0.017830872249259687
//1.9634954084936205	2.1598449493429825	0.01807893285110258	0.021743347662505227
//2.1598449493429825	2.3561944901923444	0.018080712568464077	0.02344941276995361
//2.3561944901923444	2.5525440310417067	0.01658123878447653	0.02345747927078807
//2.5525440310417067	2.7488935718910685	0.012085047927803185	0.021752511580975513
//2.7488935718910685	2.945243112740431	0.005756029134778839	0.015041228984521699
//2.945243112740431	3.1415926535897927	0.0009403178106607912	inf
//3.141592653589793	3.142080934839793	5.9685682047038846e-06	inf
//3.142080934839793	3.142569216089793	1.7265651415858092e-05	0.017680030016567833
//3.142569216089793	3.143057497339793	2.863680695266383e-05	0.019549400538950185
//3.143057497339793	3.143545778589793	4.008216038688591e-05	0.020522079166124023
//3.143545778589793	3.144034059839793	5.160183739777958e-05	0.021136133595232573
//3.144034059839793	3.144522341089793	6.319596377213555e-05	0.02157091982514672
//3.144522341089793	3.145010622339793	7.486466540432332e-05	0.021903304754545962
//3.145010622339793	3.145498903589793	8.660806829633706e-05	0.022171721869504
//3.145498903589793	3.145987184839793	9.842629855783844e-05	0.022397523139404393
//3.145987184839793	3.146475466089793	0.00011031948240620256	0.022593519775314038
//3.146475466089793	3.146963747339793	0.0001222877461665615	0.022767864392880845
//3.146963747339793	3.147452028589793	0.00013433121627184945	0.0229259920937833
//3.147452028589793	3.147940309839793	0.0001464500192628455	0.023071665663433837
//3.147940309839793	3.148428591089793	0.00015864428178822052	0.02320757282681001
//3.148428591089793	3.148916872339793	0.00017091413060457984	0.02333568460195268
//3.148916872339793	3.149405153589793	0.00018325969257650877	0.02345747927090274
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_5",
//spec:     "delta": 0.018080712568464077,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 0.005064800002274822,
//spec:     "operation": "sin"
//spec: }