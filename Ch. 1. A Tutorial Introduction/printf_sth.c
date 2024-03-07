// ex. 1_2
// experiment to find out what happens when print f's argument string contains
// \c, where c is some character not listed above.
//
// result: added text or undefined ("warning: unknown escape sequence: '\c' ").
// '\a' or '\7' - produces an audible or visible alert without changing the active position.

#include <stdio.h>

int main(void)
{
  printf("hello, word:\a");
  return 0;
}