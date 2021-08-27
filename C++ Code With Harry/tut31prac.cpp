#include <bits./stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void printData()
    {
        cout << "your complex number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 2);
    c1.printData();

    Complex c2(7);
    c2.printData();

    Complex c3;
    c3.printData();
    return 0;
}