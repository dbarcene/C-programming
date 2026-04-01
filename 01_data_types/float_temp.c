/**
 * File              : float_temp.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 01.04.2026
 * Last Modified Date: 01.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* This program prnts a table of Fahrenheit and Celcius temperatures for
 * fahrenheit = 0, 20, 40, ..., 300.*/

int main() {

  float fahrenheit, celcius;

  fahrenheit = LOWER;
  while (fahrenheit <= UPPER) {
    celcius = 5.0 * (fahrenheit - 32.0) / 9.0;
    printf("%3.0f\t%6.1f\n", fahrenheit, celcius);
    fahrenheit = fahrenheit + STEP;
  }
}
