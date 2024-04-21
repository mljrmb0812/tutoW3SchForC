#include <stdio.h>

int main() {
	int dize = 2;

	while(dize < 62) {
		if (dize < 15) {
			printf("Dize is < to 15.\n");
		} else if (dize < 55) {
			printf("Dize is now < to 55.\n");
		} else {
			printf("Dize is equal or > to 55.\n");
		}
		dize++;
	}
	return 0;
}
