#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     //int  const a = 12;--> Both are same 
      const int  a = 12;//--> Both are same
     //a = 53;
     cout<<a;
     int x, y, z;
     cout<<" Enter the value of x "<<endl;
     cin>>x;
     cout<<" Enter the value of y "<<endl;
     cin>>y;
     z= ((x*34)+(y/3)-(x+y)-(x*x));
     cout<<"The value of z is "<<z<<endl;
     cout<<"The value of z is "<<setw(5)<<z<<endl;
     cout<<"The value of z is "<<setw(3)<<z<<endl;
     cout<<"The value of z is "<<setw(4)<<z<<endl;
     cout<<"The value of z with setw is "<<setw(2)<<z<<endl;
    return 0; 
}
#include<bits./stdc++.h>
using namespace std;

int main(){
    int a = 12;//---->This does'nt show error as a is not decalred as constant.
   // const int a = 12; //-->This will throw error .
    cout<<"The value of a was "<<a<<endl;
    a = 21;
    cout<<"The value of a is "<<a<<endl;
    
    int x, y,z;
    cout<<"Enter the value of x "<<endl;
    cin>>x;
    cout<<"Enter the value of x "<<endl;
    cin>>y;
    z =((x*34)+(y/3)-(x+y)-(x*x));
    cout<<"The value of z is "<<z<<endl;
    cout<<"The value of z is "<<setw(4)<<z<<endl;
    return 0;
}