#include <stdio.h>

// Create a structure called myStructure
// Créer une structure appelé maStructure
struct myStruct {
	int mNb;
	char mLttr;
};

int main() {
	// Create a structure variable of myStructure called s1
	// Créer une variable de structure de maStruct appelé zozo
	struct myStruct zozo;

	// Assign values to members of zozo
	// Attribuer des valeurs aux membres de zozo
	zozo.mNb = 42;
	zozo.mLttr = 'C';

	// Print values
	// Afficher les valeurs
	printf("Mon nombre est: %d\n", zozo.mNb);
	printf("Ma lettre est: %c\n", zozomLttr);

	return 0;
}
