#include <iostream>
using namespace std;
class Complex;

class Calculator
{
public:
    int add(int a, int b){
        return (a + b);
    }
    int sumRealComplex(Complex, Complex); //declaration
    int sumImaginaryComplex(Complex, Complex); //declaration
};
  
class Complex
{
    int a, b;
    friend class Calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printData(void)
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
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
    Complex c1, c2;
    c1.setData(6, 8);
    c1.printData();

    c2.setData(7, 3);
    c2.printData();

    Calculator calc;
    int resr = calc.sumRealComplex(c1, c2);
    int resc = calc.sumImaginaryComplex(c1, c2);
    cout << "The sum of real part of o1 and o2 is " << resr << endl;
    cout << "The sum of Imaginary part of o1 and o2 is " << resc << endl;
    return 0;
}