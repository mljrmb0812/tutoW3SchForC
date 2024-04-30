#include <stdio.h>

struct organisation {
	int chiffresflou;
	char lettre;
	char chaine[32]; // Chaîne de caractères
};

int main() {
	struct organisation f1;

	// Trying to assign a value to the string
	// Essayant d'assigner une valeur à la chaîne de caractères
	f1.chaine = "Un peu de texte";

	// Trying to print the value
	// Essayant d'afficher la valeur
	printf("Ma chaine de caractrères est: %s", f1.chaine);

	return 0;
}

// exécuté, il affiche: prog.c:12:15: error: assignment to expression with array type
