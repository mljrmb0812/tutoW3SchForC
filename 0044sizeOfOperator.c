#include <stdio.h>

int main() {
	int mNbEnt;
	float mNbFltt;
	double mNbDbl;
	char mLttr;

	printf("%lu\n", sizeof(mNbEnt));
	printf("%lu\n", sizeof(mNbFltt));
	printf("%lu\n", sizeof(mNbDbl)); // Display the number of Bytes / Affiche le nombre d'octet que prends la donnée
	printf("%lu\n", sizeof(mLttr)); // %lu for long unsigned int / %lu pour un entier long pas signé (???)
	return 0;
}
