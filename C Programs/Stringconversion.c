#include<stdio.h>
#include<string.h>
void convert(char  *p)
{
	while(*p)
	{
		if(*p>=65&&*p<=90)
			*p=*p+32;
		else
			*p=*p-32;
	p++;
	}

}
int main()
{
	char str[10];
	printf("Enter a string: ");
	gets(str);
	convert(str);
	printf("String after conversion is: %s\n",str);

	return 0;
}

