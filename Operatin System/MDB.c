#include<stdio.h>

int allocation[10][10],need[10][10],max[10][10],avail[10],np,nr;

void read_matrix(int matrix[10][10])
{
    int i,j;
    for(i=0;i<np;i++)
    {
        for(j=0;j<nr;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
}

void display_matrix(int matrix[10][10])
{
    int i,j;

    for(i=0;i<np;i++)
    {
        printf("\np%d ",i);
        for(j=0;j<nr;j++)
        {
            printf(" %d",matrix[i][j]);
        }
    }
}

void calculate_max()
{
    int i,j;

    for(i=0;i<np;i++)
    {
        for(j=0;j<nr;j++)
        {
            max[i][j]=need[i][j]+allocation[i][j];
        }
    }
}

void banker()
{
    int i,j,k=0,flag;
    int safe_seq[10],finish[10];

    for(i=0;i<np;i++)
    {
        finish[i]=0;
    }

    for(i=0;i<np;i++)
    {
        flag=0;

        if(finish[i]==0)
        {
            for(j=0;j<nr;j++)
            {
                if(need[i][j] > avail[j])
                {
                    flag=1;
                    break;
                }
            }

            if(flag==0)
            {
                finish[i]=1;
                safe_seq[k]=i;
                k++;

                for(j=0;j<nr;j++)
                    avail[j]+=allocation[i][j];

                    i=-1;
                
            }
        }
    }

    flag=0;

    for(i=0;i<np;i++)
    {
        if(finish[i]==0)
        {
            printf("\nSyatem is in deadlock condition!!!");
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("\nSystem is in safe state\nSafe sequence is:\n");
        for(i=0;i<np;i++)
        printf("%d->",safe_seq[i]);
    }

}
int main()
{
    printf("\nEnter Number of process:");
    scanf("%d",&np);

    printf("\nEnter number of resourse:");
    scanf("%d",&nr);
    int ch;
do{
    
printf("\n1.Allocation\n2.Need\n3.Available\n4.Display\n5.exit\n");
 
 printf("\nEnter your choicse:");
 scanf("%d",&ch);




 switch(ch)
 {

    case 1:
    
        printf("\nEnter allocation:");
        read_matrix(allocation);
        break;
    

    case 2:
    
        printf("\nEnter Need:");
        read_matrix(need);
        break;
    

    case 3:
    
        printf("\nEnter Available resource:");
    for(int j=0;j<nr;j++)
    {
        scanf("%d",&avail[j]);
    }

    calculate_max();
    banker();

    break;
    
    case 4:
    
        printf("\nEntered data is:=======");

    printf("\nAllocation:");
    display_matrix(allocation);

    printf("\nNeed:");
    display_matrix(need);

    printf("\nAvailable is:");
    for(int j=0;j<nr;j++)
    {
        printf(" %d",avail[j]);
    }


    printf("\nMAx array is:");
    display_matrix(max);
    break;
    
    default:
        printf("\nInvalid choice. Please try again.\n");
 }
 
}
while(ch!=5);
}