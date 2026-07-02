#include "index.h"
#include <cstdint>
#include <iostream>
#include <ostream>

int main()
{
  std::cout << "Enter a number: ";

  int n{};
  std::cin >> n;

  std::cout << "the double is: " << 2 * n << std::endl;
  std::cout << "the triple is: " << 3 * n << std::endl;
  return 0;
}
