#include<iostream>
using namespace std;

int main(){
     int a = 3;
     int *b = &a;
    //&:(Address of operator)
    cout<<"The adress of a is "<<&a<<endl;
    cout<<"The adress of b is "<<b<<endl;
    cout<<"The value of address at a is "<<a<<endl;
    cout<<"The  value of adress at  b is "<<*b<<endl;//----->derefernce operator 
    //Pointer to pointer variable
    int **c = &b;
    cout<<"The value of address at c is "<<**c<<endl;
    cout<<"The value of address at c is "<<*c<<endl;
    cout<<"The value of address at c is "<<&b<<endl;
    cout<<"The value of address at c is "<<c<<endl;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *b=&a;
     cout<<&a<<endl;
     cout<<b<<endl;

     cout<<*b<<endl;
     *b = 20;
     cout<<a<<endl;

     int arr[]={10,34,26,12};
     //cout<<*arr<<endl;

     int *ptr=arr;
     for(int i=0;i<4;i++){
         cout<<*(arr+i)<<endl;
        // cout<<*ptr<<endl;
        // ptr++;
     }
    return 0;
}
#include<bits./stdc++.h>
using namespace std;

int main(){
    int a = 4;
    int *b = &a;
    //And Address operator.
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
   
   //Derefernce operator
   cout<<"The value at address b is "<<*b<<endl;

   //Pointer to pointer operator.........
   int **c = &b;
   cout<<"The address of c is "<<&b<<endl;
   cout<<"The address of c is "<<*c<<endl;
   cout<<"The address of c is "<<c<<endl;
   cout<<"The value of c is "<<**c<<endl;
    return 0;
}