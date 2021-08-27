/*#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "The sum of data of x and y gives " << o1.data + o2.num << endl;
}

int main()
{
    X x1;
    x1.setValue(5);
    Y y1;
    y1.setValue(9);
    add(x1, y1);
    return 0;
}*/

#include<iostream>
using namespace std;
class y;
class x{
    int data;
    public:
     void setvalue(int value){
         data = value;
     }
     friend void add (x,y);
};
class y{
    int num;
    public:
     void setData(int value){
         num = value;
     }
     friend void add (x,y);
};
void add(x o1, y o2){

    cout<<"The sum of data is "<<o1.data + o2.num<<endl;
}
int main(){
    x x1;
    x1.setvalue(7);
    y y1;
    y1.setData(3);
    add(x1,y1);
    
    return 0;
}