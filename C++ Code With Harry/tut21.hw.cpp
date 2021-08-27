#include<bits./stdc++.h>
using namespace std;
class User{
    int a, b;
    public:
    int c, d;
    void setData(int a1, int b1);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
    }
};
void User::setData(int a1 , int b1){
    a = a1;
     b = b1;
}
int main(){
    User ritik;
    ritik.setData(12, 213);
      ritik.getData();
    ritik.c = 123123;
    ritik. d = 1312;
  
    return 0;
}