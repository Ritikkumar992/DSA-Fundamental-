#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}
int moneyInvested(int currentMoney,float factor = 2.09){
    return currentMoney *factor;
}
int main(){
    int a, b;
    cout<<"Enter the value of a and b is" <<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product (a,b)<<endl;

    int money = 1000;
    cout<<"If u have invested  "<<money<<"Rs in a share of EverReady , you will receive "<<moneyInvested
    (money)<<"Rs after 1 month "<<endl;
    cout<<"If u are a vip and have invested "<<money<<"Rs in a share of EverReady , you will receive  "<<moneyInvested
    (money,3.89)<<"Rs after 40 days "<<endl;
    
    return 0;
}
