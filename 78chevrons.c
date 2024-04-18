#include <stdio.h>

int main() {
	int chevronsDroite = 1;
	chevronsDroite >>= 1;
	printf("%d", chevronsDroite);
	return 0;
}