#include<bits./stdc++.h>
using namespace std;
class Base{
    public:
    int var_base = 34;
    virtual void display(){
        cout<<"Displaying Base class Variable "<<var_base<<endl;
    }
};
class Derived:public Base{
    public:
    int var_derived = 134;
    void display(){
        cout<<"1.Displaying Base class Variable "<<var_base<<endl;
        cout<<"2.Displaying Derived class Variable "<<var_derived<<endl;
    }
};
int main(){
    Base *base_pointer;
    Base objbase;
    Derived objderived;
    base_pointer = &objderived;
    base_pointer->display();
    return 0;
}