/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   my_scripts/ml2_sin.py --output src/ml2_raw_sin_3.c --poly-degree 3 \
 *     --fname ml2_raw_sin_3 --verbose Info --skip-reduction
 * 
**/
#include <stdint.h>



double ml2_raw_sin_3(double);
double ml2_raw_sin_3(double x){
    double x2_;
    double tmp;
    double tmp1;
    double tmp2;
    
    x2_ = x * x;
    tmp = x2_ * -0x1.2b62fcf425884p-3;
    tmp1 = 0x1.fc4c26c1da003p-1 + tmp;
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
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7ffaed8237c0> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7ffaed823a90> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7ffaed823b50> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7ffaed823d30> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-9.765625e-4;1.5717728892948965579989817342720925807952880859375]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffaed82d550>
//Info: executing pass instantiate_abstract_prec on fct ml2_raw_sin_3
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffaed82d550>
//Info: executing pass instantiate_prec on fct ml2_raw_sin_3
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffaed82d550>
//Info: executing pass sub_expr_sharing on fct ml2_raw_sin_3
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffaed82d550>
//Info: executing pass check_processor_support on fct ml2_raw_sin_3
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7ffaed82d550>
//Info: executing pass debug_tag_node on fct ml2_raw_sin_3
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml2_raw_sin_3.c
//-1.5707963267948963	-1.4726215563702154	0.007144080493218367	0.0071440804932183894
//-1.4726215563702154	-1.3744467859455343	0.004157054488755413	0.004238496000925238
//-1.3744467859455343	-1.2762720155208533	0.006201219606261975	0.006480257310417462
//-1.2762720155208533	-1.1780972450961722	0.006680759238256105	0.007221564502405139
//-1.1780972450961722	-1.0799224746714913	0.0066718556364821	0.007231492576568271
//-1.0799224746714913	-0.9817477042468102	0.006080521866693239	0.006894631201784337
//-0.9817477042468102	-0.8835729338221292	0.004853090132931904	0.005836761874547062
//-0.8835729338221292	-0.7853981633974482	0.003333636341486862	0.004312537206948435
//-0.7853981633974482	-0.6872233929727671	0.0017891197299089684	0.0025301973867465828
//-0.6872233929727671	-0.5890486225480861	0.0006596262675498422	0.0011872959139021613
//-0.5890486225480861	-0.4908738521234051	0.0013633296602452952	0.0028921066985419792
//-0.4908738521234051	-0.3926990816987241	0.0016769892614785123	0.004382184123086425
//-0.3926990816987241	-0.29452431127404305	0.001697996608703363	0.005597986807414839
//-0.29452431127404305	-0.19634954084936204	0.0016250097936651477	0.006495908513314182
//-0.19634954084936204	-0.09817477042468102	0.0012672888836497383	0.007046189201348853
//-0.09817477042468102	0.0	0.0006906473157372251	inf
//0.0	0.09817477042468102	0.0006906473157372251	inf
//0.09817477042468102	0.19634954084936204	0.0012672888836497383	0.007046189201348853
//0.19634954084936204	0.29452431127404305	0.0016250097936651477	0.006495908513314182
//0.29452431127404305	0.3926990816987241	0.001697996608703363	0.005597986807414839
//0.3926990816987241	0.4908738521234051	0.0016769892614785123	0.004382184123086425
//0.4908738521234051	0.5890486225480861	0.0013633296602452952	0.0028921066985419792
//0.5890486225480861	0.6872233929727671	0.0006596262675498422	0.0011872959139021613
//0.6872233929727671	0.7853981633974482	0.0017891197299089684	0.0025301973867465828
//0.7853981633974482	0.8835729338221292	0.003333636341486862	0.004312537206948435
//0.8835729338221292	0.9817477042468102	0.004853090132931904	0.005836761874547062
//0.9817477042468102	1.0799224746714913	0.006080521866693239	0.006894631201784337
//1.0799224746714913	1.1780972450961722	0.0066718556364821	0.007231492576568271
//1.1780972450961722	1.2762720155208533	0.006680759238256105	0.007221564502405139
//1.2762720155208533	1.3744467859455343	0.006201219606261975	0.006480257310417462
//1.3744467859455343	1.4726215563702154	0.004157054488755413	0.004238496000925238
//1.4726215563702154	1.5707963267948963	0.007144080493218367	0.0071440804932183894
//spec: {
//spec:     "cname": "ml2_raw_sin_3",
//spec:     "delta": 0.007144080493218367,
//spec:     "domain": [
//spec:         -1.5707963267948966,
//spec:         1.5707963267948966
//spec:     ],
//spec:     "epsilon": 0.0011872959139021613,
//spec:     "operation": "sin"
//spec: }
