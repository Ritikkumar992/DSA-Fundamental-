#include<bits./stdc++.h>
using namespace std;

int getBIT(int n, int pos){
    return ((n & (1<<pos))!=0);

}
int setBIT(int n, int pos){
    return ((n | (1<<pos)));

}
int clearBIT(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);

}
//Update Bit is clearBIT + setBIT.
int updateBIT(int n, int pos,int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return n | (value<<pos);

}

int main(){
    cout<<getBIT(5,2);

    cout<<setBIT(5,1);
    
    cout<<clearBIT(5,2);

    cout<<updateBIT(5,1,1);

    return 0;
}