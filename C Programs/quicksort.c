#include<stdio.h>
void quicksort (int a[20], int lb, int ub)
{
	int j;
if(lb < ub)
{
	j=partition(a,lb,ub);
	quicksort(a,lb,j-1);
	quicksort(a,j+1,ub);
}
}
int partition(int a[20], int lb, int ub)
{
	int up,dn,temp,pivot;
	up=ub;
	dn=lb+1;
	pivot=a[lb];
	do
	{
		while((a[dn]<=pivot) && dn<=ub)
		{
			dn++;
		}
	while((a[up] > pivot) && up>lb)
	{
		up--;
	}
if(dn < up)
{
	temp=a[dn];
	a[dn]=a[up];
	a[up]=pivot;
}
	}
while (dn < up);

	a[lb]=a[up];
	a[up]=pivot;
	return up;
}
int main()
{
	int arr[40];	
	int num,i;
	printf("Enter how elements you want to enter?:");
	scanf("%d",&num);

	printf("\nEnter the %d elements:",i+1);
		for(i=0;i<num;i++)
	scanf("%d",&arr[i]);

	quicksort(arr,0,num-1);

	printf("\nOrder of Sorted element is:");
	for(i=0;i<num;i++)
	{
		printf("\t%d",arr[i]);
	}
return 0;
}
