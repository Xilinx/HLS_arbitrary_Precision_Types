#include "ap_int.h"
#include <iostream>

int main(int argc, const char* argv[]) {

  ap_int<5> a = 11;
  std::cout << "a = " << a << " (" << a.to_string(AP_HEX) << ")\n";

  ap_uint<65> b = "0x1ffffffff";
  std::cout << "b = " << b << " (" << b.to_string(AP_HEX) << ")\n";

  auto c = a + b;
  std::cout << "c = a + b = " << c.to_double() << " (" << c.to_string(AP_HEX) << ")" << std::endl;

  return 0;
}
