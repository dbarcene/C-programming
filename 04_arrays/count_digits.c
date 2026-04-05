/**
 * File              : count_digits.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 05.04.2026
 * Last Modified Date: 05.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/**
 *  Write a program to couint the number of occurrences of each digit, of white
 *  space characters(blank, tab, newline), and of all other charachters.
 */

#include <stdio.h>

int main() {
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
