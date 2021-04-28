/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_wide_cos.py --output src/ml2_raw_wide_cos_12.c \
 *     --poly-degree 12 --fname ml2_raw_wide_cos_12 --verbose Info \
 *     --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_wide_cos_12(double);
double ml2_raw_wide_cos_12(double x){
    double x2_;
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
    pm_10 = x2_ * 0x1.dd00639c0ddb9p-30;
    pa_10 = -0x1.2310de05a4cd8p-22 + pm_10;
    pm_8 = x2_ * pa_10;
    pa_8 = 0x1.9f9d32af039ddp-16 + pm_8;
    pm_6 = x2_ * pa_8;
    pa_6 = -0x1.6c101d42e191bp-10 + pm_6;
    pm_4 = x2_ * pa_6;
    pa_4 = 0x1.5554fa46132a1p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.fffff7bf08cadp-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.ffffff617753dp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f42a25da760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f42a25daa30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f42a25daaf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f42a25dacd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//LSKDFKLJK 0.99999998154422764518045596560114063322544097900390625 * _x_^0 + -0.499999877009211612932659818397951312363147735595703125 * _x_^2 + 4.1666497054938085586872631438382086344063282012939453125e-2 * _x_^4 + -1.38878992649577623179346641535403250600211322307586669921875e-3 * _x_^6 + 2.477252808935093773942855144287733537566964514553546905517578125e-5 * _x_^8 + -2.7107623199705614298340126955277895604012883268296718597412109375e-7 * _x_^10 + 1.7353214204255646537017885702226284438953740618671872653067111968994140625e-9 * _x_^12
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f42a25e9250>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_12
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f42a25e9250>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_12
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f42a25e9250>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_12
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f42a25e9250>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_12
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f42a25e9250>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_12
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_12.c
//-3.1415926535897927	-2.945243112740431	1.8383334243079554e-08	1.8455938647063093e-08
//-2.945243112740431	-2.7488935718910685	1.7275557093260203e-08	1.845577483059376e-08
//-2.7488935718910685	-2.5525440310417067	1.6493352934590456e-08	1.7852277348202895e-08
//-2.5525440310417067	-2.3561944901923444	1.2734216417961072e-08	1.800890214170343e-08
//-2.3561944901923444	-2.1598449493429825	1.2749214136750921e-08	1.845577443284706e-08
//-2.1598449493429825	-1.9634954084936205	6.735193834601956e-09	1.2123030387745462e-08
//-1.9634954084936205	-1.7671458676442584	3.6482538852991845e-09	1.6949867938323032e-08
//-1.7671458676442584	-1.5707963267948963	3.306754683722265e-09	inf
//-1.5707963267948963	-1.3744467859455343	1.370972359938134e-09	inf
//-1.3744467859455343	-1.1780972450961722	3.027009802771186e-09	7.90995902980769e-09
//-1.1780972450961722	-0.9817477042468102	9.51945640232631e-09	1.7134569161142962e-08
//-0.9817477042468102	-0.7853981633974482	1.231364721856103e-08	1.8455772706975894e-08
//-0.7853981633974482	-0.5890486225480861	1.2276324140244533e-08	1.7361344097567144e-08
//-0.5890486225480861	-0.3926990816987241	7.534004953566241e-09	9.061070714442468e-09
//-0.3926990816987241	-0.19634954084936204	1.3960585541172176e-08	1.42340895865794e-08
//-0.19634954084936204	0.0	1.8455772417604475e-08	1.8455772418838546e-08
//0.0	0.19634954084936204	1.8455772417604475e-08	1.8455772418838546e-08
//0.19634954084936204	0.3926990816987241	1.3960585541172176e-08	1.42340895865794e-08
//0.3926990816987241	0.5890486225480861	7.534004953566241e-09	9.061070714442468e-09
//0.5890486225480861	0.7853981633974482	1.2276324140244533e-08	1.7361344097567144e-08
//0.7853981633974482	0.9817477042468102	1.231364721856103e-08	1.8455772706975894e-08
//0.9817477042468102	1.1780972450961722	9.51945640232631e-09	1.7134569161142962e-08
//1.1780972450961722	1.3744467859455343	3.027009802771186e-09	7.90995902980769e-09
//1.3744467859455343	1.5707963267948963	1.370972359938134e-09	inf
//1.5707963267948963	1.7671458676442584	3.306754683722265e-09	inf
//1.7671458676442584	1.9634954084936205	3.6482538852991845e-09	1.6949867938323032e-08
//1.9634954084936205	2.1598449493429825	6.735193834601956e-09	1.2123030387745462e-08
//2.1598449493429825	2.3561944901923444	1.2749214136750921e-08	1.845577443284706e-08
//2.3561944901923444	2.5525440310417067	1.2734216417961072e-08	1.800890214170343e-08
//2.5525440310417067	2.7488935718910685	1.6493352934590456e-08	1.7852277348202895e-08
//2.7488935718910685	2.945243112740431	1.7275557093260203e-08	1.845577483059376e-08
//2.945243112740431	3.1415926535897927	1.8383334243079554e-08	1.8455938647063093e-08
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_12",
//spec:     "delta": 1.8455772417604475e-08,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 7.90995902980769e-09,
//spec:     "operation": "cos"
//spec: }
