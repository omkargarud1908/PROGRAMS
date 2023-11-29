#include <stdio.h>
#define MAX 20

int frames[MAX], ref[MAX], mem[MAX][MAX], faults, nf, nr, pos;
void accept()
{
    int i;
    printf("Enter the no.of frames:");
    scanf("%d",&nf);
    printf("Enter the no.of references:");
    scanf("%d",&nr);
    printf("Enter the reference String:\n");
    for(i=0; i<nr; i++)
    {
        printf("[%d]=",i);
        scanf("%d",&ref[i]);
    }
}
void display()
{
    int i,j;
    for(i=0; i<nr; i++)
    printf(" %d",ref[i]);
    printf("\n\n");
    for(i=0; i<nf; i++)
    {
        for(j=0; j<nr; j++)
        {
            if(mem[i][j])
                printf("%d",mem[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("Total fault pages are: %d\n",faults);
}
int searchpage(int pno)
{
    int i;
    for(i=0; i<nf; i++)
    {
        if(frames[i]==pno)
            return i;
    }
    return -1;
}
void fifo()
{
    int i,j;
    for(i=0; i<nr; i++)
    {
        if(searchpage(ref[i])== -1)
        {
            frames[pos]=ref[i];
            pos=(pos+1)%nf;
            faults++;
        }
        for(j=0; j<nf; j++)
        {
            mem[j][i]=frames[j];
        }
    }   
}
int main()
{
   accept();
   fifo();
   display();
   return 0;
}