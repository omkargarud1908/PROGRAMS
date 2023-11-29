#include <stdio.h>
#include <stdbool.h>

bool ispresent(int n, int frames[], int k) 
{
    for (int i = 0; i < n; i++) 
    {
        if (frames[i] == k) 
        {
            return true;
        }
    }
    return false;
}
bool isavailable(int ref_string[],int k,int st)
{
    for(int i=st+1;i<15;i++)
    {
        if(ref_string[i]==k)
        {
            return true;
        }
    }
    return false;
}
int findindex(int ref_string[],int frames[],int st,int n)
{
    int arr[10],it;
    for(int j=0;j<n;j++)
    {
        if(!isavailable(ref_string,frames[j],st))
        {
            return j;
        }
        for(int i=15;i>st;i--)
        {
            if(frames[j]==ref_string[i])
            {
                arr[j]=i;
                break;
            }
        }    
    }
    int min=0;
    for(int i=0;i<n;i++)
    {
        if(min<arr[i])
        {
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(frames[i]==ref_string[min])
        {
            return i;
        }
    }
}
int main() 
{
    int n;
    int ref_string[] = {12, 15, 12, 18, 6, 8, 11, 12, 19, 12, 6, 8, 12, 15, 19, 8};
    printf("Enter the number of frames\n");
    scanf("%d", &n);
    int frames[n];

    for (int i = 0; i < n; i++) 
    {
        frames[i] = -1;
    }
    int pagefault = 0;
    int count = 0;
    int it = 0;
    for (int i = 0; i < sizeof(ref_string) / sizeof(ref_string[0]); i++) 
    {
        if (frames[it] == -1 && !ispresent(n, frames, ref_string[i]) && count < n) 
        {
            frames[it] = ref_string[i];
            pagefault++;
            count++;
            it++;
        } 
        else if (!ispresent(n, frames, ref_string[i])) 
        {
            int num=findindex(ref_string,frames,i,n);
            frames[num] = ref_string[i];
            pagefault++;
        }
        printf("  %d   |  ",ref_string[i]);
        for (int i = 0; i < n; i++) {
            printf("  %d  ", frames[i]);
        }
        printf("\n");
    }
    printf("Page fault = %d", pagefault);
}