#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *f,*r;
void dequeue(){
    int x=-1;
    struct node *p;
    if(f==NULL){
        printf("Queue is empty\n");
    }
    else{
        p=f;
        x=p->data;
        f=f->next;
        free(p);
        p=NULL;
        printf("Deleted element is %d\n",x);
    }
}

void enqueue(int y){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=y;
    new->next=NULL;
    if(f==NULL){
        f=r=new;
    }
    else{
        r->next=new;
        r=new;
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
    dequeue();
    struct node *p=f;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}