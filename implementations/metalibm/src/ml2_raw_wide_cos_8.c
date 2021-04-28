/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_cos.py --output src/ml2_raw_wide_cos_8.c \
 *     --poly-degree 8 --fname ml2_raw_wide_cos_8 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_cos_8(double);
double ml2_raw_wide_cos_8(double x){
    double x2_;
    double pm_6;
    double pa_6;
    double pm_4;
    double pa_4;
    double pm_2;
    double pa_2;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    pm_6 = x2_ * 0x1.3f44747fe82c8p-16;
    pa_6 = -0x1.601ac50b0f04bp-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.54109ab51d92ap-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.ffc96a3b523f6p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fff6ff617d9a4p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f3b05e66760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f3b05e66a30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f3b05e66af0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f3b05e66cd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//LSKDFKLJK 0.999931316996300001420650005456991493701934814453125 * _x_^0 + -0.49979177462643009643983305068104527890682220458984375 * _x_^2 + 4.151182380967306795316318357436102814972400665283203125e-2 * _x_^4 + -1.34317233711468936134536544813045111368410289287567138671875e-3 * _x_^6 + 1.902982012292017449835157538728935833205468952655792236328125e-5 * _x_^8
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3b05e71c70>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_8
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3b05e71c70>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_8
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3b05e71c70>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_8
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3b05e71c70>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_8
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3b05e71c70>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_8
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_8.c
//-3.1415926535897927	-2.945243112740431	6.749063064869969e-05	6.868335684882938e-05
//-2.945243112740431	-2.7488935718910685	6.721064381908018e-05	6.852737817627676e-05
//-2.7488935718910685	-2.5525440310417067	3.961284107988137e-05	4.764195888132354e-05
//-2.5525440310417067	-2.3561944901923444	5.0099110210123e-05	6.868300370180878e-05
//-2.3561944901923444	-2.1598449493429825	4.856281964032225e-05	6.867819816332578e-05
//-2.1598449493429825	-1.9634954084936205	2.851753517891177e-05	5.133020720871435e-05
//-1.9634954084936205	-1.7671458676442584	5.189238923636039e-06	2.6586564532035233e-05
//-1.7671458676442584	-1.5707963267948963	5.313572455104003e-06	inf
//-1.5707963267948963	-1.3744467859455343	1.3321038223382845e-05	inf
//-1.3744467859455343	-1.1780972450961722	2.4254006212361716e-05	6.868300385126538e-05
//-1.1780972450961722	-0.9817477042468102	2.5983824577961594e-05	6.337877253395841e-05
//-0.9817477042468102	-0.7853981633974482	2.4346462528738438e-05	4.3822474786701106e-05
//-0.7853981633974482	-0.5890486225480861	1.324797226767152e-05	1.5933200770881563e-05
//-0.5890486225480861	-0.3926990816987241	4.0090010893322896e-05	4.339311510058541e-05
//-0.3926990816987241	-0.19634954084936204	6.088280415614635e-05	6.207556880454087e-05
//-0.19634954084936204	0.0	6.868300370006137e-05	6.86830037000626e-05
//0.0	0.19634954084936204	6.868300370006137e-05	6.86830037000626e-05
//0.19634954084936204	0.3926990816987241	6.088280415614635e-05	6.207556880454087e-05
//0.3926990816987241	0.5890486225480861	4.0090010893322896e-05	4.339311510058541e-05
//0.5890486225480861	0.7853981633974482	1.324797226767152e-05	1.5933200770881563e-05
//0.7853981633974482	0.9817477042468102	2.4346462528738438e-05	4.3822474786701106e-05
//0.9817477042468102	1.1780972450961722	2.5983824577961594e-05	6.337877253395841e-05
//1.1780972450961722	1.3744467859455343	2.4254006212361716e-05	6.868300385126538e-05
//1.3744467859455343	1.5707963267948963	1.3321038223382845e-05	inf
//1.5707963267948963	1.7671458676442584	5.313572455104003e-06	inf
//1.7671458676442584	1.9634954084936205	5.189238923636039e-06	2.6586564532035233e-05
//1.9634954084936205	2.1598449493429825	2.851753517891177e-05	5.133020720871435e-05
//2.1598449493429825	2.3561944901923444	4.856281964032225e-05	6.867819816332578e-05
//2.3561944901923444	2.5525440310417067	5.0099110210123e-05	6.868300370180878e-05
//2.5525440310417067	2.7488935718910685	3.961284107988137e-05	4.764195888132354e-05
//2.7488935718910685	2.945243112740431	6.721064381908018e-05	6.852737817627676e-05
//2.945243112740431	3.1415926535897927	6.749063064869969e-05	6.868335684882938e-05
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_8",
//spec:     "delta": 6.868300370006137e-05,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 1.5933200770881563e-05,
//spec:     "operation": "cos"
//spec: }
