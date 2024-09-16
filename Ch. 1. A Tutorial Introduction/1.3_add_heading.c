/* ex. 1_3
Modify the temperature conversion program to print a heading above the table.
*/

#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower threshold */
  upper = 300; /* upper threshold */
  step = 20; /* step */

  printf ("Temperature conversion program (Fahrenheit => Celsius)\n\n");

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);

    /* for int type:
    celsius = 5 * (fahr-32) / 9;
    */
    
    printf ("%3.0f %9.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

}