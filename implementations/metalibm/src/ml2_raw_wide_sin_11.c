/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_11.c \
 *     --poly-degree 11 --fname ml2_raw_wide_sin_11 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_11(double);
double ml2_raw_wide_sin_11(double x){
    double x2_;
    double pm_9;
    double pa_9;
    double pm_7;
    double pa_7;
    double pm_5;
    double pa_5;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_9 = x2_ * -0x1.56404867bd591p-26;
    pa_9 = 0x1.68cfe6d379399p-19 + pm_9;
    pm_7 = x2_ * pa_9;
    pa_7 = -0x1.9f32d33f3248dp-13 + pm_7;
    pm_5 = x2_ * pa_7;
    pa_5 = 0x1.110612f257a27p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.55548322d5abep-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.fffff49c61157p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fcc59786eb0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fcc5978e1c0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fcc5978e280> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fcc5978e460> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcc597957c0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_11
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcc597957c0>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_11
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcc597957c0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_11
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcc597957c0>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_11
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fcc597957c0>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_11
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_11.c
//-3.149405153589793	-3.148916872339793	2.6517159866430775e-09	3.394231292308814e-07
//-3.148916872339793	-3.148428591089793	2.414285802678104e-09	3.296334700944057e-07
//-3.148428591089793	-3.147940309839793	2.183268031694546e-09	3.193834512724165e-07
//-3.147940309839793	-3.147452028589793	1.9586084765645617e-09	3.085582857215353e-07
//-3.147452028589793	-3.146963747339793	1.7402531889270293e-09	2.970049670868464e-07
//-3.146963747339793	-3.146475466089793	1.5281484698213267e-09	2.8451489747916376e-07
//-3.146475466089793	-3.145987184839793	1.3222408698488023e-09	2.707960918687244e-07
//-3.145987184839793	-3.145498903589793	1.122477186369922e-09	2.5542685129182897e-07
//-3.145498903589793	-3.145010622339793	9.288044641090918e-10	2.3777469225286876e-07
//-3.145010622339793	-3.144522341089793	7.411699940521579e-10	2.1684578698002636e-07
//-3.144522341089793	-3.144034059839793	5.595213124805746e-10	1.9098384585884798e-07
//-3.144034059839793	-3.143545778589793	3.838062010782426e-10	1.5720766776750944e-07
//-3.143545778589793	-3.143057497339793	2.1397268471001297e-10	1.095550678517353e-07
//-3.143057497339793	-3.142569216089793	1.0825897134332406e-10	1.1086003039332912e-07
//-3.142569216089793	-3.142080934839793	2.607571207331796e-10	inf
//-3.142080934839793	-3.141592653589793	4.075791489018052e-10	inf
//-3.1415926535897927	-2.945243112740431	5.3367675114778157e-08	inf
//-2.945243112740431	-2.7488935718910685	7.752952298746125e-08	inf
//-2.7488935718910685	-2.5525440310417067	1.8200486030661906e-07	3.394229355862671e-07
//-2.5525440310417067	-2.3561944901923444	1.8200476092636176e-07	3.275999153110803e-07
//-2.3561944901923444	-2.1598449493429825	1.6044159894637125e-07	1.9296147081741098e-07
//-2.1598449493429825	-1.9634954084936205	3.101594220755949e-07	3.35714139592152e-07
//-1.9634954084936205	-1.7671458676442584	3.1952331343673897e-07	3.3942293086448627e-07
//-1.7671458676442584	-1.5707963267948963	2.7254028036997355e-07	2.778796601923839e-07
//-1.5707963267948963	-1.3744467859455343	1.4083146214057288e-07	1.435905136520847e-07
//-1.3744467859455343	-1.1780972450961722	2.781058623277723e-07	3.010196162795316e-07
//-1.1780972450961722	-0.9817477042468102	2.954398238992221e-07	3.394229303062212e-07
//-0.9817477042468102	-0.7853981633974482	2.7895677138458074e-07	3.3549845635312874e-07
//-0.7853981633974482	-0.5890486225480861	1.725901388809613e-07	2.4407931521569625e-07
//-0.5890486225480861	-0.3926990816987241	5.008262181935519e-08	1.3087219771929838e-07
//-0.3926990816987241	-0.19634954084936204	6.288100343315599e-08	2.827819188185939e-07
//-0.19634954084936204	0.0	5.516801556064553e-08	inf
//0.0	0.19634954084936204	5.516801556064553e-08	inf
//0.19634954084936204	0.3926990816987241	6.288100343315599e-08	2.827819188185939e-07
//0.3926990816987241	0.5890486225480861	5.008262181935519e-08	1.3087219771929838e-07
//0.5890486225480861	0.7853981633974482	1.725901388809613e-07	2.4407931521569625e-07
//0.7853981633974482	0.9817477042468102	2.7895677138458074e-07	3.3549845635312874e-07
//0.9817477042468102	1.1780972450961722	2.954398238992221e-07	3.394229303062212e-07
//1.1780972450961722	1.3744467859455343	2.781058623277723e-07	3.010196162795316e-07
//1.3744467859455343	1.5707963267948963	1.4083146214057288e-07	1.435905136520847e-07
//1.5707963267948963	1.7671458676442584	2.7254028036997355e-07	2.778796601923839e-07
//1.7671458676442584	1.9634954084936205	3.1952331343673897e-07	3.3942293086448627e-07
//1.9634954084936205	2.1598449493429825	3.101594220755949e-07	3.35714139592152e-07
//2.1598449493429825	2.3561944901923444	1.6044159894637125e-07	1.9296147081741098e-07
//2.3561944901923444	2.5525440310417067	1.8200476092636176e-07	3.275999153110803e-07
//2.5525440310417067	2.7488935718910685	1.8200486030661906e-07	3.394229355862671e-07
//2.7488935718910685	2.945243112740431	7.752952298746125e-08	inf
//2.945243112740431	3.1415926535897927	5.3367675114778157e-08	inf
//3.141592653589793	3.142080934839793	4.075791489018052e-10	inf
//3.142080934839793	3.142569216089793	2.607571207331796e-10	inf
//3.142569216089793	3.143057497339793	1.0825897134332406e-10	1.1086003039332912e-07
//3.143057497339793	3.143545778589793	2.1397268471001297e-10	1.095550678517353e-07
//3.143545778589793	3.144034059839793	3.838062010782426e-10	1.5720766776750944e-07
//3.144034059839793	3.144522341089793	5.595213124805746e-10	1.9098384585884798e-07
//3.144522341089793	3.145010622339793	7.411699940521579e-10	2.1684578698002636e-07
//3.145010622339793	3.145498903589793	9.288044641090918e-10	2.3777469225286876e-07
//3.145498903589793	3.145987184839793	1.122477186369922e-09	2.5542685129182897e-07
//3.145987184839793	3.146475466089793	1.3222408698488023e-09	2.707960918687244e-07
//3.146475466089793	3.146963747339793	1.5281484698213267e-09	2.8451489747916376e-07
//3.146963747339793	3.147452028589793	1.7402531889270293e-09	2.970049670868464e-07
//3.147452028589793	3.147940309839793	1.9586084765645617e-09	3.085582857215353e-07
//3.147940309839793	3.148428591089793	2.183268031694546e-09	3.193834512724165e-07
//3.148428591089793	3.148916872339793	2.414285802678104e-09	3.296334700944057e-07
//3.148916872339793	3.149405153589793	2.6517159866430775e-09	3.394231292308814e-07
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_11",
//spec:     "delta": 3.1952331343673897e-07,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 1.095550678517353e-07,
//spec:     "operation": "sin"
//spec: }
