#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
 int data;
 struct node *next,*prev;
}NODE;

NODE *create (NODE *list)
{
 NODE *newnode, *temp;
 int i,n;
 printf("\nEnter how many numbers you want in the Linked List:");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 {
  newnode=(NODE *) malloc (sizeof(NODE));
  printf("Enter a number:");
  scanf("%d", &newnode->data);

  newnode->next=NULL;

  if(list==NULL)
  {
    list=temp=newnode;
    newnode->prev=NULL;
  }
  else 
  {
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
  }
  }
    return list;
}

void display (NODE *list)
{
  printf("\nCreated Doubly Linked List is:");

  NODE *temp;
  for(temp=list; temp!=NULL;temp=temp->next)
 {
   printf("%d\t", temp->data);
  }
}
NODE *insert (NODE *list,int num,int pos)
{
 NODE *temp=list,*newnode,*prev;
 int i,n;
	
 newnode=(NODE *)malloc(sizeof(NODE));
 newnode->data=num;
 newnode->next=NULL;
 if(pos==1)
 {
  newnode->next=temp;
  list=temp=newnode;
  temp->prev=newnode;
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
 newnode->next->prev=newnode;
 newnode->prev=temp;
 }
 return list;
}

NODE *deletepos (NODE *list,int pos)
{
 NODE *temp=list,*temp1,*temp2;
 int i;
 if(pos==1)
{
 list=temp->next;
 list->prev=NULL;
 free(temp);
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
 temp1=temp;
 temp=temp->next;
 temp2=temp->next;
 temp1->next=temp2;
 temp2->prev=temp1;
 free(temp);
}
 return list;
}

int main()
{
 int num,pos;
 NODE *list=NULL;
 list=create(list);
 display(list);
 printf("\nEnter a numbered to be inserted:");
 scanf("%d", &num);
 printf("\nEnter a position to be insert the number:");
 scanf("%d", &pos);
 list=insert(list,num,pos);
 printf("\nAfter insertion , new linked list is:\n");
 display(list);

 printf("\nEnter a position to be deleted:");
 scanf("%d",&pos);
 list=deletepos(list,pos);
 printf("\nAfter deletion , new linked list is: ");
 display(list);
}

