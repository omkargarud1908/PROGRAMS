#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *front,*rear;

void insert (int n)
{
	NODE *newnode;
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->data=n;
	newnode->next=NULL;
	
	if(front==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	
}

int delete ()
{
	int n;
	NODE *temp=front;
	n=front->data;
	if(front==rear)
	{
		front=rear=NULL;
	}
	else
	{
		front=front->next;
		free(temp);
	}
	return (n);
}

void display ()
{
	NODE *temp=front;
	printf("\nQueue contents are:\t");
	for(temp=front;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int n,ch;
	do
	{
	printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("Enter the element to be inserted:");
			scanf("%d",&n);
			insert(n);
			display();
			break;
		case 2: if(front==NULL)
		printf("\nQueue is empty");
		else
		{ 
			printf("Deleted element is %d\n",delete());
			display();
		}
		break;
	}
}while(ch!=5);
}
