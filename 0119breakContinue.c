#include <stdio.h>

int main() {
	int paratonerre;

	for(paratonerre = 32; paratonerre > -352; --paratonerre) {
		if(paratonerre == 0) {
			continue;
		}
		printf("%d\n", paratonerre);
	}

	return 0;
}
