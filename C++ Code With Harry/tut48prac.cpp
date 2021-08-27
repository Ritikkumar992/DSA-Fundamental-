#include<bits./stdc++.h>
using namespace std;
class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 constructor is invoked !! "<<endl;
    }
    void printDataBase1(){
        cout<<"The value of Base1 is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 constructor is invoked !! "<<endl;
    }
    void printDataBase2(){
        cout<<"The value of Base1 is "<<data2<<endl;
    }
};
class Derived:public Base1, public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d):Base1(a),Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor is invoked!! "<<endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main(){
    Derived ritik(1, 2, 3, 4);
    ritik.printDataBase1();
    ritik.printDataBase2();
    ritik.printDataDerived();
    
    return 0;
}