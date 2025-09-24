#include <stdio.h>

// Fonction pour inverser le tableau
void inverser(int tab[], int n) {
    int i, temp;
    for(i = 0; i < n/2; i++) {
        temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }
}

int main() {
    int n, i;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    inverser(tab, n);

    printf("Tableau inverse :\n");
    for(i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}