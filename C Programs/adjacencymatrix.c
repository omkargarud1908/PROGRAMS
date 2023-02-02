 #include<stdio.h>
#include<stdlib.h>


struct node
{
 int vertex;
 struct node *next;
} *list[10];

void createmat(int m[10][10],int n)
{ 
int i,j;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
     {
      printf("IS there edge between V%d and V%d  : ",i+1,j+1);
      scanf("%d",&m[i][j]);
     }
  }
}

void displaymat(int m[10][10],int n)
{
 int i,j;
  
   for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
     {
      printf("%d\t",m[i][j]);
     }
    printf("\n"); 
  }
}

void createlist(int m[10][10],int n)
{
 struct node *temp,*newnode;
 int i,j;
 
 for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
      {
       if(m[i][j]==1)
         {
          newnode=(struct node*)malloc(sizeof(struct node));
           newnode->vertex=j+1;
           newnode->next=NULL;
            if(list[i]==NULL)
               list[i]=temp=newnode;
            else
              {
                temp->next=newnode;
                temp=newnode;
             }
         }
      }
   }
}

void displaylist(int n)
{
 struct node *temp;
 int i;
 
 printf("Adjancency Matrix list is \n");
 for(i=0;i<n;i++)
  {
   temp=list[i];
   while(temp!=NULL)
     {
      printf("V%d -> ",temp->vertex);
      temp=temp->next;
     }
  printf("NULL\n");
  }
}

int main()
{
 int m[10][10],n;
 printf("Enter how many Vertices : ");
 scanf("%d",&n);
 
 createmat(m,n);
 printf("Adjancency Matrix\n");
 displaymat(m,n);
 createlist(m,n);
 
 displaylist(n);
}



