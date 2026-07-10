#include "index.h"
#include <cstdlib>
#include <fmt/core.h>
#include <iostream>
#include <ostream>

// This compiles and links fine

int add(int x, int y, int z);

int main()
{
  std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
  return 0;
}

int add(int z, int y, int x) // names don't match the declaration
{
  return x + y + z;
}
