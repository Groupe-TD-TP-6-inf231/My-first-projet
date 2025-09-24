#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,m,n;
printf("Entrez le nombre de lignes et le nombre de colonnes des matrices: \n");
printf("colonnes: \n");
scanf("%d",&m);
printf("lignes: \n");
scanf("%d",&n);
int A[m][n],B[m][n],C[m][n];
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("Entrez les coordonees A[%d][%d]: ",i,j);
scanf("%d",&A[i][j]);
}
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("Entrez les coordonees B[%d][%d]: ",i,j);
scanf("%d",&B[i][j]);
}
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
        C[i][j]=A[i][j]+B[i][j];
}
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d", C[i][j]);
}
printf("\n");
}
    return 0;
}