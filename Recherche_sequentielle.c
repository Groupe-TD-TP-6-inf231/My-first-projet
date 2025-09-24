
	#include <stdio.h>

int recherche_sequentielle(int tab[], int n, int valeur) {
    for(int i = 0; i < n; i++) {
        if(tab[i] == valeur) {
            return i;  // retourne la position si trouvé
        }
    }
    return -1;  // retourne -1 si non trouvé
}

int main() {
    int n, i, valeur, position;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    printf("Entrez la valeur a rechercher : ");
    scanf("%d", &valeur);

    position = recherche_sequentielle(tab, n, valeur);

    if(position != -1) {
        printf("La valeur %d se trouve a la position %d (indice %d).\n", valeur, position+1, position);
    } else {
        printf("La valeur %d n'est pas dans le tableau.\n", valeur);
    }

    return 0;
}