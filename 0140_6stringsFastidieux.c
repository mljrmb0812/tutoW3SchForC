#include <stdio.h>

int main() {
	char politesse1[] = {'R', 'e', 'n', 'd', 'e', 'z', '-', 'v', 'o', 'u', 's', '\0'}; // sans antislash-zéro affiche 2 fois accolé lorsqu'il est affiché avec printf
	char politesse2[] = "Rendez-vous";

	printf("%s\n", politesse1);
	printf("%s\n", politesse2);

	return 0;

}
