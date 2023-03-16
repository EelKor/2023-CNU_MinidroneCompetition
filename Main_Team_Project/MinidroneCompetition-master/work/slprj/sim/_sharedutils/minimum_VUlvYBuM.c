#include "rtwtypes.h"
#include "minimum_VUlvYBuM.h"

real_T minimum_VUlvYBuM(const real_T x[31])
{
  real_T ex;
  real_T tmp;
  int32_T k;
  ex = x[0];
  for (k = 0; k < 30; k++) {
    tmp = x[k + 1];
    if (ex > tmp) {
      ex = tmp;
    }
  }

  return ex;
}
