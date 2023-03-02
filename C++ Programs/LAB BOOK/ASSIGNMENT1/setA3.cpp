#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    do
    {
    cout<<"\nenter first number:"<<endl;
    cin>>a;
    cout<<"\nenter second number"<<endl;
    cin>>b;
    cout<<"\n+.ADDITION"<<"\n-.SUBTRACTION"<<"\n.MULTIPLICATION"<<"\n/.DIVISION"<<"$.EXIT"<<endl;
    cin>>ch;
    switch(ch)
        {
        case '+' : cout<<"ADDITION:"<<a+b;
                    break;
        case '-' : cout<<"SUBTRACTION:"<<a-b;
                    break;
        case '*' : cout<<"MULTIPLICATION:"<<a*b;
                    break;
        case '/' : cout<<"DIVISION:"<<a/b;
                    break;
        case '$' : exit(1);
        default : cout<<"invalid input";
        }
    }while(1);
    return 0;
}