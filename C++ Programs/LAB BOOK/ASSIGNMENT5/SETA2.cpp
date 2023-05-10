#include <iostream>
using namespace std;
class Number2;
class Number1
{
    int a;

public:
    Number1(int x)
    {
        a = x;
    }
    friend int subtraction(Number1, Number2);
};
class Number2
{
    int b;

public:
    Number2(int y)
    {
        b = y;
    }
    friend int subtraction(Number1, Number2);
};
int subtraction(Number1 n1, Number2 n2)
{
    return n1.a - n2.b;
}
int main()
{
    int a, b;
    cout << "Enter a number 1 : ";
    cin >> a;
    cout << "Enter a number 2 : ";
    cin >> b;
    Number1 n1(a);
    Number2 n2(b);
    cout << endl
         << "subtraction : " << subtraction(n1, n2) << endl;
    return 1;
}
