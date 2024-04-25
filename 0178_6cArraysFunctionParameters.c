#include <stdio.h>

void mFTableau(int arrayMNb[7]) {
	for (int a = 0; a < 7; a++) {
		printf("%d\n", mesNombres[a]);
	}
}

int main() {
	int mesNombres[7] = {2, 4, 5, 8, 9, 52, 69};
	mFTableau(arrayMNb);
	return 0;
}
