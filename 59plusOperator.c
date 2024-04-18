#include <stdio.h>

int main() {
	int somme1 = 111 + 41;		// 152 (111 + 41)
	int somme2 = somme1 + 252;	// 404 (152 + 252)
	int somme3 = somme2 + somme2;	// 808 (404 + 404)
	printf("%d\n", somme1);
	printf("%d\n", somme2);
	printf("%d\n", somme3);
	return 0;
}