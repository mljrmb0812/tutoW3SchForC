#include <stdio.h>

int main() {
	int variable;

	for (variable = 2; variable > -256; variable--) {
		if (variable == -102) {
			break;
		}
	printf("%d\n", variable);
	}
	
	return 0;
}
