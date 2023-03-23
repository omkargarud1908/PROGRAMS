#include<iostream>
#include<cmath>
using namespace std;
class Mobile
{
	int m_id;
	char m_name;
	float m_price;
	
	public:
		Mobile(int id,char name,float price)
		{
			m_id = id;
			m_name = name;
			m_price = ceil(price);
		}
		void display()
		{
			cout<<m_id<<endl;
			cout<<m_name<<endl;
			cout<<(m_price)<<endl;

		}


};
int main()
{
	char a;
	int id;
	float price;

	cout<<"Enter the name"<<endl;
	cin>>a;
	cout<<"Enter the id"<<endl;
	cin>>id;
	cout<<"Enter the price"<<endl;
	cin>>price;
	Mobile m1(id,a,price);
	m1.display();
}
