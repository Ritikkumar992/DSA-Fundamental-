#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     int a = 45;
    cout << "The value of a was " << a << endl;
    a = 54;
    cout << "The value of a is " << a << endl;

    /***Constant in c++ *********/
    /*const int b = 65;
    cout<<"The value of b was "<<b <<endl;
    b = 56;//you  will get an error because here we declared  b as a constant. 
    cout<<"The value of b is "<<b <<endl;*/

    /*****Manipulators in c++****/
    int x = 122, y = 3455, z = 22;
    cout<<"The value of x without setw is "<<x<<endl;
    cout<<"The value of y without setw is "<<y<<endl;
    cout<<"The value of z without setw is "<<z<<endl;

    cout<<"The value of x with setw is "<<setw(5)<<x<<endl;
    cout<<"The value of y with setw is "<<setw(5)<<y<<endl;
    cout<<"The value of z with setw is "<<setw(5)<<z<<endl;

    /*int x_ = 1, y_ = 12, z_ = 123, z__ = 1234;
    cout <<"THe value of x_ with setw is "<<setw(4)<<x_<<endl;
    cout <<"THe value of y_ with setw is "<<setw(4)<<y_<<endl;
    cout <<"THe value of z_ with setw is "<<setw(4)<<z_<<endl;
    cout <<"THe value of z__ with setw is "<<setw(4)<<z__<<endl;*/

    /****Operator precednce***/
    int p = 6, q = 5;
    int r = ((((p*8)+q)-45)+2);//Left to right precedence;
    cout<<"The value of r is "<<r<<endl;
    
    /*int b = 56, c = 23;
    int d = (((((6*b)+52)-c)*2)/5);  
    cout<<"The value of d is "<<d<<endl;*/

    

return 0;
}