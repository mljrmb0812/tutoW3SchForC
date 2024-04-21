#include <stdio.h>

int main() {
	float monNombreFlottant = 4.9;

	printf("%f\n", monNombreFlottant); // Default will show 6 digits after the decimal point
	// Par défaut, cela va afficher le nombre avec 6 chiffres après la virgule
	printf("%.1f\n", monNombreFlottant); // Only show 1 digit / Montrera qu'un seul chiffre après la virgule
	printf("%.2f\n", monNombreFlottant); // À noter que le nombre de chiffre après la virgule s'écrit entre le % et le type de data (f)
	printf("%.4f", monNombreFlottant); // Only show 4 digits
	return 0;
}
