//Pointers are the variable that store the address of the other variables.
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *aptr;
    aptr = &a;

    cout << &a << endl;   //address return[0x61ff08].
    cout << aptr << endl; //address return[0x61ff08].

    cout << *aptr << endl;// value return -->Dereferenvce Operator [10].
    *aptr = 20;
    cout << a<< endl;

    //Pointer Arithmaric[++,--,+,-]
    aptr ++;
    cout<<aptr<<endl; //increased addreess become 0x61ff0c.

    //Pointers and Array.
    int arr[] = {10,20,30};
    cout<<*arr<<endl;

    int *ptr = arr;
    for(int i= 0;i<3;i++){
        cout<<*(arr+i)<<endl;
        /*cout<<*ptr<<endl;
        ptr++;*/
    }
    //Pointer to Pointer
    int a = 10;
    int *p = &a;
    cout<<*p<<endl;

    int **q = &p;
    cout<<*q<<endl;
    cout<<**q<<endl;

    return 0;
}
//Passing Pointers to a function
#include<bits./stdc++.h>
using namespace std;
void swap(int *a , int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    
   /* int *aptr = &a;
    int *bptr = &b;
    swap(aptr,bptr);*/
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}