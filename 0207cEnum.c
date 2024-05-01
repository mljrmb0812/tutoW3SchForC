#include <stdio.h>

enum Level {
	LOW,
	MEDIUM,
	HIGH
};

int main() {
	// Create an enum variable and assign a value to it
	// Créer une variable enum et lui attribuer une valeur
	enum Level mVar = MEDIUM;

	// Print the enum variable
	// Afficher la variable enum
	printf("%d", mVar);
	
	return 0;
}
