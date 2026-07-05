#include "index.h"
#include <cstdlib>
#include <fmt/core.h>
#include <iostream>
#include <ostream>

// compiles without -Werrors flag and does segmentation fault and crashes in
// linux
// supposed to do undefined behavior
int func()
{
  fmt::print("Enter a number: ");
  int n{};
  std::cin >> n;
}

int main()
{
  int n{func()};
  fmt::print("{}", n * 2);
  return 0;
}
