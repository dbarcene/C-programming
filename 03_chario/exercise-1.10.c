/**
 * File              : exercise-1.10.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 04.04.2026
 * Last Modified Date: 04.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/**
 * Excercise 1-10: Write a program to copy its input to ist output, replacing
 * each tab by \t, each backspace by \b, and each backslash by \\. This makes
 * tabs and backspaces vissible in an unambiguous way.
 */

#include <stdio.h>

int main() {
	int c;

	c = getchar();
	while (c != EOF) {
		if (c == '\t') {
			printf("\\t");
		} else if (c == '\b') {
			printf("\\b");
		} else if (c == '\\') {
			printf("\\\\");
		} else
			putchar(c);
		c = getchar();
	}
}
