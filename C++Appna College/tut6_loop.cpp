//Sum of Number till n using For loop.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int sum = 0;
    
    for(int i = 1; i<=n;i++){
        sum = sum+i;
    }
    cout<<sum<<endl;
    return 0;
}

//Print till we have a positive number using While loop..
#include<bits./stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    while (n>0)
    {
      cout<<n<<endl;
      cin>>n;//we are allowed to take input until n is positive.
    }
    
    return 0;
}
//Print till we have a positive number using Do-While loop..
#include<bits./stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    
    return 0;
}