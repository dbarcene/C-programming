/**
 * File              : temperature.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 01.04.2026
 * Last Modified Date: 01.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

#include <stdio.h>

/* This program prnts a table of Fahrenheit and Celcius temperatures for
 * fahrenheit = 0, 20, 40, ..., 300.*/

int main() {

  int fahrenheit, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahrenheit = lower;
  while (fahrenheit <= upper) {
    celcius = 5 * (fahrenheit - 32) / 9;
    printf("%d\t%d\n", fahrenheit, celcius);
    fahrenheit = fahrenheit + step;
  }
}
