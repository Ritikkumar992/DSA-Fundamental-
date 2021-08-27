#include<iostream>
using namespace std;

int sum(int a, int b){  
    int c=a+b;          
    return c;
}
//This will not swap a and b. 
void swap(int a , int b){  //temp a  b
    int temp = a;          //4    5  5
    a = b;                 //4    5  5
    b = temp;              //4    5  4
}
/**********Call by value using c++**********/
void swapPointer(int* a , int* b){  //temp a  b
    int temp = *a;                  //4    5  5
    *a = *b;                        //4    5  5
    *b = temp;                      //4    5  4
}

/*****Call by refernce using c++ using reference variable******/
//int & 
  void swapReferenceVar(int &a , int &b){  //temp a  b
    int temp = a;                          //4    5  5
    a = b;                                 //4    5  5
    b = temp;                              //4    5  4
    //return a;----> return by reference            
}
int main(){
    int a=4 , b =5;
    //cout<<"The sum of 4 and 5 is"<<sum(a,b);
    cout<<"The value of a is "<< a<<" and the value of b is "<<b<<endl;
    //swap(a,b);::this will not swap a  and b.
    // swapPointer(&a , &b);//this will swap a  and b using pointer reference
    //swapReferenceVar(a , b);//this will swap a  and b using reference variable.
    //swapReferenceVar(a , b) =786;//this will swap a  and b usinng return  reference variable.
    swapReferenceVar(a , b);//this will swap a  and b usinng reference variable.
    cout<<"The value of a is "<< a<<" and the value of b is "<<b<<endl;

    return 0; 

}