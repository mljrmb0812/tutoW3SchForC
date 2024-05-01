#include <stdio.h>

enum Level {
	LOW = 8,
	MEDIUM,
	HIGH
};

int main() {
	enum Level varEnumLevLow = LOW;
	enum Level varEnumLevMed = MEDIUM;
	enum Level varEnumLevHig = HIGH;

	printf("%d\n", varEnumLevLow);
	printf("%d\n", varEnumLevMed);
	printf("%d", varEnumLevHig);

	return 0;
}
