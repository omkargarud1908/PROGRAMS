#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter number of students: ");
	scanf("%d",&n);
	int arr[n];
	int *p=&arr[0];
	for(i=0;i<n;i++)
	{
 		printf("Enter marks of %d th student: ",i+1);
  			scanf("%d",&arr[i]);
	}
 	for(i=0;i<n;i++)
 		sum=sum+*(p+i);
 	printf("Average of studnets is %d",sum/n);
	return 0;
}
