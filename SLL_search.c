#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node*temp,*head,*new;

int main(){
    int ch,key,isFound=0;
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

    printf("Enter the data you want search: ");
    scanf("%d", &key);

    temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            printf("Element found\n");
            isFound=1;
            break;
        }
        temp=temp->next;
    }
    if(isFound==0){
        printf("Element not found\n");
    }
    return 0;
}