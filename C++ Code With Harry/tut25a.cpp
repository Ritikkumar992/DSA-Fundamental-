#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary=12345678;
        cout<<"Enter id of Employee"<<endl;
        cin>>id;
    }
         void getId(void){
             cout<<"The id of this employee is "<<id<<endl;       
             }
};
int main(){
       /*Employee ritik, rupali,babul;
       ritik.setId(); 
       ritik.getId(); */
    
    // Array of objects.
         Employee vagabond[3];
         
         for (int i = 0; i < 3; i++)
         {
             vagabond[i].setId();
             vagabond[i].getId();
         }
         
    return 0;
}