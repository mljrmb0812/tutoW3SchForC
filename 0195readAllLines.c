int main() {
    FILE *fptdr;

    // Open a file
    // Ouvrir un fichier
    fptdr = fopen("C:\\CheminDuFichier\\nomDuFichier.txt", "r");

    // Store the content of the file
    // Stocker le contenu du fichier
    char maChaineDeCaracteres[150];

    // Read the content and print it
    // Lire le contenu et l'afficher
    while(fgets(maChaineDeCaracteres, 150, fptdr)) {
        printf("%s", maChaineDeCaracteres);
    }

    return 0;
}
