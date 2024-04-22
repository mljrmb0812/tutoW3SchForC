#include <stdio.h>

int main() {
	char nomDeVoiture[] = "Peugeot";
	int x;

	for (x = -1; x < 8; ++x) { // commençant par un -1 cela affiche mal
		printf("%c\n", nomDeVoiture[x]);
	}
    
    printf("Affichage de la 2é boucle for : \n ");
   // Commençant par -2 cela affiche un décalage
   for (x = -2; x < 8; x++) {
   		printf("%c\n", nomDeVoiture[x]);
   }
   printf("Affichage de la 3é boucle for: \n ");
   // x < 9 ne change rien
   for (x = 0; x < 9; x++) {
   		printf("%c\n", nomDeVoiture[x]);
   }
	
	return 0;
}
