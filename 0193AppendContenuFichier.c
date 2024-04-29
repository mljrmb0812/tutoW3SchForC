#include <stdio.h>

int main() {
    FILE *fptdr;

    // Open a file in append mode
    // Ouvrir un fichier au mode ajouter. Attention le chemin du fichier doit être exact
    fptdr = fopen("C:\\CheminDuFichier\\nomDuFichier.txt", "a");

    // Append some text to the file
    // Ajouter quelques textes au fichier déjà existant
    fprintf(fptdr, "Hi everybodyy!");

    // Close the file
    // Fermer le fichier
    fclose(fptdr);

    return 0;
    }
