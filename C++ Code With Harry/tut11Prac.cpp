#include<bits./stdc++.h>
using namespace std;

int main(){
    for(int i = 0;i<=4;i++){
        cout<<i<<endl;
        if(i==2){ 
            break;  // 0 1 2
        }
    }
    for(int i = 0;i<=4;i++){
        if(i==2){ 
            continue;// 0 1 3 4
        }
          cout<<i<<endl;
    }
    return 0;
}