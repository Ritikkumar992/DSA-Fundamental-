//1. Transpose of a Matrix
#include<bits./stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //swap function.
    for(int i = 0;i<n;i++){
        for(int j = i;j<m;j++){
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
        }
    }
    //output instruction.
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
//2.Matrix Multiiplication
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    
    int arr1[n1][n2];
    int arr2[n2][n3];

    for(int i = 0;i<n1;i++){
        for(int j = 0;j<n2;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i = 0;i<n2;i++){
        for(int j = 0;j<n3;j++){
            cin>>arr2[i][j];
        }
    }
   //intilizing ans array with 0.
    int ans[n1][n3];
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<n3;j++){
           ans[i][j] = 0;
        }
    }
    //Key step.
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<n3;j++){
            for(int k = 0;k<n2;k++){
                ans[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    // output instruction.
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<n3;j++){
           cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }  
    return 0;
}
//3.Matrix Search
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int arr[n][m];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // Key step
    int r = 0, c = m-1;
    bool found = false;
    while (r<n and c>= 0)
    {
        if(arr[r][n] == target){
              found = true;
        }
        if(arr[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element exist "<<endl;
    }
    else{
        cout<<"Element does not exist "<<endl;
    }
    return 0;
}