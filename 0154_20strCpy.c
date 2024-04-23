#include <stdio.h>
#include <string.h>

int main() {
	char string1[100] = "La place de la mairie est bien vide ce soir.";
	char string2[100];
	
	// Nous allons recopier string1 a string2
	strcpy(string2, string1);

	// Affichage de string2
	printf("%s", string2);

	return 0;
}
