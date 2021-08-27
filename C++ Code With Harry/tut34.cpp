#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){//Default constructor
         a = 0;
    }

    Number(int num){
         a = num;
    }
//When no copy constructor found ,complier supplies its own copy constructor.
    Number(Number &obj){
         cout<<" Copy constructor called!!! "<<endl;
         a = obj.a;
    }

    void display (){
          cout<<" The number for this object is "<<a<<endl;
    }
}; 
int main(){
    Number x,y,z(9),z2;
    x.display();
    y.display();
    z.display();
    
    //z1 should exactly resemble 'z'
    
    Number z1(x);//-->copy constructor invoked
    z1.display();
    
    z2 = z;//-->copy constructor is not invoked 
    z2.display();
 
    Number z3 = z;//-->copy constructor invoked
    z3.display();
 
    
    return 0;
}