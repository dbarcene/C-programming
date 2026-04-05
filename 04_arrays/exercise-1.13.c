/**
 * File              : exercise-1.13.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 05.04.2026
 * Last Modified Date: 05.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/**
 * Exercise 1-13: Write a program to print a histogram of the lenghts of words
 * in its input. It is easy to draw the histogram with the horizontal bars; a
 * vertical orientation is more challenging.
 */

#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
	int c, WORDS, CHARS, STATE;

	c = getchar();
	WORDS = CHARS = 0;
	STATE = OUT;

	while ((c = getchar()) != EOF) {
		++CHARS;
		if (c == '\n' || c == ' ' || c == '\t')
			STATE = OUT;
		else if (STATE == OUT) {
			STATE = IN;
			++WORDS;
		}
	}
	printf("");
}
