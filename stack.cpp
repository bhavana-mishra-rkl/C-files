#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void push();
int pop();
void display();
int stack[MAX];
int top = -1;
int main()
{
	int ch;
	char ch1;
	do
	{
		printf("1.Push\n2.pop\n3.display\nEnter your choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		default:
			printf("you entered wrong choice\n");
		}
		printf("do you want to continue?Y/N ");
		scanf(" %c", &ch1);
	} while (ch1 == 'y' || ch1 == 'Y');
}
void push()
{
	int item;
	if (top == MAX - 1)
	{
		printf("Overflow,Stack is full");
		exit(0);
	}
	else
	{
		printf("Enter the element which you want to insert: ");
		scanf("%d", &item);
		top = top + 1;
		stack[top] = item;
	}
}
int pop()
{
	int i;
	if (top == -1)
	{
		printf("underflow , stack is empty");
		exit(0);
	}
	else
	{
		top = top - 1;
	}
}
void display()
{
	int i;
	if (top == -1)
	{
		printf("Stack is empty");
		exit(0);
	}
	else
	{
		for (i = top; i >= 0; i--)
		{
			printf("%d\n", stack[i]);
		}
	}
}