#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next,*prev;
} NODE;

void create(NODE *head)
{
	NODE *newnode,*temp=head;
	int i,n;
	printf("\nEnter how many numbers you want in the linked list:");
	scanf("%d",&n);
 
 	for(i=0;i<n;i++)
	{
 	newnode=(NODE *)malloc(sizeof(NODE));
 	printf("\nEnter the %d number:",i+1);
 	scanf("%d",&newnode->data);
 	newnode->next=head;
 	temp->next=newnode;
 	head->prev=newnode;
 	newnode->prev=temp;
 	temp=newnode;
	}
}

void display (NODE *head)
{
	printf("\nCreated Doubly Circular Linked List is:");
	NODE *temp;
	for(temp=head->next;temp!=head;temp=temp->next)
	{
	printf("%d\t",temp->data);
	}
}

void deletevalue (NODE *head, int num)
{
	NODE *temp,*temp1,*temp2;
	for(temp=head;temp->next!=head;temp=temp->next)
	{
		if(temp->next->data==num)
		{
			temp1=temp;
			temp=temp->next;
			temp2=temp->next;
			temp1->next=temp2;
			temp2->prev=temp1;
			free(temp);
		}
	}
	if(temp->next=head)
	{
		printf("\nValue not found.");
	}
}

int main()
{
	int num;
	NODE *head;
	head=(NODE *)malloc(sizeof(NODE));
	head->next=head;
	create(head);
	display(head);

	printf("\nEnter the value to be deleted:");
	scanf("%d",&num);
	deletevalue(head,num);
	printf("\nAfter deleting the value linked list is:");
	display(head);
}
