//Searching of an element
#include<stdio.h>
int main(){
    int i,key,a[100],n,flag=0;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
        printf("Element found");
        flag=1;
        break;}
    }
        if(flag==0)
        printf("Element not found");
        return 0;
    }