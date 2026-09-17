//Transpose of Matrix
#include<stdio.h>
int main(){
int a[100][100],i,j,n,m;
printf("Enter the order of  matrix(r,c): ");
scanf("%d%d", &n,&m);
printf("Enter elements of matrix: \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Original matrixs: \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("Transpose of matrixs: \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d ",a[j][i]);
    }
    printf("\n");
}
return 0;
}