#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Array
{
    int *p, n;

public:
    Array()
    {
        p = new int[100];
    }
    void getData()
    {
        cout << "How many elements you wants to enter : ";
        cin >> n;
        cout << "Enter a elements : \n";
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
    }
    double findMedian()
    {
        sort(p, p + n);
        if (n % 2 == 0)
        {
            return (double)p[(n - 1) / 2] + p[(n / 2)] / 2.0;
        }
        else
            return (double)p[n / 2];
    }
    ~Array()
    {
        delete[] p;
    }
};
int main()
{
    Array a;
    a.getData();
    cout << "\nMedian of given elements are : " << a.findMedian() << endl;
    return 1;
}
