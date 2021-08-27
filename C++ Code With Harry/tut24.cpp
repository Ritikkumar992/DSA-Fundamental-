#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
    cout << "The id of this employee is " << id << " and this is employee number"<<count<<endl;
    }
    //static member  function
    static void getCount(void){
        cout<<"The value of cout is "<<count<<endl;
    }
};

//cout is the static data member of class employee.
int Employee::count; //Default value is 0.

int main()
{
    Employee ritik, aparna, panchi;
    // ritik.id=1; WE CAN'T DO SO AS "ID" AND "COUNT" ARE PRIVATE MEMBER.
    // ritik.count=1

    ritik.setData();
    ritik.getData();
    Employee::getCount(); //-->static function is called class name instead of obj name.

    aparna.setData();
    aparna.getData();
    Employee::getCount();//-->static function is called class name instead of obj name.

    panchi.setData();
    panchi.getData();
    Employee::getCount();//-->static function is called class name instead of obj name.

    return 0;
}
