#include <stdio.h>

int main() {
	int nb1 = 43;
	int nb2 = 54;

	// Affiche 1 (vrai) parce que 43 est plus petit que 54 ET plus grand que 12
	printf("%d", nb1 < nb2 && nb1 > 12);
	return 0;
}