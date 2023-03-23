#include<iostream>
using namespace std;
class Sum
{
	int n;
	public:
		Sum(int num)
		{	
			n = num;
		}
		
		int add()
		{
		
			int sum=0;
			for(int i=1;i<=n;i++)
			{
				sum+=i;
			}
			cout<<"The sum is: "<<sum<<endl;
		}
};
int main()
{
	int n;
	cout<<"enter number:";
	cin>>n;
	Sum s1(n);
	s1.add();
}

