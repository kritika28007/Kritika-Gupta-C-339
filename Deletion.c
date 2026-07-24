//Deletion of an element
#include<stdio.h>
int main(){
    int i,pos,a[100],n;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array before deletion: \n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("Enter the position to be deleted: \n");
    scanf("%d",&pos);
    if(pos>=1 && pos<=n){
    for(i=pos;i<=n-1;i++){
        a[i-1]=a[i];
    }
    n--;
    printf("Array after deletion:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
else{
printf("Invalid position \n");
}
return 0;
    
}