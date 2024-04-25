#include <stdio.h>

int mF( int z, int a) {
	return a + z * z - a;
}

int main() {
	int resultat = mF( 7, 16);
	printf(" a + z * z - a = %d", resultat);
	return 0;
}
