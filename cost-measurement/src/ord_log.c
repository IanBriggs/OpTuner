#include "ord_log.h"
#include <math.h>
static const fp64 LN2_fp64 = 0.6931471805599453094;
fp64 ord_08_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.0000084ed207ap0 + x * (-0x1.0002da4b47347p-1 + x * (0x1.5546343d070c3p-2 + x * (-0x1.fda57c7ee6f4cp-3 + x * (0x1.99e913a9df2b7p-3 + x * (-0x1.74d6f7ab95637p-3 + x * (0x1.47d131b99060cp-3 + x * (-0x1.375eac81256bbp-4))))))));
}
fp64 ord_07_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.000070318c8b6p0 + x * (-0x1.fffd9da4c03c5p-2 + x * (0x1.5486479fe2829p-2 + x * (-0x1.ff1d264729ef7p-3 + x * (0x1.b5c853bfd3ac8p-3 + x * (-0x1.7e7d1df79daaap-3 + x * 0x1.7d3e282944dfep-4))))));
}
fp64 ord_09_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.fffff8e616631p-1 + x * (-0x1.00006558a1ab3p-1 + x * (0x1.5560b3e02ece4p-2 + x * (-0x1.ffb15b2ff5547p-3 + x * (0x1.968bc7d9212bp-3 + x * (-0x1.57364a7646914p-3 + x * (0x1.46af5e91e2742p-3 + x * (-0x1.1d8f5a78d76d8p-3 + x * 0x1.024a0b76826e3p-4))))))));
}
fp64 ord_06_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.000050b71f0cbp0 + x * (-0x1.ff8a7147d3c88p-2 + x * (0x1.54875a26536eap-2 + x * (-0x1.0c0a88815121ep-2 + x * (0x1.c8c55d56ac541p-3 + x * (-0x1.dc6368a53832dp-4))))));
}
fp64 ord_05_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.ffe9ebcf7afafp-1 + x * (-0x1.ff1f739cb3bc7p-2 + x * (0x1.5eea915b53fa8p-2 + x * (-0x1.1a88d502dfa0fp-2 + x * 0x1.32042a70881ccp-3))));
}
fp64 ord_10_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.fffffe970cd8dp-1 + x * (-0x1.ffffce769b93dp-2 + x * (0x1.5557cd3fdafc4p-2 + x * (-0x1.0011a4feba5cp-2 + x * (0x1.99020b7b003fdp-3 + x * (-0x1.51abaa2d8a026p-3 + x * (0x1.284bfe1261abp-3 + x * (-0x1.2412256c9e6f5p-3 + x * (0x1.f76e37510e015p-4 + x * (-0x1.b1cf5eeb70cc3p-5))))))))));
}
fp64 ord_11_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.000000121e66bp0 + x * (-0x1.fffff00f8ac0dp-2 + x * (0x1.5554f6a274dd5p-2 + x * (-0x1.0005958fb833fp-2 + x * (0x1.99c7c9de46e2bp-3 + x * (-0x1.545d1ad2ffee8p-3 + x * (0x1.206ed40017438p-3 + x * (-0x1.05c485e5caff8p-3 + x * (0x1.09004cd87805cp-3 + x * (-0x1.bfbfcc88f0ac2p-4 + x * 0x1.6ff19d6c8a9fp-5))))))))));
}
fp64 ord_12_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.000000096d45cp0 + x * (-0x1.0000004d229a9p-1 + x * (0x1.555523437f7bap-2 + x * (-0x1.ffff1635bdad4p-3 + x * (0x1.99ae6f7401219p-3 + x * (-0x1.5589a9245072fp-3 + x * (0x1.232429ebea7ecp-3 + x * (-0x1.f718541192b5bp-4 + x * (0x1.d6fa61e2e054bp-4 + x * (-0x1.e634b00b96f76p-4 + x * (0x1.90fea9cfdf778p-4 + x * (-0x1.3aa72e1d0246dp-5))))))))))));
}
fp64 ord_13_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.000000003feb5p0 + x * (-0x1.0000006e72e1ep-1 + x * (0x1.55555476fa549p-2 + x * (-0x1.ffff17da9926p-3 + x * (0x1.999919d195775p-3 + x * (-0x1.55777160ae255p-3 + x * (0x1.24c4f918da461p-3 + x * (-0x1.fc1519b283854p-4 + x * (0x1.bdf00912df9d1p-4 + x * (-0x1.adec1e153815p-4 + x * (0x1.c1c592e435762p-4 + x * (-0x1.6919097901ddfp-4 + x * 0x1.0ef1e047c8841p-5))))))))))));
}
fp64 ord_14_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.ffffffff4085p-1 + x * (-0x1.0000000915969p-1 + x * (0x1.5555581edf5f4p-2 + x * (-0x1.ffffef5c45a0cp-3 + x * (0x1.9997dec37169ap-3 + x * (-0x1.55565ab6d769cp-3 + x * (0x1.24c50894749abp-3 + x * (-0x1.002693260a55dp-3 + x * (0x1.c2092f33d0125p-4 + x * (-0x1.90891a910a264p-4 + x * (0x1.8d2936f205732p-4 + x * (-0x1.a2becda082d3cp-4 + x * (0x1.469c986d5450bp-4 + x * (-0x1.d55e93a655ac4p-6))))))))))))));
}
fp64 ord_04_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.ffb1561944875p-1 + x * (-0x1.035c566b50345p-1 + x * (0x1.728a468adf73dp-2 + x * (-0x1.99425b448fb4dp-3))));
}
fp64 ord_15_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.ffffffffe5b7dp-1 + x * (-0x1.fffffff72debp-2 + x * (0x1.555555bc413aap-2 + x * (-0x1.00000684cbc7ep-2 + x * (0x1.99996075ace78p-3 + x * (-0x1.55527765768ddp-3 + x * (0x1.249681fbf96d9p-3 + x * (-0x1.00461b7c0fab1p-3 + x * (0x1.c737fe87db69cp-4 + x * (-0x1.934e4d892373fp-4 + x * (0x1.6bca113670645p-4 + x * (-0x1.7289e19a7ff91p-4 + x * (0x1.87cc7f1b97b5ap-4 + x * (-0x1.287da95f160e3p-4 + x * 0x1.989f4a6c74f1dp-6))))))))))))));
}
fp64 ord_16_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.0000000002b63p0 + x * (-0x1.fffffffe121d4p-2 + x * (0x1.55555539ec0f6p-2 + x * (-0x1.0000016ca08fbp-2 + x * (0x1.9999b1fd3c3d6p-3 + x * (-0x1.5554c7cf55161p-3 + x * (0x1.248e0801f2c12p-3 + x * (-0x1.0009ad553385ep-3 + x * (0x1.c7d2d462308d5p-4 + x * (-0x1.9966e23d7919fp-4 + x * (0x1.6cd4643feed89p-4 + x * (-0x1.4d9f4692943bap-4 + x * (0x1.5c8d411487e0bp-4 + x * (-0x1.70012b760bda6p-4 + x * (0x1.0df52b5af7445p-4 + x * (-0x1.655015c4821a5p-6))))))))))))))));
}
fp64 ord_17_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.0000000000decp0 + x * (-0x1.000000001af8ep-1 + x * (0x1.5555554c2467dp-2 + x * (-0x1.ffffff8e00895p-3 + x * (0x1.9999a145e5f9dp-3 + x * (-0x1.55557b5619eb3p-3 + x * (0x1.24912612f0543p-3 + x * (-0x1.fff481653c7e6p-4 + x * (0x1.c7403fede5782p-4 + x * (-0x1.9a7b0ad218c4dp-4 + x * (0x1.73bd5f6aec155p-4 + x * (-0x1.4c9402bec789ep-4 + x * (0x1.3495afea8001dp-4 + x * (-0x1.4a1ebb2392e4ep-4 + x * (0x1.5ab2ebd2b68c4p-4 + x * (-0x1.ecd6e7765472dp-5 + x * 0x1.39a9a9006ec7p-6))))))))))))))));
}
fp64 ord_18_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.fffffffffff4p-1 + x * (-0x1.000000000f582p-1 + x * (0x1.55555555b674bp-2 + x * (-0x1.ffffffc3354e6p-3 + x * (0x1.999998faa279p-3 + x * (-0x1.555566810a2c2p-3 + x * (0x1.24927a90020d1p-3 + x * (-0x1.fffbe0bd108d7p-4 + x * (0x1.c70e35ec6a651p-4 + x * (-0x1.99d438bf4e0d3p-4 + x * (0x1.75677f5e0e851p-4 + x * (-0x1.542909d647265p-4 + x * (0x1.3128217e3f54fp-4 + x * (-0x1.1fa12e7f5cf51p-4 + x * (0x1.3a72a81eed5c7p-4 + x * (-0x1.4765dd1c2c4a7p-4 + x * (0x1.c2d532a839e2ep-5 + x * (-0x1.144bbd4c68b3ap-6))))))))))))))))));
}
fp64 ord_19_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.ffffffffffebp-1 + x * (-0x1.000000000075bp-1 + x * (0x1.55555555e325bp-2 + x * (-0x1.ffffffff0081bp-3 + x * (0x1.999998fb74935p-3 + x * (-0x1.555554ff8d67p-3 + x * (0x1.24926aa940b9fp-3 + x * (-0x1.0000329a9781ap-3 + x * (0x1.c715a441975fcp-4 + x * (-0x1.99897d3fe8ef8p-4 + x * (0x1.74b57014100c1p-4 + x * (-0x1.56835b5dea9cep-4 + x * (0x1.393b880982a99p-4 + x * (-0x1.1993c0f3daa68p-4 + x * (0x1.0dfa6f34aa721p-4 + x * (-0x1.2cf037c9009d1p-4 + x * (0x1.35bd7c2185754p-4 + x * (-0x1.9d28b5fd2567fp-5 + x * 0x1.e840dfd5e5511p-7))))))))))))))))));
}
fp64 ord_20_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.fffffffffffe3p-1 + x * (-0x1.fffffffffe981p-2 + x * (0x1.555555556194p-2 + x * (-0x1.00000001c9397p-2 + x * (0x1.9999998e3dcc2p-3 + x * (-0x1.555553fc3b38cp-3 + x * (0x1.24924a5d2c0a2p-3 + x * (-0x1.00003acc315cdp-3 + x * (0x1.c71caca7e2f76p-4 + x * (-0x1.998f2c13ed61ep-4 + x * (0x1.744cb9f5aee99p-4 + x * (-0x1.55d28a06566p-4 + x * (0x1.3c5c8ce67de24p-4 + x * (-0x1.21f021969b161p-4 + x * (0x1.051ef47c2748ep-4 + x * (-0x1.fe1456ef16ae6p-5 + x * (0x1.21234270984bdp-4 + x * (-0x1.25725a3d8bc71p-4 + x * (0x1.7b34dfe6a5f87p-5 + x * (-0x1.b08e372c7f0dfp-7))))))))))))))))))));
}
fp64 ord_21_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.0000000000006p0 + x * (-0x1.ffffffffffca7p-2 + x * (0x1.555555554f139p-2 + x * (-0x1.00000000432ecp-2 + x * (0x1.999999a29a65bp-3 + x * (-0x1.55555528e2feep-3 + x * (0x1.249246940a881p-3 + x * (-0x1.00000553ea4b6p-3 + x * (0x1.c71d2ee047f18p-4 + x * (-0x1.99995f34f5d6p-4 + x * (0x1.744e0bb48870dp-4 + x * (-0x1.554719926c1fap-4 + x * (0x1.3bbca5a52e589p-4 + x * (-0x1.25ea812bfb603p-4 + x * (0x1.0d8a4ddb4791bp-4 + x * (-0x1.e67d65c370fd2p-5 + x * (0x1.e4a5511043dc3p-5 + x * (-0x1.16afdac0a682p-4 + x * (0x1.165bfb5198de4p-4 + x * (-0x1.5c9f8fe535527p-5 + x * 0x1.80521b614e1e8p-7))))))))))))))))))));
}
fp64 ord_03_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.00e15233a7a89p0 + x * (-0x1.0f926ab81419dp-1 + x * 0x1.2392905c7711ap-2));
}
fp64 ord_01_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * 0x1.ea2c2f3e1d5d3p-1;
}
fp64 ord_02_log_fp64(fp64 xin) {
  fp64 x = xin - 1.0;
  return x * (0x1.07c902c46c3f2p0 + x * (-0x1.d23e35944523dp-2));
}
fp64 rord_08_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_08_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_07_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_07_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_09_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_09_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_06_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_06_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_05_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_05_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_10_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_10_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_11_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_11_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_12_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_12_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_13_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_13_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_14_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_14_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_04_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_04_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_15_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_15_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_16_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_16_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_17_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_17_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_18_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_18_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_19_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_19_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_20_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_20_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_21_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_21_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_03_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_03_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_01_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_01_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}
fp64 rord_02_log_fp64(fp64 x) {
  int n;
  fp64 f = frexp(x, &n);
  fp64 log_f = ord_02_log_fp64(f);
  fp64 recons = n*LN2_fp64 + log_f;
  return recons;
}