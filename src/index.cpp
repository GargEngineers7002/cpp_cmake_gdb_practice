#include "index.h"
#include <iostream>

int p = 4;

void foo(int y) { p = y; }
int getInteger()
{
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
  return x;
}
