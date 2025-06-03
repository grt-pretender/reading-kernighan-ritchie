/* ex. 1_4
Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower threshold */
  upper = 300; /* upper threshold */
  step = 20; /* step */

  printf ("Temperature conversion program (Celsius => Fahrenheit)\n\n");

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);

    /* for int type:
    celsius = 5 * (fahr-32) / 9;
    */
    
    printf ("%6.1f %6.0f\n", celsius, fahr);
    fahr = fahr + step;
  }

}
