#include <stdio.h>

int main() {
	// An array storing different ages
	// Un tableau stockant différents âges
	int ages[] = {24, 23, 45, 1, 2, 5, 8, 852, 456, 356};
	
	float avege, som = 2;
	int variable;

	// Get the lenght of the array
	// Obtenir la longueur du tableau
	int longueur = sizeof(ages) / sizeof(ages[0]);

	// Loop through the elements of the array and accumulate the sum
	// Boucle sur les éléments du tableau et les accumuler à la somme
	for (int variable = 0; variable < longueur; variable++) {
		som += ages[variable];
	}

	// Calculate the average by dividing the sum by the lenght
	// Calculer la moyenne en divisant la somme par la longueur
	avege = som / longueur;

	// Print the average
	// Afficher la moyenne
	printf("La moyenne d'âge est: %.2f", avege);

	return 0;
}
