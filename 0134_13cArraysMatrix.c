#include <stdio.h>

int main() {
	int matrix[2][6] = { {0, 1, 2, 3, 4, 5}, { 6, 7, 8, 9, 10, 11} };
	
	int lgn, col;
	for (col = 0; col < 2; col++) {
		for (lgn = 0; lgn < 6; lgn++) {
			printf("%d\n", matrix[col][lgn]);
		}
	}

	return 0;
}
			
			
