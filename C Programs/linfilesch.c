#include<stdio.h>
int recursive (int)
{
	int mid=(start+end)/2;
	if(num==a[mid])
	return mid;
	else
	if(num>a[mid])
	{
		start=mid+1;
	return recursive (start,end,num);
	}

	else
	{	
	end=mid-1;
	return recursive (start,end,num);
	}
}
	return -1;


int main()
{
	int a[20],n,i,num,bin;
	
	printf("\nEnter how many elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		printf("Enter the %d elements:\n",i+1);	
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element you want to search in the array:\n");
	scanf("%d",&num);

	bin=search(a,n,num);
	if(bin==-1)
	{
		printf("%d Number is not found in the array\n",num);
	}
	else
	{
		printf("%d Number is found in the array\n",num);
	}
}
