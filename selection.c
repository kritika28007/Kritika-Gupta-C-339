//Sorting using selection sort
#include<stdio.h>
int main(){
    int n,min,i,j,temp;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min])
            min=j;
        }
        if(min != i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("Array after sorting\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0; 
}