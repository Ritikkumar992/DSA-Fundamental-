/**********Complile Time polymorphism::1.Function Overloading**********/
#include<bits./stdc++.h>
using namespace std;
int area(int a, int b){
    return a*b;
}
int area(int a){
    return a*a;
}
int area(double r, double h){
    return 3.14*r*r*h;
}
int main(){
   cout<<"The area of recatangle is "<<area(5,3)<<endl;
   cout<<"The area of square is "<<area(4)<<endl;
   cout<<"The area of Circle  is "<<area(2,14)<<endl;
    return 0;
}
/**********Complile Time polymorphism::2.Operator Overaloading**********/
#include<iostream> 
using namespace std; 

class Complex { 
private: 
	int real, imag; 
public: 
	Complex(int r,int i){
        real = r; imag = i;
} 
// This is automatically called when '+' is used with between two Complex objects 
	Complex operator + (Complex const &obj) { 
	Complex res; 
	res.real = real + obj.real; 
	res.imag = imag + obj.imag; 
	return res; 
	} 
	void print(){ 
        cout<<"Your complex number is "<<real<< " + i" <<imag<<endl; 
} 
}; 

int main() 
{ 
	Complex c1(10, 5), c2(2, 4); 
	Complex c3 = c1 + c2; // An example call to "+ operator" 
	c3.print(); 
} 
/**********Run Time polymorphism::1.Function Overriding / Virtual Function.**********/
#include <bits/stdc++.h> 
using namespace std; 
class base 
{ 
public: 
	virtual void print (){ 
        cout<< "print base class" <<endl; 
    } 
	void show (){ 
    cout<< "show base class" <<endl; 
    } 
}; 

class derived:public base 
{ 
public: 
	void print (){ //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
	 cout<< "print derived class" <<endl;
} 
	void show (){
	 cout<< "show derived class" <<endl; 
    } 
}; 

//main function 
int main() 
{ 
	base *bptr; 
	derived d; 
	bptr = &d; 
	
	//virtual function, binded at runtime (Runtime polymorphism) 
	bptr->print(); 
	
	// Non-virtual function, binded at compile time 
	bptr->show(); 

	return 0; 
} 
