/**
 * File              : exercise-1.16.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 06.04.2026
 * Last Modified Date: 06.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/**
 * Exercise 1-16: Revise the main routine of the longest-line program so it
 * will correctly print the lenght of arbitrary long input lines, and as much as
 * possible of the text
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line lenght */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main() {

	int len;	       /* current line lenght */
	int max;	       /* maximum lenght seen so far */
	char line[MAXLINE];    /* current input line */
	char longest[MAXLINE]; /* longest line saved here */

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) {
		printf("%d", max);
		printf("%s", longest);
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
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
