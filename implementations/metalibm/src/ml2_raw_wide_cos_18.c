/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_cos.py --output src/ml2_raw_wide_cos_18.c \
 *     --poly-degree 18 --fname ml2_raw_wide_cos_18 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_cos_18(double);
double ml2_raw_wide_cos_18(double x){
    double x2_;
    double pm_16;
    double pa_16;
    double pm_14;
    double pa_14;
    double pm_12;
    double pa_12;
    double pm_10;
    double pa_10;
    double pm_8;
    double pa_8;
    double pm_6;
    double pa_6;
    double pm_4;
    double pa_4;
    double pm_2;
    double pa_2;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    pm_16 = x2_ * -0x1.3c6b82ca5bfa1p-53;
    pa_16 = 0x1.ab0521897a982p-45 + pm_16;
    pm_14 = x2_ * pa_16;
    pa_14 = -0x1.936fcb27962b5p-37 + pm_14;
    pm_12 = x2_ * pa_14;
    pa_12 = 0x1.1eec7ec42f21fp-29 + pm_12;
    pm_10 = x2_ * pa_12;
    pa_10 = -0x1.27e4f25654e7fp-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.a01a013f59c75p-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c16c169b923ep-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.5555555545802p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.ffffffffff4d3p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffffffffffa2p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f37196307c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f3719630a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f3719630b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f3719630d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//LSKDFKLJK 0.9999999999999895639035685235285200178623199462890625 * _x_^0 + -0.499999999999841182596327371356892399489879608154296875 * _x_^2 + 4.166666666621667014513974436340504325926303863525390625e-2 * _x_^4 + -1.3888888883509943432403854757239969330839812755584716796875e-3 * _x_^6 + 2.480158695785909201488202147078965253967908211052417755126953125e-5 * _x_^8 + -2.7557306249879421263738652446428911702014374895952641963958740234375e-7 * _x_^10 + 2.087645474973441430518402130915404935063151015128823928534984588623046875e-9 * _x_^12 + -1.146636048030486627958411416131645509976222374604049036861397325992584228515625e-11 * _x_^14 + 4.7408748369772612211802678853750961409361554255159632020877324976027011871337890625e-14 * _x_^16 + -1.37225285151582136709941979077644396672697876750530998624100220695254392921924591064453125e-16 * _x_^18
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f371963fb20>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_18
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f371963fb20>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_18
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f371963fb20>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_18
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f371963fb20>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_18
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f371963fb20>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_18
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_18.c
//-3.1415926535897927	-2.945243112740431	1.9515480381508177e-14	2.048225279125132e-14
//-2.945243112740431	-2.7488935718910685	2.105653782550158e-14	2.312046670055855e-14
//-2.7488935718910685	-2.5525440310417067	1.7123371154941902e-14	1.9309410045848275e-14
//-2.5525440310417067	-2.3561944901923444	1.5992484843031372e-14	2.0895307481864823e-14
//-2.3561944901923444	-2.1598449493429825	8.566509005021493e-15	1.5996296538849638e-14
//-2.1598449493429825	-1.9634954084936205	9.221152463352435e-15	1.9953665063896537e-14
//-1.9634954084936205	-1.7671458676442584	4.8747343344114295e-15	1.642149508135119e-14
//-1.7671458676442584	-1.5707963267948963	2.6477663784627762e-15	inf
//-1.5707963267948963	-1.3744467859455343	1.4261552865802453e-15	inf
//-1.3744467859455343	-1.1780972450961722	3.86206671375644e-15	1.1316638951006655e-14
//-1.1780972450961722	-0.9817477042468102	4.762042085479896e-15	1.0630988907599987e-14
//-0.9817477042468102	-0.7853981633974482	3.806397082084256e-15	6.859918867234559e-15
//-0.7853981633974482	-0.5890486225480861	8.754282416201293e-15	1.0567176370439166e-14
//-0.5890486225480861	-0.3926990816987241	8.874653591400445e-15	1.0507212465327098e-14
//-0.3926990816987241	-0.19634954084936204	5.227789721620267e-15	5.6585922002476265e-15
//-0.19634954084936204	0.0	1.0498881361476472e-14	1.0500115431476472e-14
//0.0	0.19634954084936204	1.0498881361476472e-14	1.0500115431476472e-14
//0.19634954084936204	0.3926990816987241	5.227789721620267e-15	5.6585922002476265e-15
//0.3926990816987241	0.5890486225480861	8.874653591400445e-15	1.0507212465327098e-14
//0.5890486225480861	0.7853981633974482	8.754282416201293e-15	1.0567176370439166e-14
//0.7853981633974482	0.9817477042468102	3.806397082084256e-15	6.859918867234559e-15
//0.9817477042468102	1.1780972450961722	4.762042085479896e-15	1.0630988907599987e-14
//1.1780972450961722	1.3744467859455343	3.86206671375644e-15	1.1316638951006655e-14
//1.3744467859455343	1.5707963267948963	1.4261552865802453e-15	inf
//1.5707963267948963	1.7671458676442584	2.6477663784627762e-15	inf
//1.7671458676442584	1.9634954084936205	4.8747343344114295e-15	1.642149508135119e-14
//1.9634954084936205	2.1598449493429825	9.221152463352435e-15	1.9953665063896537e-14
//2.1598449493429825	2.3561944901923444	8.566509005021493e-15	1.5996296538849638e-14
//2.3561944901923444	2.5525440310417067	1.5992484843031372e-14	2.0895307481864823e-14
//2.5525440310417067	2.7488935718910685	1.7123371154941902e-14	1.9309410045848275e-14
//2.7488935718910685	2.945243112740431	2.105653782550158e-14	2.312046670055855e-14
//2.945243112740431	3.1415926535897927	1.9515480381508177e-14	2.048225279125132e-14
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_18",
//spec:     "delta": 2.105653782550158e-14,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 5.6585922002476265e-15,
//spec:     "operation": "cos"
//spec: }
