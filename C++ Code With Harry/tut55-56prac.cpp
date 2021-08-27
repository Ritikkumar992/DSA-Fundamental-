#include<bits./stdc++.h>
using namespace std;
class Base{
    public:
    int var_base;
    void display(){
        cout<<"Displaying base class variable "<<var_base<<endl;
    }
};
class Derived:public Base{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying derived class variable "<<var_derived<<endl;
    }
};
int main(){
    Base *base_pointer;
    Base obj;
    Derived der_obj;
    base_pointer = &der_obj;
    base_pointer->var_base = 34;
    base_pointer->display();
     
     Derived *derived_class_ptr;
     derived_class_ptr = &der_obj;
     derived_class_ptr->var_derived=12;
     derived_class_ptr->var_base = 121;
     derived_class_ptr->display();
   
    return 0;
}