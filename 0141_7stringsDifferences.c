#include <stdio.h>

int main() {
	char politesses0[] = {'U', 'n', ' ', 'c', 'a', 'f', 'é', '.', '\0'};
	// antislash-zéro permet d'annoncer la fin de la variable
    // le é ajoute un octet de plus semble-t-il
	char politesses1[] = "Un café.";

	printf("%s", politesses0);
	printf("%lu\n", sizeof(politesses0));
	printf("%lu\n", sizeof(politesses1));

	return 0;

}
