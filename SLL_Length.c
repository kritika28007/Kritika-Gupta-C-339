//Length of Linked List
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node*temp,*head,*new;

int main(){
    int ch,isCount=0;
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

    temp=head;
    while(temp!=NULL){
        isCount++;
        temp=temp->next;
    }
    printf("Length of Linked List is: %d", isCount);
    return 0;
}