#include <stdio.h>

int main() {
	int mNb[11] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
	int incrementeur;

	for(incrementeur = 0; incrementeur < 12; incrementeur++) {
		printf("%d\n", mNb[incrementeur]);
	}
	return 0;
}
