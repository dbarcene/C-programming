/**
 * File              : line_counting.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 02.04.2026
 * Last Modified Date: 02.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */
#include <stdio.h>

int main() {

	printf("Write some characters then press ENTER and Ctrl+D\n");

	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
	}
	printf("%d", nl);
}
