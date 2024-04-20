#include <stdio.h>

int main() {
	int lesNombresSuperGeniaux[] = {125, 256, 512, 1024, 2048, 4096};
	int longueur = sizeof(lesNombresSuperGeniaux) / sizeof(lesNombresSuperGeniaux[0]);

	printf("%d", longueur);
	return 0;
}

// Divide the size of one array element
// Divise la taille de l'élément d'un tableau