#include<stdio.h>
int main()
{	
 	int i,j;
	int *p[3][3];
	printf("Enter elements in two d array: ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&p[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				printf("%d ",p[i][j]);
			}
	printf("\n");
	}


return 0;
}
