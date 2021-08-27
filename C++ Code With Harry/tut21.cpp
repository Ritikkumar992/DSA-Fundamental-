#include<iostream>
using namespace std;

class Employee
{
    private:
       int a, b, c;
    public:
       int d, e;
       void setData (int a1,int b1,int c1);//Declaration..
       void getData (){
           cout<<"The value of a is "<<a<<endl;
           cout<<"The value of b is "<<b<<endl;
           cout<<"The value of c is "<<c<<endl;
           cout<<"The value of d is "<<d<<endl;
           cout<<"The value of e is "<<e<<endl;
       }
};

void Employee:: setData (int a1, int b1, int c1){
    a = a1; 
    b = b1;
    c = c1;

}
int main(){
    Employee ritik;//----->Declaration of object 
   /* ritik.a=1;
    ritik.b=2;*/ //THIS WILL THROW ERROR AS 'A' AND 'B' ARE PRIVATE..
    ritik.d=4; 
    ritik.e=5;
    ritik.setData(1,2,3);//-->This is used to ensure the private data of the class Employee.
    ritik.getData ();

    return 0;
}