#include<stdio.h>
#include<ctype.h>
int main()
{
	int i;
	printf("Enter a number: ");
	scanf("%d",&i);
	if(i%2==0)
	printf("Number is even");
	else
	printf("number is odd");

	return 0;
}
