#include<stdio.h>
#include<string.h>
int c=0,i=0;
int palindrome(char *p,int n)
{
	for(i=0;i<n;i++)
	{
		if(p[i]==p[n-i-1])
			c++;
	}
	if(c==i)
	return 1;
	else 
	return 0;



}
int main()
{
	char str[10];
	int n;
	printf("Enter string: ");
	gets(str);
	n = strlen(str);
	if(palindrome(str,n))
	printf("\nstring is palindrome\n");
	else
	printf("\nstring is not palindrome\n");

	return 0;
}

