#include <stdio.h>

int main() {

	// Create a string
	// Créer une chaîne de caractères
	char preNom[52];

	// Ask the user to input some text (name)
	// Demande à l'utilisateur d'intégrer une chaîne de caractères (nom)
	printf("Enter your first name and press enter: \n");
	printf("Entrez votre prénom et appuyez sur entrer: \n");

	// Get and save the text
	// Entrer et enregistrer le texte
	scanf("%s", preNom);

	// Output the text
	// Sortir le texte
	printf("Bonjour %s\n", preNom);
	printf("Hello %s", preNom);

	return 0;
}
	
	// Prends la première chaîne de caractère et abandonne celles qui sont écrites après l'espace
