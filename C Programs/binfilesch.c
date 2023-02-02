 #include<stdio.h>
typedef struct city
{
	char name[20];
	int code;
}city;
int fileread (city a[20])
{
	FILE *fp;
	int i=0;
	
	fp=fopen("cities.txt","r");
if(fp==NULL)
printf("File not exist");
else
{
	while(!feof(fp))
	{
		fscanf(fp,"%s %d",a[i].name,&a[i].code);
		i++;
	}
	fclose(fp);
}
return i-1;
}
int main()
{
	int i,n;
	char key[20];
	city a[20];
	n=fileread(a);
	
	for(i=0;i<n;i++)

	printf("%s%d\n",a[i].name,a[i].code);
	linearsearch(n);
}
linearsearch(int n)
{		
	int i;
	city a[20];
	n=fileread(a);
	char str[20];
int index,flag=0;
printf("Enter the City Name:\n");
scanf("%s",str);
for(i=0;i<n;i++)
{
	if(strcmp(str,a[i].name)==0)
	{
		flag=1;
		index=i;
	}
}
if(flag==1)
printf("City Code is:%d\n",a[index].code);
else
printf("City is not in the List.");
}

