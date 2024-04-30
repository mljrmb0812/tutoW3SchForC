#include <stdio.h>
#include <string.h>

// Create a structure
// Créer une structure
struct charpente {
	int spectacle;
	char missive;
	char tele[52];
};

int main() {
	// Create a structure variable and assign values to it
	// Créer une variable de la structure et lui attribuer une valeur
	struct charpente unie = {14, 'Z', "someDay"};

	// Modify values
	// Modifier les valeurs
	unie.spectacle = 45;
	unie.missive = 'G';
	strcpy(unie.tele, "autreChose");

	// Print values
	// Afficher les valeurs
	printf("%d %c %s", unie.spectacle, unie.missive, unie.tele);

	return 0;

}
