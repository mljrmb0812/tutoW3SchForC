#include <stdio.h>

int main() {
    FILE *fptdr;

    // Open a file in read mode
    // Ouvre un fichier en mode lecture
    fptdr = fopen("C:\\CheminDuFichier\\nomDuFichier.txt", "r");

    // Store the content of the file
    // Stocke le contenu du fichir
    char maChaDCar[99];

    // If the file exist
    // Si le fichier existe
    if(fptdr != NULL) {

        // Read the content and print it
        // Lire le contenu et l'affiche
        while(fgets(maChaDCar, 99, fptdr)) {
            printf("%s", maChaDCar);
        }

        // If the file doesn't exist
        // Si le fichier n'existe pas
    } else {
        printf("Pas possible d'ouvrir le fichier.");
    }

    // Close the file
    // Ferme le fichier
    fclose(fptdr);

    return 0;
}
