#include <stdio.h>

// Fonction pour convertir Farenheit en Celsius
float convCelsius(float fahrenheit1) {
	return(5.0 /9.0) * (fahrenheit - 32.0);
}

int main() {
	// Parametrer la valeur Fahrenheit
	float fahr_value = 98.8;

	// Appelle la fonction avec la valeur Fahrenheit
	float resultat = convCelsius(fahr_value);

	// Retourne la valeur Fahrenheit
	printf("Fahrenheit: %.2f\n", fahr_value);

	// Affiche le résultat
	printf("Conversion du Fahrenheit en Celsius: %.2f\n", resultat);

	return 0;
}
