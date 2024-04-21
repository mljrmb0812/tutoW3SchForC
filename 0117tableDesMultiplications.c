#include <stdio.h>

int main() {
	int multiplicateur;
	int nombre;
	int somme;

	// Affiche la table de multiplication pour les nombres allant jusqu'à 9
	for (multiplicateur = 0; multiplicateur < 10; multiplicateur++) {
		for (nombre = 0; nombre < 10; nombre++) {
			somme = multiplicateur * nombre;
			printf("%d x %d = %d\n", multiplicateur, nombre, somme);
			}
		}

	return 0;
}
