#include <stdio.h>

int main() {
    int lignes, colonnes;

    // Demander les dimensions de la matrice
    printf("Entrez le nombre de lignes de la matrice : ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &colonnes);

    // Vérifier si les dimensions sont valides pour le produit
    if (lignes != colonnes) {
        printf("Pour calculer le produit d'un vecteur et d'une matrice, le nombre de lignes de la matrice doit être égal au nombre d'éléments du vecteur.\n");
        printf("Nous allons donc considérer que le vecteur a %d éléments.\n", lignes);
    }

    // Déclarer le vecteur et la matrice
    int vecteur[lignes];
    int matrice[lignes][colonnes];
    int resultat[colonnes];

    // Initialiser le vecteur
    printf("Entrez les éléments du vecteur :\n");
    for (int i = 0; i < lignes; i++) {
        scanf("%d", &vecteur[i]);
    }

    // Initialiser la matrice
    printf("Entrez les éléments de la matrice :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    // Calculer le produit du vecteur et de la matrice
    for (int j = 0; j < colonnes; j++) {
        resultat[j] = 0;
        for (int i = 0; i < lignes; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }

    // Afficher le résultat
    printf("Le produit du vecteur et de la matrice est :\n");
    for (int j = 0; j < colonnes; j++) {
        printf("%d ", resultat[j]);
    }
    printf("\n");

    return 0;
}