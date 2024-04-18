#include <stdio.h>

int main() {
	int jour = 5;

	switch (jour) {
		case 8:
			printf("Aujourd'hui est le huitième jour");
			break;
		case 9:
			printf("Aujourd'hui c'est le dixième jour");
			break;
		default:
			printf("Regarder avant la fin de la semaine.");
		} // Pas besoin de break pour default
		return 0;
	}