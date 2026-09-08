#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL, *temp = NULL;

int main()
{
    struct Node *new, *key1, *p;
    // creation
    int ch;
    do
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data:");
        scanf("%d", &new->data);
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            temp = new;
        }
        else
        {
            temp->next = new;
            temp = temp->next;
        }
        printf("Want to continue press 1 else 0: ");
        scanf("%d", &ch);
    } while (ch == 1);
    // insertion at last
    key1 = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the key you want to insert:");
    scanf("%d", &key1->data);
    p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=key1;
    key1->next = NULL;
    // traversal
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}