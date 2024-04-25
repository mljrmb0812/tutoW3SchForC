#include <stdio.h>

int maFonctionAvecReturnValue(int z) {
	return 32 * z;
}

int main() {
	printf("32 * z = %d", maFonctionAvecReturnValue(8));
	return 0;
}
