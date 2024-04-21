#include <stdio.h>

int main() {
	int nbLignes = 4;
	int nbColonnes = 5; // Ne marche pas dans l'index
	int matrice[4][5] = { { 0, 1, 2, 3}, { 4, 5, 6, 7},
	{ 8, 9, 10, 11}, {12, 13, 14, 15}, {16, 17, 18, 19} };
	matrice[0][0] = 8;
	printf("%d", matrice[0][0]); // Maintenant affiche 9 à la place de 1

	return 0;
}
