/**
 * File              : exercise-1.9.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 03.04.2026
 * Last Modified Date: 04.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/**
 * Excercise 1-9: Write a program to copy its input to ist output, replacing
 * each string of one or more blanks by a single blank
 * Example: one__two
 * one
 */

#include <stdio.h>

int main() {

	int c;
	int previous;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		previous = c;
		c = getchar();
		if ((previous == ' ') && (c == ' '))
			c = getchar();
	}
}
