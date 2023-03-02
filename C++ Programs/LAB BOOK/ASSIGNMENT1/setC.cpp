#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,count=0;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<"\t";
        }
        for(k=1;k<=i;k++)
        {
            cout<<count<<"\t";
            count+=1;
        }
        cout<<"\n";
    }
}

