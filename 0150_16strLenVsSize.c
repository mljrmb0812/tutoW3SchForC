#include <stdio.h>
#include <string.h>

int main() {
	char phrase[] = "L\'éléphant rose qui danse sur le pont.";
	printf("La longueur est : %d\n", strlen(phrase));
	printf("La taille est : %d\n", sizeof(phrase));
	return 0;
}
