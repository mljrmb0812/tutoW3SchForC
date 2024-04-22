#include <stdio.h>
#include <string.h>

int main() {
	char phrase[51] = "Ceci est une phrase dont la taille en octet est de 51.";
	printf("La longueur est : %d\n", strlen(phrase));
	printf("La taille en octet est: %d\n", sizeof(phrase));
	return 0;
}
