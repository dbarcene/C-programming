/**
 * File              : hanoi.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 26.04.2026
 * Last Modified Date: 26.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */
#include <stdio.h>

void move(char f, char t) {
	printf("move disc from %c to %c!\n", f, t);
}

void hanoi(int n, char f, char h, char t) {
	if (n > 0) {
		hanoi(n - 1, f, t, h);
		move(f, t);
		hanoi(n - 1, h, f, t);
	}
}

int main() {
	hanoi(4, 'A', 'B', 'C');
	return 0;
}

/** SOLUTION
 * move disc from A to B!
 * move disc from A to C!
 * move disc from B to C!
 * move disc from A to B!
 * move disc from C to A!
 * move disc from C to B!
 * move disc from A to B!
 * move disc from A to C!
 * move disc from B to C!
 * move disc from B to A!
 * move disc from C to A!
 * move disc from B to C!
 * move disc from A to B!
 * move disc from A to C!
 * move disc from B to C!
 */
