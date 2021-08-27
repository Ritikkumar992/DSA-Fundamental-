#include<bits./stdc++.h>
using namespace std;

int main(){
    int a = 4;
    int *b = &a;
   // *b=199;
    cout<<"The value of a is "<<*b<<endl;
    //New keyword 
    int *p = new int (43);
    cout<<"The value at address P is "<<*p<<endl;
   //Contigous block of memory 
   int *arr = new int[3];
   arr[0]=1;
   arr[1]=12;
   arr[2]=13;
   delete[] arr;
   cout<<arr[0]<<endl;
   cout<<arr[1]<<endl;
   cout<<arr[2]<<endl;
  
  
    return 0;
}