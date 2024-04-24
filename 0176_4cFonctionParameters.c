#include <stdio.h>

void maFonctionDuTonerre(char nom[]) {
	printf("Bonjour %s\n", nom);
}

int main() {
	maFonctionDuTonerre("Jean-Jacques");
	maFoncitonDuTonerre("Pierre");
	maFonctionDuTonerre("Feuille");
	maFonctionDuTonerre("Paul");
	maFonctionDuTonerre("Papier");
	maFonctionDuTonerre("Ciseaux");
	return 0;
}
