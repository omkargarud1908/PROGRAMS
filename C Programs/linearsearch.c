#include<stdio.h>
int main()

{
	int a[20],i,n,num;
	
	printf("Enter how many numbers you want:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the numbers:\n");
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the number you want to search:");
	scanf("%d",&num);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			printf("%d Number is found\n",num);
			break;
		}
	}
	
	if(a[i]!=num)
	{
		printf("%d Number is not found\n",num);
	}
}
