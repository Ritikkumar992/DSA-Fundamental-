#include<bits./stdc++.h>
using namespace std;
class Complex{
    int a, b;
    public:
    Complex(void); //----------->Constructor decalrared.
    void printData(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
 }
};
Complex::Complex(void){ //---->constructor definiton :: Default constructor(conatains no arguments).
    a = 10; 
    b = 20;
    cout<<"Hello world "<<endl;//-->They are automatically invoked whenever the object is created.
}
int main(){
    Complex c,c1,c2;
    c.printData();
    c1.printData();
    c2.printData();
    return 0;
}