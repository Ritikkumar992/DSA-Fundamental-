#include<bits./stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex (int, int);//--->parametrised constructor declared .
    void printData(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex::Complex(int x, int y){//--->parametrised constructor declared as it contains two parameters .
    a = x;
    b = y;
}
int main(){
    //Implicit call
    Complex a(4, 6);
    a.printData();

    //Explicit call
    Complex b = Complex(5, 7);
    b.printData();
    return 0;
}
