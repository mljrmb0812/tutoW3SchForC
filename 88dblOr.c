#include <stdio.h>

int main() {
	int cinquante_trois = 53;
	int deux_cents_douze = 212;

	// Affiche 1 car l'une des conditions est vrai ( 53 < 212 )
	printf("%d", cinquante_trois < deux_cents_douze || deux_cents_douze < 11);
	return 0;
}