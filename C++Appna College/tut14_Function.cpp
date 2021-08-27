#include<bits/stdc++.h>
using namespace std;

void print(int num){
    cout<<num<<endl;
    return;
}

int sum(int n1, int n2){
    print(n1);
    print(n2);
    int sum = n1+n2;
    return sum;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;

    cout<<sum(n1,n2)<<endl;
    return 0;
}