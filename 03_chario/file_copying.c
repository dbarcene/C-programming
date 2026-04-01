/**
 * File              : file_copying.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 01.04.2026
 * Last Modified Date: 01.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */
#include <stdio.h>

/* read a character
 * 	while (character is not end-of-file indicator)
 * 	output the character just read
 *      read a character*/

int main() {
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
		putchar('\n');
		c = getchar();
	}
	return 0;
}
