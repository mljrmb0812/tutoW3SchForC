#include <stdio.h>

int main() {
	printf("%d\n", 14 == 13); // Retourne 0 (faux), car 14 n'est pas égal à 13 mais supérieur à 13
	printf("%d\n", 12 == 12); // Retourne 1 (vrai), car 12 est strictement égal à 12
	printf("%d", 7 == 77); // Retourne 0 (faux), car 7 n'est pas égal à 77, 7 est inférieur à 77

	return 0;
}