/**************"Solution of lecture no '42' "*****************/
#include<bits./stdc++.h>
using namespace std;
class SimpleCalculator{
     int a, b;
     public:
      void setDataSimple(){
          cout<<"Enter the value of a "<<endl;
          cin>>a;
          cout<<"Enter the value of b "<<endl;
          cin>>b;
      }
      void perfomOperationSimple(){
          cout<<"The value of a+b is "<<a+b<<endl;
          cout<<"The value of a-b is "<<a-b<<endl;
          cout<<"The value of a*b is "<<a*b<<endl;
          cout<<"The value of a/b is "<<a/b<<endl;
      }

};
class ScientifiCalculator{
      int a,b;
      public:
       void setDataScientific(){
             cout<<"Enter the value of a "<<endl;
             cin>>a;
             cout<<"Enter the value of b "<<endl;
             cin>>b;
       }
       void performOperationScientiic(){
           cout<<"The value of cos(a) and cos(b)"<<cos(a)<<"and "<<  cos(b)<<endl;
           cout<<"The value of sin(a) and sin(b)"<<sin(a)<<"and " <<sin(b)<<endl;
           cout<<"The value of tan(a) and tan(b)"<<tan(a)<<"and " << tan(b)<<endl;
           cout<<"The value of exp(a) and exp(b)"<<exp(a)<<"and " << exp(b)<<endl;
       }
};
class Hybrid:public SimpleCalculator, public ScientifiCalculator{

};
int main(){
    Hybrid calc;
    calc.setDataSimple();
    calc.setDataScientific();
    calc.perfomOperationSimple();
    calc.performOperationScientiic();
    return 0;
}