#include<iostream>
using namespace std;
class cylinder
{
	float radius, height;
	
	public:
	void set_radius(float r)
	{
	radius = r;
	}

	void set_height(float h)
	{
	height = h;
	}
	
	float volume()
	{
	return 3.14*radius*radius*height;
	}
	
	float area()
	{
	return 2*3.14*radius*(radius+height);
	}
};
int main()
{
	int r,h;
	cylinder c1,c2;
	cout<<"Enter radius:";
	cin>>r;
	cout<<"Enetr height:";
	cin>>h;
	c1.set_radius(r);
	c1.set_height(h);
	cout<<"Volume is:"<<c1.volume()<<endl;
	cout<<"Area is:"<<c1.area()<<endl;

	cout<<"Enter radius:";
	cin>>r;
	cout<<"Enetr height:";
	cin>>h;
	c2.set_radius(r);
	c2.set_height(h);
	cout<<"Volume is:"<<c2.volume()<<endl;
	cout<<"Area is:"<<c2.area()<<endl;
}
