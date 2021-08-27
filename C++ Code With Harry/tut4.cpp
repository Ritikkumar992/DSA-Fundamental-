#include <iostream>
using namespace std;

int glo = 60;//Declaration of global varaible

void sum()
{
    int a;
    cout<<" The value of global variable" << glo<<endl;
}
int main()
{
    int glo = 9;//Declaration of local varaible
   // glo = 78;
    int a = 4, b = 5;
    float pi = 3.14;
    char c = 'u';
    bool ritik = false;

    sum();//If we comment out sum () this we can't access the value of global variale.
    cout<<" The value of local variable" << glo << endl;
    cout << ritik << endl;
    cout << "This is tutorial 4.Here the value of a is " << a << endl;
    cout << "This is tutorial 4.Here the value of b is " << b << endl;
    cout << "This is tutorial 4.Here the value of pi is " << pi << endl;
    cout << "This is tutorial 4.Here the value of c is " << c << endl;

    return 0;
}
