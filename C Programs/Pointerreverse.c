#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[10];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int *p=&arr[0];
	int *q=&arr[n-1];
	
	printf("reverse of array \n");
	while(p<q)
	{
		*p=*p+*q;
		*q=*p-*q;
		*p=*p-*q;
		p++;
		q--;		
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
/*this is program of reverse array*/

