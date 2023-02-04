#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct emp
	{
		int eno;
		char name[20];
		float sal;
	};

struct emp e[MAX];
void addemp(int);
void display(int);

int main()
{
	int i,n;
	
	printf("\nHow many employees?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		addemp(i);
	display(n);
	
return 0;
}

void addemp(int i) 
{
	printf("\nEnter details of %dth employee\n",i+1);
	scanf("%d %s %f",&e[i].eno,e[i].name,&e[i].sal);
}

void display(int n)
{
	int i;
	printf("\nEmplyee details having salary > 10000 are given below:\n");
	for(i=0;i<n;i++)
		if(e[i].sal > 10000)
			printf("\n%d %s %f\n",e[i].eno,e[i].name,e[i].sal);
}
