/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
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
