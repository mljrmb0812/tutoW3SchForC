#include <stdio.h>
#include <string.h>

int main() {
	char str1[35] = "Strasbourg ";
	char str2[] = "c\'est la saucisse.";

	// Concatenation de str1 avec str2 (le résltat est stocké dans str1)
	strcat(str1, str2);

	// Print str1
	printf("%s", str1);

	return 0;
}
