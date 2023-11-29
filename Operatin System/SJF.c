#include<stdio.h>
struct SJF
{
    int PID, AT, BT, TAT, WT, CT;
};

int main()
{
    int i, j, n, sum=0, sum1=0, sum2=0,tt=0;
    float avgTAT, avgWT;
    struct SJF s[10], temp;
    printf("\nEnter the no. of processes: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the Arrival time: ");
        scanf("%d",&s[i].AT);
        printf("Enter the Burst time: ");
        scanf("%d",&s[i].BT);
        s[i].PID=i+1;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].AT > s[j].AT || (s[i].AT == s[j].AT && s[i].BT > s[j].BT))
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].AT <= tt && s[j].AT <=tt && s[i].BT >s[j].BT)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
        tt+=s[i].BT;
    }
    sum = sum + s[0].AT;
    for(i=0; i<n; i++)
    {
        sum = sum + s[i].BT;
        s[i].CT = sum;
        s[i].TAT = s[i].CT - s[i].AT;
        s[i].WT = s[i].TAT - s[i].BT;
        
       
    }
    printf("\nPID\t AT\t BT\t CT\t TAT\t WT\n");
    for(i=0; i<n; i++)
    {
        printf("P%d\t %d\t %d\t %d\t %d\t %d\n",s[i].PID, s[i].AT, s[i].BT, s[i].CT, s[i].TAT, s[i].WT);
        sum1 += s[i].TAT;
        sum2 += s[i].WT;
    }
    avgTAT = sum1 / (float)n;
    avgWT = sum2 / (float)n;
    printf("\nAverage TAT: %2f\n", avgTAT);
    printf("Average WT: %2f\n", avgWT);

    printf("\nGantt Chart...");
    for(i=0; i<n; i++)
    {
        printf("P[%d]-->", s[i].PID);
    }
}