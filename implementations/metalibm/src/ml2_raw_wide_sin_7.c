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
    pm_5 = x2_ * -0x1.221424d64bfe5p-13;
    pa_5 = 0x1.013915db9da7ap-7 + pm_5;
    pm_3 = x2_ * pa_5;
    pa_3 = -0x1.5266b675bfddap-3 + pm_3;
    tmp = x2_ * pa_3;
    tmp1 = 0x1.ff8f31ef9cecbp-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f77f7f9a760> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f77f7f9aa30> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f77f7f9aaf0> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f77f7f9acd0> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;3.142569216089793115997963468544185161590576171875]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77f7fa5a90>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_wide_sin_7
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77f7fa5a90>
//Info: executing pass instantiate_prec on fct ml2_raw_wide_sin_7
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77f7fa5a90>
//Info: executing pass sub_expr_sharing on fct ml2_raw_wide_sin_7
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77f7fa5a90>
//Info: executing pass check_processor_support on fct ml2_raw_wide_sin_7
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f77f7fa5a90>
//Info: executing pass debug_tag_node on fct ml2_raw_wide_sin_7
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_wide_sin_7.c
//-3.1415926535897927	-2.945243112740431	0.00011330173634475881	inf
//-2.945243112740431	-2.7488935718910685	0.00032636890899734344	0.0008606336485923627
//-2.7488935718910685	-2.5525440310417067	0.00035256323168023204	0.000852843058767324
//-2.5525440310417067	-2.3561944901923444	0.0003090400387356451	0.0005562573737190861
//-2.3561944901923444	-2.1598449493429825	0.0003136733828602419	0.0003772517699016974
//-2.1598449493429825	-1.9634954084936205	0.0006437799347120919	0.0006968223800373987
//-1.9634954084936205	-1.7671458676442584	0.0008311865311383559	0.000847470437970646
//-1.7671458676442584	-1.5707963267948963	0.0008558258989358707	0.0008606333813913263
//-1.5707963267948963	-1.3744467859455343	0.0008342385074589643	0.0008342385074590265
//-1.3744467859455343	-1.1780972450961722	0.0006722405989760229	0.0006854105709046775
//-1.1780972450961722	-0.9817477042468102	0.00040716107448389736	0.0004407079712841122
//-0.9817477042468102	-0.7853981633974482	0.00011933902352814221	0.00016412219769779935
//-0.7853981633974482	-0.5890486225480861	0.00024716922209438595	0.00044489284595215745
//-0.5890486225480861	-0.3926990816987241	0.0002667461723511423	0.0006681691882118671
//-0.3926990816987241	-0.19634954084936204	0.00025569727834543865	0.0008113555963458268
//-0.19634954084936204	0.0	0.00015828762456065307	inf
//0.0	0.19634954084936204	0.00015828762456065307	inf
//0.19634954084936204	0.3926990816987241	0.00025569727834543865	0.0008113555963458268
//0.3926990816987241	0.5890486225480861	0.0002667461723511423	0.0006681691882118671
//0.5890486225480861	0.7853981633974482	0.00024716922209438595	0.00044489284595215745
//0.7853981633974482	0.9817477042468102	0.00011933902352814221	0.00016412219769779935
//0.9817477042468102	1.1780972450961722	0.00040716107448389736	0.0004407079712841122
//1.1780972450961722	1.3744467859455343	0.0006722405989760229	0.0006854105709046775
//1.3744467859455343	1.5707963267948963	0.0008342385074589643	0.0008342385074590265
//1.5707963267948963	1.7671458676442584	0.0008558258989358707	0.0008606333813913263
//1.7671458676442584	1.9634954084936205	0.0008311865311383559	0.000847470437970646
//1.9634954084936205	2.1598449493429825	0.0006437799347120919	0.0006968223800373987
//2.1598449493429825	2.3561944901923444	0.0003136733828602419	0.0003772517699016974
//2.3561944901923444	2.5525440310417067	0.0003090400387356451	0.0005562573737190861
//2.5525440310417067	2.7488935718910685	0.00035256323168023204	0.000852843058767324
//2.7488935718910685	2.945243112740431	0.00032636890899734344	0.0008606336485923627
//2.945243112740431	3.1415926535897927	0.00011330173634475881	inf
//spec: {
//spec:     "cname": "ml2_raw_wide_sin_7",
//spec:     "delta": 0.0008558258989358707,
//spec:     "domain": [
//spec:         -3.141592653589793,
//spec:         3.141592653589793
//spec:     ],
//spec:     "epsilon": 0.00016412219769779935,
//spec:     "operation": "sin"
//spec: }
