/**
 * File              : random_text.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 20.05.2026
 * Last Modified Date: 20.05.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

/**
 * This program generates a text file with 100 lines, each line has a random
 * lenght between 60-100 characters.
 **/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL_LINES 50
#define MIN 60
#define MAX 100

int main() {
	char elements[4] = {'A', 'G', 'C', 'T'};

	srand(time(NULL));

	for (int i = 0; i < TOTAL_LINES; i++) {
		int line_lenght = (rand() % (MAX - MIN + 1)) + MIN;

		for (int j = 0; j < line_lenght; j++) {
			int c = rand() % 4;
			putchar(elements[c]);
		}
		putchar('\n');
	}
	return 0;
}
