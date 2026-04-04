/**
 * File              : word_counting.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 04.04.2026
 * Last Modified Date: 04.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

int main() {

	int c, countLINE, countWORD, CHARS, STATE;

	c = getchar();
	countLINE = countWORD = CHARS = 0;
	STATE = OUT;

	while ((c = getchar()) != EOF) {
		++CHARS;
		if (c == '\n')
			++countLINE;
		if (c == '\n' || c == ' ' || c == '\t')
			STATE = OUT;
		else if (STATE == OUT) {
			STATE = IN;
			++countWORD;
		}
	}

	printf("lines = %d\n"
	       "words = %d\n"
	       "chars = %d\n",
	       countLINE, countWORD, CHARS);
}
