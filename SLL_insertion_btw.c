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
    // insertion at between
    key1 = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the key you want to insert:");   
    scanf("%d", &key1->data);
    int pos;
    printf("Enter the position after which you want to insert:");
    scanf("%d", &pos);
    p = head;
    for (int i = 1; i < pos; i++)
    {
        p = p->next;
    }  
    key1->next = p->next;
    p->next = key1;
    // traversal
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}