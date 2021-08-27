#include<bits/stdc++.h>
using namespace std;

int main(){
    char button;
    cout<<"Enter Your character "<<endl;
    cin>>button;

    switch (button)
    { 
    case 'a':
       cout<<"Hello"<<endl;
        break;
    case 'b':
       cout<<"Namaste"<<endl;
        break;
    case 'c':
       cout<<"Salut"<<endl;
        break;
    case 'd':
       cout<<"Hola"<<endl;
        break;
    
    default:
       cout<<"I am still learning more "<<endl;
        break;
    }

    return 0;
}
//Simple Calculator 
#include<bits./stdc++.h>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter Your Number "<<endl;
    cin>>num1>>num2;

    char op;
    cout<<"Enter your operator "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
       cout<<num2+num1<<endl;
        break;
    case '-':
       cout<<num1-num2<<endl;
        break;
    case '*':
        cout<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1/num2<<endl;
        break;
    
    default:
       cout<<"Enter another operator  "<<endl;
        break;
    }

    return 0;
}