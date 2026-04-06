/**
 * File              : getline.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 06.04.2026
 * Last Modified Date: 06.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
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

	if (max > 0)
		printf("%s", longest);
}

/* getline: read a line into s, and return lenght */
int getLine(char s[], int lim) {

	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
