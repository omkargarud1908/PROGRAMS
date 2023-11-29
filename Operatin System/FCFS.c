#include<stdio.h>
struct FCFS
{
    int PID,AT,BT,CT,TAT,WT;
};

int main()
{
    int n,i,j,sum=0,sumtat=0,sumwt=0;
    struct FCFS f[20],temp;
    float avgTAT,avgWT;

    printf("Enter number of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter AT:");
        scanf("%d",&f[i].AT);
        printf("Enter BT:");
        scanf("%d",&f[i].BT);
        f[i].PID=i+1;
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(f[i].AT>f[j].AT)
            {
                temp=f[i];
                f[i]=f[j];
                f[j]=temp;
            }
        }
    }

    sum=sum+f[0].AT;
    for(i=0;i<n;i++)
    {
        sum=sum+f[i].BT;
        f[i].CT=sum;
        f[i].TAT=f[i].CT-f[i].AT;
        f[i].WT=f[i].TAT-f[i].BT;
    }

    printf("\nPID \t AT \t BT \t CT \t TAT \t WT");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d] \t %d \t %d \t %d \t %d \t %d",f[i].PID,f[i].AT,f[i].BT,f[i].CT,f[i].TAT,f[i].WT);

        sumtat+=f[i].TAT;
        sumwt+=f[i].WT;
    }
    avgTAT=sumtat/n;
    avgWT=sumwt/n;

    printf("\nGANTT CHART: ");
    for (i=0;i<n;i++)
    {
        printf("P[%d]->",f[i].PID);
    }
}