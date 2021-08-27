#include<iostream>
using namespace std;
template <class t1,class t2>

//template <class t1 = int ,class t2 = char >
class myclass{
    public:
     t1 data1;
     t2 data2;
     myclass(t1 a, t2 b){
         data1 = a;
         data2 = b;
     }
     void display(){
         cout<<this->data1<<endl;
         cout<<this->data2<<endl;
     }
};
int main(){
    myclass<int ,char>obj1(25,'v');
   // myclass <> obj1(2,'c');//-->default argument.
    obj1.display();
    return 0;
}

#include<bits./stdc++.h>
using namespace std;
template<class T1= int, class T2= char, class T3 = float>
class Ritik{
    public:
    T1 a;
    T2 b;
    T3 c;
    Ritik(T1 x, T2 y, T3 z){
        a = x;
        b = y;     
        c = z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }

};
int main(){
    Ritik < > r(4,'c',1.1);
    r.display();
    cout<<"--------"<<endl;
    Ritik <int, float , double > g(20,1.12,1.112324);
    g.display();
    return 0;
}