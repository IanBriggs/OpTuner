/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_sin.py --output src/ml2_raw_wide_sin_7.c \
 *     --poly-degree 7 --fname ml2_raw_wide_sin_7 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_sin_7(double);
double ml2_raw_wide_sin_7(double x){
    double x2_;
    double pm_5;
    double pa_5;
    double pm_3;
    double pa_3;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    pm_5 = x2_ * -0x1.21bf8683e9b97p-13;
    pa_5 = 0x1.01213f26359f4p-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.525f5d666bdc6p-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ff8d8051df97ep-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7ff5968d1ee0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7ff5968d91f0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7ff5968d92b0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7ff5968d9490> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;3.149405153589793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff5968e0250>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_7
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff5968e0250>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_7
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff5968e0250>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_7
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff5968e0250>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_7
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ff5968e0250>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_7
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_7.c
//-3.149405153589793	-3.148916872339793	6.824587940943009e-06	0.0008735561427139307
//-3.148916872339793	-3.148428591089793	6.327987903918856e-06	0.0008639890064899088
//-3.148428591089793	-3.147940309839793	5.837414501125376e-06	0.0008539370006523587
//-3.147940309839793	-3.147452028589793	5.352847319859097e-06	0.0008432849946969265
//-3.147452028589793	-3.146963747339793	4.874265984392538e-06	0.0008318794880995521
//-3.146963747339793	-3.146475466089793	4.401650155933707e-06	0.0008195111693878918
//-3.146475466089793	-3.145987184839793	3.9349795325851815e-06	0.0008058870106555536
//-3.145987184839793	-3.145498903589793	3.4742338493002325e-06	0.0007905837584183885
//-3.145498903589793	-3.145010622339793	3.019392877842391e-06	0.0007729665426142774
//-3.145010622339793	-3.144522341089793	2.5704364267433406e-06	0.0007520377218883361
//-3.144522341089793	-3.144034059839793	2.127344341260965e-06	0.0007261345741649967
//-3.144034059839793	-3.143545778589793	1.6900965033383317e-06	0.0006922642159141039
//-3.143545778589793	-3.143057497339793	1.2586728313868973e-06	0.0006444409001529457
//-3.143057497339793	-3.142569216089793	8.330532809427386e-07	0.0005686979122234992
//-3.142569216089793	-3.142080934839793	4.1321784357819364e-07	inf
//-3.142080934839793	-3.141592653589793	4.0918054464435615e-07	inf
//-3.1415926535897927	-2.945243112740431	0.00012009571152343976	inf
//-2.945243112740431	-2.7488935718910685	0.00032988544050996545	0.0008735563286456256
//-2.7488935718910685	-2.5525440310417067	0.0003532961932620285	0.0008620321984457488
//-2.5525440310417067	-2.3561944901923444	0.000305599294669558	0.0005500641980203337
//-2.3561944901923444	-2.1598449493429825	0.00032795995736116247	0.00039443408695758765
//-2.1598449493429825	-1.9634954084936205	0.0006592961523188257	0.0007136170129529669
//-1.9634954084936205	-1.7671458676442584	0.00084520043173559	0.0008617588871115962
//-1.7671458676442584	-1.5707963267948963	0.0008682901722207524	0.0008735561474199693
//-1.5707963267948963	-1.3744467859455343	0.0008448012001188289	0.000844801200118891
//-1.3744467859455343	-1.1780972450961722	0.0006783899152253102	0.0006916803593814776
//-1.1780972450961722	-0.9817477042468102	0.00040890000129209747	0.00044259017209818735
//-0.9817477042468102	-0.7853981633974482	0.0001202317611997833	0.0001700333873167542
//-0.7853981633974482	-0.5890486225480861	0.0002521145345009106	0.0004537941731158649
//-0.5890486225480861	-0.3926990816987241	0.0002714659033177923	0.0006792810787233804
//-0.3926990816987241	-0.19634954084936204	0.0002599496147464496	0.0008238222085049048
//-0.19634954084936204	0.0	0.00016071973994121779	inf
//0.0	0.19634954084936204	0.00016071973994121779	inf
//0.19634954084936204	0.3926990816987241	0.0002599496147464496	0.0008238222085049048
//0.3926990816987241	0.5890486225480861	0.0002714659033177923	0.0006792810787233804
//0.5890486225480861	0.7853981633974482	0.0002521145345009106	0.0004537941731158649
//0.7853981633974482	0.9817477042468102	0.0001202317611997833	0.0001700333873167542
//0.9817477042468102	1.1780972450961722	0.00040890000129209747	0.00044259017209818735
//1.1780972450961722	1.3744467859455343	0.0006783899152253102	0.0006916803593814776
//1.3744467859455343	1.5707963267948963	0.0008448012001188289	0.000844801200118891
//1.5707963267948963	1.7671458676442584	0.0008682901722207524	0.0008735561474199693
//1.7671458676442584	1.9634954084936205	0.00084520043173559	0.0008617588871115962
//1.9634954084936205	2.1598449493429825	0.0006592961523188257	0.0007136170129529669
//2.1598449493429825	2.3561944901923444	0.00032795995736116247	0.00039443408695758765
//2.3561944901923444	2.5525440310417067	0.000305599294669558	0.0005500641980203337
//2.5525440310417067	2.7488935718910685	0.0003532961932620285	0.0008620321984457488
//2.7488935718910685	2.945243112740431	0.00032988544050996545	0.0008735563286456256
//2.945243112740431	3.1415926535897927	0.00012009571152343976	inf
//3.141592653589793	3.142080934839793	4.0918054464435615e-07	inf
//3.142080934839793	3.142569216089793	4.1321784357819364e-07	inf
//3.142569216089793	3.143057497339793	8.330532809427386e-07	0.0005686979122234992
//3.143057497339793	3.143545778589793	1.2586728313868973e-06	0.0006444409001529457
//3.143545778589793	3.144034059839793	1.6900965033383317e-06	0.0006922642159141039
//3.144034059839793	3.144522341089793	2.127344341260965e-06	0.0007261345741649967
//3.144522341089793	3.145010622339793	2.5704364267433406e-06	0.0007520377218883361
//3.145010622339793	3.145498903589793	3.019392877842391e-06	0.0007729665426142774
//3.145498903589793	3.145987184839793	3.4742338493002325e-06	0.0007905837584183885
//3.145987184839793	3.146475466089793	3.9349795325851815e-06	0.0008058870106555536
//3.146475466089793	3.146963747339793	4.401650155933707e-06	0.0008195111693878918
//3.146963747339793	3.147452028589793	4.874265984392538e-06	0.0008318794880995521
//3.147452028589793	3.147940309839793	5.352847319859097e-06	0.0008432849946969265
//3.147940309839793	3.148428591089793	5.837414501125376e-06	0.0008539370006523587
//3.148428591089793	3.148916872339793	6.327987903918856e-06	0.0008639890064899088
//3.148916872339793	3.149405153589793	6.824587940943009e-06	0.0008735561427139307
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_7",
//spec:     "delta": 0.0008682901722207524,
//spec:     "domain": [
//spec:         -3.149405153589793,
//spec:         3.149405153589793
//spec:     ],
//spec:     "epsilon": 0.0001700333873167542,
//spec:     "operation": "sin"
//spec: }