#include<iostream>
using namespace std;
class Point
{
	int x,y;
	public:
		Point()
		{
			x=0;
			y=0;
		}
		Point(int a,int b)
		{
			x=a;
			y=b;
		}
		Point(const Point &p1)
		{
			x = p1.x;
			y = p1.y;
		}
		void display()
		{
			cout<<x<<endl;
			cout<<y<<endl;
		}
};

int main()
{
	Point p1(5,7);
	p1.display();
	Point p2(p1);
	p2.display();
}
