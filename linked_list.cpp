#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void create(struct node *head, int data)
{
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
        printf("Memory not allocated\n");
    else
    {
        head->data = data;
        head->link = NULL;
    }
}
void insert_end(struct node *head, int data)
{
    struct node *temp = head;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
        printf("Memory not allocated\n");
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = newnode;
    }
}
void insert_begin(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
        printf("Memory not allocated\n");
    else
    {
        newnode->data = data;
        newnode->link = head;
        head = newnode;
    }
}
void insertion(struct node *head, int data, int pos)
{
    struct node *temp = head;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
        printf("Memory not allocated\n");
    else
    {
        newnode->data = data;
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
            temp = temp->link;
        if (temp == NULL)
            printf("Position out of range\n");
        else
        {
            newnode->link = temp->link->link;
            temp->link = newnode;
        }
    }
}
int traverse(struct node *head)
{
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}
void del_end(struct node *head)
{
    if (head == NULL)
        printf("list is already empty\n");
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        struct node *temp2 = head;
        while (temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        free(temp);
        temp = NULL;
        temp2->link = NULL;
    }
}
void del_begin(struct node *head)
{
    if (head == NULL)
        printf("list is empty\n");
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        temp = head->link;
        free(head);
        head = temp;
        temp = NULL;
    }
}
void deletion(struct node *head, int pos)
{
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        struct node *temp = head;
        struct node *temp2 = head;
        for (int i = 1; i < pos && temp != NULL; i++)
        {
            temp2 = temp;
            temp = temp->link;
        }
        if (temp == NULL)
            printf("Position out of range\n");
        else
        {
            temp2->link = temp->link;
            free(temp);
            temp = NULL;
        }
    }
}
int main()
{
    struct node *head = NULL;
    int choice, data, pos;
menu:
    printf("1. Create\n2. Insert at end\n3. Insert at beginning\n4. Insert at position\n5. Traverse\n6. Delete at end\n7. Delete at beginning\n8. Delete at position\n9. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter data: ");
        scanf("%d", &data);
        create(head, data);
        break;
    case 2:
        printf("Enter data: ");
        scanf("%d", &data);
        insert_end(head, data);
        break;
    case 3:
        printf("Enter data: ");
        scanf("%d", &data);
        insert_begin(head, data);
        break;
    case 4:
        printf("Enter data: ");
        scanf("%d", &data);
        printf("Enter position: ");
        scanf("%d", &pos);
        insertion(head, data, pos);
        break;
    case 5:
        traverse(head);
        break;
    case 6:
        del_end(head);
        break;
    case 7:
        del_begin(head);
        break;
    case 8:
        printf("Enter position: ");
        scanf("%d", &pos);
        deletion(head, pos);
        break;
    case 9:
        exit(0);
    default:
        printf("Invalid choice\n");
    }
    goto menu;
}