#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr1, *ptr2;

	// Allocate memory
	// Allouer la mémoire
	ptr1 = malloc(4);

	// Attempt to resize the memory
	// Essayer de redimensionner la mémoire
	ptr2 = realloc(ptr1, 8);

	if (ptr2 == NULL) {
	printf("Failed. Unable to resize memory");
	} else {
	printf("Success. 8 bytes reallocated at address %p \n", ptr2);
	ptr1 = ptr2;
	}

	// Free memory allocated by malloc or realloc
	// Mémoire libre alloué par malloc ou realloc
	free(ptr1);

	return 0;
}
