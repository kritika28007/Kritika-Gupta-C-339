#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *new,*top,*t,*p;
void pop(){
    if(top==NULL)
    printf("Stack Underflow");
    else{
        t=top;
        printf("Deleted element is: %d\n",t->data);
        top=top->next;
        free(t);
        t=NULL;
    }
}
void push(int x){
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=top;
    top=new;
}
void main(){
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}