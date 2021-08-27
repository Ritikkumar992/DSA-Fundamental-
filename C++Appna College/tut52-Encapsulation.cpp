//Encapsulation --->Hiding sensitive data from user.
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a;
    void funA(){
        cout<<"FunA"<<endl;
    }
    protected:
    int b;
    void funB(){
        cout<<"FunB"<<endl;
    }
    private:
    int c;
    void funC(){
        cout<<"FunC"<<endl;
    }
};
int main(){
    A obj;
    obj.funA();
  //  obj.funB();--->throws an error.
    return 0;
}