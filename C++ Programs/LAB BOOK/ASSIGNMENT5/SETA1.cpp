#include <iostream>
using namespace std;
inline float circle_area(float r)
{
    return 3.14 * r * r;
}
inline float rect_area(float l, float w)
{
    return l * w;
}
inline float square_area(float s)
{
    return s * s;
}
int main()
{
    int ch;
    while (1)
    {
     cout<<"1. Area of Circle \n"; 
	cout<<"2. Area of Rectangle \n";
	cout<<"3. Area of Square \n";
	cout<<"4. Exit \n";
	cout<<"Enter a choice : "<<endl;
        cin >>ch;
        switch (ch)
        {
        case 1:
            float radius;
            cout<< "Enter a radius : ";
            cin >> radius;
            cout << "Area of Circle :"<<circle_area(radius)<<endl<<endl;
            break;
        case 2:
            float length, width;
            cout<< "Enter a length : ";
            cin >> length;
            cout<< "Enter a width : ";
            cin >> width;
            cout << "Area of Rectangle : "<<rect_area(length,width)<<endl<<endl;
            break;
        case 3:
            float side;
            cout<< "Enter a side : ";
            cin >> side;
            cout << "Area of Square :  "<<square_area(side)<<endl<<endl;
            break;
        case 4:
            exit(1);
        default:
            cout << "Invalid Choice !!" << endl;
        }
    }
    return 1;
}
