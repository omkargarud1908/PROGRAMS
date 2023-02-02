#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node * next;
}node;

node * create(int n1,node *head)
{
    node * newnode,*temp;
    int i;
    for(i=0;i<n1;i++)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("Enter element at position %d\n",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(i==0)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head;
}

void concat(node * head1,node* head2)
{
    node * temp=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
}

void display(node * head)
{
    node * temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

int main()
{
    node * head1=NULL,*head2=NULL;
    int n1,n2;
    printf("How many elements in linked list 1\n");
    scanf("%d",&n1);
    head1 = create(n1,head1);
    printf("\n");
    printf("How many elements in linked list 2\n");
    scanf("%d",&n2);
    head2 = create(n2,head2);
    printf("\n");
    printf("Linked list 1 before concatination\n");
    display(head1);
    printf("\n");
    printf("Linked list 2 before concatination\n");
    display(head2);
    printf("\n");
    concat(head1,head2);
    printf("Linked list after concatination\n");
    display(head1);
    return 0;
}