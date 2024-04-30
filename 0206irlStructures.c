#include <stdio.h>

struct voitures {
	char marque[22];
	char modele[21];
	int annee;
};

int main() {
	struct voitures voiture1 =  {"BMW", "xs", 1585};
	struct voitures voiture2 = {"Ford", "Mustang", 1478};
	struct voitures voiture3 = {"Toyota", "Corolla", 1520};

	printf("%s %s %d\n", voiture1.marque, voiture1.modele, voiture1.annee);
	printf("%s %s %d\n", voiture2.marque, voiture2.modele, voiture2.annee);
	printf("%s %s %d\n", voiture3.marque, voiture3.modele, voiture3.annee);

	return 0;
}
