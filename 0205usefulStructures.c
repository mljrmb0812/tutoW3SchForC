#include <stdio.h>
#include <string.h>

struct charpente {
	int spectacle;
	char missive;
	char tele[21];
};

int main() {
	// Create a structure variable and assign values to it
	// Créer une variable structure et assigner une valeur
	struct charpente unie = {47, 'R', "Rien d'impossible"};

	// Create another structure variable
	// Créer une autre variable de structure
	struct charpente jumelle;

	// Copy unie values to jumelle
	// Copier les valeurs unies aux valeurs jumelles
	jumelle = unie;

	// Change jumelle values
	jumelle.spectacle = 65;
	jumelle.missive = 'T';
	strcpy(jumelle.tele, "Phoque");

	// Print values
	// Afficher les valeurs
	printf("%d %c %s\n", unie.spectacle, unie.missive, unie.tele);
	printf("%d %c %s\n", jumelle.spectacle, jumelle.missive, jumelle.tele);

	return 0;
}
