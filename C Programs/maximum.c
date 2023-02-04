#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("%d is maxiumum than %d",a,b);
	else
		printf("%d is maxiumum than %d",b,a);

	return 0;
}
