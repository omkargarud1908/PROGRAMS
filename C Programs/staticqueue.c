#include<stdio.h>
#include<stdlib.h>

#define MAX 20

typedef struct queue
{
	int data[MAX];
	int front,rear;
} QUEUE;

void init (QUEUE *q)
{
	q->front=-1;
	q->rear=-1;
}

void insert (QUEUE *q, int n)
{
	q->rear++;
	q->data[q->rear]=n;
}

int delete (QUEUE *q)
{
	return (q->data[++(q->front)]);
}

int isEmpty (QUEUE *q)
{
	if(q->front==q->rear)
	return 1;
	return 0;
}

int isFull (QUEUE *q)
{
	if(q->rear==MAX-1)
	return 1;
	return 0; 
}

void display (QUEUE *q)
{
	int i;
	printf("\nQueue contents are:\t");
	for(i=q->front+1;i<=q->rear;i++)
	{
		printf("%d\t",q->data[i]);
	}
}
int main()
{
	QUEUE q1;
	int num,ch;
	init(&q1);
	do
	{
	printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: if(isFull(&q1))
		printf("\nQUEUE overflow");
		else
		{
			printf("Enter the element to be insert into the QUEUE:");
			scanf("%d",&num);
			insert(&q1,num);
			display(&q1);
		}
		break;
		case 2: if(isEmpty(&q1))
		printf("\nQUEUE underflow");
		else
		{ 
			printf("Removed %d element from QUEUE:",delete(&q1));
			display(&q1);
		}
		break;
		case 3: display(&q1);
			break;
	}
}while(ch!=5);
}
