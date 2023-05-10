#include <iostream>
using namespace std;
class Rectangle2;
class Rectangle1
{
    float length, width;

public:
    Rectangle1(float l, float w)
    {
        length = l;
        width = w;
    }
    float put_area()
    {
        return length * width;
    }
    friend void both_area(Rectangle1, Rectangle2);
};
class Rectangle2
{
    float length, width;

public:
    Rectangle2(float l, float w)
    {
        length = l;
        width = w;
    }
    float put_area()
    {
        return length * width;
    }
    friend void both_area(Rectangle1, Rectangle2);
};
void both_area(Rectangle1 r1, Rectangle2 r2)
{
    if (r1.put_area() == r2.put_area())
    {
        cout<< "Both are same" << endl;
    }
    else
        cout<< "Both are Different" << endl;
}
int main()
{
    float l, w;
    cout << "Rectangle 1" << endl;
    cout << "Length : ";
    cin >> l;
    cout << "Width : ";
    cin >> w;
    Rectangle1 r1(l, w);
    cout<< "Rectangle 2" << endl;
    cout << "Length : ";
    cin >> l;
    cout << "Width : ";
    cin >> w;
    Rectangle2 r2(l, w);
    both_area(r1, r2);
    return 1;
}
