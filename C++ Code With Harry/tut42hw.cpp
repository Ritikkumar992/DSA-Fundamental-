#include<iostream>
#include<cmath>
using namespace std;
class simple_calculator{
    int a, b;
  public:
   void setDataSimple(){
       cout<<"Enter the value of a "<<endl;
       cin>>a;
       cout<<"Enter the value of b"<<endl;
       cin>>b;
   }
   void performOperationSimple(){
       cout<<"The sum of a and b is "<<a+b<<endl;
       cout<<"The difference  of a and b is "<<a-b<<endl;
       cout<<"The multiple of a and b is "<<a*b<<endl;
       cout<<"The divison of a and b is "<<a/b<<endl;
   }
};
class scientific_calculator{
    int a, b;
  public:
   void setDataScientific(){
       cout<<"Enter the value of a "<<endl;
       cin>>a;
       cout<<"Enter the value of b"<<endl;
       cin>>b;
   }
   void performOperationScientific(){
       cout<<"The cos(a) and cos(b) is "<<cos(a)<<" and "<<cos(b) <<endl;
       cout<<"The sin(a) and sin(b) is "<<sin(a)<<" and "<<sin(b) <<endl;
       cout<<"The tan(a) and tan(b) is "<<tan(a)<<" and "<<tan(b) <<endl;
       cout<<"The exp(a) and cos(b) is "<<exp(a)<<" and "<<exp(b) <<endl;
   }
};
class Hybrid_calculator:public simple_calculator , public scientific_calculator{

};
int main(){
    Hybrid_calculator calc;
    calc.setDataSimple();
    calc.performOperationSimple();
    calc.setDataScientific();
    calc.performOperationScientific();
    return 0;
}
