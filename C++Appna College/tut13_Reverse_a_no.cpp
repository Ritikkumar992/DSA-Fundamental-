//1.Check if a number is prime or not.
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin>>n;

    bool flag  = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            cout<<"Non - Prime "<<endl;
            flag = 1;
            break;
        }
    }
    if(flag  == 0){
        cout<<"Prime no "<<endl;
    }
    return 0;
}
//2.How to reverse a number 
#include<bits./stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    //key step.
    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    cout<<reverse<<endl;
    return 0;
}
//3.Check a given number is Armstrong Number or not[ex-0,1,153,407..] .
#include<bits./stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;
    int original = n;
    while(n>0){
        int lastdigit = n%10;
        sum+=pow(lastdigit,3);
        n = n/10;
    }
    if(sum==original){
        cout<<"Armstrong no"<<endl;
    }
    else{
        cout<<"Not an Armstrong no"<<endl;
    }
    return 0;
}