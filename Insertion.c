//Insertion of an element in an array at a given position.
#include<stdio.h>
int main() {
    int a[100],n,newVal,pos,i;
    printf("Enter the numbers of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("Enter the new element:");
    scanf("%d",&newVal);
    for(i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=newVal;
    n++;
    printf("New Array is:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}