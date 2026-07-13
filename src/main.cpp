#include "index.h"
#include <iostream>

// macro with subsitution text
// The use of this is discouraged
#define MY_NAME "garg"

// macro without subsitution text
// This is not discouraged
#define PRINT_JOE

void baz()
{
  // prepreprocessor does not understand c++ syntax
#define HIYA
}

int main()
{
  std::cout << "my name is: " << MY_NAME << std::endl;

  // These are conditional compilation prepreprocessor directives
#ifdef PRINT_JOE
  // this will compile
  std::cout << "my name is: joe" << std::endl;
#endif

#ifdef PRINT_BOB
  // this will not compile
  std::cout << "my name is: bob" << std::endl;
#endif

#ifndef PRINT_SHMOE
  // this will compile
  // becuase ifndef is opposite of ifdef
  std::cout << "my name is: shmoe" << std::endl;
#endif

  // The prepreprocessor directive does not work on this
  // because it only #defined from the point of definition to the end of
  // main.cpp. Hence, will not print
  prntJoe();

#ifdef HIYA
  // this will compile
  std::cout << "hiya" << std::endl;
#endif

#if 0 // opposite would be if #if 1
  // this will not compile whatsoever
  /* used for commenting out code 
    * like this
    * Even clang-format will not format this
    */
  std::cout<<"hi baby"<<std::endl;
#endif

  return 0;
}
