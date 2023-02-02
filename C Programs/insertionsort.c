#include<stdio.h>

int main()
{
	int arr[30];	
	int num,i,temp;
	printf("Enter how many numbers you want:");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		printf("\nEnter the %d elements:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nInput array is:\t");
	for(i=0;i<num;i++)
	{
		printf("\t%d",arr[i]);
	}
	insertionsort(arr,num);
	printf("\n\nSorted array is:");
	for(i=0;i<num;i++)
	{
		printf("\t%d",arr[i]);
	}
return 0;
}
void insertionsort (int arr[30], int num)
{
	int i,j,key;
	for(j=1;j<num;j++)
	{
		key=arr[j];
		for(i=j-1;i>=0;i--)
		{
			if(arr[i]>key)
			{
				arr[i+1]=arr[i];
			}
			else
			      break;
		}
	arr[i+1]=key;
	}
}

