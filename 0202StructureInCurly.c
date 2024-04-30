#include <stdio.h>

// Create a structure
// Créer une structure
struct charpente {
	int spectacle;
	char esquisse;
	char billet[50];
};

int main() {
	// Create a structure variable and assign values to it
	// Créer une variable de structure et lui attribuer une valeur
	sruct charpente unie = {48, 'D', "blablabla"};

	// Print values
	// Afficher les valeurs
	printf("%d %c %s", unie.spectacle, unie.esquisse, unie.billet);

	return 0;
}
