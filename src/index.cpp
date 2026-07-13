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

int add(int x, int y) { return x + y; }

void prntJoe()
{
#ifdef PRINT_JOE
  std::cout << "joe" << std::endl;
#endif
}
