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
    pm_4 = x2_ * -0x1.03803390dbb33p-10;
    pa_4 = 0x1.433dd4c0f10bep-5 + pm_4;
    pm_2 = x2_ * pa_4;
    pa_2 = -0x1.fb8b4477ec557p-2 + pm_2;
    tmp = x2_ * pa_2;
    tmp1 = 0x1.fec6c4d891a01p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7fdb772e67c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7fdb772e6a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7fdb772e6b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7fdb772e6d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//LSKDFKLJK 0.99761023658430769689431372171384282410144805908203125 * _x_^0 + -0.495648450679330776491582355447462759912014007568359375 * _x_^2 + 3.945819428875683987367750660268939100205898284912109375e-2 * _x_^4 + -9.8991694195733610610321573375358639168553054332733154296875e-4 * _x_^6
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdb772f1a00>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_cos_6
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdb772f1a00>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_cos_6
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdb772f1a00>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_cos_6
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdb772f1a00>
//Info: executing pass check_processor_support on fct ml2_raw_wide_cos_6
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7fdb772f1a00>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_cos_6
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_cos_6.c
//-3.1415926535897927	-2.945243112740431	0.002352504657563128	0.0023525046575637336
//-2.945243112740431	-2.7488935718910685	0.0022744757585089702	0.002389763415758264
//-2.7488935718910685	-2.5525440310417067	0.0020875271803739545	0.0022595231379357655
//-2.5525440310417067	-2.3561944901923444	0.000948026079157208	0.0011401812707652636
//-2.3561944901923444	-2.1598449493429825	0.0008051803903732606	0.0014492864133437877
//-2.1598449493429825	-1.9634954084936205	0.000880571000730488	0.0021623921640633393
//-1.9634954084936205	-1.7671458676442584	0.0008275116554624288	0.0023897634201239786
//-1.7671458676442584	-1.5707963267948963	0.00046621969045122183	inf
//-1.5707963267948963	-1.3744467859455343	0.00032976768961170174	inf
//-1.3744467859455343	-1.1780972450961722	0.00039441998821269746	0.0016903334117434584
//-1.1780972450961722	-0.9817477042468102	0.00037166481581316345	0.0009712069673782102
//-0.9817477042468102	-0.7853981633974482	0.0004557641711192367	0.0006445478720406384
//-0.7853981633974482	-0.5890486225480861	0.0011294484037746143	0.001358376045333664
//-0.5890486225480861	-0.3926990816987241	0.0017697714484259163	0.0019155868120764002
//-0.3926990816987241	-0.19634954084936204	0.00222525725972806	0.0022688526267576063
//-0.19634954084936204	0.0	0.002389763415692366	0.0023897634156923673
//0.0	0.19634954084936204	0.002389763415692366	0.0023897634156923673
//0.19634954084936204	0.3926990816987241	0.00222525725972806	0.0022688526267576063
//0.3926990816987241	0.5890486225480861	0.0017697714484259163	0.0019155868120764002
//0.5890486225480861	0.7853981633974482	0.0011294484037746143	0.001358376045333664
//0.7853981633974482	0.9817477042468102	0.0004557641711192367	0.0006445478720406384
//0.9817477042468102	1.1780972450961722	0.00037166481581316345	0.0009712069673782102
//1.1780972450961722	1.3744467859455343	0.00039441998821269746	0.0016903334117434584
//1.3744467859455343	1.5707963267948963	0.00032976768961170174	inf
//1.5707963267948963	1.7671458676442584	0.00046621969045122183	inf
//1.7671458676442584	1.9634954084936205	0.0008275116554624288	0.0023897634201239786
//1.9634954084936205	2.1598449493429825	0.000880571000730488	0.0021623921640633393
//2.1598449493429825	2.3561944901923444	0.0008051803903732606	0.0014492864133437877
//2.3561944901923444	2.5525440310417067	0.000948026079157208	0.0011401812707652636
//2.5525440310417067	2.7488935718910685	0.0020875271803739545	0.0022595231379357655
//2.7488935718910685	2.945243112740431	0.0022744757585089702	0.002389763415758264
//2.945243112740431	3.1415926535897927	0.002352504657563128	0.0023525046575637336
//spec: {
//spec:     "cname": "ml2_raw_wide_cos_6",
//spec:     "delta": 0.002389763415692366,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 0.0006445478720406384,
//spec:     "operation": "cos"
//spec: }
