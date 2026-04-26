/**
 * File              : sudoku_recursive.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 16.04.2026
 * Last Modified Date: 26.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */

#include <stdbool.h>
#include <stdio.h>

int grid[9][9] = {{5, 3, 0, 0, 7, 0, 0, 0, 0}, {6, 0, 0, 1, 9, 5, 0, 0, 0},
		  {0, 9, 8, 0, 0, 0, 0, 6, 0}, {8, 0, 0, 0, 6, 0, 0, 0, 3},
		  {4, 0, 0, 8, 0, 3, 0, 0, 1}, {7, 0, 0, 0, 2, 0, 0, 0, 6},
		  {0, 6, 0, 0, 0, 0, 2, 8, 0}, {0, 0, 0, 4, 1, 9, 0, 0, 5},
		  {0, 0, 0, 0, 8, 0, 0, 7, 9}};

/******************************************************************************/

int possible(int x, int y, int n) {
	// Check for n in row and column
	for (int i = 0; i < 9; i++) {
		if (grid[x][i] == n || grid[i][y] == n)
			return false;
	}

	// Check for n inside square
	int x0 = (x / 3) * 3;
	int y0 = (y / 3) * 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (grid[x0 + i][y0 + j] == n)
				return false;
		}
	}
	return true;
}

/******************************************************************************/

int solve() {
	for (int x = 0; x < 9; x++) {
		for (int y = 0; y < 9; y++) {
			if (grid[x][y] == 0) {
				for (int n = 1; n <= 9; n++) {
					if (possible(x, y, n)) {
						grid[x][y] = n;
						if (solve())
							return true;
						grid[x][y] = 0;
					}
				}
				return false;
			}
		}
	}
	return true;
}

/******************************************************************************/
int main() {
	if (solve()) {
		for (int x = 0; x < 9; x++) {
			for (int y = 0; y < 9; y++) {
				printf("%d", grid[x][y]);
			}
			printf("\n");
		}
	} else {
		printf("No solution found.\n");
	}
	return 0;
}
