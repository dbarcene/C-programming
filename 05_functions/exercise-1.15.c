/**
 * File              : exercise-1.15.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 06.04.2026
 * Last Modified Date: 06.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/**
 * Rewrite the temperature conversion program to use a function for conversion
 */

#include <stdio.h>

/* This program prnits a table of Fahrenheit and Celcius temperatures for
 * fahrenheit = 0, 20, 40, ..., 300.*/

float fahr2cel(float fahrenheit) {
	float celcius = 0.00;
	celcius = 5.00 * (fahrenheit - 32) / 9.00;
	return celcius;
}

int main() {

	float fahrenheit, celcius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	while (fahrenheit <= upper) {
		celcius = fahr2cel(fahrenheit);
		printf("%.2f\t%.2f\n", fahrenheit, celcius);
		fahrenheit = fahrenheit + step;
	}
}
