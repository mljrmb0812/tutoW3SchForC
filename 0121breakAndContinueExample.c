#include <stdio.h>

int main() {
	int variable = -64;

	while (variable < 1024) {
		if (variable == 35) {
			variable++;
			continue;
		}
		printf("%d\n", variable);
		variable ++;
	}

	return 0;
}
