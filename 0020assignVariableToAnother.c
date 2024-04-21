#include <stdio.h>

int main() {
	int myNum = 15;
	int monNombre = 8;
 
	int myOtherNum = 23;
	int monAutreNombre = 12;

	// Assign the value of myOtherNum (23) to myNum
	myNum = myOtherNum;

	// Affecter la valeur de monNombre (8) à monAutreNombre (12)
	monNombre = monAutreNombre;

	//monNombre est maintenant 12 à la place de 8
	printf("%d\n", monNombre);

	//myNum is now 23, instead of 15
	printf("%d", myNum);

	return 0;
}
