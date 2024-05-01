#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr1, *ptr2;

	// Allocate memory
	// Allouer de la mémoire
	ptr1 = malloc(4);

	// Attempt to resize the memory
	// Essayer de redimensionner la mémoire
	ptr2 = realloc(ptr1, 8);

	// Check whether realloc is able to resize the memory or not
	// Verifie si realloc peut redimensionner ou non la mémoire
	if (ptr2 == NULL) {
	// if reallocation fail
	// Si la relocalisation échoue
	printf("Failed. Unable to resize memory");
	} else {
	// If reallocation is successful
	// Si la réalocalisation réussit
	printf("Success. 8 bytes reallocated at address %p \n", ptr2);
	ptr1 = ptr2; // Update ptr1 to point to the newly allocated memory
	// Mise à jour ptr1 pour pointer vers la mémoire nouvellement allouée
	}

	return 0;
}
