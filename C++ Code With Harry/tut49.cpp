#include <iostream>
using namespace std;
/*
Synatax for intilization list in constructor:
constuctor(argument-list):intilization-section
{
    assignment + other code;
}
class Test{
    int a;
    int b;
    public:
    Test (int i, int j):a(i), b(j){constructor - body}
};
*/
class Test
{
    int a;
    int b;
    

public:
/****************************constructor initialization called.*******************/
    //Test (int i, int j):a(i), b(j)
    //Test (int i, int j):a(i), b(i+j)
    //Test (int i, int j):a(i), b(2*j)
    //Test (int i, int j):a(i), b(a+j)
    // Test(int i, int j) : b(j), a(i + b)--->This will create a problem bcz 'a' will 
             //  be initilise first
     Test(int i, int j) : a(i), b(i + j)
    {
        cout << "Constructor executed " << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    Test t(4, 6);
    return 0;
}