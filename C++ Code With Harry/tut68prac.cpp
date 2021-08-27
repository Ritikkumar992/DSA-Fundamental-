#include<bits./stdc++.h>
using namespace std;
template<class T>
class Rohit{
    public:
    T data;
    Rohit(int a){
        data = a;
    }
    void display();
};
template<class T>
void Rohit<T>:: display(){
    cout<<data;
}
void func(int a){
    cout<<"I am first func() "<<endl;
}
template<class T>
/*void func(T a){
    cout<<"I am Templatised func() "<<endl;
}*/
void func1(T a){
    cout<<"I am Templatised func() "<<endl;
}
int main(){
    //Rohit<float> r(3.2);
    //Rohit<int> r(3);
  /*  Rohit<char> r('c');
    cout<<r.data<<endl;
    r.display();*/
    
    //func(4);//--> Exact match takes highest priority.
    func1(14);

    return 0;
}