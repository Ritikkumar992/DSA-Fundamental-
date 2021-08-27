/*#include<bits./stdc++.h>
using namespace std;
int sum(int n){
    return n*(n+1)/2;
}
int main(){
    int n;
    cout<<"Enter your number "<<endl;
    cin>>n;
    cout<<sum(n);
    return 0;
}*/
#include<bits./stdc++.h>
using namespace std;
int sum(int a, int b){
   int c = a+b;
    return c;
}
int main(){
    int num1, num2;
    cout<<"Enter the value of num1 and num2 "<<endl;
    cin>>num1>>num2;
    cout<<"Required sum is :"<<sum(num1, num2)<<endl;
    return 0;
}