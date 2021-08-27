#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base; 
    void display()
    {
        cout<<"Displaying Base Class Variable var_base "<< var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
    
public:
    int var_derived;
    void display()
    {
    //cout << " Displaying Base Class Variable var_base " << var_base << endl;
    cout<<" Displaying Derived Class Variable var_derived "<< var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //pointing Base Class Pointer to derived class.
    base_class_pointer->var_base = 34;
    /* base_class_pointer->var_derived = 134;//This will throw an error */
    base_class_pointer->display();

    base_class_pointer->var_base = 340;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived; //pointing Derived Class Pointer to derived class.
    derived_class_pointer->var_derived = 198;
    derived_class_pointer->var_base = 98;
    derived_class_pointer->display();

    return 0;
}