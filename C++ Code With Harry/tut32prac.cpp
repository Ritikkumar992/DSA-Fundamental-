#include <iostream>
using namespace std;
class Simple
{
    int a, b, c;

public:
    Simple(int x = 12, int y=2, int z=3)
    {
        a = x;
        b = y;
        c = z;
    }
    void printData();
};
void Simple::printData()
{
    cout << "The value of a , b and c is "<< a <<" , "<<b<<" and "<< c <<"respectively."<< endl;
}
int main()
{
    Simple s(12);
    s.printData();
    return 0;
}
