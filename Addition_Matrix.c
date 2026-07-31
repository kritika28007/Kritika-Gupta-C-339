//Addition of Matrix
#include<stdio.h>
int main(){
int a[100][100],b[100][100],c[100][100],i,j,n,m;
printf("Enter the order of  matrix(r,c): ");
scanf("%d%d", &n,&m);
printf("Enter elements of first matrix: \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Enter elements of second matrix: \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}
printf("Sum of matrixs: \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
return 0;
}