#include<iostream>
using namespace std;

int sum(int a, int b){
   return  a+b;
}
int sum (int a , int b, int c){
        return a+b+c;
}
//Calculating surface area of cylinder
int surfaceArea (double r, int h){
    return (2*3.14*r*h);
}//calculating surface area of cube
int surfaceArea (int a){
      return (6*a*a);
}

int main(){

     cout<<"The sum of 3 and 5 is "<<sum(3,5)<<endl;
     cout<<"The sum of 3  ,7 and 5 is "<<sum(3,7,5)<<endl;
     cout<<"The surface area of cylinder"<<surfaceArea(4,5)<<endl;
     cout<<"The surface area of cube"<<surfaceArea(5)<<endl;
    return 0;
}