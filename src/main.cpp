#include "index.h"
#include <iostream>
#include <unistd.h>

int main()
{
  int i = 8;
  std::cout << x << std::endl; // hi
  foo(i);
  std::cout << x << std::endl; // hi
  [[maybe_unused]] int z;      // just allots a memory location (not clean)(doesn't compile with
  // -Werror) called default initialization

  // Traditional initialization forms:
  [[maybe_unused]] int a = 4; // copy initialization
  [[maybe_unused]] int b(4);  // direct initialization

  // Modern initialization forms (preferred):
  [[maybe_unused]] int d{7}; // direct-list-initialization (initial value in braces)
  [[maybe_unused]] int e{};  // value-initialization (empty braces)
  int j{};                   // zero initialization
  std::cout << j << std::endl;
  try
  {
    throw std::runtime_error("disk");
  }
  catch (const std::runtime_error &s) // Caught by VALUE(Inefficient)
  {
    std::cout << s.what() << std::endl;
  }
  return 0;
}
