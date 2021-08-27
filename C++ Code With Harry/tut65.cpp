#include <iostream>
using namespace std;
/*
/*****Class Templates with MUltilple Parameters(one,two or more than two)********/
     
/* template<class T1, class T1>........(Comma seperated)>
   class nameOfClass{
    //body
}
*/
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};
int main()
{
    myClass<char, float> obj1('C', 1.058);
    //myClass<int, float> obj2(54, 1.08);
    obj1.display();
    //obj2.display();
    return 0;
}