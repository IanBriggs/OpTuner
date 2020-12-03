#include "ord_tan.h"
#include <math.h>
#include <stdlib.h>
static const fp64 QPI_fp64 = 0.7853981633974483096;
fp64 ord_07_tan_fp64(fp64 x) {
  return x * (0x1.ffede964f42f6p-1 + (x*x) * (0x1.5af8bead1391cp-2 + (x*x) * (0x1.9b13f9a345ec6p-4 + (x*x) * 0x1.cb1bed86d6353p-4)));
}
fp64 ord_05_tan_fp64(fp64 x) {
  return x * (0x1.005eec0aefe6fp0 + (x*x) * (0x1.346ce0166a945p-2 + (x*x) * 0x1.d88419d4a3dd4p-3));
}
fp64 ord_09_tan_fp64(fp64 x) {
  return x * (0x1.0000dc9df6342p0 + (x*x) * (0x1.547d2762cd155p-2 + (x*x) * (0x1.219b85be3f8fbp-3 + (x*x) * (0x1.c01f5074c108bp-6 + (x*x) * 0x1.be68074c17629p-5))));
}
fp64 ord_11_tan_fp64(fp64 x) {
  return x * (0x1.ffffd5f4c5e7cp-1 + (x*x) * (0x1.55731a1d97fp-2 + (x*x) * (0x1.0db4d5b780f38p-3 + (x*x) * (0x1.ff82003339dfap-5 + (x*x) * (0x1.7d5f4be2a8d02p-9 + (x*x) * 0x1.b215739ce566fp-6)))));
}
fp64 ord_13_tan_fp64(fp64 x) {
  return x * (0x1.00000200cc26fp0 + (x*x) * (0x1.5551769c6d98ap-2 + (x*x) * (0x1.11ab8119b1c2fp-3 + (x*x) * (0x1.a853aac8997aap-5 + (x*x) * (0x1.e0240706eb2bbp-6 + (x*x) * (-0x1.dc65ba373f577p-9 + (x*x) * 0x1.a61a97047ee1bp-7))))));
}
fp64 ord_15_tan_fp64(fp64 x) {
  return x * (0x1.ffffff9e46333p-1 + (x*x) * (0x1.5555d0d753fdbp-2 + (x*x) * (0x1.10f7aea7aa7a5p-3 + (x*x) * (0x1.be0a281e4ba6cp-5 + (x*x) * (0x1.409f39261de23p-6 + (x*x) * (0x1.e1b308786648p-7 + (x*x) * (-0x1.14b265f1a1402p-8 + (x*x) * 0x1.9a746e4c8b1f4p-8)))))));
}
fp64 ord_17_tan_fp64(fp64 x) {
  return x * (0x1.00000004a7ef4p0 + (x*x) * (0x1.5555466b8dc09p-2 + (x*x) * (0x1.1114f89f3a2c6p-3 + (x*x) * (0x1.b953c6d428052p-5 + (x*x) * (0x1.70358468bb1c8p-6 + (x*x) * (0x1.ba19cbe11c33ep-8 + (x*x) * (0x1.00bc52a9869bfp-7 + (x*x) * (-0x1.a9813116eafe9p-9 + (x*x) * 0x1.8f20941676afdp-9))))))));
}
fp64 ord_19_tan_fp64(fp64 x) {
  return x * (0x1.ffffffff1cd94p-1 + (x*x) * (0x1.55555716e0da6p-2 + (x*x) * (0x1.11107f143645dp-3 + (x*x) * (0x1.ba402c6e99767p-5 + (x*x) * (0x1.640195e38bd88p-6 + (x*x) * (0x1.378ac3a7c74fbp-7 + (x*x) * (0x1.de6e22d00429dp-10 + (x*x) * (0x1.1e77f7b062ec6p-8 + (x*x) * (-0x1.1af1b2bd72a14p-9 + (x*x) * 0x1.841cc2bb5ec2fp-10)))))))));
}
fp64 ord_21_tan_fp64(fp64 x) {
  return x * (0x1.000000000ad28p0 + (x*x) * (0x1.5555552176745p-2 + (x*x) * (0x1.1111258529e8cp-3 + (x*x) * (0x1.ba155f954012dp-5 + (x*x) * (0x1.66cc30196d2cp-6 + (x*x) * (0x1.1ccc15126a90fp-7 + (x*x) * (0x1.137cd47fd05c4p-8 + (x*x) * (0x1.5f75be41a9155p-14 + (x*x) * (0x1.48dc566c3115ep-9 + (x*x) * (-0x1.5d19861328157p-10 + (x*x) * 0x1.7966c410aab25p-11))))))))));
}
fp64 ord_03_tan_fp64(fp64 x) {
  return x * (0x1.f836315b5e66dp-1 + (x*x) * 0x1.ea901c97a26d9p-2);
}
fp64 ord_23_tan_fp64(fp64 x) {
  return x * (0x1.fffffffffdfp-1 + (x*x) * (0x1.5555555b3815bp-2 + (x*x) * (0x1.11110e4c17ac9p-3 + (x*x) * (0x1.ba1ca5e53cbb5p-5 + (x*x) * (0x1.6636bf8a3045cp-6 + (x*x) * (0x1.23c96d470ed1ep-7 + (x*x) * (0x1.beb3585dc4e57p-9 + (x*x) * (0x1.0496f78077a54p-9 + (x*x) * (-0x1.b61b3f23cc074p-12 + (x*x) * (0x1.7eca5badae74fp-10 + (x*x) * (-0x1.9b636e1e67354p-11 + (x*x) * 0x1.6efc73d83bdaap-12)))))))))));
}
fp64 ord_25_tan_fp64(fp64 x) {
  return x * (0x1.0000000000192p0 + (x*x) * (0x1.55555554acd5p-2 + (x*x) * (0x1.1111116e54d9dp-3 + (x*x) * (0x1.ba1b7950b07c2p-5 + (x*x) * (0x1.6653cffa5b195p-6 + (x*x) * (0x1.222148785462ap-7 + (x*x) * (0x1.dd55b5bab3447p-9 + (x*x) * (0x1.4eda803155612p-10 + (x*x) * (0x1.0c4ae02a52b43p-10 + (x*x) * (-0x1.ec183fc7ee47ep-12 + (x*x) * (0x1.bf2f95243da2p-11 + (x*x) * (-0x1.d5f5cd9fe6308p-12 + (x*x) * 0x1.64da58aa750bep-13))))))))))));
}
fp64 ord_27_tan_fp64(fp64 x) {
  return x * (0x1.fffffffffffb3p-1 + (x*x) * (0x1.5555555568004p-2 + (x*x) * (0x1.111111051292ep-3 + (x*x) * (0x1.ba1ba7c7dcfa5p-5 + (x*x) * (0x1.664e7d21adbe7p-6 + (x*x) * (0x1.227e20f6f39b5p-7 + (x*x) * (0x1.d538a395d6f9bp-9 + (x*x) * (0x1.8b9ea863a42f9p-10 + (x*x) * (0x1.c2a3a94ebe1bp-12 + (x*x) * (0x1.2cdd5ddfb15b6p-11 + (x*x) * (-0x1.92509cf93585cp-12 + (x*x) * (0x1.04917b37f0db8p-11 + (x*x) * (-0x1.0686735169b6dp-12 + (x*x) * 0x1.5b066138d416dp-14)))))))))))));
}
fp64 ord_29_tan_fp64(fp64 x) {
  return x * (0x1.0000000000004p0 + (x*x) * (0x1.555555555337p-2 + (x*x) * (0x1.111111129c392p-3 + (x*x) * (0x1.ba1ba0d5cca57p-5 + (x*x) * (0x1.664f6b09d90dcp-6 + (x*x) * (0x1.226b123b16eedp-7 + (x*x) * (0x1.d732b7c71a4d3p-9 + (x*x) * (0x1.79d04d0974f4dp-10 + (x*x) * (0x1.5106698733ceep-11 + (x*x) * (0x1.b150f38f4180bp-14 + (x*x) * (0x1.69f2dfa19c011p-12 + (x*x) * (-0x1.2382067ea0d52p-12 + (x*x) * (0x1.2e5c27c1c85e3p-12 + (x*x) * (-0x1.20ccef0c66eebp-13 + (x*x) * 0x1.51c507bca974p-15))))))))))))));
}
fp64 ord_31_tan_fp64(fp64 x) {
  return x * (0x1.fffffffffffffp-1 + (x*x) * (0x1.5555555555982p-2 + (x*x) * (0x1.11111110dc0d2p-3 + (x*x) * (0x1.ba1ba1dc474aap-5 + (x*x) * (0x1.664f42ad08f1p-6 + (x*x) * (0x1.226ed007d0272p-7 + (x*x) * (0x1.d6becca7e61cap-9 + (x*x) * (0x1.7e9f5b3fda2fcp-10 + (x*x) * (0x1.2cf54dc85ac98p-11 + (x*x) * (0x1.2e688aaca5884p-12 + (x*x) * (-0x1.c403b92d9c42fp-17 + (x*x) * (0x1.c9840665b0f1ap-13 + (x*x) * (-0x1.8d93c67744ad1p-13 + (x*x) * (0x1.5db8efce52d48p-13 + (x*x) * (-0x1.3aaa7dc74cf17p-14 + (x*x) * 0x1.498b024dc8bdp-16)))))))))))))));
}
fp64 ord_33_tan_fp64(fp64 x) {
  return x * (0x1p0 + (x*x) * (0x1.555555555551cp-2 + (x*x) * (0x1.11111111155e2p-3 + (x*x) * (0x1.ba1ba1b68d13p-5 + (x*x) * (0x1.664f494038ab8p-6 + (x*x) * (0x1.226e1df66edfdp-7 + (x*x) * (0x1.d6d7943c43b9ep-9 + (x*x) * (0x1.7d6e158b41448p-10 + (x*x) * (0x1.3772dbae00185p-11 + (x*x) * (0x1.d67990fac0484p-13 + (x*x) * (0x1.1f87c35a3a86cp-13 + (x*x) * (-0x1.5b5c579e72e9p-15 + (x*x) * (0x1.1a2d92af311a3p-13 + (x*x) * (-0x1.f0bf831031368p-14 + (x*x) * (0x1.844dc47015b6bp-14 + (x*x) * (-0x1.4a64c9fee2e5p-15 + (x*x) * 0x1.3c185b29cf8e7p-17))))))))))))))));
}
fp64 ord_35_tan_fp64(fp64 x) {
  return x * (0x1p0 + (x*x) * (0x1.555555555555bp-2 + (x*x) * (0x1.111111111093ap-3 + (x*x) * (0x1.ba1ba1ba91ca5p-5 + (x*x) * (0x1.664f4866d6b46p-6 + (x*x) * (0x1.226e39494584ep-7 + (x*x) * (0x1.d6d3193af8a9ep-9 + (x*x) * (0x1.7daf05735c98dp-10 + (x*x) * (0x1.34d0c06303244p-11 + (x*x) * (0x1.fe8d4bc287d7p-13 + (x*x) * (0x1.5c87d8533913ep-14 + (x*x) * (0x1.2ffeadbc333b4p-14 + (x*x) * (-0x1.7008a4714e222p-15 + (x*x) * (0x1.69bbc98919f57p-14 + (x*x) * (-0x1.37d2ac5e47d6ep-14 + (x*x) * (0x1.b61d47879237ep-15 + (x*x) * (-0x1.5ec6532380ceep-16 + (x*x) * 0x1.330180d4c847bp-18)))))))))))))))));
}
fp64 ord_37_tan_fp64(fp64 x) {
  return x * (0x1p0 + (x*x) * (0x1.5555555555555p-2 + (x*x) * (0x1.11111111111bbp-3 + (x*x) * (0x1.ba1ba1ba0f374p-5 + (x*x) * (0x1.664f48863b7c2p-6 + (x*x) * (0x1.226e34ccfd46bp-7 + (x*x) * (0x1.d6d3efa2eebbcp-9 + (x*x) * (0x1.7da125ce16ac6p-10 + (x*x) * (0x1.35764b9fc49cep-11 + (x*x) * (0x1.f3267829ec40dp-13 + (x*x) * (0x1.a7fa4acae42f7p-14 + (x*x) * (0x1.cc73b1f18bbecp-16 + (x*x) * (0x1.5c2aa7dc9e328p-15 + (x*x) * (-0x1.29b89bf80b12ep-15 + (x*x) * (0x1.c54727a2726f5p-15 + (x*x) * (-0x1.782d1e9cec441p-15 + (x*x) * (0x1.e3ecf7afc97c7p-16 + (x*x) * (-0x1.6dcaff29af938p-17 + (x*x) * 0x1.27ff6ba31d4a9p-19))))))))))))))))));
}
fp64 ord_01_tan_fp64(fp64 x) {
  return x * 0x1.28ff0f4212e74p0;
}
fp64 rord_07_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_07_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_05_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_05_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_09_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_09_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_11_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_11_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_13_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_13_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_15_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_15_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_17_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_17_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_19_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_19_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_21_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_21_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_03_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_03_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_23_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_23_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_25_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_25_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_27_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_27_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_29_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_29_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_31_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_31_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_33_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_33_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_35_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_35_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_37_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_37_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}
fp64 rord_01_tan_fp64(fp64 x) {
  int sign = signbit(x);
  fp64 abs_x = fabs(x);
  int k = (int) (abs_x / QPI_fp64);
  fp64 whole = ((fp64) k) * QPI_fp64;
  fp64 y = abs_x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
      z = y;
      break;
    case 1:
      z = QPI_fp64 - y;
      break;
    case 2:
      z = -y;
      break;
    case 3:
      z = y - QPI_fp64;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_01_tan_fp64(z);
  if (part == 1 || part == 2) {
    result = 1 / result;
  }
  result *= sign ? -1.0 : 1.0;
  return result;
}