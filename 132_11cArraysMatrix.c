#include <stdio.h>

int main() {
	// int matrice [nombre de lignes][nombre de colonnes] = {{de gauche à droite},à la ligne... {{val1, val2, etc.}};
	int nbLignes = 3;
	int nbColonnes = 4; // impossible de l'intégrer dans les crochets...
	int numLgn = 0;
	int numCln = 0;
	int matrice[3][4] = { {1, 2, 3}, { 4, 5, 6}, {7, 8, 9} };
	printf("%d", matrice[numLgn][numCln]);

	return 0;
}
