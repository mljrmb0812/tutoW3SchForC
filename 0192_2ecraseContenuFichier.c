#include <stdio.h>

int main() {
    FILE *fptr;

    // Open a file in writing mode
    // Ouvrir un fichier en mode écriture
    fptr = fopen("C:\\cheminDuFichier\\nomDuFichierDéjàOuvert.txt", "w");

    // Write some text to the file
    // Ecrire un peu de texte dans le fichier
    fprintf(fptr, "Hello World!");

    // Close the file
    // Fermer le fichier
    fclose(fptr);

    return 0;
    }
