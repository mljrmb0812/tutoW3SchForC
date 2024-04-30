#include <stdio.h>

struct charpente {
	int spectacle;
	char missive;
	char television[41];
};

int main() {
	// Créer une variable de la structure et lui attribuer les valeurs
	// Create a structure variable and assign values to it
	struct charpente unie = {1, 'A', "seul"};

	// Create another structure variable
	// Créer une autre variable de la structure
	struct charpente jumelle;

	// Copy unie values to jumelle
	jumelle = unie;

	// Afficher les valeurs
	printf("%d %c %s", jumelle.spectacle, jumelle.missive, jumelle.television);

	return 0;
}
