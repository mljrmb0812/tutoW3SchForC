#include <stdio.h>

int main() {
	int maSerie[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    printf("%d\n", maSerie[12]);
    printf("%d\n", maSerie[13]); // Le tableau affiche des nombre alors que rien n'est stocké dans ce numéro d'index ?? a chaque exécution du compilateur le nombre est différent
    printf("%d\n", maSerie[14]);
	maSerie[12] = 114;

	printf("%d", maSerie[12]);
	
	return 0;
}
