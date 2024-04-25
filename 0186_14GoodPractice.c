#include <stdio.h>

// Déclaration de la fonction / Function declaration
int maFonction( int, int);

// The main method / la méthode principale
int main() {
	int resultat = maFonction(2, 3); // Call the function / Appelle la fonction
	printf("Le résultat est: %d.", resultat);
	return 0;
}

// Définition de la fonction / Function Definition
int maFonction( int x, int y) {
	return x * y;
}
