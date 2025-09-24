#include <stdio.h>

int main() {
    int n, i;
    int croissant = 1, decroissant = 1; // booléens
    
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];

    // Lecture du tableau
    printf("Entrez les %d elements du tableau :\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Vérification croissant
    for(i = 0; i < n-1; i++) {
        if(tab[i] > tab[i+1]) {
            croissant = 0;
            break;
        }
    }

    // Vérification décroissant
    for(i = 0; i < n-1; i++) {
        if(tab[i] < tab[i+1]) {
            decroissant = 0;
            break;
        }
    }

    // Affichage du résultat
    if(croissant == 1) {
        printf("Le tableau est trie en ordre croissant.\n");
    } else if(decroissant == 1) {
        printf("Le tableau est trie en ordre decroissant.\n");
    } else {
        printf("Le tableau n'est pas trie.\n");
    }

    return 0;
}