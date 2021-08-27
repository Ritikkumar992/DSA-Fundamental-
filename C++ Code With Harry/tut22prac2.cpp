//To check a number is prime or not.
#include<bits./stdc++.h>
using namespace std;

bool isPerfectSquare(long double s){
    if(s>=0){
        long long sr = sqrt(s);
        return (sr*sr==s);
        //return sr;
    }
    return false;
}
int main(){
    long long s,sq;
    cout<<"Enter your number "<<endl;
    cin>>s;
    sq= sqrt(s);
    cout<<"Square root of "<<s<<" is "<<sq<<endl;
    if(isPerfectSquare(s)){
        cout<<"Perfect square "<<endl;
    }
    else{
        cout<<"NOt a perfect sqaure "<<endl;
    }
   
    return 0;
}