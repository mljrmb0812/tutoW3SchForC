#include <stdio.h>

int main() {
	int mesNumeros[] = {152, 145, 365, 456, 789, 5201, 102587965456289678755};
	int longueurBit = sizeof(mesNumeros) / sizeof(mesNumeros[0]);
	int variable;

	for (variable = 0; variable < longueurBit; variable++) {

		printf("%d\n", mesNumeros[variable]);
	}
	return 0;
}
