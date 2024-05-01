#include <stdio.h>
#include <stdlib.h>

int main() {
	// Allocate memory
	// Allouer de la mémoire
	int *ptr;
	ptr = calloc(5, sizeof(*ptr));

	// Write to the memory
	// Ecrire a la memoire
	*ptr = 2;
	ptr[1] = 4;
	ptr[2] = 6;

	// Read from the memory
	// Lire a partir de la mémoire dynamique
	printf("%d\n", *ptr);
	printf("%d %d %d", ptr[1], ptr[2], ptr[3]);

	return 0;
}
