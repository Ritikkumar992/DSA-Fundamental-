#include<bits./stdc++.h>
using namespace std;

int main(){
    int saving;
    cout<<"Enter your saving "<<endl;
    cin>>saving;

    if(saving>5000){
        if(saving>10000){
            cout<<"Road Trip with Neha "<<endl;
        }
        else{
            cout<<"Shopping with Nehha "<<endl;
        }
        
    }
    else if(saving>2000 & saving<5000){
        cout<<" Date with Rashmi "<<endl;
    }
    else{
        cout<<"Party with Friends "<<endl;
    }
    return 0;
}

/*********Greatest Of the three Number***************/
#include<bits./stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a is greatest "<<endl;
        }
        else{
            cout<<"c is greatest "<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"B is greatest "<<endl;
        }
        else{
            cout<<"C is greatest "<<endl;
        }
    }
    return 0;
}

/******Check a number is odd or Even***********/
#include<bits./stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0){
        cout<<"Even number "<<endl;
    }
    else{
        cout<<"Odd number "<<endl;
    }
    return 0;
}
//Greatest of three number.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is greater "<<endl;
    }
    else if(b>a && b>c){
        cout<<"B is greater "<<endl;
    }
    else
    {
        cout<<"c is greater \n";
    }
    return 0;
}*/