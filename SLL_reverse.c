//Reverse LL
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node*temp,*head,*new,*prev,*curr,*next;

int main(){
    int ch;
    do{
        new=malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &new->data);
        new->next=NULL;
        if(head==NULL){
            head=temp=new;
        }
        else{
            temp->next=new;
            temp=temp->next;
        }
        printf("Press 1 to continue: ");
        scanf("%d", &ch);
    }while(ch==1);
    //original LL
    printf("Original LL\n");
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    //reversed Logic
    curr=head;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }

    printf("\nReversed LL\n");
    head=temp=prev;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
    return 0;
}
