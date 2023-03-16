#include "rtwtypes.h"
#include "maximum_YhTLPI0W.h"

uint8_T maximum_YhTLPI0W(const uint8_T x_data[], const int32_T x_size[2])
{
  int32_T istop;
  int32_T k;
  uint8_T ex;
  uint8_T tmp;
  istop = x_size[1];
  ex = x_data[0];
  for (k = 2; k <= istop; k++) {
    tmp = x_data[k - 1];
    if (ex < tmp) {
      ex = tmp;
    }
  }

  return ex;
}
