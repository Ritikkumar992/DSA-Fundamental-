#include<iostream>
using namespace std;

int c = 968;

int main (){
   /*****Built in data type********/
   int a, b, c;
   cout <<" Enter the value of a :"<<endl;
   cin >>a;
   cout <<" Enter the value of b:"<<endl;
   cin >>b;
   c = a + b;
   cout<<" The sum is "<<c<<endl;
   cout<<" The global c is "<<::c<<endl;/*Here scope resolution operator(::) is 
   used to print global value of c */
   /*********Literal data type *************/
    float d = 34.4;
    long double e = 34.5;
   cout<<"The value of d is "<<d<<endl<<" The value of e is "<<e<<endl;
   cout<<"The size of 34.4 is "<<sizeof (34.4)<<endl;//double(8)
   cout<<"The size of 34.4f is "<<sizeof (34.4f)<<endl;//float(4)
   cout<<"The size of 34.4F is "<<sizeof (34.4F)<<endl;
   cout<<"The size of 34.4l is "<<sizeof (34.4l)<<endl;//longdouble(12)
   cout<<"The size of 34.4L is "<<sizeof (34.4L)<<endl;
   /*********Reference variable**********/
   int x = 456;
   int & y = x;
   cout<<x<<endl;
   cout<<y<<endl;
   /*******Type Casting***************/
   int p = 129;
   float q = 123.99; 
   cout<<" The value of p is "<<(float)p<<endl;
   cout<<" The value of q is "<<(int)q<<endl;
   cout<<" The expression is "<<p + q<<endl;
   cout<<" The expression is "<<p +(int)q<<endl;
   cout<<" The expression is "<<p + int(q)<<endl;
   return 0; 

}
