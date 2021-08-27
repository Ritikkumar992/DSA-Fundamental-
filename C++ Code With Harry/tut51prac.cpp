#include<bits./stdc++.h>
using namespace std;
class Complex{
    int real , imaginary;
    public:
    void setData(int a, int b){
        a = real;
        b = imaginary;
    }
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
};
int main(){
   /**********Pointers to Object****************/
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setData(1,5);
    (*ptr).getData();
  /***********Array Operatot***********/
   Complex *ptr = new Complex[1];
   ptr->setData(1,4);
   ptr->getData();
    return 0;
}