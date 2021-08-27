//1.Print all number till n
#include<bits./stdc++.h>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    
    return 0;
}
//2.Calculate n raised to power p.
#include<bits/stdc++.h>
using namespace std;
int power(int n,int p){
    if(p == 0){
        return 1;
    }
    else{
        return n*power(n,p-1);
    }
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}
//3.Find factorial of a number.
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
//4.Print nth fibonacci number.
#include<bits./stdc++.h>
using namespace std;
int fib(int n){
    if(n==0 || n == 1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}