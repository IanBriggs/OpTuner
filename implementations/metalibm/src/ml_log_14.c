/**
 * generated using metalibm 1.1
 * sha1 git: b'"e331ee4a1b3df9ebdf581453852ac019d7c1b6da"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   scripts/ml_log.py --precision double --output src/ml_log_14.c \
 *     --poly-degree 14 --fname ml_log_14 --verbose Info
 * 
**/
#include <stdint.h>
#include <fenv.h>
#include <ml_support_lib.h>
#include <math.h>


static const double ml_log_14_inv_table[128][2]  = {
    { 0.0, 0.0},
    { -0x1.010157588ep-7, 0x1.8ed7333a57d06p-51},
    { -0x1.0205658936p-6, 0x1.ee2d83717be92p-48},
    { -0x1.8492528c8cp-6, -0x1.57d173697cf3p-47},
    { -0x1.0415d89e74p-5, -0x1.111c05cf1d753p-47},
    { -0x1.35c8bfaa14p-5, 0x1.f2a0a8418532bp-46},
    { -0x1.788595a358p-5, 0x1.08b0d083b3a4cp-46},
    { -0x1.bbcebfc69p-5, 0x1.7bf868c317c2ap-46},
    { -0x1.eea31c006cp-5, 0x1.e113e4fc93b7bp-47},
    { -0x1.1973bd1466p-4, 0x1.5325d560d9e9bp-45},
    { -0x1.333d7f8184p-4, 0x1.692b6a81b8848p-49},
    { -0x1.55e10050ep-4, -0x1.c1d740c53c72ep-47},
    { -0x1.700d30aeacp-4, -0x1.c1e8da99ded32p-49},
    { -0x1.8a6477a91ep-4, 0x1.eb9fa83214905p-47},
    { -0x1.a4e7640b1cp-4, 0x1.e42b6b94407c8p-47},
    { -0x1.c885801bc4p-4, -0x1.646d1c65aacd3p-45},
    { -0x1.e3707ee304p-4, -0x1.0f684e6766abdp-45},
    { -0x1.fe89139dbep-4, 0x1.534d64fa10afdp-45},
    { -0x1.0ce7ecdcccp-3, -0x1.4652dabff5447p-46},
    { -0x1.1aa2b7e24p-3, 0x1.1ac38dde3b366p-44},
    { -0x1.28753bc11ap-3, -0x1.7494e359302e6p-44},
    { -0x1.365fcb015ap-3, 0x1.fd3a0afb9691bp-44},
    { -0x1.4462b9dc9cp-3, 0x1.84858a711b062p-44},
    { -0x1.527e5e4a1cp-3, 0x1.4e60b8d4b411dp-44},
    { -0x1.60b3100b0ap-3, 0x1.71456c988f814p-44},
    { -0x1.6f0128b756p-3, -0x1.577390d31ef0fp-44},
    { -0x1.7898d85444p-3, -0x1.8e67be3dbaf3fp-44},
    { -0x1.871213750ep-3, -0x1.328eb42f9af75p-44},
    { -0x1.95a5adcf7p-3, -0x1.7f22858a0ff6fp-47},
    { -0x1.a454082e6ap-3, -0x1.60a77c81f7171p-44},
    { -0x1.ae2ca6f672p-3, -0x1.7a8d5ae54f55p-44},
    { -0x1.bd087383bep-3, 0x1.d4bc4595412b6p-45},
    { -0x1.c6ffbc6fp-3, -0x1.ee138d3a69d43p-44},
    { -0x1.d60a17f904p-3, 0x1.5d6e06fc20d39p-44},
    { -0x1.e020cc6236p-3, 0x1.52b00adb91424p-45},
    { -0x1.ef5ade4ddp-3, 0x1.a211565bb8e11p-51},
    { -0x1.f991c6cb3cp-3, 0x1.90d04cd7cc834p-44},
    { -0x1.047e60cde8p-2, -0x1.dbdf10d397f3cp-45},
    { -0x1.09aa572e6cp-2, -0x1.b50a1e1734342p-44},
    { -0x1.1178e8227ep-2, -0x1.1ef78ce2d07f2p-44},
    { -0x1.16b5ccbadp-2, 0x1.23299042d74bfp-44},
    { -0x1.1bf99635a6p-2, -0x1.729bb5451ef6ep-43},
    { -0x1.214456d0ecp-2, 0x1.caf0428b728a3p-44},
    { -0x1.2941afb186p-2, -0x1.6f79ea4678ebbp-43},
    { -0x1.2e9e2bce12p-2, -0x1.4300c128d1dc2p-45},
    { -0x1.3401e12aecp-2, -0x1.741c65548eb71p-43},
    { -0x1.396ce359bcp-2, 0x1.5839c5663663dp-47},
    { -0x1.419b423d5ep-2, -0x1.18e436ec90e0ap-43},
    { -0x1.4718dc271cp-2, -0x1.06c18fb4c14c5p-44},
    { -0x1.4c9e09e172p-2, -0x1.877ddb93d49d7p-43},
    { -0x1.522ae0738ap-2, -0x1.ebe708164c759p-45},
    { -0x1.57bf753c8ep-2, 0x1.c0a42423457e2p-43},
    { -0x1.5d5bddf596p-2, 0x1.a0b2a08a465dcp-47},
    { -0x1.630030b3aap-2, -0x1.892770633948p-43},
    { -0x1.68ac83e9c6p-2, -0x1.42834c9d5bae8p-43},
    { -0x1.6e60ee6af2p-2, 0x1.a37a6a0f7749ep-44},
    { -0x1.741d876c68p-2, 0x1.13a7b5b11cfa7p-44},
    { -0x1.79e26687dp-2, 0x1.309c168817444p-44},
    { -0x1.7fafa3bd82p-2, 0x1.5c8243204959ap-43},
    { -0x1.85855776dcp-2, -0x1.7f55bccccdde2p-43},
    { -0x1.8873658328p-2, 0x1.988e21f7fc497p-45},
    { -0x1.8e55f9b34ap-2, 0x1.1f21d89c89c45p-44},
    { -0x1.9441434a04p-2, 0x1.b4d1f8da8002fp-43},
    { -0x1.9a355c33bep-2, 0x1.28c65655e3a0bp-43},
    { -0x1.a0325ed15p-2, 0x1.2dc20b0d5e095p-45},
    { -0x1.a33440225p-2, 0x1.61cdd40314305p-44},
    { -0x1.a93ed3c8aep-2, 0x1.8724350562169p-44},
    { -0x1.af5295248cp-2, -0x1.ba0ceab622eeap-43},
    { -0x1.b56fa04462p-2, -0x1.212a4a5b08333p-43},
    { -0x1.b881aa659cp-2, 0x1.b65ac58ba5c9cp-45},
    { -0x1.beacd9e272p-2, 0x1.4bac8923c3257p-44},
    { -0x1.c4e19b8472p-2, -0x1.e0d23293066ap-45},
    { -0x1.c7ff9c7456p-2, 0x1.66db77054926cp-43},
    { -0x1.ce42f18064p-2, -0x1.d0d0798270b2ap-44},
    { -0x1.d490246dfp-2, 0x1.652280b2c4c2cp-44},
    { -0x1.d7ba7ad9e8p-2, 0x1.3022bb88a325bp-45},
    { -0x1.de16b56efap-2, 0x1.e1f7301901b8bp-43},
    { -0x1.e148a1a272p-2, -0x1.b36537e3375b2p-44},
    { -0x1.e7b42c3ddap-2, -0x1.ae6abeb2350bep-43},
    { -0x1.eaedd2eacap-2, 0x1.bcf314a1b2d37p-44},
    { -0x1.f168f7fb06p-2, 0x1.d6fb40a7c0c6ep-45},
    { -0x1.f4aa7ee032p-2, 0x1.b4c86a43fad5dp-44},
    { -0x1.fb358af7a4p-2, -0x1.1085fa3c16493p-43},
    { -0x1.fe7f18eb04p-2, 0x1.60f51ceb37e7ap-45},
    { -0x1.028d2d6a96p-1, -0x1.fa3fec303d08p-44},
    { -0x1.04360be76p-1, -0x1.d6774030d58c4p-44},
    { -0x1.078bf0533cp-1, -0x1.5a048907b7d7fp-43},
    { -0x1.0938fae5d8p-1, -0x1.d35fb82873b05p-42},
    { -0x1.0c974c8944p-1, 0x1.c647eb064688fp-42},
    { -0x1.0e4898611cp-1, -0x1.9c29980780174p-42},
    { -0x1.0ffb54213ap-1, -0x1.1d77bbeeae6bep-43},
    { -0x1.1365252bfp-1, -0x1.0c985a621d4bep-42},
    { -0x1.151c3f6f2ap-1, 0x1.3dbb2f45275c9p-42},
    { -0x1.16d4d38c12p-1, 0x1.81628af71a89ep-43},
    { -0x1.1a4a738b7ap-1, -0x1.9e2b126042793p-44},
    { -0x1.1c07849ae6p-1, -0x1.cacdeed70e667p-51},
    { -0x1.1dc619de06p-1, -0x1.28836a1767071p-42},
    { -0x1.2147dba47ap-1, -0x1.c9d579851b8b6p-44},
    { -0x1.230b0d8becp-1, 0x1.b40fe646de661p-44},
    { -0x1.24cfce6f8p-1, -0x1.b34d29346908ap-42},
    { -0x1.285e0842cap-1, -0x1.c1c4d866d5f22p-44},
    { -0x1.2a2786d0ecp-1, -0x1.06d2be797882dp-45},
    { -0x1.2bf29f9842p-1, 0x1.e275c79e2c481p-44},
    { -0x1.2dbf557b0ep-1, 0x1.7a6e507b9dc11p-46},
    { -0x1.315da4434p-1, -0x1.a2c5b0e97c499p-43},
    { -0x1.332f4314aep-1, 0x1.0d4b61ea74541p-42},
    { -0x1.35028ad9d8p-1, -0x1.90b83f9527e6bp-42},
    { -0x1.36d77e9d34p-1, -0x1.fad7e7abe7ba8p-42},
    { -0x1.38ae217198p-1, 0x1.2316f576aad35p-42},
    { -0x1.3a86767258p-1, 0x1.ddda3fc2edcc7p-42},
    { -0x1.3e3c43919p-1, 0x1.127534c617cdap-42},
    { -0x1.4019c2125cp-1, -0x1.52630d9e1e717p-42},
    { -0x1.41f8ff8472p-1, 0x1.4f7845166b2e1p-44},
    { -0x1.43d9ff2f92p-1, -0x1.e267b0b7efae1p-44},
    { -0x1.45bcc464c8p-1, -0x1.27428b600469bp-42},
    { -0x1.47a1527e8ap-1, -0x1.69a4a83594fabp-44},
    { -0x1.4987ace0dap-1, -0x1.760fb4571acbdp-42},
    { -0x1.4d59d43fdap-1, -0x1.743d96527028dp-42},
    { -0x1.4f45a835a4p-1, -0x1.c3275d24d88e1p-42},
    { -0x1.513356668p-1, 0x1.d46359b33c2adp-44},
    { -0x1.5322e26868p-1, 0x1.ea333ba2da8adp-43},
    { -0x1.55144fdbccp-1, 0x1.4ec532b35ba3ep-44},
    { -0x1.5707a26bb8p-1, -0x1.8ccc05ff9981fp-42},
    { -0x1.58fcddcep-1, -0x1.30e37fe5d2bd1p-43},
    { -0x1.5af405c364p-1, -0x1.3bf4c7582193fp-42},
    { -0x1.5ced1e17c4p-1, 0x1.4754bf6afaa9dp-42},
    { -0x1.5ee82aa242p-1, 0x1.b7f71fcc96e51p-43},
    { -0x1.60e52f4578p-1, -0x1.1c6ea5e681639p-42}
};
static const float table[128]  = {
     0x1p0f, 0x1.fcp-1f, 0x1.f8p-1f, 0x1.f4p-1f, 0x1.fp-1f, 0x1.edp-1f, 0x1.e9p-1f,
     0x1.e5p-1f, 0x1.e2p-1f, 0x1.dep-1f, 0x1.dbp-1f, 0x1.d7p-1f, 0x1.d4p-1f,
     0x1.d1p-1f, 0x1.cep-1f, 0x1.cap-1f, 0x1.c7p-1f, 0x1.c4p-1f, 0x1.c1p-1f,
     0x1.bep-1f, 0x1.bbp-1f, 0x1.b8p-1f, 0x1.b5p-1f, 0x1.b2p-1f, 0x1.afp-1f,
     0x1.acp-1f, 0x1.aap-1f, 0x1.a7p-1f, 0x1.a4p-1f, 0x1.a1p-1f, 0x1.9fp-1f,
     0x1.9cp-1f, 0x1.9ap-1f, 0x1.97p-1f, 0x1.95p-1f, 0x1.92p-1f, 0x1.9p-1f,
     0x1.8dp-1f, 0x1.8bp-1f, 0x1.88p-1f, 0x1.86p-1f, 0x1.84p-1f, 0x1.82p-1f,
     0x1.7fp-1f, 0x1.7dp-1f, 0x1.7bp-1f, 0x1.79p-1f, 0x1.76p-1f, 0x1.74p-1f,
     0x1.72p-1f, 0x1.7p-1f, 0x1.6ep-1f, 0x1.6cp-1f, 0x1.6ap-1f, 0x1.68p-1f,
     0x1.66p-1f, 0x1.64p-1f, 0x1.62p-1f, 0x1.6p-1f, 0x1.5ep-1f, 0x1.5dp-1f,
     0x1.5bp-1f, 0x1.59p-1f, 0x1.57p-1f, 0x1.55p-1f, 0x1.54p-1f, 0x1.52p-1f,
     0x1.5p-1f, 0x1.4ep-1f, 0x1.4dp-1f, 0x1.4bp-1f, 0x1.49p-1f, 0x1.48p-1f,
     0x1.46p-1f, 0x1.44p-1f, 0x1.43p-1f, 0x1.41p-1f, 0x1.4p-1f, 0x1.3ep-1f,
     0x1.3dp-1f, 0x1.3bp-1f, 0x1.3ap-1f, 0x1.38p-1f, 0x1.37p-1f, 0x1.35p-1f,
     0x1.34p-1f, 0x1.32p-1f, 0x1.31p-1f, 0x1.2fp-1f, 0x1.2ep-1f, 0x1.2dp-1f,
     0x1.2bp-1f, 0x1.2ap-1f, 0x1.29p-1f, 0x1.27p-1f, 0x1.26p-1f, 0x1.25p-1f,
     0x1.23p-1f, 0x1.22p-1f, 0x1.21p-1f, 0x1.1fp-1f, 0x1.1ep-1f, 0x1.1dp-1f,
     0x1.1cp-1f, 0x1.1ap-1f, 0x1.19p-1f, 0x1.18p-1f, 0x1.17p-1f, 0x1.16p-1f,
     0x1.15p-1f, 0x1.13p-1f, 0x1.12p-1f, 0x1.11p-1f, 0x1.1p-1f, 0x1.0fp-1f,
     0x1.0ep-1f, 0x1.0dp-1f, 0x1.0bp-1f, 0x1.0ap-1f, 0x1.09p-1f, 0x1.08p-1f,
     0x1.07p-1f, 0x1.06p-1f, 0x1.05p-1f, 0x1.04p-1f, 0x1.03p-1f, 0x1.02p-1f,
     0x1.01p-1f
};

