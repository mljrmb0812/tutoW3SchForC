#include <stdio.h>

int main() {
	int nbDiff1 = 1;
	int nbDiff2 = 2;
	int nbIdentique1 = 3;
	int nbIdentique2 = 3;
	printf("%d\n", nbDiff1 == nbDiff2); // Affichera 0 (faux) car 1 n'est pas égal à 2
	printf("%d", nbIdentique1 == nbIdentique2); // Affichera 1 (vrai) car 3 est égal à 3
	return 0;
}
