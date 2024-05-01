#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr1, *ptr2, size;

	// Allocate memory for four integers
	// Allouer de la mémoire pour 4 variables de type nombre entier
	size = 4 * sizeof(*ptr1);
	ptr1 = malloc(size);

	printf("%d bytes allocated at address %p \n", size, ptr1);

	// Resize the memory to hold six integers
	// Re-mesurer la mémoire pour qu'elle tienne 6 variables de type nombre entier
	size = 6 * sizeof(*ptr1);
	ptr2 = realloc(ptr1, size);

	printf("%d bytes reallocated at address %p \n", size, ptr2);

	return 0;
}
