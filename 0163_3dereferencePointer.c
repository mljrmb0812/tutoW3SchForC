#include <stdio.h>

int main() {
	int meinAlter = 88; // Variable declaration
	int* ptrMeinAlter = &meinAlter; // Pointer declaration

	// Reference: Output the memory address of meinAlter with the pointer
	// Référence: Affiche l'adresse mémoire de la variable meinAlter avec le pointer
	printf("%p\n", ptrMeinAlter);

	// Dereference: Output the value of meinAlter with the pointer (88)
	// Déréférence: Afficeh la valeur de meinAlter avec le pointer (88)
	printf("%d\n", *ptrMeinAlter);

	return 0;
}
