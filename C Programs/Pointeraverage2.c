#include<stdio.h>
int i=0;
void average(int *p,int n,int *q)
{
	for(i=0;i<n;i++)
		*q=*q+p[i];
	printf("Average of array is: %d ",*q/n);
}
int main()
{
	int arr[10],n,sum=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	average(arr,n,&sum);

	return 0;
}
