#include<iostream>
using namespace std;
class number
{
	private :
		int x,y;
	public :
	number()
	{
		x=0;
		y=0;
	}
	
	number(int x, int y);
	void display()
	{
		cout<<" "<<x<<" "<<y<<endl;
	}
		void max();
}n1,n2,n3;

	number :: number (int x,int y)
	{
		this -> x=x;
		this -> y=y;
	}
	void number :: max()
	{
		if(x>y)
			cout<<"MAX IS:"<<x<<endl;
		else
			cout<<"MAX IS:"<<y<<endl;
	}

int main()
{
	int a,b,a1,b1,a2,b2;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter secound number:";
	cin>>b;
	number n1(a,b);
	cout<<"Enter first number:";
	cin>>a1;
	cout<<"Enter secound number:";
	cin>>b1;
	number n2(a1,b1);
	cout<<"Enter first number:";
	cin>>a2;
	cout<<"Enter secound number:";
	cin>>b2;
	number n3(a2,b2);
	n1.display();
	n2.display();
	n3.display();
	n1.max();
	n2.max();
	n3.max();
return 0;
}
	

	
