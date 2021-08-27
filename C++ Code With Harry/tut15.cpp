#include <iostream>
using namespace std;

  //Function prototype 
  //type function_name(arguments);
  // int sum(int a, int b);---->> Acceptable
  // int sum(int a, b);---->>not acceptacle 
  // int sum(int,int);---->>Acceptable 
  int sum(int a, int b);
  void g (void);
  int main(){
     int num1,num2;
     cout<<"Enter first  number"<<endl;
     cin>>num1;
     cout<<"Enter second number "<<endl;
     cin>>num2;
     cout<<"The sum is "<<sum(num1,num2);
     //num1 and num2 are actaul parameter 
     //g();
    return 0;
    
    }
    int sum(int a, int b){
        //formal parameter a & b will be taking 
               // values from acual parameter num1 &num2.
    int c = a+b;
    return c;
    }

    void g(){
        cout<<"\n Hello, Good morning ";
    }
