#include <stdio.h>

int maFonction2Val(int h, int hh, int hhh) {
	return h + hh / hhh;
}

int main() {
	int resultat = maFonction2Val(7, 8, 9);
	printf("h + hh / hhh = %d", resultat);
	return 0;
}
