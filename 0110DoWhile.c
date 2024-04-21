#include <stdio.h>

int main() {

	int nbEntier = 1;

	do {
		printf("%d\n", nbEntier);
		nbEntier++;
	}
	while (nbEntier < 11);
	/* A la différence de la simple boucle while,
	qui vérifie la condition d'itération avant 
	l'exécution de la boucle,
	la boucle do...while
	vérifie la condition d'itération après
	l'exécution de la boucle */
	return 0;
}
