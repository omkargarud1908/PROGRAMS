#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	struct node *left;
	int data;
	struct node *right;
} NODE;

NODE *create (NODE *root)
{
	NODE *temp,*newnode;
	int i,n;
	printf("\nEnter how many nodes:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		newnode=(NODE *) malloc (sizeof(NODE));
		newnode->left=newnode->right=NULL;
		printf("\nEnter the node values:");
		scanf("%d",&newnode->data);
		if(root==NULL)
		root=newnode;
		else
		{
			temp=root;
			while(temp!=NULL)
			{
				if(newnode->data<temp->data)
				{
					if(temp->left==NULL)
					{
					temp->left=newnode;
					break;
					}
					else
					temp=temp->left;
				}
				else if(newnode->data>temp->data)
				{
					if(temp->right==NULL)
					{
					temp->right=newnode;
					break;
					}
					else
					temp=temp->right;
				}
			}
		}
	}
	return root;
}

void preorder (NODE *root)
{
	if(root!=NULL)
	{
	printf("\t%d",root->data);
	preorder(root->left);
	preorder(root->right);
	}
}
void inorder (NODE *root)
{
	if(root!=NULL)
	{
	inorder(root->left);
	printf("\t%d",root->data);
	preorder(root->right);
	}
}
void postorder (NODE *root)
{
	if(root!=NULL)
	{
	postorder(root->left);
	postorder(root->right);
	printf("\t%d",root->data);
	}
}
int main()
{
	NODE *root=NULL;
	root=create(root);
	printf("\nPreorder is:");
	preorder(root);
	printf("\nInorder is:");
	inorder(root);
	printf("\nPostorder is:");
	postorder(root);
}
		
