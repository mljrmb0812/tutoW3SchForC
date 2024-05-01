#include <stdio.h>

enum Level {
	LOW = 2,
	MEDIUM,
	HIGH
};

int main() {
	enum Level varLvlMed = MEDIUM;

	switch (varLvlMed) {
		case 1:
			printf("Low Level");
			break;
		case 2:
			printf("Medium Level");
			break;
		case 3:
			printf("High Level");
			break;
	}

	return 0;
}
