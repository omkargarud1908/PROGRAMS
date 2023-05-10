#include <iostream>
using namespace std;
float volume(float s)
{
return s*s*s;
}
float volume(float r,float h)
{
return 3.14*r*r*h;
}
int main()
{
    int ch;
    while (1)
    {
     cout<<"1. Volume of Cube \n";
	cout<<"2. Volume of Cylinder \n";
	cout<<"3. Volume of Sphere \n";
	cout<<"4. EXIT \n";
	cout<<" Enter a choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            float side;
            cout << "Enter a side : ";
            cin >> side;
            cout<< "Volume of Cube : "<<volume(side)<<endl;
            break;
        case 2:
            float radius, height;
            cout << "Enter a Radius : ";
            cin >> radius;
            cout << "Enter a Height : ";
            cin >> height;
            cout<< "Volume of Cylinder : "<<volume(radius,height)<<endl;
            break;
        case 3:
            float r;
            cout << "Enter a Radius : ";
            cin >> r;
            cout<< "Volume of Sphere : "<<4/3*3.14*volume(r)<<endl;
            break;
        case 4:
            exit(1);
        default:
            cout << "Invalid Choice \n";
        }
    }
return 0;
}

