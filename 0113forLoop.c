#include <stdio.h>

int main() {

	int nombre;

	// for (expression1; expression2; expression3)
	// expression1 : première instruction exécuté. Ici, la première expression va déclarer la variable.
	// expression2 : deuxième instruction exécuté. Ici, elle édicte que la variable nombre est inférieur ou doit rester inférieure à 11
	// tant que la variable nombre est inférieure à 11, la boucle continue d'être itérée, c'est une condition indispensable pour que la boucle soit itéré
	// si la condition n'est pas remplie, la boucle ne sera pas itérée
	// expression3 : troisième instruction exécuté. Ici, cette instruction va être exécuté à chaque itération de la boucle for
	for (nombre = 0; nombre < 11; nombre++)	{
		printf("%d\n", nombre);
	}

	return 0;
}
