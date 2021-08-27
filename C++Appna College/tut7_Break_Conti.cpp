//Jump in Loop(Break & continue).

//Skip the number which are divisible by 3.
#include<bits./stdc++.h>
using namespace std;

int main(){

    for(int i = 0;i<100;i++){
        if(i%3==0){
            continue;     
        }
        cout<<i<<endl;
    }
    return 0;
}

//Check a number is prime or not..
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i;
    for(i = 2;i<n;i++){
        if(n%i==0){
            cout<< "Non-Prime "<<endl;
            break;
        }
    }
    if(i==n){
        cout<< "Prime Number "<<endl;
    }
    return 0;
}
//Print all Prime Number between a and b.
#include<bits./stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    for(int num = a;num<=b;num++)
    {
        int i;
        for(i =2;i<=num;i++){
            if(num%i == 0){
                break;
            }
        }
        if(i == num)
        {
            cout<<i<<" ";
        }
    }
    
    return 0;
}