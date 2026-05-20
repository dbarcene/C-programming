/**
 * File              : exercise-1.17.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 20.05.2026
 * Last Modified Date: 20.05.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/** EXERCISE 1.17
 * Write a program to print all input lines that are longer than 80 characters.
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line lenght */
#define LIMIT 80     /* target line lenght */

int getLine(char line[], int maxline);

int main() {

	int len;	     /* current line lenght */
	char input[MAXLINE]; /* current input line */

	while ((len = getLine(input, MAXLINE)) > 0) {
		if (len > LIMIT) {
			printf("%s", input);
		}
	}
	return 0;
}

/* getline: read a line into s, and return lenght */
int getLine(char s[], int max) {

	int c, i, count;

	count = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < max - 1) {
			s[i] = c;
			count = i + 1;
		}
	}

	if (c == '\n') {
		if (i < max - 1) {
			s[count] = c;
			++count;
		}
		++i;
	}
	s[count] = '\0';
	return i;
}
