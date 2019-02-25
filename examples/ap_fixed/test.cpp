#include "ap_fixed.h"
#include <iostream>

int main(int argc, const char* argv[]) {

  ap_ufixed<28, 4> a = 11.3137;
  std::cout << "a = " << a << " (" << a.to_string(AP_HEX) << ")\n";

#if __cplusplus >= 201103L
  ap_ufixed<28, 4> b = 0xB.504F33p0; // hex-float
#else
  ap_ufixed<28, 4> b = "0xB.504F33p0";
#endif
  std::cout << "b = " << b << " (" << b.to_string(AP_HEX) << ")\n";

  ap_ufixed<29, 5> c = a + b;
  std::cout << "c = a + b = " << c.to_double() << " (" << c.to_string(AP_HEX) << ")" << std::endl;

  return 0;
}
