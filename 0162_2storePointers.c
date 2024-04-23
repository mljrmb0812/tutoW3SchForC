#include <stdio.h>

int main() {
	int nbFiole = 125; // An int variable
	int* pointer = &nbFiole; // A pointer variable, with the name pointer, that stores the address of nbFiole

	// Affiche la valeur de nbFiole (125)
	printf("%d\n", nbFiole);

	// Affiche l'adresse de mémoire de nbFiole
	printf("Adresse de mémoire de nbFiole :\n");
	printf("%p\n", &nbFiole);

	// Affiche la mémoire d'adresse de nbFiole avec le pointeur (indicateur?)
    printf("Affichage de la variable dans laquelle est stocké pointer:\n");
	printf("%p\n", pointer);

	return 0;
}
