#include<stdio.h>
#define size 5
int stack[size];
int top=-1;


void push(int x){
    if(top==size-1){
        printf("Stack overflow\n");
    }
    else{
        top=top+1;
        stack[top]=x;
    }
}

void pop(){
    if(top==-1){
        printf("Stack underflow\n");
    }
    else{
        printf("Deleted value is %d \n",stack[top]);
        top=top-1;
    }
}

void main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    pop();
    printf("Final stack elements: ");
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}