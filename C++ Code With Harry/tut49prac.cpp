#include<bits./stdc++.h>
using namespace std;
class Base{
    int a;
    int b;
    public:
    Base(int i,int j):a(i),b(i+j){
        cout<<"The constructor is called !!! "<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    Base b(1,5);
    return 0;
}