#include <stdio.h>

// fonction addition avec +1
int addition(int a, int b) {
    int somme = a;
    for (int i = 0; i < b; i++) {
        somme = somme + 1;
    }
    return somme;
}

// fonction multiplication avec +1
int multiplication(int a, int b) {
    int produit = 0;
    for (int i = 0; i < b; i++) {
        produit = addition(produit, a);
    }
    return produit;
}

int main() {
    int A, B;
    printf("Entrer deux entiers : ");
    scanf("%d %d", &A, &B);

    int resultat = multiplication(A, B);

    printf("Le produit de %d et %d est : %d\n", A, B, resultat);

    return 0;
}