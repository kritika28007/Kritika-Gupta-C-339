//Sorting using merge sort 
#include<stdio.h>
#include<limits.h>

void merge(int a[],int low,int mid,int high);
void mergesort(int a[],int low,int high);

int main(){
    int n,low,high,i;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    int a[n];
    low=0;high=n-1;
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    mergesort(a,low,high);
    printf("Array after sorting\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

void merge(int a[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int l[n1+1],r[n2+1];
    int i,j;
    for(i=1;i<=n1;i++){
        l[i]=a[low+i-1];
    }
    for(j=1;j<=n2;j++){
        r[j]=a[mid+j];
    }
    l[n1+1]=INT_MAX;
    r[n2+1]=INT_MAX;
    i=1;j=1;
    for(int k=low;k<=high;k++){
        if(l[i]<=r[j])
            a[k]=l[i++];
        else
            a[k]=r[j++];
    }
}

void mergesort(int a[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}