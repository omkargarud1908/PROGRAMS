#include<iostream>
#include<string.h>
using namespace std;
class Mobile
{
	int m_id;
	char m_name[10];
	float m_price;
	
	public:
		Mobile(int id,char name[20],float price)
		{
			m_id = id;
			strcpy(this->m_name,name);
			m_price = price;
		}
		void display()
		{
			cout<<"ID:"<<m_id<<endl;
			cout<<"NAME:"<<m_name<<endl;
			cout<<"PRICE:"<<m_price<<endl;

		}


};
int main()
{
	char a[20];
	int id;
	float price;

	cout<<"Enter the Name:";
	cin>>a;
	cout<<"Enter the ID:";
	cin>>id;
	cout<<"Enter the Price:";
	cin>>price;
	Mobile m1(id,a,price);
	m1.display();
}
