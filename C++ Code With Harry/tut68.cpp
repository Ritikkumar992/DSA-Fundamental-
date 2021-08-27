#include <iostream>
using namespace std;

template <class T>
class Ritik
{
public:
    T data;
    Ritik(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Ritik<T>::display()
{
    cout << data;
}
void fun(int a){
    cout<<" I am first fun()"<<a<<endl;
}

template <class T>
void fun(T a){
    cout<<" I am Templatised fun()"<<a<<endl;
}
template <class T>
void fun1(T a){
    cout<<" I am Templatised fun()"<<a<<endl;
}

int main()
{
    //Ritik<float> r(5.7);
    //Ritik<char> r('c');
    Ritik<int> r(5);
    cout << r.data << endl;
    r.display();
    cout<<endl;

    fun(5);//--> Exact match takes highest priority.
    fun1(15);

    return 0;
}