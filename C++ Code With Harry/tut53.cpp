#include <iostream>
using namespace std;
class A
{
    int a;

public:
    /* void setData(int a){
         this->a = a;*/
    A &setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    /*this is a keyword which is a pointer which points to the object to the
    object which invokes the member function*/
    A b;
    b.setData(4).getData();
    b.getData();

    return 0;
}