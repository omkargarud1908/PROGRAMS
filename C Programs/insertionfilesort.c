#include<stdio.h>
typedef struct person
{
	int no;
	int age;
}record;
void insertionsort (record p[20], int n);
int fileread (record p[20])
{
	FILE *fp;
	int i=0;
	
	fp=fopen("person.txt","r");
if(fp==NULL)
printf("File not exist");
else
{
	while(!feof(fp))
	{
		fscanf(fp,"%d %d",&p[i].no,&p[i].age);
		i++;
	}
	fclose(fp);
}
return i-1;
}
int main()
{
	int i,n;
	int key[20];
	record p[20];
	n=fileread(p);
	
	for(i=0;i<n;i++)
	
	printf("%d %d\n",p[i].no,p[i].age);

	insertionsort(p,n);

	printf("\nSorted age is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",p[i].no,p[i].age);
	}
}

void insertionsort(record p[20], int n)
{
	int i,j;
	record key;
	printf("\n n is: %d",n);
	for(i=1;i<n;i++)
	{
		key=p[i];
		for(j=i-1;j>=0;j--)
		{
			if(p[j].age>key.age)
			{
				p[j+1]=p[j];
			}
			else
			      break;
		}
	p[j+1]=key;
	}
}
 
