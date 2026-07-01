#include "index.h"
#include <cstdint>
#include <iostream>
#include <ostream>

int main()
{
  std::cout << "Hello"
               " World !" // so 2 quoted texts can be concatenated automatically
                          // over any whitespace
            << '\n';      // hi this is testing
                          // thi is aloso
                          // thisnt
                          // testing

  [[maybe_unused]] int cost         &= 2; // just for seeing .clang-format work
  [[maybe_unused]] int pricePerItem  = 10;
  [[maybe_unused]] int hiya          = 3;
  [[maybe_unused]] uint32_t items    = 10;
  return 0;
}
