#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;//we use static function to count the number of employee.
    public:
      void setData(void){
          cout<<"Enter the Id "<<endl;
          cin>>id;
          count++;
      }
      void getData(void){
          cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl; 
          
      }
      static void getCount(void){//static function 
       cout<<"The value of count is "<<count<<endl;
      }
      
};
int Employee:: count;
int main(){
     Employee ritik , babul , rupali;
     ritik.setData();
     ritik.getData();
     Employee::getCount();

     babul.setData();
     babul.getData();
     Employee::getCount();

     rupali.setData();
     rupali.getData();
     Employee::getCount();
    return 0;
}
