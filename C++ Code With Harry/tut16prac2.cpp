#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b ;
    *b = temp;
}
 void swapRefernceVar(int &a, int &b){
    int temp = a;
    a = b ;
    b = temp;
    
}
int main(){
       int a = 4, b = 5;
       cout<<"The value of a was "<<a<<" and the value of b was "<<b<<endl;
       swap(&a, &b);
       cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

       cout<<"The value of a was "<<a<<" and the value of b was "<<b<<endl;
       swapRefernceVar(a,b);
       cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;


    return 0;
}