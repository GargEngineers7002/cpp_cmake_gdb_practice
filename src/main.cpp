#include "index.h"
#include <cstdint>
#include <iostream>
#include <ostream>

int main()
{
  int32_t a{}; // avoiding implementation defined behavior
  std::cin >> a;
  std::cout << a << std::endl;
  int arr[a]; // according to teh standard, this is not allowed so does not compile wiht -pedantic-errors
  // but when compiles results in undefined behavior and shows the value already in the memory
  // this will compile without -pedantic-errors but will fail if using the MSVC compiler
  // GCC specific extension
  std::cout << arr[0] << std::endl;
  std::cout << sizeof(int) << std::endl; // implementation defined (could be 4 or 2 depending on the compiler)
  return 0;
}
