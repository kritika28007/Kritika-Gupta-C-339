#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};

struct node *head,*temp,*new,*todelete;

int main(){
    //creation of linked list
    int ch;
    struct node *p;
    do{
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL){
            head=new;
            temp=new;
        }
        else{
            temp->next=new;
            temp=temp->next;
        }
        printf("Press 1 to continue: ");
        scanf("%d",&ch);
    }while(ch==1);
    //deletion in between
    printf("Enter the position you want to delete: ");
    int pos;
    scanf("%d",&pos);
    p=head;
    for(int i=1;i<pos-1 && p->next!=NULL;i++){
        p=p->next;
    }
    todelete=p->next;
    p->next=todelete->next;
    free(todelete);
    //Traversal
    p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}