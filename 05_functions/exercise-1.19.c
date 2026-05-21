/**
 * File              : exercise-1.19.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 20.05.2026
 * Last Modified Date: 21.05.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/**
 * Exercise 1-19: Write a function reverse(s) that reverses the character string
 * s. Use it to write a program that reverses its input a line at a time.
 **/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line lenght */

int getLine(char line[], int maxline);
void reverse(char s[]);

/* print the longest input line */
int main() {
	char line[MAXLINE];
	int lenght;

	while ((lenght = getLine(line, MAXLINE)) > 0) {
		reverse(line);
		printf("%s", line);
	}
}

/* getline: read a line into s, and return lenght */
int getLine(char s[], int lim) {

	int c, i, count;

	count = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim - 1) {
			s[i] = c;
			count = i + 1;
		}
	}

	if (c == '\n') {
		if (i < lim - 1) {
			s[count] = c;
			++count;
		}
		++i;
	}
	s[count] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void reverse(char s[]) {
	int i = 0, j = 0;
	char tmp;

	while (s[j] != '\0')
		++j;

	--j;

	if (j >= 0 && s[j] == '\n')
		--j;

	while (i < j) {
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		++i;
		--j;
	}
}