double ml_log_14(double);
double ml_log_14(double x){
    int neg_input;
    
    neg_input = x < 0.0;

    if (__builtin_expect(neg_input, 0)) {

        feclearexcept(FE_ALL_EXCEPT);
        feraiseexcept(FE_INVALID);
        return __builtin_nan("");
    } else {
        int nan_or_inf;

        nan_or_inf = ml_is_nan_or_inf(x);

        if (__builtin_expect(nan_or_inf, 0)) {
            int inf;

            inf = ml_is_inf(x);

            if (__builtin_expect(inf, 0)) {

                feclearexcept(FE_ALL_EXCEPT);
                return INFINITY;
            } else {
                int snan;

                feclearexcept(FE_ALL_EXCEPT);
                snan = ml_is_signaling_nan(x);

                if (__builtin_expect(snan, 0)) {

                    feraiseexcept(FE_INVALID);
                }
                return __builtin_nan("");
            }
        } else {
            int vx_subnormal;

            vx_subnormal = ml_is_subnormal(x);

            if (__builtin_expect(vx_subnormal, 0)) {
                int vx_zero;

                vx_zero = ml_is_zero(x);

                if (__builtin_expect(vx_zero, 0)) {

                    feclearexcept(FE_ALL_EXCEPT);
                    feraiseexcept(FE_DIVBYZERO);
                    return -INFINITY;
                } else {
                    double tmp;
                    double _vx_mant;
                    int64_t tmp1;
                    uint64_t _srl_cast;
                    int64_t tmp2;
                    int64_t table_index;
                    double log_inv_hi;
                    double tmp3;
                    float id_tmp;
                    int32_t tmp4;
                    uint32_t _srl_cast1;
                    int32_t tmp5;
                    int32_t inv_index;
                    float tmp6;
                    float tmp7;
                    int32_t op_exp;
                    int32_t tmp8;
                    float approx_exp;
                    float tmp9;
                    float inv_approx;
                    double id_tmp1;
                    uint64_t tmp10;
                    uint64_t tmp11;
                    double pre_arg_red_index;
                    int tmp12;
                    double tmp13;
                    double carg;
                    double _red_vx;
                    double tmp14;
                    double tmp15;
                    double tmp16;
                    double tmp17;
                    double tmp18;
                    double tmp19;
                    double tmp20;
                    double tmp21;
                    double _red_vx2_;
                    double tmp22;
                    double tmp23;
                    double tmp24;
                    double tmp25;
                    double tmp26;
                    double tmp27;
                    double tmp28;
                    double tmp29;
                    double tmp30;
                    double _red_vx4_;
                    double tmp31;
                    double tmp32;
                    double tmp33;
                    double tmp34;
                    double tmp35;
                    double tmp36;
                    double tmp37;
                    double tmp38;
                    double tmp39;
                    double tmp40;
                    double tmp41;
                    double tmp42;
                    double tmp43;
                    double tmp44;
                    double tmp45;
                    double tmp46;
                    double tmp47;
                    double tmp48;
                    double tmp49;
                    double tmp50;
                    double tmp51;
                    double _red_vx3_;
                    double _red_vx6_;
                    double _red_vx7_;
                    double tmp52;
                    double poly;
                    double tmp53;
                    double log_inv_lo;
                    int32_t _vx_exp;
                    int32_t tmp54;
                    double id_tmp2;
                    double tmp55;
                    double tmp56;
                    double tmp57;
                    double tmp58;
                    double pre_result;
                    double exact_log2_hi_exp;
                    double tmp59;

                    tmp = x * 0x1p100;
                    _vx_mant = ml_mantissa_extraction_fp64(tmp);
                    tmp1 = double_to_64b_encoding(_vx_mant);
                    _srl_cast = tmp1;
                    tmp2 = _srl_cast >> INT64_C(45);
                    table_index = tmp2 & INT64_C(127);
                    log_inv_hi = ml_log_14_inv_table[table_index][INT32_C(0)];
                    tmp3 =  - log_inv_hi;
                    id_tmp = _vx_mant;
                    tmp4 = float_to_32b_encoding(id_tmp);
                    _srl_cast1 = tmp4;
                    tmp5 = _srl_cast1 >> INT32_C(16);
                    inv_index = tmp5 & INT32_C(127);
                    tmp6 = table[inv_index];
                    tmp7 = copysignf(1.0f, id_tmp);
                    op_exp = ml_exp_extraction_dirty_fp32(id_tmp);
                    tmp8 =  - op_exp;
                    approx_exp = ml_exp_insertion_fp32(tmp8);
                    tmp9 = approx_exp * tmp7;
                    inv_approx = tmp6 * tmp9;
                    id_tmp1 = inv_approx;
                    tmp10 = double_to_64b_encoding(id_tmp1);
                    tmp11 = tmp10 & UINT64_C(-2);
                    pre_arg_red_index = double_from_64b_encoding(tmp11);
                    tmp12 = table_index == INT64_C(0);
                    tmp13 = tmp12 ? 1.0 : pre_arg_red_index;
                    carg =  - 1.0;
                    _red_vx = fma(tmp13, _vx_mant, carg);
                    tmp14 = -0x1p-1 * _red_vx;
                    tmp15 = 0x1.5555555555555p-2 * _red_vx;
                    tmp16 = _red_vx * tmp15;
                    tmp17 = tmp14 + tmp16;
                    tmp18 = -0x1p-2 * _red_vx;
                    tmp19 = 0x1.99999999c2be3p-3 * _red_vx;
                    tmp20 = _red_vx * tmp19;
                    tmp21 = tmp18 + tmp20;
                    _red_vx2_ = _red_vx * _red_vx;
                    tmp22 = _red_vx2_ * tmp21;
                    tmp23 = tmp17 + tmp22;
                    tmp24 = -0x1.5555555555555p-3 * _red_vx;
                    tmp25 = 0x1.24920ffff5ef1p-3 * _red_vx;
                    tmp26 = _red_vx * tmp25;
                    tmp27 = tmp24 + tmp26;
                    tmp28 = -0x1.000000000808ap-3 * _red_vx;
                    tmp29 = _red_vx2_ * tmp28;
                    tmp30 = tmp27 + tmp29;
                    _red_vx4_ = _red_vx2_ * _red_vx2_;
                    tmp31 = _red_vx4_ * tmp30;
                    tmp32 = tmp23 + tmp31;
                    tmp33 = 0x1.09a6a36e19bb2p-3 * _red_vx;
                    tmp34 = -0x1.999990dfbcbb3p-4 * _red_vx;
                    tmp35 = _red_vx * tmp34;
                    tmp36 = tmp33 + tmp35;
                    tmp37 = -0x1.a5e3929d998e9p8 * _red_vx;
                    tmp38 = -0x1.575f743808836p-4 * _red_vx;
                    tmp39 = _red_vx * tmp38;
                    tmp40 = tmp37 + tmp39;
                    tmp41 = _red_vx2_ * tmp40;
                    tmp42 = tmp36 + tmp41;
                    tmp43 = 0x1.2492a94cb4d11p22 * _red_vx;
                    tmp44 = 0x1.5b30aca105facp1 * _red_vx;
                    tmp45 = _red_vx * tmp44;
                    tmp46 = tmp43 + tmp45;
                    tmp47 = -0x1.4141b5c929ebap34 * _red_vx;
                    tmp48 = _red_vx2_ * tmp47;
                    tmp49 = tmp46 + tmp48;
                    tmp50 = _red_vx4_ * tmp49;
                    tmp51 = tmp42 + tmp50;
                    _red_vx3_ = _red_vx * _red_vx2_;
                    _red_vx6_ = _red_vx3_ * _red_vx3_;
                    _red_vx7_ = _red_vx * _red_vx6_;
                    tmp52 = _red_vx7_ * tmp51;
                    poly = tmp32 + tmp52;
                    tmp53 = _red_vx * poly;
                    log_inv_lo = ml_log_14_inv_table[table_index][INT32_C(1)];
                    _vx_exp = ml_exp_extraction_dirty_fp64(tmp);
                    tmp54 = _vx_exp + INT32_C(-100);
                    id_tmp2 = tmp54;
                    tmp55 = id_tmp2 * -0x1.8432a1b0e2634p-43;
                    tmp56 = tmp55 - log_inv_lo;
                    tmp57 = tmp53 + tmp56;
                    tmp58 = _red_vx + tmp57;
                    pre_result = tmp3 + tmp58;
                    exact_log2_hi_exp = id_tmp2 * 0x1.62e42fefa4p-1;
                    tmp59 = exact_log2_hi_exp + pre_result;
                    return tmp59;
                }
            } else {
                int vx_one;

                vx_one = x == 1.0;

                if (__builtin_expect(vx_one, 0)) {

                    feclearexcept(FE_ALL_EXCEPT);
                    return 0.;
                } else {
                    int32_t vx_exp;
                    int exp_minus_one;

                    vx_exp = ml_exp_extraction_dirty_fp64(x);
                    exp_minus_one = vx_exp == INT32_C(-1);

                    if (__builtin_expect(exp_minus_one, 0)) {
                        double _vx_mant;
                        int64_t tmp;
                        uint64_t _srl_cast;
                        int64_t tmp1;
                        int64_t table_index;
                        double log_inv_hi;
                        double tmp2;
                        double tmp3;
                        double log_inv_lo;
                        float id_tmp;
                        int32_t tmp4;
                        uint32_t _srl_cast1;
                        int32_t tmp5;
                        int32_t inv_index;
                        float tmp6;
                        float tmp7;
                        int32_t op_exp;
                        int32_t tmp8;
                        float approx_exp;
                        float tmp9;
                        float inv_approx;
                        double id_tmp1;
                        uint64_t tmp10;
                        uint64_t tmp11;
                        double pre_arg_red_index;
                        int tmp12;
                        double tmp13;
                        double carg;
                        double _red_vx;
                        double tmp14;
                        double tmp15;
                        double tmp16;
                        double tmp17;
                        double tmp18;
                        double tmp19;
                        double tmp20;
                        double tmp21;
                        double _red_vx2_;
                        double tmp22;
                        double tmp23;
                        double tmp24;
                        double tmp25;
                        double tmp26;
                        double tmp27;
                        double tmp28;
                        double tmp29;
                        double tmp30;
                        double _red_vx4_;
                        double tmp31;
                        double tmp32;
                        double tmp33;
                        double tmp34;
                        double tmp35;
                        double tmp36;
                        double tmp37;
                        double tmp38;
                        double tmp39;
                        double tmp40;
                        double tmp41;
                        double tmp42;
                        double tmp43;
                        double tmp44;
                        double tmp45;
                        double tmp46;
                        double tmp47;
                        double tmp48;
                        double tmp49;
                        double tmp50;
                        double tmp51;
                        double _red_vx3_;
                        double _red_vx6_;
                        double _red_vx7_;
                        double tmp52;
                        double poly;
                        double tmp53;
                        double tmp54;
                        double tmp55;
                        double tmp56;
                        double result2;

                        _vx_mant = ml_mantissa_extraction_fp64(x);
                        tmp = double_to_64b_encoding(_vx_mant);
                        _srl_cast = tmp;
                        tmp1 = _srl_cast >> INT64_C(45);
                        table_index = tmp1 & INT64_C(127);
                        log_inv_hi = ml_log_14_inv_table[table_index][INT32_C(0)];
                        tmp2 =  - log_inv_hi;
                        tmp3 = tmp2 - 0x1.62e42fefa4p-1;
                        log_inv_lo = ml_log_14_inv_table[table_index][INT32_C(1)];
                        id_tmp = _vx_mant;
                        tmp4 = float_to_32b_encoding(id_tmp);
                        _srl_cast1 = tmp4;
                        tmp5 = _srl_cast1 >> INT32_C(16);
                        inv_index = tmp5 & INT32_C(127);
                        tmp6 = table[inv_index];
                        tmp7 = copysignf(1.0f, id_tmp);
                        op_exp = ml_exp_extraction_dirty_fp32(id_tmp);
                        tmp8 =  - op_exp;
                        approx_exp = ml_exp_insertion_fp32(tmp8);
                        tmp9 = approx_exp * tmp7;
                        inv_approx = tmp6 * tmp9;
                        id_tmp1 = inv_approx;
                        tmp10 = double_to_64b_encoding(id_tmp1);
                        tmp11 = tmp10 & UINT64_C(-2);
                        pre_arg_red_index = double_from_64b_encoding(tmp11);
                        tmp12 = table_index == INT64_C(0);
                        tmp13 = tmp12 ? 1.0 : pre_arg_red_index;
                        carg =  - 1.0;
                        _red_vx = fma(tmp13, _vx_mant, carg);
                        tmp14 = -0x1p-1 * _red_vx;
                        tmp15 = 0x1.5555555555555p-2 * _red_vx;
                        tmp16 = _red_vx * tmp15;
                        tmp17 = tmp14 + tmp16;
                        tmp18 = -0x1p-2 * _red_vx;
                        tmp19 = 0x1.99999999c2be3p-3 * _red_vx;
                        tmp20 = _red_vx * tmp19;
                        tmp21 = tmp18 + tmp20;
                        _red_vx2_ = _red_vx * _red_vx;
                        tmp22 = _red_vx2_ * tmp21;
                        tmp23 = tmp17 + tmp22;
                        tmp24 = -0x1.5555555555555p-3 * _red_vx;
                        tmp25 = 0x1.24920ffff5ef1p-3 * _red_vx;
                        tmp26 = _red_vx * tmp25;
                        tmp27 = tmp24 + tmp26;
                        tmp28 = -0x1.000000000808ap-3 * _red_vx;
                        tmp29 = _red_vx2_ * tmp28;
                        tmp30 = tmp27 + tmp29;
                        _red_vx4_ = _red_vx2_ * _red_vx2_;
                        tmp31 = _red_vx4_ * tmp30;
                        tmp32 = tmp23 + tmp31;
                        tmp33 = 0x1.09a6a36e19bb2p-3 * _red_vx;
                        tmp34 = -0x1.999990dfbcbb3p-4 * _red_vx;
                        tmp35 = _red_vx * tmp34;
                        tmp36 = tmp33 + tmp35;
                        tmp37 = -0x1.a5e3929d998e9p8 * _red_vx;
                        tmp38 = -0x1.575f743808836p-4 * _red_vx;
                        tmp39 = _red_vx * tmp38;
                        tmp40 = tmp37 + tmp39;
                        tmp41 = _red_vx2_ * tmp40;
                        tmp42 = tmp36 + tmp41;
                        tmp43 = 0x1.2492a94cb4d11p22 * _red_vx;
                        tmp44 = 0x1.5b30aca105facp1 * _red_vx;
                        tmp45 = _red_vx * tmp44;
                        tmp46 = tmp43 + tmp45;
                        tmp47 = -0x1.4141b5c929ebap34 * _red_vx;
                        tmp48 = _red_vx2_ * tmp47;
                        tmp49 = tmp46 + tmp48;
                        tmp50 = _red_vx4_ * tmp49;
                        tmp51 = tmp42 + tmp50;
                        _red_vx3_ = _red_vx * _red_vx2_;
                        _red_vx6_ = _red_vx3_ * _red_vx3_;
                        _red_vx7_ = _red_vx * _red_vx6_;
                        tmp52 = _red_vx7_ * tmp51;
                        poly = tmp32 + tmp52;
                        tmp53 = poly * _red_vx;
                        tmp54 = _red_vx + tmp53;
                        tmp55 = tmp54 - -0x1.8432a1b0e2634p-43;
                        tmp56 = tmp55 - log_inv_lo;
                        result2 = tmp3 + tmp56;
                        return result2;
                    } else {
                        double _vx_mant;
                        int64_t tmp;
                        uint64_t _srl_cast;
                        int64_t tmp1;
                        int64_t table_index;
                        double log_inv_hi;
                        double tmp2;
                        float id_tmp;
                        int32_t tmp3;
                        uint32_t _srl_cast1;
                        int32_t tmp4;
                        int32_t inv_index;
                        float tmp5;
                        float tmp6;
                        int32_t op_exp;
                        int32_t tmp7;
                        float approx_exp;
                        float tmp8;
                        float inv_approx;
                        double id_tmp1;
                        uint64_t tmp9;
                        uint64_t tmp10;
                        double pre_arg_red_index;
                        int tmp11;
                        double tmp12;
                        double carg;
                        double _red_vx;
                        double tmp13;
                        double tmp14;
                        double tmp15;
                        double tmp16;
                        double tmp17;
                        double tmp18;
                        double tmp19;
                        double tmp20;
                        double _red_vx2_;
                        double tmp21;
                        double tmp22;
                        double tmp23;
                        double tmp24;
                        double tmp25;
                        double tmp26;
                        double tmp27;
                        double tmp28;
                        double tmp29;
                        double _red_vx4_;
                        double tmp30;
                        double tmp31;
                        double tmp32;
                        double tmp33;
                        double tmp34;
                        double tmp35;
                        double tmp36;
                        double tmp37;
                        double tmp38;
                        double tmp39;
                        double tmp40;
                        double tmp41;
                        double tmp42;
                        double tmp43;
                        double tmp44;
                        double tmp45;
                        double tmp46;
                        double tmp47;
                        double tmp48;
                        double tmp49;
                        double tmp50;
                        double _red_vx3_;
                        double _red_vx6_;
                        double _red_vx7_;
                        double tmp51;
                        double poly;
                        double tmp52;
                        double log_inv_lo;
                        int32_t _vx_exp;
                        double id_tmp2;
                        double tmp53;
                        double tmp54;
                        double tmp55;
                        double tmp56;
                        double pre_result;
                        double exact_log2_hi_exp;
                        double result;

                        _vx_mant = ml_mantissa_extraction_fp64(x);
                        tmp = double_to_64b_encoding(_vx_mant);
                        _srl_cast = tmp;
                        tmp1 = _srl_cast >> INT64_C(45);
                        table_index = tmp1 & INT64_C(127);
                        log_inv_hi = ml_log_14_inv_table[table_index][INT32_C(0)];
                        tmp2 =  - log_inv_hi;
                        id_tmp = _vx_mant;
                        tmp3 = float_to_32b_encoding(id_tmp);
                        _srl_cast1 = tmp3;
                        tmp4 = _srl_cast1 >> INT32_C(16);
                        inv_index = tmp4 & INT32_C(127);
                        tmp5 = table[inv_index];
                        tmp6 = copysignf(1.0f, id_tmp);
                        op_exp = ml_exp_extraction_dirty_fp32(id_tmp);
                        tmp7 =  - op_exp;
                        approx_exp = ml_exp_insertion_fp32(tmp7);
                        tmp8 = approx_exp * tmp6;
                        inv_approx = tmp5 * tmp8;
                        id_tmp1 = inv_approx;
                        tmp9 = double_to_64b_encoding(id_tmp1);
                        tmp10 = tmp9 & UINT64_C(-2);
                        pre_arg_red_index = double_from_64b_encoding(tmp10);
                        tmp11 = table_index == INT64_C(0);
                        tmp12 = tmp11 ? 1.0 : pre_arg_red_index;
                        carg =  - 1.0;
                        _red_vx = fma(tmp12, _vx_mant, carg);
                        tmp13 = -0x1p-1 * _red_vx;
                        tmp14 = 0x1.5555555555555p-2 * _red_vx;
                        tmp15 = _red_vx * tmp14;
                        tmp16 = tmp13 + tmp15;
                        tmp17 = -0x1p-2 * _red_vx;
                        tmp18 = 0x1.99999999c2be3p-3 * _red_vx;
                        tmp19 = _red_vx * tmp18;
                        tmp20 = tmp17 + tmp19;
                        _red_vx2_ = _red_vx * _red_vx;
                        tmp21 = _red_vx2_ * tmp20;
                        tmp22 = tmp16 + tmp21;
                        tmp23 = -0x1.5555555555555p-3 * _red_vx;
                        tmp24 = 0x1.24920ffff5ef1p-3 * _red_vx;
                        tmp25 = _red_vx * tmp24;
                        tmp26 = tmp23 + tmp25;
                        tmp27 = -0x1.000000000808ap-3 * _red_vx;
                        tmp28 = _red_vx2_ * tmp27;
                        tmp29 = tmp26 + tmp28;
                        _red_vx4_ = _red_vx2_ * _red_vx2_;
                        tmp30 = _red_vx4_ * tmp29;
                        tmp31 = tmp22 + tmp30;
                        tmp32 = 0x1.09a6a36e19bb2p-3 * _red_vx;
                        tmp33 = -0x1.999990dfbcbb3p-4 * _red_vx;
                        tmp34 = _red_vx * tmp33;
                        tmp35 = tmp32 + tmp34;
                        tmp36 = -0x1.a5e3929d998e9p8 * _red_vx;
                        tmp37 = -0x1.575f743808836p-4 * _red_vx;
                        tmp38 = _red_vx * tmp37;
                        tmp39 = tmp36 + tmp38;
                        tmp40 = _red_vx2_ * tmp39;
                        tmp41 = tmp35 + tmp40;
                        tmp42 = 0x1.2492a94cb4d11p22 * _red_vx;
                        tmp43 = 0x1.5b30aca105facp1 * _red_vx;
                        tmp44 = _red_vx * tmp43;
                        tmp45 = tmp42 + tmp44;
                        tmp46 = -0x1.4141b5c929ebap34 * _red_vx;
                        tmp47 = _red_vx2_ * tmp46;
                        tmp48 = tmp45 + tmp47;
                        tmp49 = _red_vx4_ * tmp48;
                        tmp50 = tmp41 + tmp49;
                        _red_vx3_ = _red_vx * _red_vx2_;
                        _red_vx6_ = _red_vx3_ * _red_vx3_;
                        _red_vx7_ = _red_vx * _red_vx6_;
                        tmp51 = _red_vx7_ * tmp50;
                        poly = tmp31 + tmp51;
                        tmp52 = _red_vx * poly;
                        log_inv_lo = ml_log_14_inv_table[table_index][INT32_C(1)];
                        _vx_exp = ml_exp_extraction_dirty_fp64(x);
                        id_tmp2 = _vx_exp;
                        tmp53 = id_tmp2 * -0x1.8432a1b0e2634p-43;
                        tmp54 = tmp53 - log_inv_lo;
                        tmp55 = tmp52 + tmp54;
                        tmp56 = _red_vx + tmp55;
                        pre_result = tmp2 + tmp56;
                        exact_log2_hi_exp = id_tmp2 * 0x1.62e42fefa4p-1;
                        result = exact_log2_hi_exp + pre_result;
                        return result;
                    }
                }
            }
        }
    }
}
//associating generator <class 'metalibm_core.code_generation.generators.llvm_ir_code_generator.LLVMIRCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.LLVM_IR_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.C_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.c_code_generator.CCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.OpenCL_Code'>
//associating generator <class 'metalibm_core.code_generation.generators.asm_code_generator.AsmCodeGenerator'> with language <class 'metalibm_core.code_generation.code_constant.ASM_Code'>
//enabling:  Info
//Info: CCodeGenerator initialized with language: <class 'metalibm_core.code_generation.code_constant.C_Code'>
//Info: inserting sub-expr sharing pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassSubExpressionSharing object at 0x7f3e8a0cb910> at <class 'metalibm_core.core.passes.PassScheduler.Optimization'>
//Info: inserting instantiate abstract precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiateAbstractPrecision object at 0x7f3e8a0cb550> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting instantiate precision pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_typing.PassInstantiatePrecision object at 0x7f3e8a0cb460> at <class 'metalibm_core.core.passes.PassScheduler.Typing'>
//Info: inserting target support check pass
//
//Info: PassScheduler: registering pass <metalibm_core.opt.p_function_std.PassCheckProcessorSupport object at 0x7f3e8a0cb280> at <class 'metalibm_core.core.passes.PassScheduler.JustBeforeCodeGen'>
//Info: approx_interval: [-7.8125e-3;7.8125e-3]
//Info: approx_interval: [-7.8125e-3;7.8125e-3]
//Info: approx_interval: [-7.8125e-3;7.8125e-3]
//Info: Applying <Start> stage passes
//Info: Applying <Typing> stage passes
//Info: executing pass: instantiate_abstract_prec
//Info: executing pass instantiate_abstract_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3e8a0cb0a0>
//Info: executing pass instantiate_abstract_prec on fct ml_log_14
//Info: executing pass: instantiate_prec
//Info: executing pass instantiate_prec on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3e8a0cb0a0>
//Info: executing pass instantiate_prec on fct ml_log_14
//Info: Applying <Optimization> stage passes
//Info: executing pass: sub_expr_sharing
//Info: executing pass sub_expr_sharing on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3e8a0cb0a0>
//Info: executing pass sub_expr_sharing on fct ml_log_14
//Info: Applying <JustBeforeCodeGen> stage passes
//Info: executing pass: check_processor_support
//Info: executing pass check_processor_support on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3e8a0cb0a0>
//Info: executing pass check_processor_support on fct ml_log_14
//Info: executing check-processor with target generic
//Info: checking processor support: <class 'metalibm_core.code_generation.generic_processor.GenericProcessor'>
//Info: executing pass: debug_tag_node
//Info: executing pass debug_tag_node on fct group <metalibm_core.code_generation.code_function.FunctionGroup object at 0x7f3e8a0cb0a0>
//Info: executing pass debug_tag_node on fct ml_log_14
//Info: Generating Source Code 
//Info: Generating C_Code code in src/ml_log_14.c
