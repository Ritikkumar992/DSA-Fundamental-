#include<iostream>
using namespace std;

class complex{
    int a, b;
    friend  complex SumComplex(complex o1, complex o2);
    public: 
     void setNumber(int n1, int n2){
       a = n1;
       b = n2;
}
     void printNumber(void){
         cout<<"Your complex no is "<<a<<" + "<<b<<"i"<<endl;
     }
};
complex SumComplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}

int main(){
    complex c1,c2 ,c3;
    c1.setNumber(4,5);
    c2.setNumber(1,3);

    c1.printNumber();
    c2.printNumber();

    c3 = SumComplex(c1, c2);
    c3.printNumber();
    return 0;
}