//1.Rectangle Pattern
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    for(int i = 1;i<= row;i++)
    {
        for(int j = 1;j<= col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//2.Hollow Rectangle Pattern
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>> row>> col;

    for(int i = 1;i<= row;i++){
        for(int j = 1;j<=col;j++){
            if((i == 1 || i == row) || (j == 1 || j == col)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
           
        }
        cout<<endl;
        
    }
    return 0;
}

//3.Inverted Half Pyramid. 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;

    for(int i = n;i>= 1;i--){
        for(int j = 1;j<= i;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;

}

//4.Half Pyramid after 180 rotation.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;

    for(int i = 1;i<= n;i++){
        for(int j = 1;j<= n;j++){
            //key step.
            if(j <= n-i){
                cout<<"  ";    
            }
            else{
                cout<<" *";
            }
        }
        cout<<endl;
    }
    return 0;
}

//5.Half Pyramid using Number.
#include<bits./stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for( i =int 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
         cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//6.Floyds Triangle.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count = 1;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}

//7.ButterFly Pattern.[Very very imporatant---->a littl bit tricky.]
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        
        int space = 2*n - 2*i;
        for(int j = 1;j<= space; j++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i = n;i>=1;i--){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j = 1;j<= space; j++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}