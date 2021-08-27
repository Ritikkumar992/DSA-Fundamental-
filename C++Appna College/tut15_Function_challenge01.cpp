//1.Print all prime no between two given number.
#include<bits./stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    for(int num = a;num<=b;num++){
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
//2.Print til n terms of a Fibenacci sequence
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cin>>n;

//  cout<<fib(n)<<endl;--> This will print  the fibonacci no at the nth term.
//And the below code print the fibonacci no in a sequence.
    for(int i = 0;i<=n;i++){
        cout<<fib(i)<<endl;
    }
    return 0;
}
//3. Print the factorial of a given number.
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = 2;i<=n;i++){
        factorial *=i;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;

    cout<<fact(n)<<endl;
    return 0;
}
//4.Binary Coefficien.
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = 2;i<=n;i++){
        factorial *=i;
    }
    return factorial;
}

int main(){
    int n,r;
    cin>>n>>r;

    cout<<(fact(n)/(fact(r)*fact(n-r)))<<endl;
    return 0;
}
//5.Pascal Triangle.
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = 2;i<=n;i++){
        factorial *=i;
    }
    return factorial;
}

int main(){
    int n; cin>>n;

    for(int i = 1;i<n;i++){
        for(int j = 1; j<=i;j++){
            cout<<fac(i)  / fac(i-j)* fac(j);

        }
    }
    return 0;
}