#include<iostream>
using namespace std;

//Structre: a user defined data type to combine differnt  data type.
 typedef struct employee
{
    /* data */
    int eId;//4
    char favchar;//1
    float salary;//4
}ep;

    //unions in c++:provide better memory  management .
    union money
    {
        
        int rice;//4
        char car;//1
        float salary;//4
    }; 

int main(){
    enum Meal{breakfast,lunch,dinner};
    Meal m11=dinner;
    cout<<m11<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.car<<endl;

    ep ritik;
    struct employee babul;
    struct employee chandani;
    ritik.eId=1;
    ritik.favchar='c';
    ritik.salary=1200000;
    cout<<"The value is " <<ritik.salary<<endl;
    cout<<"The value is " <<ritik.eId<<endl;
    cout<<"The value is " <<ritik.favchar<<endl;

    return 0;
        }

   