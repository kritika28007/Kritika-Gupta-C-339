//Sorting using quick sort
#include<stdio.h>

void quicksort(int a[],int low,int high);
int partition(int a[],int low,int high);


int main(){
    int n,i,low,high;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    low=0;high=n-1;
    quicksort(a,low,high);
    printf("Array after sorting\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;   
}


int partition(int a[],int low,int high){
    int x=a[low];
    int i=low,temp=0;
    for(int j=low+1;j<=high;j++){
        if(a[j]<=x){
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i];
    a[i]=a[low];
    a[low]=temp;
    return i;
}

void quicksort(int a[],int low,int high){
    if(low<high){
        int m=partition(a,low,high);
        quicksort(a,low,m-1);
        quicksort(a,m+1,high);
    }
}