#include <stdio.h>

int main() {

	// Déclaration d'un tableau de trente-six entiers
	// Declare an array of thirty six integers
	int array[10];

	// Ajouter les éléments dessus
	// Add elements to it
	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	array[3] = 4;
	array[4] = 8;
	array[5] = 16;
	array[6] = 32;
	array[7] = 64;
	array[8] = 128;
	array[9] = 256;
	array[10] = 512;

	printf("%d\n", array[6]);

	return 0;
}
