#include<stdio.h>
int main(){
    int n,l=0,mid=0,i,key,isFound=0;
    printf("Enter the number of elemnets in an array:");
    scanf("%d",&n);
    int a[n],r=n-1;
    printf("Enter elements of an array(in sorted form): ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be found: ");
    scanf("%d",&key);
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==key){
            printf("Element found at index %d",mid);
            isFound=1;
            break;
        }
        else if(a[mid]>key)
            r=mid-1;
        else
            l=mid+1;
    }
    if(isFound==0)
    printf("Element not found");
    return 0;
}