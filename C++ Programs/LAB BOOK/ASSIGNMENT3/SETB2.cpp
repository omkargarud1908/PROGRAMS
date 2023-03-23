#include<iostream>
using namespace std;
class Date
{
	int d,m,y;
	public:
		Date(int date,int month,int year)
		{
			d=date;
			m=month;
			y=year;
		}
	void format()
		{
			switch(m)
			{
				case 1:
				cout<<d<<"-Jan-"<<y<<endl;
				break;
				
				case 2:
				cout<<d<<"-Feb-"<<y<<endl;
				break;

				case 3:
				cout<<d<<"-Mar-"<<y<<endl;
				break;

				case 4:
				cout<<d<<"-jan-"<<y<<endl;
				break;

				case 5:
				cout<<d<<"-May-"<<y<<endl;
				break;
				
				case 6:
				cout<<d<<"-June-"<<y<<endl;
				break;

				case 7:
				cout<<d<<"-July-"<<y<<endl;
				break;

				case 8:
				cout<<d<<"-Aug-"<<y<<endl;
				break;

				case 9:
				cout<<d<<"-Sept-"<<y<<endl;
				break;

				case 10:
				cout<<d<<"-Oct-"<<y<<endl;
				break;

				case 11:
				cout<<d<<"-Nov-"<<y<<endl;
				break;
				
				case 12:
				cout<<d<<"-Dec-"<<y<<endl;
				break;
			
				default:
				cout<<"Enter the right month"<<endl;
			}

		}	
};

int main()
{
	
	int date,month,year;
	cout<<"Enter the date-month-year :"<<endl;
	cin>>date>>month>>year;

	Date d1(date,month,year);
	d1.format();
}
