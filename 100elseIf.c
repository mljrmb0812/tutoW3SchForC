#include <stdio.h>

int main() {
	int temps = 54;
	if (temps < 3) {
			printf("La variable temps est inférieur à 3.");
		} else if (temps < 50 ) {
			printf("La variable temps est inférieur à 50.");
		} else  {
			printf("La variable temps ne réponds à aucune des conditions (ni inférieur à 3 ni inférieur à 50).");
		}
	return 0;
}