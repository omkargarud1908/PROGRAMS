#include<stdio.h>
#include<stdlib.h>
int i=0;
void average(int *p,int n,int *q)
{
	for(i=0;i<n;i++)
		if(p[i]>*q)
			*q=p[i];
	printf("The greatest number is: %d ",*q);
}
int main()
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
	int *p,n,sum=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	p=(int *)malloc(n* (sizeof(int)));
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	average(p,n,&sum);

	return 0;
}
