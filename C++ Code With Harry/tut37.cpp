#include <iostream>
using namespace std;
//Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
//Derived class::Synatax
/*class {{derived-class-name}} : {{visibility-mode}}  {{base-class-name}}
{
members\methods\eeetc..
 }

 /* Note 1.default visibility mode is private 
    2. Public visibility mode:public member of the base class becomes
    public member of the derived class.
    3.Private visibility mode:public member of the base class becomes
    private member of the derived class.
    4. Private member are never inherited .*/

//creating a programer class , derived from Employee Base class
class programmer : public Employee
{
public:
    int languageCode = 9;
    programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee ritik(1), rohan(2);
    cout << ritik.salary << endl;
    cout << rohan.salary << endl;
    programmer skillF(10);
    cout << skillF.languageCode<< endl;
    cout << skillF.id<< endl;
    skillF.getData();
    return 0;
}