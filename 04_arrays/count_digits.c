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
		if (c >= 0x30 && c <= 0x39)
			++ndigit[c - 0x30]; //[0 - 9] --> hex[0x30 - 0x39]
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

/**
 *  if (c >= '0' && c <= '9') checks if c is between 0 and 9, it it is then
 *  ++ndigit[c-'0']; this is simmilar to a fancy indexing in python, where
 *  [c -'0'] returns an index result of the operation inside the
 *  parenthesis. c is a char, but chars in C are small integers so the
 *  operation is totally valid, '0' turns out to be the decimal
 *  representation in ASCII in base 10. numerals are represented starting
 *  from 48. You can also use 0x30 up to 0x39 to represent decimal numerals
 *  in hexagecimal notation. For more information on ASCII execure 'man ascii'.
 */
