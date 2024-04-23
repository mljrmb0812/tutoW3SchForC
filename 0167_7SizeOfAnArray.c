#include <stdio.h>

int main() {
	int mNb[5] = {01, 02, 03, 04, 44};

	printf("%lu", sizeof(mNb));

	return 0;
}

// Size of mNb is 20 because 4 bytes is an int and we have an array with 5 int
