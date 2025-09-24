#include <stdio.h>

int main() {
    int vecteur1[3];
    int vecteur2[3];
    int produitVectoriel[3];

    // Initialiser les vecteurs
    printf("Entrez les éléments du premier vecteur (x y z) :\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vecteur1[i]);
    }

    printf("Entrez les éléments du deuxième vecteur (x y z) :\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vecteur2[i]);
    }

    // Calculer le produit vectoriel
   // int indices[] = {1, 2, 0}; // indices pour calculer le produit vectoriel
    for (int i = 0; i < 3; i++) {
        produitVectoriel[i] = vecteur1[(i + 1) % 3] * vecteur2[(i + 2) % 3]- vecteur1[(i + 2) % 3] * vecteur2[(i + 1) % 3];
    }

    // Afficher le résultat
    printf("Le produit vectoriel est : (%d, %d, %d)\n", produitVectoriel[0], produitVectoriel[1], produitVectoriel[2]);

    return 0;
}