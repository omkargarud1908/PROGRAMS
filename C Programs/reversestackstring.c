#include<stdio.h>
#include<string.h>

#define MAX 100

int top,stack[MAX];

void push(char c)
{
	if(top==MAX-1)
	{
		printf("Stack overflow");
	}
	else
	{
		stack[++top]=c;
	}
}

void pop()
{
	printf("%c",stack[top--]);
}

int main()
{
	char str[]="OMKAR GARUD";
	int len=strlen(str);
	int i;

	for(i=0;i<len;i++)
	push(str[i]);

	for(i=0;i<len;i++)
	pop();
}
 
