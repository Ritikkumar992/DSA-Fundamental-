#include<bits./stdc++.h>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
    void setData(void){
        cout<<"Enter your id ";
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<"and this is employee number "<<count<<endl;

    }
    void static getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee ::count;
int main(){
    Employee ritik;
    ritik.setData();
    ritik.getData();
    Employee::getCount();
    return 0;
}