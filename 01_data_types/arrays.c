/**
 * File              : arrays.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 22.03.2026
 * Last Modified Date: 23.03.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */
#include <stdio.h>

int main() {

	float v1[] = {3.0, 1.1, 2.3};
	int size = sizeof(v1) / sizeof(v1[0]);
	printf("%i", size);

}

