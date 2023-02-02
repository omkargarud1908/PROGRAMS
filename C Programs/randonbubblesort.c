#include<stdio.h>
void bubblesort(int arr[40],int num)
{
	int pass,temp,i;
	for(pass=1;pass<num;pass++)
	{
		for(i=0;i<=num-pass-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}
int main()
{
	int arr[40];	
	int num,i,temp;
	printf("Enter how many numbers you want:");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		arr[i]=rand()%100;
		 
	}
	printf("\nInput array is:\t");
	for(i=0;i<num;i++)
	{
		printf("\t%d",arr[i]);
	}
	bubblesort(arr,num);
	printf("\nSorted array is:");
	for(i=0;i<num;i++)
	{
		printf("\t%d",arr[i]);
	}
return 0;
}

