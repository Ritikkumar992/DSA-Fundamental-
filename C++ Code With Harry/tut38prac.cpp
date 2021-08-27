#include<bits./stdc++.h>
using namespace std;
class Base{
    int data1;
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base::setData(void){
    data1 = 10;
    data2 = 20;
}
int Base::getData1(void){
    return data1;
}
int Base::getData2(void){
    return data2;
}
//--------->class Derived : private Base //class is derived privatelly.
class Derived : public Base{
    int data3;
    public:
    void process();
    void Dispaly();
};
void Derived::process(){
 //   setData();//---->Redefined here(if declared privately)
    data3 = data2 * getData1();
}
void Derived::Dispaly(){
    cout<<"The value of data1 is "<<getData1()<<endl;
    cout<<"The value of data2 is "<<data2<<endl;
    cout<<"The value of data3 is "<<data3<<endl;
}
int main(){
    Derived der;
    der.setData();
    der.process();
    der.Dispaly();
    return 0;
}