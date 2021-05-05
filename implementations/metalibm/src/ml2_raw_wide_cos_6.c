/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_cos.py --output src/ml2_raw_wide_cos_6.c \
 *     --poly-degree 6 --fname ml2_raw_wide_cos_6 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_cos_6(double);
double ml2_raw_wide_cos_6(double x){
    double x2_;
    double pm_4;
    double pa_4;
    double pm_2;
    double pa_2;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    pm_4 = x2_ * -0x1.0321847495ea7p-10;
    pa_4 = 0x1.431cc017cb41ep-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.fb7f984c0d09ap-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fec22ee64acb9p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f5037b41ee0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f5037b491f0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f5037b492b0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f5037b49490> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//LSKDFKLJK 0.99757525025542925778410108250682242214679718017578125 * _x_^0 + -0.49560392345598247576532457969733513891696929931640625 * _x_^2 + 3.944242017892228557851552750435075722634792327880859375e-2 * _x_^4 + -9.8850604003601085477404009083102209842763841152191162109375e-4 * _x_^6
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5037b50160>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_6
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5037b50160>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_6
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5037b50160>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_6
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5037b50160>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_6
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f5037b50160>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_6
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_6.c
//-3.149405153589793	-3.148916872339793	0.0024246757474583767	0.0024247497445717687
//-3.148916872339793	-3.148428591089793	0.0024057630560444733	0.0024058275850803736
//-3.148428591089793	-3.147940309839793	0.0023869013190271926	0.002386957090111953
//-3.147940309839793	-3.147452028589793	0.0023680904531417123	0.00236813816236899
//-3.147452028589793	-3.146963747339793	0.0023493303752130743	0.002349370704718704
//-3.146963747339793	-3.146475466089793	0.0023306210021561253	0.002330654620192761
//-3.146475466089793	-3.145987184839793	0.0023119622509754504	0.0023119898119869837
//-3.145987184839793	-3.145498903589793	0.002293354038765314	0.0022933761834610603
//-3.145498903589793	-3.145010622339793	0.0022747962827095966	0.002274813638138257
//-3.145010622339793	-3.144522341089793	0.0022562889000817313	0.002256302079705128
//-3.144522341089793	-3.144034059839793	0.0022378318082446435	0.0022378414120112276
//-3.144034059839793	-3.143545778589793	0.0022194249246506865	0.0022194315390688243
//-3.143545778589793	-3.143057497339793	0.0022010681668415827	0.002201072365052613
//-3.143057497339793	-3.142569216089793	0.002182761452448356	0.002182763794299427
//-3.142569216089793	-3.142080934839793	0.002164504699191276	0.0021645057313079545
//-3.142080934839793	-3.141592653589793	0.0021462978248797905	0.0021462980807384537
//-3.1415926535897927	-2.945243112740431	0.002128140747412611	0.0021281407474132165
//-2.945243112740431	-2.7488935718910685	0.0023125604423805753	0.0024247497446432714
//-2.7488935718910685	-2.5525440310417067	0.002097072109698384	0.0022698544949888693
//-2.5525440310417067	-2.3561944901923444	0.000923765555139145	0.0011110033866200094
//-2.3561944901923444	-2.1598449493429825	0.000832490351591847	0.0014984430448467983
//-2.1598449493429825	-1.9634954084936205	0.0009027727060482387	0.002206627857463294
//-1.9634954084936205	-1.7671458676442584	0.0008444399224457735	0.0024247497501217906
//-1.7671458676442584	-1.5707963267948963	0.00047301725080881827	inf
//-1.5707963267948963	-1.3744467859455343	0.0003321164687017046	inf
//-1.3744467859455343	-1.1780972450961722	0.0003958971757147594	0.0017023728561696592
//-1.1780972450961722	-0.9817477042468102	0.00037186479610312804	0.0009717295410593561
//-0.9817477042468102	-0.7853981633974482	0.00046895482738890755	0.0006632022770338085
//-0.7853981633974482	-0.5890486225480861	0.0011508249211900537	0.0013840853642301688
//-0.5890486225480861	-0.3926990816987241	0.0017982610777089157	0.0019464237646015406
//-0.3926990816987241	-0.19634954084936204	0.002258550289149765	0.0023027979051859467
//-0.19634954084936204	0.0	0.002424749744570805	0.0024247497445708064
//0.0	0.19634954084936204	0.002424749744570805	0.0024247497445708064
//0.19634954084936204	0.3926990816987241	0.002258550289149765	0.0023027979051859467
//0.3926990816987241	0.5890486225480861	0.0017982610777089157	0.0019464237646015406
//0.5890486225480861	0.7853981633974482	0.0011508249211900537	0.0013840853642301688
//0.7853981633974482	0.9817477042468102	0.00046895482738890755	0.0006632022770338085
//0.9817477042468102	1.1780972450961722	0.00037186479610312804	0.0009717295410593561
//1.1780972450961722	1.3744467859455343	0.0003958971757147594	0.0017023728561696592
//1.3744467859455343	1.5707963267948963	0.0003321164687017046	inf
//1.5707963267948963	1.7671458676442584	0.00047301725080881827	inf
//1.7671458676442584	1.9634954084936205	0.0008444399224457735	0.0024247497501217906
//1.9634954084936205	2.1598449493429825	0.0009027727060482387	0.002206627857463294
//2.1598449493429825	2.3561944901923444	0.000832490351591847	0.0014984430448467983
//2.3561944901923444	2.5525440310417067	0.000923765555139145	0.0011110033866200094
//2.5525440310417067	2.7488935718910685	0.002097072109698384	0.0022698544949888693
//2.7488935718910685	2.945243112740431	0.0023125604423805753	0.0024247497446432714
//2.945243112740431	3.1415926535897927	0.002128140747412611	0.0021281407474132165
//3.141592653589793	3.142080934839793	0.0021462978248797905	0.0021462980807384537
//3.142080934839793	3.142569216089793	0.002164504699191276	0.0021645057313079545
//3.142569216089793	3.143057497339793	0.002182761452448356	0.002182763794299427
//3.143057497339793	3.143545778589793	0.0022010681668415827	0.002201072365052613
//3.143545778589793	3.144034059839793	0.0022194249246506865	0.0022194315390688243
//3.144034059839793	3.144522341089793	0.0022378318082446435	0.0022378414120112276
//3.144522341089793	3.145010622339793	0.0022562889000817313	0.002256302079705128
//3.145010622339793	3.145498903589793	0.0022747962827095966	0.002274813638138257
//3.145498903589793	3.145987184839793	0.002293354038765314	0.0022933761834610603
//3.145987184839793	3.146475466089793	0.0023119622509754504	0.0023119898119869837
//3.146475466089793	3.146963747339793	0.0023306210021561253	0.002330654620192761
//3.146963747339793	3.147452028589793	0.0023493303752130743	0.002349370704718704
//3.147452028589793	3.147940309839793	0.0023680904531417123	0.00236813816236899
//3.147940309839793	3.148428591089793	0.0023869013190271926	0.002386957090111953
//3.148428591089793	3.148916872339793	0.0024057630560444733	0.0024058275850803736
//3.148916872339793	3.149405153589793	0.0024246757474583767	0.0024247497445717687
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_6",
//spec:     "delta": 0.002424749744570805,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 0.0006632022770338085,
//spec:     "operation": "cos"
//spec: }