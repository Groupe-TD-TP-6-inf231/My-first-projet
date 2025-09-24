#include <stdio.h>
#include <stdlib.h>

int main()
{
int m,n,p,q,i,j,k;
printf("Entrez le nombre de lignes et de colonnes de la premiere matrice: ");
scanf("%d%d",&m,&n);
printf("Entrez le nombre de lignes et de colonne de la deuxieme matrice: ");
scanf("%d%d",&p,&q);
if(n!=p){
printf("Le produit des 2 matrices n'est pas possible car le nombre de colonnes de la premiere matrice est different du nombre de lignes de la deeuxieme matrice ");
return 1;
}
int A[m][n],B[p][q],C[m][q];
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("Entrez A[%d][%d]: ",i,j);
scanf("%d",&A[i][j]);
}
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("Entrez B[%d][%d]: ",i,j);
scanf("%d",&B[i][j]);
}
}

for(i=0;i<m;i++){
for(j=0;j<n;j++){
C[i][j]=0;
}
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
for(k=0;k<n;k++){
C[i][j]+=A[i][k]*B[k][j];
}
}
}
printf("Le produit des 2 matrices est:\n(\n");
for(i=0;i<m;i++){
    printf("(");
    for(j=0;j<q;j++){
        printf("%d",C[i][j]);
    }
    printf(")\n");
}
printf(")\n");
        return 0;
}