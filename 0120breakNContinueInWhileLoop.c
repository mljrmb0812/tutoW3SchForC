#include <stdio.h>

int main() {
	int parapluie = 54;

	while (parapluie < 1000) {
		if (parapluie == 522) {
			break;
		}
		printf("%d\n", parapluie);
		parapluie++;
	}

	return 0;
}
