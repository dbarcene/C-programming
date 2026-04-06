/**
 * File              : exercise-1.13.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 05.04.2026
 * Last Modified Date: 06.04.2026
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
#define MAX_LENGTH 25

int main() {
	int c, i, j, WORD_LENGTH, STATE;
	int hist[MAX_LENGTH];

	for (int i = 0; i < MAX_LENGTH; ++i)
		hist[i] = 0; // Initialize array

	WORD_LENGTH = 0;
	STATE = OUT;
	c = getchar();
	while (c != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (STATE == IN && WORD_LENGTH < MAX_LENGTH) {
				++hist[WORD_LENGTH];
				WORD_LENGTH = 0;
			}
			STATE = OUT;
		} else {
			STATE = IN;
			++WORD_LENGTH;
		}
		c = getchar();
	}

	printf("WORD LENGHT COUNT\n");
	printf("LENGHT | COUNT | GRAPH\n");
	printf("------ | ----- | -----\n");
	for (i = 0; i <= MAX_LENGTH; ++i) {
		printf(" %2d | %3d  |", i, hist[i]);
		for (j = 0; j < hist[i]; ++j) {
			putchar('*');
		}
		printf("\n");
	}
}
