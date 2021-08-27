#include<iostream>
#include<cmath>
#include<iomanip>
#include<bits./stdc++.h>
//There are two types of hearder file ;
//1.system header file : defined by compiler.
#include "this.h"
//2. user defined header file": defined by user.
//#include"this.h":This will give error if it is not included in  our current directory list list.
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << " operators in c++" << endl;
    cout << "Following are the types of  operators in c++" << endl;
    //Artithmetic operator
    cout << "The value of a+b is " << a + b << endl;
    cout << "The value of a-b is " << a - b << endl;
    cout << "The value of a*b is " << a * b << endl;
    cout << "The value of a/b is " << a / b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;
    //Assisgnment operator --> used to assign value to variables.
    int f =3,c=9;
    char d ='d';
    return 0;
    //Comparison operator: used to compare two values.
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a>b is " << (a > b) << endl;
    cout << "The value of a<b is " << (a < b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    //logical operator
    cout << "Following are the logical oerator c++" << endl;
    //Logical And Operator
    cout << "The value of this logical and  operator is ((a==b)&&(a<b))  is " << ((a == b) && (a < b)) << endl;
    //Logical Or Operator
    cout << "The value of this logical or opertor is ((a==b)||(a<b))is " << ((a == b) || (a < b)) << endl;
    //Logical Not Operator
    cout << "The value of this logical not opertor is (!(a==b)||(a<b))is " << (!(a == b) || (a < b)) << endl;
}
