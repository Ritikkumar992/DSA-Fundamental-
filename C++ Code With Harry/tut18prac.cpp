#include<bits./stdc++.h>
using namespace std;

int fib(int n){
    if(n== 1|| n== 2){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
// TO check a no is  fibonnaci or not.
bool check(int k1, int k2){
    int n;
    k1 = 5*n*n + 4;
    k2 = 5*n*n - 4;

    int sq1 = sqrt(k1);
    int sq2 = sqrt(k2);

    if((sq1*sq1 == k1) || (sq2* sq2 == k2)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter your number "<<endl;
    cin>>n;
   /* cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;
    cout<<"The fibonacci term at "<<n<<" is "<<fib(n)<<endl;*/
    
    // To print fibanacci sequence
    for(int i = 1;i<=10;i++){
        cout<<fib(i)<<" ";
    }

    // TO check a no is  fibonnaci or not.
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}