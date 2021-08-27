#include<bits./stdc++.h>
using namespace std;

int main(){
  int marks[]={99,93,94,95,97};
   for(int i = 0;i<5;i++){
       cout<<"Your marks in "<<i<< " is " <<marks[i]<<endl;
   }
   //Pointers and Array
   int *arr = marks;
   //int *arr = &marks;//---> This will throw an error.
   
   cout<<*arr<<endl;
   cout<<*(arr+1)<<endl;
   cout<<*(arr+2)<<endl;
   cout<<*(arr+3)<<endl;
   cout<<*(arr+4)<<endl;
    return 0;
}  