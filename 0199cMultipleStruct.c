#include <stdio.h>

struct mStrct {
	int mNb;
	char mLttr;
};

int main() {
	// Create different struct variables
	// Créer différentes variables de structures
	struct mStrct fantastique;
	struct mStrct merveilleux;

	// Assign value to different struct variables
	// Attribuer une valeur aux différentes variables
	fantastique.mNb = 44;
	fantastique.mLttr = 'L';

	merveilleux.mNb = 55;
	merveilleux.mLttr = 'H';

	// Print values
	// Afficher les valeurs
	printf("fantastique mNb: %d\n", fantastique.mNb);
	printf("fantastique mLttr: %c\n", fantastique.mLttr);

	printf("merveilleux mNb: %d\n", merveilleux.mNb);
	printf("merveilleux mLttr: %c\n", merveilleux.mLttr);

	return 0;

}
