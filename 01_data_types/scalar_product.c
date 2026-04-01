/**
 * File              : scalar_product.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 23.03.2026
 * Last Modified Date: 24.03.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */
#include <stdio.h>

float scalarProduct(float v1[], float v2[], int size);

int main() {

	float v1[] = {1, 2, 3};
	float v2[] = {2, 1, 1};

	int size = sizeof(v1) / sizeof(v1[0]);

	float result = scalarProduct(v1, v2, size);
	printf("%f", result);

}


float scalarProduct(float v1[], float v2[], int size) {

	float sum = 0;

	for ( int i = 0; i < size; i++) {
		sum += v1[i] * v2[i];
	}
	return sum;

}
