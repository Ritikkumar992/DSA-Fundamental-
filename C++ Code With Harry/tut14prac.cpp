#include<bits./stdc++.h>
using namespace std;

struct student{
    int sId;
    char favchar;
    float fees;
};
union money{
    int rupees;
    int dollar;
    int pounds;
};

int main(){
    struct student ritik;
    ritik.sId = 1;
    ritik.favchar = 'g';
    ritik.fees = 1123121;
    cout<<ritik.sId<<endl;
    cout<<ritik.favchar<<endl;
    cout<<ritik.fees<<endl;

    union money m1;
    m1.pounds = 80;
    m1.rupees = 1;
    m1.dollar = 73;
    cout<<m1.rupees<<endl; //--------->Always return the last value....

    enum meal{breakfast,lunch, dinner};
    meal m2 =  dinner;//------> 0-Indexing.
    cout<<m2<<endl;

    return 0;
}