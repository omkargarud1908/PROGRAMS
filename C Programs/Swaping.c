#include<stdio.h>
#define SWAP(a,b)
int t;
t=a;
a=b;
b=t;
}  
int main()
{
	int a,b;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("after swaping:");
	printf("%d\t%d",SWAP(a,b));

	return 0;

}
