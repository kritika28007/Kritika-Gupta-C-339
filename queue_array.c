#include<stdio.h>
#define size 5

int queue[size];
int f=-1,r=-1;

void enqueue(int x){
    if(r==size-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        queue[++r]=x;
        if(f==-1)
        {
            f=0;
        }
    }
}

void dequeue(){
    if(f==-1 && r==-1){
        printf("Queue is empty\n");   
    }
    else{
        printf("Deleted element is %d\n",queue[f]);
        f++;
    }
}

void main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    enqueue(25);
    printf("Elements in the queue are:\n");
    for(int i=f;i<=r;i++){
        printf("%d ",queue[i]);
    }
}