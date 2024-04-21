#include <stdio.h>

int main() {

	// Créer une valeur à ma variable monNombre et lui assigner la valeur 15
	// Create a myNum variable and assign the value 15 of it
	int myNum = 15;

	// Déclarer la variable monAutreNombre sans lui attribuer de valeur
	// Declare a myOtherNum variable without assigning it a value
	int myOtherNum;

	// Assigner la valeur de monNombre à monAutreNombre
	// Assign value of myNum to myOtherNum
	myOtherNum = myNum;

	// monAutreNombre a maintenant la valeur de 15
	// myOtherNum now has 15 as a value
	printf("%d", myOtherNum);

	return 0;
}
