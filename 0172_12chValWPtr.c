#include <stdio.h>

int main() {
	int tableau[20] = {3, 14, 15, 9, 2, 6, 56, 35, 8, 97, 493, 23, 84, 62, 64, 4, 336, 6, 83, 27};
	// Change the value of the first element to 13
	// Change la valeur du premeier element par le nombre 13
	*tableau = 13;

	// Change la valeur du second élément du tableau par 842
	// Change the value of the second element to 842
	*(tableau + 1) = 842;

	// Get the value of the first element
	printf("%d\n", *tableau);

	// Get the value of the second element
	printf("%d\n", *(tableau + 1));

	return 0;
}
