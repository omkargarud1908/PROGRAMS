#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,temp;
    cout<<"enter a number:";
    cin>>n;
    while(n>0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    cout<<"reverse of the given number is:"<<rev;
    return 0;
}