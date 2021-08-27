#include<bits./stdc++.h>
using namespace std;
class Hindi{
    public:
    void greet(){
        cout<<"Kaise ho app!! "<<endl;
    }
};
class English{
    public:
    void greet(){
        cout<<"How are you!! "<<endl;
    }
};
class Bhopuri{
    public:
    void greet(){
        cout<<"Ki hall ba!! "<<endl;
    }
};
class MultiLingual:public Hindi,public English,public Bhopuri{
    public:
    void greet(){
        Hindi::greet(); //------>Ambiguity resolved .
    }
};
int main(){
    Hindi Person1;
    Person1.greet();

    English Person2;
    Person2.greet();

    Bhopuri Person3;
    Person3.greet();

    MultiLingual Person4;
    Person4.greet();
    return 0;
}