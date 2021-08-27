#include<bits./stdc++.h>
using namespace std;
class Base{
   public:
   int var_base;
   void display(){
       cout<<"Displaying Base Class Variable "<<var_base<<endl;
   }
};
class Derived: public Base{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying derived class variable "<<var_derived<<endl;
        
    }
};
int main(){
    Base *base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived;//pointing Base Class Pointer to derived class.
    base_pointer ->var_base = 43;
    // base_pointer ->var_derived = 43; ---->This will throw an error
    base_pointer ->display();

    Derived *derived_pointer;
    derived_pointer = &obj_derived;//pointing Derived Class Pointer to derived class.
    derived_pointer->var_derived = 141;
    derived_pointer->var_base = 413;
    derived_pointer->display();



    return 0;
}