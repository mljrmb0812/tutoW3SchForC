#include <stdio.h>

int main() {
	int abbaque[12] = { 18, 27, 36, 45, 54, 63, 72, 81, 8, 16, 24, 32};

	// Get the value of the second element in abbaque
	// Donne la valeur du second element de abbaque
	printf("%d\n", *(abbaque + 1));

	// Get the value of the third element in abbaque
	// Donne la valeur du troisième élément du tableau abbaque
	printf("%d", *(abbaque + 2));

	return 0;
}
