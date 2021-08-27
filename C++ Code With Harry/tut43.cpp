#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << " To Kaise ho aap log?" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet(); //--> Ambiguity declared
    }
};
class Babul
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};
class Ritik : public Babul
{
    int a;
    //Ritik'new say() method will override base class's say()method
public:
    void say()
    {
        cout << "Hello my dear friend " << endl;
    }
};
int main()
{
    /*Ambiguity 1
      Base1 base1obj;
      Base2 base2obj;
      base1obj.greet();
      base2obj.greet();
      Derived d;
      d.greet();
      */
    //Ambiguity 2.
    Babul b;
    b.say();
    Ritik r;
    r.say();

    return 0;
}