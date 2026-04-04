/**
 * File              : exercise-1.8.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 03.04.2026
 * Last Modified Date: 03.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/**
 *Excercise 1-8: Write a program to count blanks, tabs and newlines
 */

#include <stdio.h>

int main() {
	printf("This program counts blanks, tabs, and newlines.\n"
	       "Write something:\n");

	int newline, tabs, spaces;

	int chars;

	newline = 0;
	tabs = 0;
	spaces = 0;
	while ((chars = getchar()) != EOF) {
		if (chars == '\n')
			++newline;
		else if (chars == '\t')
			++tabs;
		else if (chars == ' ')
			++spaces;
	}

	printf("newline= %d\n", newline);
	printf("tabs= %d\n", tabs);
	printf("spaces= %d\n", spaces);
}
