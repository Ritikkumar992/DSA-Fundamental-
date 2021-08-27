#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }//Below lines means that non member - sum Complex function is allowed to do
    //anything with my private member
    friend Complex sumComplex(Complex o1, Complex o2); 
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
        
    }
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(4, 5);
    c1.printNumber();

    c2.setNumber(7, 9);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
/*
## Properties of Friend function::------>
1.NOt in the scope of the class.
2. Since it is not in the scope of a class , it cannot be called from
   the object of that class .i.e c1.sumcomplex()==invalid;
3.Can be invoked without the help of any function.
4.Usually contain the object as argument.
5.Can be decalred inside the public or private section of the class.
6.It cannot access the members directly by their names and need object_name.member_name
   to access any member.
*/