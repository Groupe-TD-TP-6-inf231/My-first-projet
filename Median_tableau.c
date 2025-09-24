#include <stdio.h>

// Fonction pour trier le tableau (méthode simple : tri à bulles)
void trier(int tab[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(tab[j] > tab[j+1]) {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

// Fonction pour calculer la médiane
float mediane(int tab[], int n) {
    trier(tab, n);
    if(n % 2 == 0) {
        // si pair : moyenne des deux valeurs centrales
        return (tab[n/2 - 1] + tab[n/2]) / 2.0;
    } else {
        // si impair : valeur du milieu
        return tab[n/2];
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

    printf("La mediane est : %.2f\n", mediane(tab, n));

    return 0;
}