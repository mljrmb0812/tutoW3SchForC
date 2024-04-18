#include <stdio.h>

int main() {
	int ixe = 7;
	int igrec = 11;

	// Retourne 0 (faux) parce que sept n'est pas plus grand ou égal à onze
	printf("%d", ixe >= igrec);
	return 0;
}