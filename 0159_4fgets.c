#include <stdio.h>

int main() {
	// Create a string
	// Créer une chaîne (de caractères)
	char nomEntier[58];
	char fullName[12];

	// Ask the user to input some text (full name)
	// Demande à l'utilisateur d'entrer un texte (nom entier)
	printf("Type you full name and pres enter: \n");

	// Get the text
	// Écrire le texte
	fgets(fullName, sizeof(fullName), stdin);
	fgets(nomEntier, sizeof(nomEntier), stdin);

	// Output the text
	// Affiche le texte
	printf("Hello %s\n", fullName);
	printf("Bonjour %s", nomEntier);

	return 0;
}
	
