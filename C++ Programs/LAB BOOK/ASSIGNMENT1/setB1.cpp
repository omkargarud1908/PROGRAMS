#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    cout<<"factors of given number:";
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    return 0;
}