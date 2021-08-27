#include<iostream>
using namespace std;

int main(){
    //Basic Example
    int a = 4;
    int *b = &a;
    *b = 99;
    cout<<"The value of a is "<<*b<<endl;
     
    //New KeyWord
    // int *p = new int (48);
    float *p = new float (48.5);
    cout<<"The value at adress p is "<<*p<<endl;

    //Dynamic allocation of contigous block of memory. 
    int *arr = new int[3];
    arr[0] = 10;
    //arr[1] = 20;
    *(arr+1)= 20;
    arr[2] = 30;
    delete[] arr;//(---->Delete Keyword/operator) 
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    return 0;
}