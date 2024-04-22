#include <stdio.h>
#include <string.h>

int main() {
	char string1[10] = "Les chaussettes de l'archiduchesse sont-elles sèches ou archi-sèches ?";
	char string2[10];
	// Recopiage de string1 a string2
	strcpy(string2, string1);

	// Affichage de string2
	printf("%s", string2);

	return 0;
}
// Affiche *** buffer overflow dectected ***: terminated
