#include<iostream>
using namespace std;

int main(){
//What is pointer?--->a type of data type which holds the address of other data type.

    int a = 4;
    int *b = &a;
    //&---->(Address of) operator--->returns the memory address of a variable.
    cout<<"The address of a is "<<&a<<endl;//0x61ff08
    cout<<"The address of b is "<<b<<endl; //0x61ff08

    //*----->(Value at )::Dereference operator.
    cout<<"The  value at address b is "<<*b<<endl; // 4
    
    //Pointer to pointer 
    int**c=&b;
    cout<<"The adress of c is "<<&b<<endl;// 0x61ff04
    cout<<"The adress of c is "<<c<<endl; //  0x61ff04
    cout<<"The  value at address of c is "<<*c<<endl; // 0x61ff08
    cout<<"The  value at address value at(value_at(c)) of c is "<<**c<<endl; // 4
    return 0;
}