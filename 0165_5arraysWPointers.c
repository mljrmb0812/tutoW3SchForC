#include <stdio.h>

int main() {
	int mNb[6] = {0, 1, 2, 3, 4, 5};
	int j;

	for(j = 0; j < 5; j++) {
		printf("%p\n", &mNb[j]);
	}

	return 0;
}
