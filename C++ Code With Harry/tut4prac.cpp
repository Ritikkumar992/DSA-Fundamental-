#include<bits./stdc++.h>
using namespace std;
int glo = 100;
void sum(){
    int a;
    cout<<"The value of global is "<<glo<<endl;
}
int main(){
    int glo = 90;
    glo = 9900;
    sum();//If we comment out sum () this we can't access the value of global variale.
    cout<<"The value of local is "<<glo<<endl;
    return 0;
}