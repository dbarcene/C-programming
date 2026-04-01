/**
 * File              : char_counting.c
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

	printf("Write some characters then press ENTER and Ctrl+D\n");

	int count = 0;
	while ((getchar()) != EOF) {
		++count;
	}
	printf("%d", count);
}
