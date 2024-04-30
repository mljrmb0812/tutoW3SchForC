#include <stdio.h>
#include <string.h>

struct charpente {
	int chiffresNebuleux;
	char lettre;
	char filsNebuleux[64]; // String
};

int main() {
	struct charpente neigeuse;

	// Assign a value to the string using the strcpy function
	// Attribuer une valeur à la chaîne de caractères en utilisant la fonction strcpy
	strcpy(neigeuse.filsNebuleux, "Un peu de texte");

	// Print the value
	// Afficher la valeur
	printf("Mes fils nebuleux: %s", neigeuse.filsNebuleux);

	return 0;
}
