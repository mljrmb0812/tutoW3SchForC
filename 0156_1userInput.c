#include <stdio.h>

int main() {
	// Créer un entier variable qui va stocker le numéro que l'on obtiendra de l'utilisateur
	// Create an integer variable that will store the number we get from the user
	int mNb;

	// Demander à l'utilisateur d'écrire un nombre
	// Ask the user to type a number
	printf("Écrivez un chiffre/nombre et appuyez sur entrer: \n");
	printf("Type a number and press enter: \n");

	// Get and save the number the user types with "scanf"
	// Obtenir et enregistrer le nombre que l'utilisateur à entré avec "scanf"
	scanf("%d", &mNb);

	// Print the number the user typed
	// Imprimer le nombre que l'utilisateur à tapé
	printf("Your number is: %d", mNb);
	printf("Ton nombre est: %d", mNb);

	return 0;
}