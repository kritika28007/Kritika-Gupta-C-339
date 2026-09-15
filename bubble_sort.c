//Bubble sort
#include<stdio.h>
int main(){
    int i,j,temp,n;
    printf("Enter number of elements in an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of an array: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Original Array: ");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}