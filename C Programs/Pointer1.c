#include <stdio.h>
int main()
{
int n,i,arr[10],*p;
do
   {
	printf("enter the size of array\n");
	scanf("%d",&n);
   }

while(n<=0);

for(i=0;i<n;i++)
   {
   printf("enter the %dth element in array\n",i+1);
   scanf("%d",&arr[i]);
   }

p=&arr[n-1];

for(i=0;i<n;i++)
   {
   printf("%d",*p--);
   }
return 0;
}
