#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} NODE;

void create (NODE *head)
{
	NODE *newnode,*temp=head;
	int i,n;
	printf("\nEnter how many numbers you want in the liked list:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		printf("\nEnter %d numbers:",i+1);
		scanf("%d",&newnode->data);
		temp->next=newnode;
		newnode->next=head;
		temp=newnode;
	}
}

void display (NODE *head)
{
	printf("\nCreated singly circular linked list is:");
	NODE *temp;
	for(temp=head->next;temp!=head;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}

NODE *search (NODE *head, int num)
{
	NODE *temp;
	for(temp=head->next;temp!=head;temp=temp->next)
	{
		if(num==temp->data)
		{
			printf("\nNumber not found.");
			return temp;
		}
		else
		{
			printf("\nNumber found.");
			return 0;
		}
	}
}
void length (NODE *head)
{
	NODE *temp;
	int i=0;
	for(temp=head->next;temp!=head;temp=temp->next)
	{
		i++;
	}
	printf("\nLength is:%d",i);
}
int main()
{
	int num,pos=1;
	NODE *head;
	head=(NODE *)malloc(sizeof(NODE));
	head->next=head;
	create(head);
	printf("\nEnter a number to be searched:");
	scanf("%d",&num);

	search(head,num);
	display(head);
	length(head);

}	
