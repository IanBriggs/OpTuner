#include "ord_sin.h"
#include <math.h>
#include <stdlib.h>
static const fp64 HPI_fp64 = 1.570796326794896619;
fp64 ord_05_sin_fp64(fp64 x) {
  return x * (0x1.ffeb02da7edeap-1 + (x*x) * (-0x1.53784efd9b78fp-3 + (x*x) * 0x1.ebfeb932b2bc8p-8));
}
fp64 ord_07_sin_fp64(fp64 x) {
  return x * (0x1.ffffcb21421d1p-1 + (x*x) * (-0x1.554ccb516749cp-3 + (x*x) * (0x1.102a19ebe191bp-7 + (x*x) * (-0x1.800219b4fd50cp-13))));
}
fp64 ord_09_sin_fp64(fp64 x) {
  return x * (0x1.ffffffa93de16p-1 + (x*x) * (-0x1.55553f110f4afp-3 + (x*x) * (0x1.110d4baae0f64p-7 + (x*x) * (-0x1.9f30ccfb9fb2p-13 + (x*x) * 0x1.5a846ba50cf37p-19))));
}
fp64 ord_11_sin_fp64(fp64 x) {
  return x * (0x1.ffffffff9be4cp-1 + (x*x) * (-0x1.5555552fdf945p-3 + (x*x) * (0x1.111107c792b7ep-7 + (x*x) * (-0x1.a016971a6a65cp-13 + (x*x) * (0x1.714b482778c65p-19 + (x*x) * (-0x1.97640fce9b749p-26))))));
}
fp64 ord_13_sin_fp64(fp64 x) {
  return x * (0x1.ffffffffffaa6p-1 + (x*x) * (-0x1.55555555294c7p-3 + (x*x) * (0x1.1111110208b6p-7 + (x*x) * (-0x1.a019f9d75650dp-13 + (x*x) * (0x1.71dc4ade75ab6p-19 + (x*x) * (-0x1.ade4fa2326841p-26 + (x*x) * 0x1.50c7a1253f91fp-33))))));
}
fp64 ord_03_sin_fp64(fp64 x) {
  return x * (0x1.fb2ee543258d1p-1 + (x*x) * (-0x1.25f2288ed7b4bp-3));
}
fp64 ord_15_sin_fp64(fp64 x) {
  return x * (0x1.ffffffffffffcp-1 + (x*x) * (-0x1.55555555552dap-3 + (x*x) * (0x1.11111110ff884p-7 + (x*x) * (-0x1.a01a01941248dp-13 + (x*x) * (0x1.71de363d088cep-19 + (x*x) * (-0x1.ae62d01f6371ap-26 + (x*x) * (0x1.60d35fd8882f4p-33 + (x*x) * (-0x1.9cdf5229af4aep-41))))))));
}
fp64 ord_17_sin_fp64(fp64 x) {
  return x * (0x1p0 + (x*x) * (-0x1.5555555555554p-3 + (x*x) * (0x1.1111111111034p-7 + (x*x) * (-0x1.a01a01a00d4dcp-13 + (x*x) * (0x1.71de3a4fa9025p-19 + (x*x) * (-0x1.ae6453911fcdcp-26 + (x*x) * (0x1.612380f07a3ap-33 + (x*x) * (-0x1.ae30e32586387p-41 + (x*x) * 0x1.8658862edebd1p-49))))))));
}
fp64 ord_19_sin_fp64(fp64 x) {
  return x * (0x1p0 + (x*x) * (-0x1.5555555555555p-3 + (x*x) * (0x1.11111111110e3p-7 + (x*x) * (-0x1.a01a01a017accp-13 + (x*x) * (0x1.71de3a5475a9ap-19 + (x*x) * (-0x1.ae64560a3d3p-26 + (x*x) * (0x1.61243ff045f7p-33 + (x*x) * (-0x1.ae73f9774f056p-41 + (x*x) * (0x1.930cdf28dbcep-49 + (x*x) * (-0x1.00af1e409f492p-57))))))))));
}
fp64 ord_01_sin_fp64(fp64 x) {
  return x * 0x1.7e34abc1d739cp-1;
}
fp64 rord_05_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_05_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_05_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}
fp64 rord_07_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_07_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_07_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}
fp64 rord_09_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_09_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_09_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}
fp64 rord_11_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_11_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_11_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}
fp64 rord_13_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_13_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_13_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}
fp64 rord_03_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_03_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_03_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}
fp64 rord_15_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_15_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_15_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}
fp64 rord_17_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_17_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_17_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}
fp64 rord_19_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_19_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_19_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}
fp64 rord_01_sin_fp64(fp64 x) {
  if (x < HPI_fp64) {
    return ord_01_sin_fp64(x);
  }
  int k = (int) (x / HPI_fp64);
  fp64 whole = ((fp64) k) * HPI_fp64;
  fp64 y = x - whole;
  int part = k % 4;
  fp64 z;
  switch (part) {
    case 0:
    case 2:
      z = y;
      break;
    case 1:
    case 3:
      z = HPI_fp64 - y;
      break;
    default:
      exit(3);
  }
  fp64 result = ord_01_sin_fp64(z);
  if (part == 2 || part == 3) {
    result *= (fp64) -1.0;  }
  return result;
}