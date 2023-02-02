#include<stdio.h>
int search(int a[], int n,int num)
{
	int start=0,mid,end=n-1;
	mid=(start+end)/2;
	
	while(a[mid]!=num && start<=end)
	{
		if(num>a[mid])
			start=mid+1;
		else 
			end=mid-1;	
	}
		if(start>=end)
		return mid;
		return -1;
}	

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
