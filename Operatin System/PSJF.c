#include <stdio.h>

struct SJF
{
    int PID, AT, BT, TAT, WT, CT, RT;
};

int main()
{
    int i, j, n, sum = 0, sum1 = 0, sum2 = 0, tt = 0;
    float avgTAT, avgWT;
    struct SJF s[10], temp;

    printf("\nEnter the no. of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the Arrival time for P%d: ", i + 1);
        scanf("%d", &s[i].AT);
        printf("Enter the Burst time for P%d: ", i + 1);
        scanf("%d", &s[i].BT);
        s[i].PID = i + 1;
        s[i].RT = s[i].BT;
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].AT > s[j].AT || (s[i].AT == s[j].AT && s[i].BT > s[j].BT))
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\nGantt Chart...\n");
    while (1)
    {
        int minIndex = -1;
        for (i = 0; i < n; i++)
        {
            if (s[i].RT > 0 && s[i].AT <= tt && (minIndex == -1 || s[i].RT < s[minIndex].RT))
            {
                minIndex = i;
            }
        }

        if (minIndex == -1)
        {
            break;
        }

        printf("P[%d]-->", s[minIndex].PID);
        tt++;
        s[minIndex].RT--;

        if (s[minIndex].RT == 0)
        {
            s[minIndex].CT = tt;
            s[minIndex].TAT = s[minIndex].CT - s[minIndex].AT;
            s[minIndex].WT = s[minIndex].TAT - s[minIndex].BT;
            
        }
    }

    printf("\n\nPID\t AT\t BT\t CT\t TAT\t WT\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t %d\t %d\t %d\t %d\t %d\n", s[i].PID, s[i].AT, s[i].BT, s[i].CT, s[i].TAT, s[i].WT);
        sum1 += s[i].TAT;
        sum2 += s[i].WT;
    }

    avgTAT = sum1 / (float)n;
    avgWT = sum2 / (float)n;
    printf("\nAverage TAT: %.2f\n", avgTAT);
    printf("Average WT: %.2f\n", avgWT);

    return 0;
}
