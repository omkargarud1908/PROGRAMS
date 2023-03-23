#include<iostream>
using namespace std;
class SI
{
	int p;
	float r;
	int t;

	public:
		SI(int principal,int time,float rate = 5.4)
		{
			p = principal;
			t = time;
			r = rate;
		}
		void simpleinterest()
		{
			float si = (p*r*t)/100;
			cout<<"The simple interest is :"<<si<<endl;
		}
};

int main()
{
	SI a(1000,5,6.6);
	a.simpleinterest();
}

