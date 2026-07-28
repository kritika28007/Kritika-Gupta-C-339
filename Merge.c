#include<stdio.h>
int main() {
    int a[100],b[100],n,m,i,c[100],j=0;
    printf("Enter the numbers of elements of First array(n>m): ");
    scanf("%d",&n);
    printf("Enter the numbers of elements of Second array(n>m): ");
    scanf("%d",&m);
    printf("Enter the elements of First array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of Second array: ");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=n;i<m+n;i++){
        c[i]=b[j];
        j++;
    }
    printf("Array after merging\n");
    for(i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}