#include<stdio.h>
int main(){
    int n,key,isFound=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of an array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Element found at index %d\n",i);
            isFound=1;
            break;
        }
    }
    if(isFound==0)
    printf("Element not found\n");
    return 0;
}