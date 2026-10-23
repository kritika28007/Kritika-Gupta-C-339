
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertBeginning()
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;

    printf("Node inserted successfully\n");
}

void insertEnd()
{
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    printf("Node inserted successfully\n");
}

void insertPosition()
{
    struct node *newnode, *temp;
    int pos, i;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1)
    {
        printf("Invalid position\n");
        return;
    }

    if (pos == 1)
    {
        insertBeginning();
        return;
    }

    temp = head;
    i = 1;

    while (temp != NULL && i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Node inserted successfully\n");
}

void deleteBeginning()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);

    printf("Node deleted successfully\n");
}

void deleteEnd()
{
    struct node *temp, *prev;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL;
        free(temp);
    }

    printf("Node deleted successfully\n");
}

void deletePosition()
{
    struct node *temp, *del;
    int pos, i;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1)
    {
        printf("Invalid position\n");
        return;
    }

    if (pos == 1)
    {
        deleteBeginning();
        return;
    }

    temp = head;
    i = 1;

    while (temp != NULL && i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || temp->next == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    del = temp->next;
    temp->next = del->next;
    free(del);

    printf("Node deleted successfully\n");
}

void display()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;

    printf("Linked list: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Insert at beginning");
        printf("\n2. Insert at end");
        printf("\n3. Insert at position");
        printf("\n4. Delete from beginning");
        printf("\n5. Delete from end");
        printf("\n6. Delete from position");
        printf("\n7. Display");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            insertBeginning();
        }
        else if (choice == 2)
        {
            insertEnd();
        }
        else if (choice == 3)
        {
            insertPosition();
        }
        else if (choice == 4)
        {
            deleteBeginning();
        }
        else if (choice == 5)
        {
            deleteEnd();
        }
        else if (choice == 6)
        {
            deletePosition();
        }
        else if (choice == 7)
        {
            display();
        }
        else if (choice == 8)
        {
            while (head != NULL)
            {
                struct node *temp = head;
                head = head->next;
                free(temp);
            }

            return 0;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
