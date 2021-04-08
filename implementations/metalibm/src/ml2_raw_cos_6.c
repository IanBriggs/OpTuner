/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_cos.py --output src/ml2_raw_cos_6.c --poly-degree 6 \
 *     --fname ml2_raw_cos_6 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_cos_6(double);
double ml2_raw_cos_6(double x){
    double x2_;
    double pm_4;
    double pa_4;
    double pm_2;
    double pa_2;
    double tmp;
    double tmp1;
    
    x2_ = x * x;
    pm_4 = x2_ * -0x1.4569cebf33f9dp-10;
    pa_4 = 0x1.52e013bdd6429p-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.ffc731276ce5ap-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fffc1c73f4349p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fd9fb6f2790> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fd9fb6f2a60> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fd9fb6f2b20> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fd9fb6f2d00> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd9fb6fd9d0>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_cos_6
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd9fb6fd9d0>
//Info: executing pass instantiate_prec on fct ml2_raw_cos_6
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd9fb6fd9d0>
//Info: executing pass sub_expr_sharing on fct ml2_raw_cos_6
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd9fb6fd9d0>
//Info: executing pass check_processor_support on fct ml2_raw_cos_6
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fd9fb6fd9d0>
//Info: executing pass debug_tag_node on fct ml2_raw_cos_6
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_cos_6.c
//0.0	0.09817477042468102	2.9669614284468388e-05	2.9669614284468666e-05
//0.09817477042468102	0.19634954084936204	2.7608688777221064e-05	2.7742275416085635e-05
//0.19634954084936204	0.29452431127404305	2.1752526661655653e-05	2.2178683852916684e-05
//0.29452431127404305	0.3926990816987241	1.3034493383722886e-05	1.3621009478874695e-05
//0.3926990816987241	0.4908738521234051	7.1065561222134436e-06	8.058039203153256e-06
//0.4908738521234051	0.5890486225480861	1.5202942205685512e-05	1.8284423123516232e-05
//0.5890486225480861	0.6872233929727671	2.0063741983911298e-05	2.5955330741816958e-05
//0.6872233929727671	0.7853981633974482	2.108641041703133e-05	2.9551536076598807e-05
//0.7853981633974482	0.8835729338221292	2.0896091554250883e-05	2.966961428596269e-05
//0.8835729338221292	0.9817477042468102	1.7700399086943556e-05	2.7901302754660378e-05
//0.9817477042468102	1.0799224746714913	1.1380844254803804e-05	2.0484978457196622e-05
//1.0799224746714913	1.1780972450961722	3.6872185117555453e-06	8.040175840093025e-06
//1.1780972450961722	1.2762720155208533	6.649636939287405e-06	2.2907295700887278e-05
//1.2762720155208533	1.3744467859455343	6.8642399727593346e-06	2.966961515355073e-05
//1.3744467859455343	1.4726215563702154	5.786378302184598e-06	2.9659996677344024e-05
//1.4726215563702154	1.5707963267948963	1.692605522426264e-06	inf
//spec: {
//spec:     "cname": "ml2_raw_cos_6",
//spec:     "delta": 2.9669614284468388e-05,
//spec:     "domain": [
//spec:         0.0,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 8.040175840093025e-06,
//spec:     "operation": "cos"
//spec: }
