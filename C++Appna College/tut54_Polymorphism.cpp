//ploymorphism mean having many form.
//There are two types of polymorphism one is compile time & other is run time.
//1.Coplile time--->1.Function overloading & operator overloading.
//2.Run time ---->Virtual function.

/********Function overloading**********/
#include<bits/stdc++.h>
using namespace std;
class students{
    public:
    void fun(){
        cout<<"I am a function with no arguments "<<endl;
    }
    void fun(int a){
        cout<<"I am a function with int argument "<<endl;
    }
    void fun(double a){
        cout<<"I am a function with double argument "<<endl;
    }
};
int main(){
    students obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.3);
    return 0;
}
/*********Operator overloading**********/
#include<bits/stdc++.h>
using namespace std;
class complex{
    private:
     int real,imag;
    public:
      complex(int r,int i){
          real = r;
          imag = i;
      }
    complex operator + (complex const &obj){
        complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display(){
        cout<<real<<" +i "<<imag<<endl;
    }
};
int main(){
    complex c1(16,3),c2(1,3);
    complex c3 = c1+c2;
    c3.display();
    return 0;
}
//2.Run time  Polymorhism 
/********Operator overriding-->virtual function************/
#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    virtual void print(){
        cout<<"This is base class's prit function "<<endl;
    }
    void display(){
        cout<<"This is base class's display function "<<endl;
    }
};
class Derived:public Base{
    public:
    void print(){
        cout<<"This is derived class's prit function "<<endl;
    }
    void display(){
        cout<<"This is derived class's display function "<<endl;
    }
};
int main(){
    Base *baseptr;
    Derived d;
    baseptr = &d;

    baseptr ->print();
    baseptr-> display();
    return 0;
}