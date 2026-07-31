//Multiplication of matrix
#include<stdio.h>
int main(){
    int a[100][100],b[100][100],c[100][100],r1,r2,c1,c2,i,j,k;
    printf("Enter order of first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter order of second matrix: ");
    scanf("%d %d",&r2,&c2);

    if(c1==r2){

    printf("Enter elements of first matrix: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }
    }
    printf("Enter elements of second matrix: \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
        scanf("%d",&b[i][j]);
    }
    }
    //Initialisation of final Matrix
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
        c[i][j]=0;
    }
    //Multiplication of matrix
    for(i=0;i<r1;i++){
         for(j=0;j<c2;j++){
            for(k=0;k<r2;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                    
                }
            }
        }
    printf("Final matrix: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
    }
    }
    else{
        printf("Matrix cannot be multiply\n");
    }
    return 0;
}
