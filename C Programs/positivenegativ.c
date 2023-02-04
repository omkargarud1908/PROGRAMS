#include<stdio.h>
	int main()
	{
		int i;
		printf("Enter a number: ");
		scanf("%d",&i);
		if(i<0)
		printf("Number is negative ");
		else if(i>0)
		printf("Number is positive ");
		else 
		printf("Number is zero ");
	return 0;
	}
