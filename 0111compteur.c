#include <stdio.h>

int main() {
	int compteur = 5;
	
	while (compteur >= 0) {
		printf("%d\n", compteur);
		compteur--;
	}

	printf("Le compteur est maintenant arrivé à échéance.");

	return 0;
}
