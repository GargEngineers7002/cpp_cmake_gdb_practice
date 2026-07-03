#include "index.h"
#include <iostream>
#include <ostream>

int main()
{
  std::cout << "Enter a number: ";

  int i{};
  std::cin >> i;

  std::cout << "Enter another number: ";

  int j{};
  std::cin >> j;

  std::cout << i << " + " << j << " is " << i + j << ".\n";
  std::cout << i << " - " << j << " is " << i - j, std::cout << ".\n";
}
