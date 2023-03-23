#include<iostream>
using namespace std;
class Worker
{
	char w_name;
	int no_of_day;
	int pay_rate;
	
	public:
		Worker()
		{
			no_of_day = 0;
			pay_rate = 0;
		}
		Worker(char name,int day,int rate)
		{
			w_name = name;
			no_of_day = day;
			pay_rate = rate;
		}
		Worker(const Worker &w1)
		{
			w_name = w1.w_name;
			no_of_day = w1.no_of_day;
			pay_rate = w1.pay_rate;
		}
		void sal()
		{
			int sal = no_of_day*pay_rate;
			cout<<"The total salary is :"<<sal<<endl;
		}
	 
};


int main()
{
	int rate,day;
	char name;
	cout<<"Enter the per day rate"<<endl;
	cin>>rate;
	cout<<"Enter the no of day"<<endl;
	cin>>day;
	cout<<"Enter the name of the employee"<<endl;
	cin>>name;
	
	Worker w1(name,day,rate);
	w1.sal();
	Worker w2;
	w2.sal();
	Worker w3(w1);
	w3.sal();
}
