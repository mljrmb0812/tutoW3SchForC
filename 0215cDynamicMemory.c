#include <stdio.h>
#include <stdlib.h>

int main() {
	int *students;
	int nbStudents = 13;
	students = calloc(nbStudents, sizeof(*students));
	printf("%d", nbStudents * sizeof(*students));

	return 0;
}
