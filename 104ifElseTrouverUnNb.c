#include <stdio.h>

int main() {
	int monNombre = 14;

	if (monNombre < 15) {
		printf("La variable monNombre est inférieur à 15.");
	} else if (monNombre > 15) {
		printf("La variable monNombre est supérieur à 15.");
	} else {
		printf("La variable monNombre est égal à 15.");
	}

	return 0;
}