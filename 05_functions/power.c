/**
 * File              : power.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 06.04.2026
 * Last Modified Date: 06.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

#include <stdio.h>

int power(int base, int exponent) {
	int i, p;
	p = 1;
	for (i = 1; i <= exponent; ++i)
		p = p * base;
	return p;
}

int main() {
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d \n", i, power(2, i));
}
