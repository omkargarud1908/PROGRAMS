#include<stdio.h>
void merge(int arr[5], int low, int mid, int high )
{
	int i,j,k,b[5];
	i=low;
	j=mid+1;
	k=0;
	
while ((i<=mid) && (j<=high))
{
	if(arr[i]<=arr[j])
	{
		b[k++]=arr[i++];
	}
	else
	{
		b[k++]=arr[j++];
	}
}
while(i<=mid)
{
	b[k++]=arr[i++];
}
while(j<=high)
{
	b[k++]=arr[j++];
}
k=0;
for(j=low;j<=high;j++)
{
	arr[j]=b[k];
	k++;
}
}
void mergesort(int arr[5], int low, int high)
{
	int mid;
if(low < high)
{
	mid=(low+high)/2;
	mergesort(arr,low,mid);
	mergesort (arr,mid+1,high);
	merge (arr,low,mid,high);
}
}
int main()
{
	int arr[5]={22,19,5,2,11};	
	int i;

	mergesort(arr,0,4);

	printf("\nOrder of Sorted element is:");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
return 0;
}
