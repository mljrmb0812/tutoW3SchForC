#include <stdio.h>

int main() {
    FILE *fptdr;

    // Open a file in append mode
    // Ajouter le chemin du fichier qui correspond à l'emplacement du fichier dans lequel vous l'avez placé
    fptdr = fopen("C:\\CheminDuFichier\\nomDuFichierDéjàExistant.txt", "a");

    // Append some text to the file
    fprintf(fptdr, "Hi everybodyy!");

    // Close the file
    fclose(fptdr);

    return 0;
    }
