#include "index.h"
#include <iostream>
#include <unistd.h>

int main()
{
  int i{4};
  std::cout << "Hello World\n";
  bool b{0};
  char c{30}; // unprintable for 0-32 and 127
  char d{};
  std::cout << "d = " << d - 0 << '!\n'; // multicharacter literal problem
  std::cout << "c = " << c << '\n';
  std::cout << "i = " << i << '/n'; // multicharacter literal problem
  std::cout << "b = " << b << '\n';
  std::cout << "enter a number: ";
  std::cin >> i;
  std::cout << "i = " << i << '\n';
  char j{97};
  std::cout << "j = " << j << '\n';
  std::cout << "enter two numbers: ";
  std::cin >> i >> j;
  std::cout << "i = " << i << ", j = " << j << '\n';
  return 0;
}
