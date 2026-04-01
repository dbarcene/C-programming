/**
 * File              : fibonacci.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 22.03.2026
 * Last Modified Date: 22.03.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

#include <stdio.h>

int main() {

	int fibonacci_numebers; 
	printf("Enter the number of elements to print: ");
	scanf("%d", &fibonacci_numebers);
	
	int i = 0;
	int seed_0 = 0;
	int seed_1 = 1;
	while (i < fibonacci_numebers) {
		if (i == 0) {
			printf("%d \n", seed_0);
		} else if (i == 1){
			printf("%d \n", seed_1);
		} else {
			int fibonacci;
			fibonacci = seed_1 + seed_0;
			printf("%d \n", fibonacci);
			seed_0 = seed_1;
			seed_1 = fibonacci;
		}
		i = i + 1;
	}

	return 0;
}
