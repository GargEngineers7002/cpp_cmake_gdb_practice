#include "index.h"
#include <iostream>
#include <locale>
#include <unistd.h>

/* this ha
 * s auto
 * alignment because of the auto formatter
 */
/*hibyie
 *hibyie intg
 *hitn ilngsg
 *htinds ling
 *hitn oljefg
 */
/*
int main()
{
  int i = 8;
  std::cout << x << std::endl; // hi
  foo(i);
  std::cout << x << std::endl;          // hi
  std::cout << "hibyie i" << std::endl; // hi
  /* hibyie
   *
   *
   *
   *
   */
return 0;
}
*/ < --this causes an error

    /*
    int main()
    {
      int i = 8;
      std::cout << x << std::endl; // hi
      foo(i);
      std::cout << x << std::endl;          // hi
      std::cout << "hibyie i" << std::endl; // hi
      // hibyie
      //
      //
      // hibyie
      //

    return 0;
    }
    */
    < --this works

          Preprocessor directive alternative:
#if 0
int main() {
    /* Old multi-line comment */
    int x = 5;
}
#endif
