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
    int i, j;
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
                printf("0");
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

void lru()
{
    int i, j, k, index, min, lru[MAX];
    for(i=0; i<nr; i++)
    {
        if(searchpage(ref[i]) == -1)
        {
            if(pos < nf)
            {
                frames[pos] = ref[i];
                lru[pos] = i;
                pos++;
            }
            else
            {
                min = lru[0];
                index = 0;
                for(j=1; j<nf; j++)
                {
                    if(lru[j] < min)
                    {
                        min = lru[j];
                        index = j;
                    }
                }
                frames[index] = ref[i];
                lru[index] = i;
            }
            faults++;
        }
        else
        {
            for(k=0; k<nf; k++)
            {
                if(frames[k] == ref[i])
                    lru[k] = i;
            }
        }
        for(j=0; j<nf; j++)
        {
            mem[j][i] = frames[j];
        }
    }   
}

int main()
{
   accept();
   lru();
   display();
   return 0;
}