#include <stdio.h>


int main() {
    FILE *fptr;

    // Open a file in read mode
    // Ouvrir un fichier en mode lecture
    fptr = fopen("abracadabra.txt", "r");

    // Affiche un peu de texte si le fichier n'existe pas
    // Print some text if the file doesn not exist
    if(fptr == NULL) {
        printf("Il n'est pas possible d'ouvrir le fichier.");
    }

    // Close the file
    // Fermer le fichier
    fclose(fptr);

    return 0;
}
