#include <iostream>
//#include<complex>
using namespace std;
//Forward  declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex); //declaration
    int sumImaginaryComplex(Complex, Complex); //declaration
};
class Complex
{
    int a, b;
    //Individually declaring fuctions as friend.
    /*friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator::sumImaginaryComplex(Complex o1, Complex o2);*/

    //Aliter:Declaring the entire calculator class as friend.
    friend class Calculator; 

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "Your complex number is " << a << " + " << b << " i " << endl;
    }
};
int Calculator::sumRealComplex(Complex o1, Complex o2)//Definition
{
    return (o1.a + o2.a);
}
int Calculator::sumImaginaryComplex(Complex o1, Complex o2)//Definition
{
    return (o1.b + o2.b);
}

int main()
{
      Complex o1,o2;
      o1.setNumber(1,4);
      o2.setNumber(5,6);
      Calculator calc;
      int res =calc.sumRealComplex(o1,o2);
      int resc =calc.sumImaginaryComplex(o1,o2);
      cout<<"The sum of real part of o1 and o2 is " <<res<<endl;
      cout<<"The sum of Imaginary part of o1 and o2 is " <<resc<<endl;

    return 0;
}