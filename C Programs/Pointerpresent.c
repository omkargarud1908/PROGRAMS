#include<stdio.h>
int main()
{
	int n,i,num,count=0;
	int arr[10];
	printf("Enter size of array: ");
	scanf("%d",&n);
	int*p=&arr[0];
	printf("Enter elments of array: ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==*(p+i))
		{
		printf("\nNumber is present in %dth position ",i);
		count++;
		}
	}
	printf("\nThe number of occurence of number is %d",count);
return 0;
}
