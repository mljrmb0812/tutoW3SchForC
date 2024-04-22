#include <stdio.h>

int main() {
	char cMarqueVoiture[] = "Renault";
	int longueurBit = sizeof(cMarqueVoiture) / sizeof(cMarqueVoiture[0]);
	int k;

	for(k = 0; k < longueurBit; k++) {
		printf("%c\n", cMarqueVoiture[k]);
	}
	
	return 0;
}
