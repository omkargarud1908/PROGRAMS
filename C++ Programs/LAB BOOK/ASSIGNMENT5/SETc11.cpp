#include<iostream>
#include<cstring>
using namespace std;
class PrintData
{
public:
void print(int n){
cout<<"<"<<n<<">"<<endl;
}
void print(char *p){
cout<<p<<endl;
}
void print(int n, char *p){
if(strlen(p) < n){
cout<<"Out of length of String..."<<endl;
return;
}
for (int i = 0; i<n; i++)
{
cout<<*(p+i);
}
cout<<endl;
}
};
int main()
{
PrintData p;
int num,ch;
char *str;
while(1)
{
cout<<"1. Print Integer"<<endl<<"2. Print String"<<endl<< "3. display N number of Characters "<<endl<<"4. EXIT "<<endl<<"Enter a choice : ";
cin>>ch;
switch(ch)
{
        case 1: cout<<endl<<"Enter a Integer : ";
        cin>>num;
        p.print(num);
        break;
        case 2: cout<<endl<<"Enter a String : ";
        cin>>str;
        p.print(str);
        break;
        case 3: cout<<endl<<"Enter a String : ";
        cin>>str;
        cout<<"Enter a Integer : ";
        cin>>num;
        p.print(num,str);
        break;
        case 4: cout<<endl<<"Thank You !!!"<<endl;
        exit(1);
        default : cout<<"Invalid Choice !!!"<<endl;
}
}
return 1;
}
