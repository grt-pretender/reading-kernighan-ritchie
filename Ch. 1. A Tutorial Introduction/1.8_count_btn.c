/* ex. 1_8
Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main()
{
  int c, blanksnum, tabsnum, newlinesnum;
  blanksnum, tabsnum, newlinesnum = 0, 0, 0;
  while (c = getchar() != EOF) {
    if (c == ' ')
      ++blanksnum;
    else if (c == '\t')
      ++tabsnum;
    else if (c == '\n')
      ++newlinesnum;
  }
  printf("№ of blanks: %d\n", blanksnum);
  printf("№ of tabs: %d\n", tabsnum);
  printf("№ of newlines: %d\n", newlinesnum);

}