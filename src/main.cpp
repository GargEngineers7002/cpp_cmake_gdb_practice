#include "index.h"
#include <cstdlib>
#include <fmt/core.h>
#include <iostream>
#include <ostream>

int add(int x, int y); // causes a linker error

int main() { int n{add(1, 2)}; }
