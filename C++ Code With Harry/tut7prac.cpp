#include<iostream>
using namespace std;
int  c = 420;

int main(){
     int a, b ,c;
      //c = a+b;--> This will show garbage value .
     cout<<" Enter the value of a "<<endl;
     cin>>a;
     cout<<"Enter the value of b "<<endl;
     cin>>b;
     c = a+b;
     cout<<"The local value of c is "<<c<<endl;
     cout<<"The global value of  c is "<<::c<<endl;

     int d = 43;
     float e = 53.9;
     double f = 34;
     long double g = 93.434;
     cout<<"The value of d is "<<d<<endl;
     cout<<"The value of e is "<<e<<endl;
     cout<<"The value of f is "<<f<<endl;
     cout<<"The value of g is "<<g<<endl;
     cout<<"The size of d is "<<sizeof (43)<<endl;
     cout<<"The size of e is "<<sizeof (53.9)<<endl;
     cout<<"The size of f is "<<sizeof (34)<<endl;
     cout<<"The size of g is "<<sizeof (93.434)<<endl;

     int x = 99;
     int & y = x;
     //int * y = &x;//This holds the address of x ;
     cout<<"The value of x is "<<x<<endl;
     cout<<"The value of x is "<<y<<endl;oo

     int A = 12;
     float B = 12.42;
     cout<<"The value of a is "<<(float)A<<endl;
     cout<<"The value of b is "<<(int)B<<endl;
    return 0;
}