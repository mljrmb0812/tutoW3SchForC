#include <stdio.h>

int main() {
	int entier;
	float flottant;
	double jumelle;
	char chaine;

	printf("Place réservé dans la mémoire suivant les différents types de variable :\n");
	printf("int / integer (entier) : %lu\n", sizeof(entier));
	printf("float (nombre à virgule flottante: %lu\n", sizeof(flottant));
	printf("double (chiffres scientifiques à virgule): %lu\n", sizeof(jumelle));
	printf("lettre: %lu\n", sizeof(chaine));

	return 0;
}
