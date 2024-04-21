#include <stdio.h>

int main() {
	int cinq = 5;
	int trois = 3;

	// Affiche le résultat faux (0) car la négation (!) inverse le résultat
	printf("%d", !(cinq > trois && trois > 0));
	return 0;
}
