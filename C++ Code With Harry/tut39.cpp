#include <iostream>
using namespace std;
class Base
{
protected://---> A private like variable which can be inherited.
    int a;

private:
    int b;
};
/*
For protectd member::
.                      Public derivation    Private derivation  protected derivation
   1.private member    not inherited        not inherited       not inherited
   2.protected member  protected            private             protected
   3.public member      public               private            protected
*/
class Derived : protected Base
{

};
int main()
{
    Base b;
    Derived d;
    /*cout<<d.a;--->This will not work as a is procted in both base as well as 
    derived class.*/
    return 0;
}