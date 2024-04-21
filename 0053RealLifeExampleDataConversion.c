#include <stdio.h>

int main() {
	// Set the maximum possible score to 500
	// Paramétrer le score maximum possible à 500
	int scoreMaximal = 500;

	// The actual score of the user
	// Le score actuel de l'utilisateur
	int scoreUtilisateur = 421;

	// Calculate the percentage of the user's score in relation to the maximum available score
	// Calculer le pourcentage du score de l'utilisateur en relation au score maximum possible

	float pourcentage = (float) scoreUtilisateur / scoreMaximal * 100;

	// Print the percentage
	// Afficher le pourcentage
	printf("Le pourcentage de l'utilisateur est: %.2f", pourcentage);

	return 0;
}
