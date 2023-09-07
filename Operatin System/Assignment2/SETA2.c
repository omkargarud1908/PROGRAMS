#include <stdio.h>
#include <string.h>

struct data 
{

	int at , bt , st , ct , tat , wt ;
	char name[5] ;
};

int n , tt = 0 ;

struct data d1[10] ;   
void accept();
void sort();
void b_sort();
void process();
void display();

int main()
{
	accept();
	sort();
    b_sort();
	process();
	display();
	return (0);
}
void accept()
{
	printf("How many processes : ");
	scanf("%d",&n);
	for( int i = 0 ; i < n ; i++ )
	{
		printf("Enter Process name : ");
		scanf("%s" , d1[i].name);
		printf("Enter Arrival time : ");
		scanf("%d" , &d1[i].at);
		printf("Enter Burst time : ");
		scanf("%d" , &d1[i].bt);
	}
	
}
 
void sort()
{
    struct data temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (d1[j].at > d1[j + 1].at || (d1[j].at == d1[j + 1].at && d1[j].bt > d1[j + 1].bt))
            {
                temp = d1[j];
                d1[j] = d1[j + 1];
                d1[j + 1] = temp;
            }
        }
    }
}


void b_sort()
{
    struct data temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (d1[i].at <= tt && d1[j].at <= tt && d1[i].bt > d1[j].bt)
            {
                temp = d1[i];
                d1[i] = d1[j];
                d1[j] = temp;
            }
        }tt += d1[i].bt;
    }
    
}


void process()
{
    tt = 0 ;
	for( int i = 0 ; i < n ; i++ )
	{
		if ( tt < d1[i].at )
		{
			tt = d1[i].at ;
		}
		
		d1[i].st = tt ;
		d1[i].ct = d1[i].st + d1[i].bt ;
		d1[i].wt = d1[i].st - d1[i].at ;
		d1[i].tat = d1[i].ct - d1[i].at ;
		tt += d1[i].bt ; 
	}
}

void display()
{
	float stat = 0 , swt = 0 ; 
	int i ;
	printf("P#\tAt\tBt\tSt\tCt\tWt\tTat\n");
	for(i = 0 ; i < n  ; i++ )
	{
				printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n",d1[i].name,d1[i].at,d1[i].bt,d1[i].st,d1[i].ct,d1[i].wt,d1[i].tat);
		stat += d1[i].tat ;
		swt += d1[i].wt ;
	} 
	printf("Average Tat = %.2f \nAverage Wt = %.2f \n" , stat/n , swt/n ) ;
		
	printf("Gantt Chart \n");
	for( i = 0 ; i < n ; i++ )
	{
		printf("%s->",d1[i].name);
	}
	printf("\n");
}