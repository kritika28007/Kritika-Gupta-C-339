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
    // deletion at last
    p = head;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    free(p->next->next);
    p->next=NULL;
    // traversal
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}