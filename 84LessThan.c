#include <stdio.h>

int main() {
	int plusGrand = 4;
	int plusPetit = 1;
	printf("%d", plusGrand < plusPetit); // retourne 0 (faux) car 4 n'est pas plus petit que 1
	return 0;
}