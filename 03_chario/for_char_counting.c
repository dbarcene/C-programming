/**
 * File              : for_char_counting.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 02.04.2026
 * Last Modified Date: 03.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

#include <stdio.h>

int main() {

	printf("Write some characters then press ENTER and Ctrl+D\n");

	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}
