#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void insert(int item)
{
    if ((rear + 1) % N == front)
        printf("overflow\n");
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = item;
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = item;
    }
}
void delet()
{
    if (front == -1 && rear == -1)
        printf("underflow\n");
    else if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % N;
}
int traverse()
{
    if (front == -1 && rear == -1)
        printf("queue is empty\n");
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", queue[rear]);
    }
}
int main()
{
    int choice, item;
menu:
    printf("1.Insert\n2.Delete\n3.Traverse\n4.Exit\nEnter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("input item");
        scanf("%d", &item);
        insert(item);
        break;
    case 2:
        delet();
        break;
    case 3:
        traverse();
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid choice\n");
        break;
    }
    goto menu;
}