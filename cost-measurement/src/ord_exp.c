#include "ord_exp.h"
#include <math.h>
static const fp64 LN2_fp64 = 0.6931471805599453094;
fp64 ord_04_exp_fp64(fp64 x) {
  return 0x1.fffef25cf1173p-1 + x * (0x1.0004f3ef94c2ep0 + x * (0x1.00ab5d0050381p-1 + x * (0x1.42c0a7f8e3035p-3 + x * 0x1.deb8dd572692ap-5)));
}
fp64 ord_05_exp_fp64(fp64 x) {
  return 0x1.0000021b9c777p0 + x * (0x1.ffff156e938b8p-1 + x * (0x1.fffa1f1c7559cp-2 + x * (0x1.56a0581df0677p-3 + x * (0x1.415f98ec8005fp-5 + x * 0x1.7f6ed82de7c2fp-7))));
}
fp64 ord_06_exp_fp64(fp64 x) {
  return 0x1.0000000e5dbf5p0 + x * (0x1.00000494554f6p0 + x * (0x1.ffff9e19af586p-2 + x * (0x1.5548f90d9b2f4p-3 + x * (0x1.56e72839815a3p-5 + x * (0x1.00594a11da67ep-7 + x * 0x1.ffb31e190de5ep-10)))));
}
fp64 ord_07_exp_fp64(fp64 x) {
  return 0x1.fffffffdcc937p-1 + x * (0x1.ffffffd3e0805p-1 + x * (0x1.000003f0883a6p-1 + x * (0x1.555579b5a0c19p-3 + x * (0x1.55424bd83a015p-5 + x * (0x1.127bf57a27bap-7 + x * (0x1.5512b7a6d7f73p-10 + x * 0x1.249a3c79c4291p-12))))));
}
fp64 ord_08_exp_fp64(fp64 x) {
  return 0x1.0000000008455p0 + x * (0x1.ffffffffd2f7bp-1 + x * (0x1.ffffffba0374ap-2 + x * (0x1.555557e4d6098p-3 + x * (0x1.5555d97ccf12dp-5 + x * (0x1.10fd8f926c2b9p-7 + x * (0x1.6e24c3fb1f14ap-10 + x * (0x1.852b2068cac0fp-13 + x * 0x1.24c3c28690822p-15)))))));
}
fp64 ord_09_exp_fp64(fp64 x) {
  return 0x1.ffffffffffbd8p-1 + x * (0x1.0000000004bdap0 + x * (0x1.00000000a22dbp-1 + x * (0x1.5555552b69f0ap-3 + x * (0x1.5555547f19286p-5 + x * (0x1.1111bf760022ap-7 + x * (0x1.6bf81b405a52dp-10 + x * (0x1.a2991f92571eep-13 + x * (0x1.84ac92ab9cc15p-16 + x * 0x1.045a62c4d2f29p-18))))))));
}
fp64 ord_10_exp_fp64(fp64 x) {
  return 0x1.0000000000001p0 + x * (0x1.ffffffffffb2ep-1 + x * (0x1.ffffffffffc07p-2 + x * (0x1.5555555694f69p-3 + x * (0x1.5555553d45a79p-5 + x * (0x1.11110d90d2cdfp-7 + x * (0x1.6c17f9e128ac9p-10 + x * (0x1.9ff2a54a51588p-13 + x * (0x1.a2b7413d23239p-16 + x * (0x1.592522bf7146cp-19 + x * 0x1.a0b26fabdc6edp-22)))))))));
}
fp64 ord_11_exp_fp64(fp64 x) {
  return 0x1p0 + x * (0x1.000000000000bp0 + x * (0x1.ffffffffffe0fp-2 + x * (0x1.555555554f866p-3 + x * (0x1.5555555679d86p-5 + x * (0x1.111111152514bp-7 + x * (0x1.6c16b88e09aabp-10 + x * (0x1.a01bc1a59849ep-13 + x * (0x1.9fee7ca313545p-16 + x * (0x1.744b0e364ff5bp-19 + x * (0x1.13d4480ec1b9ap-22 + x * 0x1.2f3cd9e9f2defp-25))))))))));
}
fp64 ord_12_exp_fp64(fp64 x) {
  return 0x1p0 + x * (0x1p0 + x * (0x1.0000000000008p-1 + x * (0x1.5555555555534p-3 + x * (0x1.555555554ee82p-5 + x * (0x1.11111111ad7e2p-7 + x * (0x1.6c16c185e2c85p-10 + x * (0x1.a019f54ea7973p-13 + x * (0x1.a01bdf216f64dp-16 + x * (0x1.71b6ec61c77bcp-19 + x * (0x1.29d3af39ce4c9p-22 + x * (0x1.918055dd435e2p-26 + x * 0x1.935a23358b1b2p-29)))))))))));
}
fp64 ord_03_exp_fp64(fp64 x) {
  return 0x1.000d3c7dea664p0 + x * (0x1.0032f98c13a99p0 + x * (0x1.e77d98d5bcb6ap-2 + x * 0x1.dded27cc014f7p-3));
}
fp64 ord_13_exp_fp64(fp64 x) {
  return 0x1p0 + x * (0x1p0 + x * (0x1p-1 + x * (0x1.5555555555559p-3 + x * (0x1.55555555555aap-5 + x * (0x1.111111110dcedp-7 + x * (0x1.6c16c16c61e0dp-10 + x * (0x1.a01a01c7357b5p-13 + x * (0x1.a019f5e1db2dfp-16 + x * (0x1.71dfbdc917755p-19 + x * (0x1.27c8442d353p-22 + x * (0x1.b0ff6332f41a4p-26 + x * (0x1.0cb05ab07fd61p-29 + x * 0x1.ec40607aba16bp-33))))))))))));
}
fp64 ord_01_exp_fp64(fp64 x) {
  return 0x1.ff999cc503dcep-1 + x * 0x1.63c12d57fad4ap0;
}
fp64 ord_02_exp_fp64(fp64 x) {
  return 0x1.fecd8f3cda4fcp-1 + x * (0x1.edfc5d6a5e341p-1 + x * 0x1.658cb553dcf4fp-1);
}
fp64 rord_04_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_04_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_04_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_05_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_05_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_05_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_06_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_06_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_06_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_07_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_07_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_07_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_08_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_08_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_08_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_09_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_09_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_09_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_10_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_10_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_10_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_11_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_11_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_11_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_12_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_12_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_12_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_03_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_03_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_03_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_13_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_13_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_13_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_01_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_01_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_01_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}
fp64 rord_02_exp_fp64(fp64 x) {
  if (x < LN2_fp64) {
    return ord_02_exp_fp64(x);
  }
  int N = (int) (x / LN2_fp64);
  fp64 whole = ((fp64) N) * LN2_fp64;
  fp64 t = x - whole;
  fp64 exp_t = ord_02_exp_fp64(t);
  fp64 recons = ldexp(exp_t, N);
  return recons;
}