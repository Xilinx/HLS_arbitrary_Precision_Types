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
