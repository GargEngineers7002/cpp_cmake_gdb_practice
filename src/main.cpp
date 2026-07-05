#include "index.h"
#include <cstdlib>
#include <fmt/core.h>
#include <iostream>
#include <ostream>

int main()
{
  // success
  return 0;
  return EXIT_SUCCESS; // preprocessor macro defined in the cstdlib

  // fails
  return 1;
  return EXIT_FAILURE; // preprocessor macro defined in the cstdlib
}
