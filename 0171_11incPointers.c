#include <stdio.h>

int main() {
	int pie[3] = {3, 14, 15};
	int *pointer = pie;
	int inc;

	for (inc = 0; inc < 3; inc++) {
		printf("%d\n", *(pointer + inc));
	}
	return 0;
}
