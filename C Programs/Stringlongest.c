#include<string.h>
#include<stdio.h>
int c=-1,i=0,j=0;
int count,longestp=0,letter,longest=0;
int check(char str[],char city[],int n)
{
        while(str[i]!='\0')
        {
            if(str[i]==city[0])
            {
                c=i;
                for(j=0;j<strlen(city);j++)
                {
                    if(str[i]==city[j])
                        count++;
                        i++;
                }
                if(count==strlen(city))
                {
                    printf("\n%s is found at position %d\n",city,c);
                    break;
                }
                else
                {
                    count=0;
                    c=1;
                }
            }
            i++;
        }
        if(c==1)
        printf("city is not present");       
}
int largest(char str[],int n)    
{
    for(i=0;i<strlen(str);i++)
        {
            for(letter=0;str[i]!='\0'&&str[i]!=' ';i++)
            {
                letter++;
            }
            if(letter>longest)
            {
                longest=letter;
                longestp=i-longest;
            }
        }
        printf("\n");
        printf("The longest string is");
        printf("'%.*s\n'",longest,str+longestp);
}
int main()
{
    char str[20];
    char city[20];
    int n;
    printf("Enter cities: ");
    gets(str);
    printf("Enter city ");
    gets(city);
    check(str,city,n);
    largest(str,n);
    return 0;
}
