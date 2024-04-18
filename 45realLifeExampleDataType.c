#include <stdio.h>

int main() {
	// Create variables of different data types
	// Création des variables de différents types de données
	int lesItems = 51;
	float cout_par_item = 7.89;
	float cout_total = lesItems * cout_par_item;
	char deviseMonnaie = '€';

	// Print variable
	// Afficher les variables par sortie
	printf("Nombre d'items / Number of items: %d\n", lesItems);
	printf("Cost per item / Cout par item: %.2f %c\n", cout_par_item, deviseMonnaie);
	printf("Cout total / total cost = %.2f %c\n", cout_total, deviseMonnaie);

	return 0;
}