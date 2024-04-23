#include <stdio.h>

int main() {
	int mNb[6] = {3, 6, 9, 12, 15, 18};

	// Affiche l'adresse mémoire du tableau mNb
	// Get the memory address of the mNb array
	printf("%p\n", mNb);

	// Affiche l'adresse mémoire du 1er élément du tableau mNb
	// Get the memory address of the first array element
	printf("%p\n", &mNb[0]);

	return 0;
}
