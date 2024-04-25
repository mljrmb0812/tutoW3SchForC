#include <stdio.h>

void maFonction(char nom[], int prono) {
	printf("Bonjour %s. Ta côte est à %d contre 1.\n", nom, prono);
}

int main() {
	maFonction("Étoile dorée", 4);
	maFonction("Téméraire", 8);
	maFonction ("Courageux", 48);
	return 0;
}
