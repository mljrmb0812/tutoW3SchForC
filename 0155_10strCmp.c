#include <stdio.h>
#include <string.h>

int main() {
	char string1[] = "Bonjour";
	char string2[] = "Bonsoir";
	char string3[] = "Salut";

	// Compare string2 et string1 et affiche le résultat
	// Compare string2 and string1, and print the result
	printf("%d\n", strcmp(string2, string1));
    
    printf("%d\n", strcmp(string1, string2)); // Affiche le nombre inverse

	// Compare string2 et string3, et affiche le résultat
	// Compare string2 and string3, and print the result
	printf("%d\n", strcmp(string2, string3));

	return 0;
}
