#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *create (NODE *list,int num)
{
	NODE *newnode, *temp;
	int i,n;
	printf("\nEnter how many numbers you want in the Linked List:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		newnode=(NODE *) malloc (sizeof(NODE));
		printf("\nEnter a number:");
		scanf("%d", &newnode->data);

		newnode->next=NULL;

		if(list==NULL)
		{
			list=temp=newnode;
		}
		else 
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
}
void display (NODE *list)
{
	/*printf("\nCreated Singly Linked List is:");*/

	NODE *temp;
	for(temp=list; temp!=NULL;temp=temp->next)
	{
		printf("%d\t", temp->data);
	}
}
NODE *insert (NODE *list,int num,int pos)
{
	NODE *temp, *newnode;
	int i;
	temp=list;
	newnode=(NODE *) malloc (sizeof(NODE));
	newnode->data=num;
	if(pos==1)
	{
		newnode->next=temp;
		list=temp=newnode;
	}
	else
	{
		for(i=1;i<pos-1 && temp!=NULL; i++)
		{
			temp=temp->next;
		}
	if(temp==NULL)
	{
		printf("\nPosition out of range.");
		return list;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	}
	
	return list;
}

NODE *deletepos (NODE *list,int pos)
{
	NODE *temp=list, *temp1;
	int i;
	if(pos==1)
	{
		list=temp->next;
		free(temp);
	}
	else
	{
		for(i=1;i<pos-1 && temp!=NULL;i++)
		{
			temp=temp->next;
		}
	if(temp==NULL)
	{
		printf("\nPosition out of range.");
		return list;
	}
	temp1=temp;
	temp=temp->next;
	temp1->next=temp->next;
	free(temp);
	}
	
	return list;
}

NODE *deletevalue (NODE *list,int num)
{
	NODE *temp=list, *temp1;
	int i;
	
	if(list->data==num)
	{
		list=temp->next;
		free(temp);
		return list;
	}
	else
	{

	for(temp=list;temp!=NULL;temp=temp->next)
	{
		if(temp->next->data==num)
		{
			temp1=temp;
			temp=temp->next;
			temp1->next=temp->next;
			free(temp);
			return list;
		}
		
	}
	
	if(temp==NULL)
	{
		printf("\nValue not found.");
		return list;
	}
	}
}
int main()
{
	int num,pos;
	NODE *list=NULL;
	list=create(list);
	display(list);
	printf("\nEnter a position to insert a number:");
	scanf("%d",&pos);
	printf("\nEnter a numbered to be inserted:");
	scanf("%d", &num);
	list=insert(list,num,pos);
	printf("\nAfter insert a node at 1st position, new linked list is:");
	display(list);

	printf("\nEnter a valid position to delete value:");
	scanf("%d",&pos);
	list=deletepos(list,pos);
	printf("\nAfter deleting the position, new linked list is:",pos);
	display(list);

	printf("\nEnter a value to delete:");
	scanf("%d",&num);
	list=deletevalue(list,num);
	printf("\nAfter deleting value, new linked list is:");
	display(list);
	
	/*int num,pos,ch;
	NODE *list;
	do
	{
		printf("\n1-Create\n2-Insert\n3-Delete\n4-Exit\n");
		printf("%d",&ch);
		
		switch(ch)
		{
			case 1: printf("\nEnter how many numbers:");
			scanf("%d",&num);
			list=create(list,num);
			display(list);
			break;
			
			case 2: printf("\nEnter a number to be inserted:");
			scanf("%d %d",&num,&pos);
			list=insert(list,num,pos);
			display(list);
			break;
			
			case 3: printf("\nEnter a number to be deleted:");
			scanf("%d %d",&num,&pos);
			display(list);
			break;
			
			case 4: exit(1);
			break;
			default: printf("\n Invalid Choice"); break;
		}
	}
	while (ch>0 && ch<5);
	return 0;*/
}
