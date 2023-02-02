#include<stdio.h>
int main()
{
 int s[10][10],i,n,j;
 int indegree,outdegree,total=0;
 
 printf("\nEnter how many vertices:");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("Is there edge between V%d and V%d:",i+1,j+1);
   scanf("%d",&s[i][j]);
   }
 }
printf("Vertices\tIndegree\tOutdegree\n");
for(i=0;i<n;i++)
{
 indegree=0;
 outdegree=0;

for(j=0;j<n;j++)
{
 indegree=indegree+s[j][i];
 outdegree=outdegree+s[i][j];
}
total=total+indegree;

printf("V%d\t\t%d\t\t%d\n",indegree,outdegree,i);
}
printf("Total Degree=%d\n",total);
}
