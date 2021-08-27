#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*int & swapReferenceVar(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}*/
int main(){
    int a = 4, b = 5;
     //cout<<"The sum of 4 and 5 is "<<sum(a, b);
     cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
     swapPointer(&a,&b);
     cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
      //swapReferenceVar(a,b) =256;
     //cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    return 0;
} 