#include <stdio.h>

int main() {

	int x, y, z;

	// Boucle de base
	for (x = 0; x < 3; ++x) {
		printf("Base: %d\n", x); // éxecuté 3 fois
		
		// Boucle intérieur
		for (y= 0; y < 3; ++y) {
			printf("Intérieur: %d\n", y);
		
			// Boucle de boucle intérieur
			for (z = 0; z < 3; ++z) {
				printf("Boucle de la boucle intérieure: %d\n", z);
			}
		}
	}
	return 0;
}
