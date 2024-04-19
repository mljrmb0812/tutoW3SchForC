#include <stdio.h>

int main() {
	int aMour;

	for (aMour = 2; aMour > -256; aMour--) {
		if (aMour == -102) {
			break;
		}
	printf("%d\n", aMour);
	}
	
	return 0;
}
