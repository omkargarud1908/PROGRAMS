#include<stdio.h>
#include<stdlib.h>

#define MAX 10

typedef struct stack
{
	int data[MAX];
	int top;
} STACK;

void init (STACK *s)
{
	s->top=-1;
}

void push (STACK *s, int num)
{
	s->top++;
	s->data[s->top]=num;
}

int pop (STACK *s)
{
	return (s->data[s->top--]);
}

int isEmpty (STACK *s)
{
	if(s->top==-1)
	return 1;
	else
	return 0;
}

int isFull (STACK *s)
{
	if(s->top==MAX-1)
	return 1;
	else
	return 0; 
}

void display (STACK *s)
{
	int i;
	if(s->top==-1)
	{
		printf("Stack is empty");
	}
	for(i=s->top;i>=0;i--)
	{
		printf("%d",s->data[i]);
		printf("\n");
	}
}
int main()
{
	STACK s1;
	int num,ch;
	init(&s1);
	do
	{
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: if(isFull(&s1))
		printf("Stack overflow");
		else
		{
			printf("Enter the element to be push into the stack:");
			scanf("%d",&num);
			push(&s1,num);
			printf("\nSTACK ELEMENTS:");
			display(&s1);
		}
		break;
		case 2: if(isEmpty(&s1))
		printf("Stack underflow");
		else
		{
			printf("Popped element is: %d\n",pop(&s1));

			printf("\nSTACK ELEMENTS:");
			display(&s1);
			break;
		}
		case 3: display(&s1);
			break;
	}
}while(ch!=5);
}
