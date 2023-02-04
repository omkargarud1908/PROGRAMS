#include<stdio.h>
#include<stdlib.h>
void swap(int *p,int *q)
{
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;

	
}
void bubblesort(int a[],int n) 
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i] > a[j])
				swap(&a[i],&a[j]);
}
int main()
{
	int i,n,j;
	printf("Enter size of array");
	scanf("%d",&n);
	int *p=0;
	p=(int *)malloc(n* sizeof(int));
	if(p==0)
	{
		printf("allocation unsuccesfull"); return;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}

	bubblesort(p,n);
	for(i=0;i<n;i++)
	printf("%d",p[i]);
return 0;
}
