//1.Single Inherited class.
#include<bits/stdc++.h>
using namespace std;
class A {
    public:
    void fun(){
        cout<<"Inherited"<<endl;
    }
};
class B: public A{

};
int main(){
   B b;
   b.fun();  
    return 0;
}
//2.Multiple Inheritance
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void funA(){
        cout<<"FunA"<<endl;
    }
};
class B{
    public:
    void funB(){
        cout<<"FunB"<<endl;
    }
};
class C: public A, public B{
    public:
};
int main(){
    C c;
    c.funA();
    c.funB();
    return 0;
}
//3.Multi Level Inheritance
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void funA(){
        cout<<"FunA"<<endl;
    }
};
class B:public A{
    public:
    void funB(){
        cout<<"FunB"<<endl;
    }
};
class C:public B{
    public:
};
int main(){
    C c;
    c.funA();
    c.funB();
    return 0;
}
//4.Hybrid Inheritace
//5.Hierearchicla Inheritance

