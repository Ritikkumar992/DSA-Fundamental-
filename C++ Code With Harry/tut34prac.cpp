/*#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
     
     Number(Number &obj){
           cout<<"Copy constructor called!!! "<<endl;
           a = obj.a;
     }
    
    void displayNumber()
    {
        cout << "Your number is " << a << endl;
    }
};

int main()
{
    Number x(6), y(34), z(42);
    x.displayNumber();
    y.displayNumber();
    z.displayNumber();

    Number z1(x);//-->copy constructor invoked
    z1.displayNumber();
    return 0;
}*/
#include<bits./stdc++.h>
using namespace std;
class Number{
    int a;
    public:
     Number(){
         a = 0;
     }
     Number(int num){
         a = num;
     }
     Number(Number &obj){//----->copy costructor is called!!
         cout<<"Copy constructor is called "<<endl;
         a = obj.a;
     }
     void display(){
         cout<<"The number for this object is "<<a<<endl;
     }
};
int main(){
    Number x,y,z;
    x.display();
    y.display();
    z.display();

    Number z1(x);//-->copy constructor invoked
    z1.display();
    return 0;
}