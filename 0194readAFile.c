#include <stdio.h>

int main() {
    FILE *fptdr;

    // Open a file in read mode
    // Ouvrir un fichier en mode lecture
    fptdr = fopen("C:\\CheminDuFichier\\nomDuFichier.txt", "r");

    // Store the content of the file
    // Stocker le contenu dans le fichier;
    char maChaine[100];

    // Read the content and store it inside myString
    fgets(maChaine, 100, fptdr);

    // Print file content
    // Afficher le contenu du fichier
    printf("%s", maChaine);

    // Close the file
    // Fermer le fichier
    fclose(fptdr);

    return 0;
