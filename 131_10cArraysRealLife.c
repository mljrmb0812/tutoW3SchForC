#include <stdio.h>

int main() {
	// An array storing different ages
	// Un tableau stockant les différents ages
	int ages[] = {45, 689, 1684, 1, 25, 36};

	// Get the length of the array
	// Obtenir la longueur du tableau
	int longueur = sizeof(ages) / sizeof(ages[0]);

	// Create a 'lowest age' variable and assign the first array element of ages to it
	// Créer une variable "lowestAge" ("ageMin") et l'assigner aux premier élément du tableau
	int lowestAge = ages[0];

	// Loop through the elements of the ages array to find the lowest age
	// Boucle à travers les éléments du tableau des ages pour trouver l'âge le plus bas
		for (int j = 0; j < longueur; j++) {

		// Check if the current age is smaller than current the 'lowest age'
		// Vérifier si l'âge vérifié est plus petit que la variable 'lowestAge'
		if (lowestAge > ages[j]) {

			// If the smaller age is found, update 'lowestAge' with that element
			// Si l'âge le plus bas est trouvé, la var. lowestAge = ages [j]
			lowestAge = ages[j];
			}
		}
	// Output the value of the lowest age
	// Ecrit la valeur de l'âge le plus bas
	printf("L'âge le plus bas dans cette série de valeurs est: %d", lowestAge);

	return 0;
}
